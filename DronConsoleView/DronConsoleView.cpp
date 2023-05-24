#include "pch.h"

using namespace System;
using namespace dronmodel;
using namespace DronController;
int main(array<System::String ^> ^args)
{
    Dron^ dron = gcnew Dron();
    Position^ beginpoint = gcnew Position(1,1,1);
    Position^ endpoint = gcnew Position (5,1,150);
    Controller::Send(dron, beginpoint, endpoint);
   
}
