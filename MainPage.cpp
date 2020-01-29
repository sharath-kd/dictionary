#include "MainPage.h"
#include "C:\Users\Sharath\Documents\Sharath\Dev C++\lib.h"
#include <Windows.h>

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project1::MainPage form;
	Application::Run(% form);
}