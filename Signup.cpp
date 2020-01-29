#include "Signup.h"
#include <Windows.h>

using namespace System;
using namespace System::Windows::Forms;
using namespace Project1; // This is your project name

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)

{

	Application::EnableVisualStyles();

	Application::SetCompatibleTextRenderingDefault(false);

	Application::Run(gcnew Signup());

	return 0;

}