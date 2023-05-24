
#include "pch.h"

#include "DronController.h"

void DronController::Controller::Send(Dron^ Dron, Position^ beginpoint, Position^ endpoint)
{
    Dron->Moveto(beginpoint);
    Dron->LoadProduct();
    //falta hacer una función que reciba endpoint;
    Dron->NotifyMalfunctioning();
    Dron->Sendimage();
    Dron->Emitsound();
    Dron->TurnLedsOn();
    Dron->NotifyDeliver();
    Dron->Moveto(beginpoint);
}

void DronController::Controller::AddDron(Dron^ dron)
{
    DronDB->Add(dron);
}

List<Dron^>^ DronController::Controller::QueryAllDrons()
{
    return DronDB;
    // TODO: Insertar una instrucción "return" aquí
}
void DronController::Controller::AddDisaster(NaturalDisaster^ ND)
{
    DisasterDB->Add(ND);
}
List<NaturalDisaster^>^ DronController::Controller::QueryAllDisasters()
{
    return DisasterDB;
    // TODO: Insertar una instrucción "return" aquí
}
Dron^ DronController::Controller::QueryDronBySerialNumber(int dronSerialnumbers)
{
    for (int i = 0; i < DronDB->Count; i++) {
        if (DronDB[i]->Serialnumber == dronSerialnumbers)
            return DronDB[i];
    }
    return nullptr;
}

void DronController::Controller::UpdateDron(Dron^ dron)
{
    for (int i = 0; i < DronDB->Count; i++) {
        if (DronDB[i]->Serialnumber == dron->Serialnumber)
            DronDB[i] = dron;
    }
}


void DronController::Controller::DeleteDron(int dronSerialnumbers)
{
    for (int i = 0; i < DronDB->Count; i++) {
        if (DronDB[i]->Serialnumber == dronSerialnumbers)
            DronDB->RemoveAt(i);
    }
}

NaturalDisaster^ DronController::Controller::QueryDisaster(int nombre_desastre)
{
    for (int i = 0; i < DisasterDB->Count; i++) {
        if (DisasterDB[i]->Name == nombre_desastre);
    }
}

