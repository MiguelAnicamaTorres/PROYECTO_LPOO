#include "pch.h"
#include "DronForm.h";
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	DronGUIView::DronForm form;
	Application::Run(% form);
}