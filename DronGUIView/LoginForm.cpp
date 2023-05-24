#include "pch.h"
#include "LoginForm.h"

System::Void DronGUIView::LoginForm::btnOK_Click(System::Object^ sender, System::EventArgs^ e)
{
    if ((txtUsername->Text == "Mgomez") && (txtPassword->Text == "Admin1")) {
        MessageBox::Show("Bienvenido Miguel");
        this->Close();
    }
    else {
        MessageBox::Show("Usuario y contraseña incorrectos");

    }
}
