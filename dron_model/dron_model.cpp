#include "pch.h"

#include "dron_model.h"

void dronmodel::Dron_Stock::Add_Drones(Dron^ Dron)
{
	Drones->Add(Dron);
}

dronmodel::Dron^ dronmodel::Dron_Stock::Search_Dron(float number)
{
	for each (Dron^ var in Drones)
	{
		if (var->Serialnumber == number) {
			return var;

		}
		return nullptr;
	}
}

void dronmodel::Dron::Moveto(Position^ destiny)
{
	System::Console::WriteLine("El dron se mueve desde su posición (Position), hacia la"+ "posicion(" + destiny->X + "," + destiny->Y + "," + destiny->Z + ")");
}
void dronmodel::Dron::LoadProduct()
{
	System::Console::WriteLine("Se ha procedido a cargar los productos en el dron");
}

void dronmodel::Dron::NotifyMalfunctioning()
{
	System::Console::WriteLine("Se ha procedido a notificar algun malfuncionamiento");
}

void dronmodel::Dron::Sendimage()
{
	System::Console::WriteLine("El Dron envia una imagen desde su cámara");
}

void dronmodel::Dron::Emitsound()
{
	System::Console::WriteLine("El Dron envia un sonido para que las personas lo escuchen");
	
}

void dronmodel::Dron::TurnLedsOn()
{
	System::Console::WriteLine("El Dron enciende sus leds para que lo vean las personas");
}

void dronmodel::Dron::NotifyDeliver()
{
	System::Console::WriteLine("El Dron notifica que la ayuda ha sido entregada");
}

dronmodel::Position::Position(float x, float y, float z)
{
	this->X = x;
	this->Y = y;
	this->Z = z;
}
