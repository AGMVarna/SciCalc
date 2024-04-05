#include "MainEnterForm.h"

using namespace FirstGUITry;
using namespace System;
using namespace System::Windows::Forms;
[STAThread]

// void main(array<String^>^ args) {
void main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	FirstGUITry::MainEnterForm form;
	Application::Run(% form);
	//	Application::Run(gcnew MyForm());
}

