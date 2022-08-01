#include "Prisijungimas.h"

using namespace System;
using namespace System::Windows::Forms;

void Main(cli::array<String^>^ args) {

	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	TomasMotiejunasIvykiuKalendorius::Prisijungimas form;
	Application::Run(% form);
}

