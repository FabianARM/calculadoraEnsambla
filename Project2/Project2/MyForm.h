#pragma once
#include "Calculadora.h"
#include <string>
#include <stdlib.h>
#include <sstream>
#include<msclr\marshal_cppstd.h>
namespace Project2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		Calculadora * calculadora;
		MyForm(void)
		{

			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  botonSuma;
	private: System::Windows::Forms::Button^  botonResta;
	private: System::Windows::Forms::Button^  botonMultiplicacion;
	private: System::Windows::Forms::Button^  botonDivision;
	private: System::Windows::Forms::Button^  botonExponente;
	private: System::Windows::Forms::Button^  botonLog;
	private: System::Windows::Forms::Button^  botonFactorial;
	private: System::Windows::Forms::Button^  botonRaiz;
	private: System::Windows::Forms::Button^  botonPi;
	private: System::Windows::Forms::Button^  botonAC;
	private: System::Windows::Forms::Button^  botonIgual;
	private: System::Windows::Forms::Button^  botonPunto;
	private: System::Windows::Forms::Button^  botonSen;
	private: System::Windows::Forms::Button^  botonCos;
	private: System::Windows::Forms::Button^  botonTan;


	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->botonSuma = (gcnew System::Windows::Forms::Button());
			this->botonResta = (gcnew System::Windows::Forms::Button());
			this->botonMultiplicacion = (gcnew System::Windows::Forms::Button());
			this->botonDivision = (gcnew System::Windows::Forms::Button());
			this->botonExponente = (gcnew System::Windows::Forms::Button());
			this->botonLog = (gcnew System::Windows::Forms::Button());
			this->botonFactorial = (gcnew System::Windows::Forms::Button());
			this->botonRaiz = (gcnew System::Windows::Forms::Button());
			this->botonPi = (gcnew System::Windows::Forms::Button());
			this->botonAC = (gcnew System::Windows::Forms::Button());
			this->botonIgual = (gcnew System::Windows::Forms::Button());
			this->botonPunto = (gcnew System::Windows::Forms::Button());
			this->botonSen = (gcnew System::Windows::Forms::Button());
			this->botonCos = (gcnew System::Windows::Forms::Button());
			this->botonTan = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 158);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(50, 37);
			this->button1->TabIndex = 0;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(68, 158);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(50, 37);
			this->button2->TabIndex = 1;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(124, 158);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(50, 37);
			this->button3->TabIndex = 2;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(12, 201);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(50, 37);
			this->button4->TabIndex = 3;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(68, 201);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(50, 37);
			this->button5->TabIndex = 4;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(124, 201);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(50, 37);
			this->button6->TabIndex = 5;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(12, 244);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(50, 37);
			this->button7->TabIndex = 6;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(68, 244);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(50, 37);
			this->button8->TabIndex = 7;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(124, 244);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(50, 37);
			this->button9->TabIndex = 8;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(68, 287);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(50, 37);
			this->button10->TabIndex = 9;
			this->button10->Text = L"0";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 67);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(295, 20);
			this->textBox1->TabIndex = 10;
			// 
			// botonSuma
			// 
			this->botonSuma->Location = System::Drawing::Point(189, 115);
			this->botonSuma->Name = L"botonSuma";
			this->botonSuma->Size = System::Drawing::Size(50, 37);
			this->botonSuma->TabIndex = 11;
			this->botonSuma->Text = L"+";
			this->botonSuma->UseVisualStyleBackColor = true;
			this->botonSuma->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// botonResta
			// 
			this->botonResta->Location = System::Drawing::Point(189, 158);
			this->botonResta->Name = L"botonResta";
			this->botonResta->Size = System::Drawing::Size(50, 37);
			this->botonResta->TabIndex = 12;
			this->botonResta->Text = L"-";
			this->botonResta->UseVisualStyleBackColor = true;
			this->botonResta->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// botonMultiplicacion
			// 
			this->botonMultiplicacion->Location = System::Drawing::Point(245, 158);
			this->botonMultiplicacion->Name = L"botonMultiplicacion";
			this->botonMultiplicacion->Size = System::Drawing::Size(50, 37);
			this->botonMultiplicacion->TabIndex = 13;
			this->botonMultiplicacion->Text = L"x";
			this->botonMultiplicacion->UseVisualStyleBackColor = true;
			this->botonMultiplicacion->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// botonDivision
			// 
			this->botonDivision->Location = System::Drawing::Point(245, 201);
			this->botonDivision->Name = L"botonDivision";
			this->botonDivision->Size = System::Drawing::Size(50, 37);
			this->botonDivision->TabIndex = 14;
			this->botonDivision->Text = L"÷";
			this->botonDivision->UseVisualStyleBackColor = true;
			this->botonDivision->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// botonExponente
			// 
			this->botonExponente->Location = System::Drawing::Point(189, 201);
			this->botonExponente->Name = L"botonExponente";
			this->botonExponente->Size = System::Drawing::Size(50, 37);
			this->botonExponente->TabIndex = 15;
			this->botonExponente->Text = L"^";
			this->botonExponente->UseVisualStyleBackColor = true;
			this->botonExponente->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// botonLog
			// 
			this->botonLog->Location = System::Drawing::Point(245, 287);
			this->botonLog->Name = L"botonLog";
			this->botonLog->Size = System::Drawing::Size(50, 37);
			this->botonLog->TabIndex = 16;
			this->botonLog->Text = L"Log";
			this->botonLog->UseVisualStyleBackColor = true;
			this->botonLog->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// botonFactorial
			// 
			this->botonFactorial->Location = System::Drawing::Point(189, 244);
			this->botonFactorial->Name = L"botonFactorial";
			this->botonFactorial->Size = System::Drawing::Size(50, 37);
			this->botonFactorial->TabIndex = 17;
			this->botonFactorial->Text = L"!";
			this->botonFactorial->UseVisualStyleBackColor = true;
			this->botonFactorial->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// botonRaiz
			// 
			this->botonRaiz->Location = System::Drawing::Point(245, 244);
			this->botonRaiz->Name = L"botonRaiz";
			this->botonRaiz->Size = System::Drawing::Size(50, 37);
			this->botonRaiz->TabIndex = 18;
			this->botonRaiz->Text = L"√";
			this->botonRaiz->UseVisualStyleBackColor = true;
			this->botonRaiz->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// botonPi
			// 
			this->botonPi->Location = System::Drawing::Point(124, 287);
			this->botonPi->Name = L"botonPi";
			this->botonPi->Size = System::Drawing::Size(50, 37);
			this->botonPi->TabIndex = 19;
			this->botonPi->Text = L"π";
			this->botonPi->UseVisualStyleBackColor = true;
			this->botonPi->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// botonAC
			// 
			this->botonAC->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->botonAC->Location = System::Drawing::Point(245, 115);
			this->botonAC->Name = L"botonAC";
			this->botonAC->Size = System::Drawing::Size(50, 37);
			this->botonAC->TabIndex = 20;
			this->botonAC->Text = L"AC";
			this->botonAC->UseVisualStyleBackColor = false;
			this->botonAC->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// botonIgual
			// 
			this->botonIgual->Location = System::Drawing::Point(189, 287);
			this->botonIgual->Name = L"botonIgual";
			this->botonIgual->Size = System::Drawing::Size(50, 37);
			this->botonIgual->TabIndex = 21;
			this->botonIgual->Text = L"=";
			this->botonIgual->UseVisualStyleBackColor = true;
			this->botonIgual->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// botonPunto
			// 
			this->botonPunto->Location = System::Drawing::Point(12, 287);
			this->botonPunto->Name = L"botonPunto";
			this->botonPunto->Size = System::Drawing::Size(50, 37);
			this->botonPunto->TabIndex = 22;
			this->botonPunto->Text = L".";
			this->botonPunto->UseVisualStyleBackColor = true;
			this->botonPunto->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button11
			// 
			this->botonSen->Location = System::Drawing::Point(12, 115);
			this->botonSen->Name = L"sen";
			this->botonSen->Size = System::Drawing::Size(50, 37);
			this->botonSen->TabIndex = 23;
			this->botonSen->Text = L"sen";
			this->botonSen->UseVisualStyleBackColor = true;
			this->botonSen->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button12
			// 
			this->botonCos->Location = System::Drawing::Point(68, 115);
			this->botonCos->Name = L"cos";
			this->botonCos->Size = System::Drawing::Size(50, 37);
			this->botonCos->TabIndex = 24;
			this->botonCos->Text = L"cos";
			this->botonCos->UseVisualStyleBackColor = true;
			this->botonCos->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// button13
			// 
			this->botonTan->Location = System::Drawing::Point(124, 115);
			this->botonTan->Name = L"tan";
			this->botonTan->Size = System::Drawing::Size(50, 37);
			this->botonTan->TabIndex = 25;
			this->botonTan->Text = L"tan";
			this->botonTan->UseVisualStyleBackColor = true;
			this->botonTan->Click += gcnew System::EventHandler(this, &MyForm::button_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(319, 345);
			this->Controls->Add(this->botonTan);
			this->Controls->Add(this->botonCos);
			this->Controls->Add(this->botonSen);
			this->Controls->Add(this->botonPunto);
			this->Controls->Add(this->botonIgual);
			this->Controls->Add(this->botonAC);
			this->Controls->Add(this->botonPi);
			this->Controls->Add(this->botonRaiz);
			this->Controls->Add(this->botonFactorial);
			this->Controls->Add(this->botonLog);
			this->Controls->Add(this->botonExponente);
			this->Controls->Add(this->botonDivision);
			this->Controls->Add(this->botonMultiplicacion);
			this->Controls->Add(this->botonResta);
			this->Controls->Add(this->botonSuma);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"calculadora";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion 
	private: System::Void button_Click(System::Object^  sender, System::EventArgs^  e) {
		
		if (sender == button1)
		{
			textBox1->Text += "1";
	
		}
		else
		{
			if (sender == button2)
			{
				textBox1->Text += "2";
			}
			else
			{
				if (sender == button3)
				{
					textBox1->Text += "3";
				}
				else 
				{
					if (sender == button4)
					{
						textBox1->Text += "4";
					}
					else
					{
						if (sender == button5)
						{
							textBox1->Text += "5";
						}
						else
						{
							if (sender == button6)
							{
								textBox1->Text += "6";
							}
							else
							{
								if (sender == button7)
								{
									textBox1->Text += "7";
								}
								else
								{
									if (sender == button8)
									{
										textBox1->Text += "8";
									}
									else
									{
										if (sender == button9)
										{
											textBox1->Text += "9";
										}
										else
										{
											if (sender == button10)
											{
												textBox1->Text += "0";
											}
											else
											{
												if (sender == botonSuma)
												{
													textBox1->Text += "+";

												}
												else
												{
													if (sender == botonSuma)
													{
														textBox1->Text += "+";
													}
													else
													{
														if (sender == botonResta)
														{
															textBox1->Text += "-";
														}
														else
														{
															if (sender == botonDivision)
															{
																textBox1->Text += "/";
															}
															else
															{
																if (sender == botonMultiplicacion)
																{
																	textBox1->Text += "*";
																}
																else
																{
																	if (sender == botonFactorial)
																	{
																		std::string expresion = msclr::interop::marshal_as<std::string>(textBox1->Text);
																		expresion = calculadora->convertir(expresion);

																		textBox1->Text = calculadora->factorial(calculadora->evaluar(expresion)) + "";;
																	}
																	else
																	{
																		if (sender == botonPi)
																		{
																			textBox1->Text += "3.14";
																		}
																		else
																		{
																			if (sender == botonLog)
																			{
																				std::string expresion = msclr::interop::marshal_as<std::string>(textBox1->Text);
																				expresion = calculadora->convertir(expresion);

																				textBox1->Text = calculadora->logaritmo(calculadora->evaluar(expresion)) + "";
																			}
																			else
																			{
																				if (sender == botonExponente)
																				{
																					textBox1->Text += "^"; 
																				}
																				else
																				{
																					if (sender == botonPunto)
																					{
																						textBox1->Text += ".";
																					}
																					else
																					{
																						if (sender == botonRaiz)
																						{
																							std::string expresion = msclr::interop::marshal_as<std::string>(textBox1->Text);
																							expresion = calculadora->convertir(expresion);

																							textBox1->Text = calculadora->raiz(calculadora->evaluar(expresion)) + "";
																						}
																						else
																						{
																							if (sender == botonSen)
																							{
																								std::string expresion = msclr::interop::marshal_as<std::string>(textBox1->Text);
																								expresion = calculadora->convertir(expresion);
																			
																								textBox1->Text = calculadora->seno(calculadora->evaluar(expresion))+ "";
																							}
																							else
																							{
																								if (sender == botonCos)
																								{
																									std::string expresion = msclr::interop::marshal_as<std::string>(textBox1->Text);
																									expresion = calculadora->convertir(expresion);

																									textBox1->Text = calculadora->coseno(calculadora->evaluar(expresion)) + "";
																								}
																								else
																								{
																									if (sender == botonTan)
																									{
																										std::string expresion = msclr::interop::marshal_as<std::string>(textBox1->Text);
																										expresion = calculadora->convertir(expresion);

																										textBox1->Text = calculadora->tangente(calculadora->evaluar(expresion)) + "";
																									}
																									else
																									{
																										if (sender == botonAC)
																										{
																											textBox1->Text = "";
																										}
																										else
																										{
																											if (sender == botonIgual)
																											{
																												
																												// se evalua la funcion aqui*/
																												std::string expresion = msclr::interop::marshal_as<std::string>(textBox1->Text);
																												expresion = calculadora->convertir(expresion);
																												//calculadora->evaluar(expresion);
																												textBox1->Text += "=" + calculadora->evaluar(expresion);
																											}

																										}
																									}
																								}
																							}
																						}
																					}
																				}
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
private: System::Void linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
}
};
}
