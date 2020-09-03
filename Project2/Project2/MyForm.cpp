#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;
//using namespace System::Windows::Globalization;


[STAThreadAttribute]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project2::MyForm form;
	Application::Run(%form);
}
