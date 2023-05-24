#pragma once

using namespace System;
using namespace System::Collections::Generic;


namespace dronmodel {
    public ref class Position {
        public:
            property float X;
            property float Y;
            property float Z;
            Position(float x, float y, float z);
    };

    public ref class Dron {
        public:
            property int Serialnumber;
            property float Id;
            property float Height;
            property String^ Nombre;
            property float Speed;
            property int Batteryavailabletime;
            property String^ Type;
            property int Maximumdistance;
            property int Loadcapacity;
            property  String^ Sensor;
            property List<String^>^ Activitiesregister;
            property String^ Camera;
            property String^ Memory;
            property float Flyheight;
            property String^ Weather;
            property String^ leds;
            property String^ Buzzer;
            property Position^ Dronposition;


            void Moveto(Position^ destiny);
            void LoadProduct();
            void NotifyMalfunctioning();
            void Sendimage();
            void Emitsound();
            void TurnLedsOn();
            void NotifyDeliver();

    };

    public ref class Clothes {
        public:
            property String^ Name;
            property String^ Type;
     };
    public ref class Food{
        public:
            property String^ Name;
            property String^ Type;
            property float Expirationdate;
    };
    public ref class Medicine {
            public:
                property String^ Name;
                property float Expirationdate;
                property String^ type;
                property String^ Ageclassification;
    };
    public ref class NaturalDisaster {
            public:
                property String^ Name;
                property String^ Type;
                property List<int>^ map;
                property int DisasterPos;
                property String^ Date;

    
    };
    public ref class Operarios {
            public:
                property String^ type;
                property List<String^>^ userregister;
              //  void Attribute1();
    };
    public ref class Supplier {
            public:
                property String^ Name;
                property String^ Type;
                property int Amountreceived;
    };
    public ref class SuppliesStocks {
            public:
                property String^ type;
                property int Stock;
                //void Alarm();
                property int Quantity;
                property float Cost;
                property float weight;
                property List<float>^ Stockregister;

                //void Verify();

                //void Alert();
    };
    public ref class Mantenimiento {
            public:
                property List<String^>^ Users;
                property List<float>^ Maintenancestock;

                //void VerifyUser();

               // void VerifyStock();
    };
    public ref class Map {
            public:
                property float Lenght;
                property float width;
                property float Height;
                property String^ cityname;
    };

    public ref class Dron_Stock {
            public:
                property List<Dron^>^ Drones;
              
                void Add_Drones(Dron^ Dron);
                Dron^ Search_Dron(float number);

    };


}
