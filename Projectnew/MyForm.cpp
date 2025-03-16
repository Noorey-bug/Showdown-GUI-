#include "MyForm.h"
#include <iostream>
using namespace System;
using namespace System::Windows::Forms;

int main(cli::array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    Projectnew::MyForm^ form = nullptr; // Managed reference initialized to nullptr

    try {
        // Managed exception handling block
        form = gcnew Projectnew::MyForm(); // Allocating managed object
        Application::Run(form);  // Running the managed Windows Forms application
    }
    catch (System::Exception^ e) {
        // Handle managed exceptions here
        Console::WriteLine("Managed exception: " + e->Message);
    }

    try {
        // Native exception handling block
        throw std::runtime_error("A native exception occurred"); // Throwing a native exception (unmanaged)
    }
    catch (const std::exception& e) {
        // Handle unmanaged exceptions here
        std::cout << "Native exception: " << e.what() << std::endl;
    }

    return 0; // Return 0 to indicate the program ran successfully
}
