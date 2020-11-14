#include "MainForm.h"
#include <iostream>
using namespace System;
using namespace System::Windows::Forms;


[STAThread]
void main(array<String^>^ args) {

    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    ProyectoInterfazGrafica::MainForm form;
    Application::Run(% form);
    std::cout <<"" ;
}