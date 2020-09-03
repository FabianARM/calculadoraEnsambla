#include "Calculadora.h"


Calculadora::Calculadora() {
}

Calculadora::~Calculadora() {
}

double Calculadora::suma(const double x, const double y) {
	double rel = 0;
	_asm {
		fld x // guarda el valor de x en la pila
		fld y
		fadd // suma st y st(1)
		fstp rel
		fwait// se asegura que el coprecesador realizo las operaciones 
	}
	return rel;
}

double Calculadora::resta(const double x, const double y) {
	double rel = 0;
	_asm {
		fld x // guarda el valor de x en la pila
		fld y
		fsub // suma st y st(1)
		fstp rel
		fwait// se asegura que el coprecesador realizo las operaciones 
	}
	return rel;
}

double Calculadora::multiplicacion(const double x, const double y) {
	double rel = 0;
	_asm {
		fld x;
		fld y;
		fmul x;
		fstp rel
			fwait
	}
	return rel;
}

double Calculadora::division(const double x, const double y) {
	double rel = 0;
	_asm {
		fld x // guarda el valor de x en la pila
		fld y
		fdiv x
		fstp rel
		fwait
	}
	return rel;
}

double Calculadora::potencia(const double x, const int y) {
	double rel = 0;
	_asm {
		mov ecx, y; //se guarda el valor del exponente en el contador
		fld x;
	pot:
		fmul x;
		dec ecx;
		cmp ecx, 1; //***Aqui intenté usar el loop pero cuando lo ejecuté y llega a esa linea sigue directo ejecutando el codigo siguiento XD, no sé por qué***		
		jne pot; // si el contador no ha llegado a 0 se sigue mlutiplicando
		fstp rel;

	}
	return rel;
}

double Calculadora::factorial(const int x) {
	//return x!
	int rel = 0;
	_asm {
		mov ecx, x; //se guarda el valor de x en el contador, se usara para saber cuando detenerse y al mismo tiempo para hacer las multiplicaciones
		mov eax, 1;
	fac:
		mul ecx;
		dec ecx;
		cmp ecx, 0;
		jne fac;//mientras no llegue a cero se decrementa y se multiplica ese mismo valor por el anterior
		mov rel, eax;
	}
	return rel;
}

double Calculadora::raiz(const double x) {
	double rel;
	_asm {
		fld x;
		fsqrt;
		fstp rel;
		fwait;
	}
	return rel;
}

double Calculadora::seno(const double x) {
	double rel;
	_asm {
		fld x;
		fsin;
		fstp rel;
		fwait;
	}
	return rel;
}

double Calculadora::coseno(const double x) {
	double rel;
	_asm {
		fld x;
		fcos;
		fstp rel;
		fwait;
	}
	return rel;
}

double Calculadora::tangente(const double x) {
	double rel;
	rel = tan(x);
	return rel;
}

double Calculadora::logaritmo(const int x) {
	double rel = 0;
	rel = log10(x);
	return rel;
}

int Calculadora::prioridad(char op) {
	switch (op) {
	case '^': return 3;
	case '*':
	case '/': return 2;
	case '+':
	case '-': return 1;
	case ')': return -1;
	default: return 0;
	}
}

std::string Calculadora::convertir(std::string in) {
	std::stack<char> pila;
	std::string posf = "";
	for (int i = 0; i < in.size(); i++) {
		switch (in[i]) {
		case '(':
			pila.push('(');
			break;
		case ')':
			while (!pila.empty() && pila.top() != '(') {
				posf += std::string(1, pila.top()) + " ";
				pila.pop();
			}
			pila.pop();
			break;
		case '+':
		case '-':
		case '*':
		case '/':
		case '^':
			while (!pila.empty() && prioridad(in[i]) <= prioridad(pila.top())) {
				posf += std::string(1, pila.top()) + " ";
				pila.pop();
			}
			pila.push(in[i]);
			break;
		default:
			while (isdigit(in[i]) || in[i] == '.')
				posf += std::string(1, in[i++]);
			posf += " ";
			i--;
		}
	}
	while (!pila.empty()) {
		posf += std::string(1, pila.top()) + " ";
		pila.pop();
	}
	return posf;
}

double Calculadora::evaluar(std::string p) {
	std::stack<double> pila;
	double op1, op2;
	for (int i = 0; i < p.size(); i += 2) {
		switch (p[i]) {
		case '^':
			op2 = pila.top(); pila.pop();
			op1 = pila.top(); pila.pop();
			pila.push(potencia(op1, op2));
			break;
		case '*':
			op2 = pila.top(); pila.pop();
			op1 = pila.top(); pila.pop();
			pila.push(multiplicacion(op2, op1));
			break;
		case '/':
			op2 = pila.top(); pila.pop();
			op1 = pila.top(); pila.pop();
			pila.push(division(op2, op1));
			break;
		case '+':
			op2 = pila.top(); pila.pop();
			op1 = pila.top(); pila.pop();
			pila.push(suma(op1, op2));
			break;
		case '-':
			op2 = pila.top(); pila.pop();
			op1 = pila.top(); pila.pop();
			pila.push(resta(op1, op2));
			break;
		default:
			std::string aux = "";
			while (p[i] != ' ')
				aux += std::string(1, p[i++]);
			pila.push(atof(aux.c_str()));
			i--;
		}
	}
	return pila.top();
}

//int main(int, char**) {
//	Calculadora c;
//	std::string s, p;
//
//	//double k=c.coseno(10.5);
//	//cout << k << endl;
//
//	s = "2.1^3-8/2";
//	p = c.convertir(s);
//	std::cout << "Posfija: " << p << std::endl;
//	std::cout << "Resultado: " << c.evaluar(p) << std::endl;
//
//	_getch();
//	return 0;
//}