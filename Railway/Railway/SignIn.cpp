#include "SignIn.h"
using namespace System;
using namespace System::Windows::Forms;
using namespace std;

[STAThreadAttribute]
void main(cli::array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	BackEnd bb;
	Railway::SignIn form(&bb);
	Application::Run(% form);
	bb.save_data();
}