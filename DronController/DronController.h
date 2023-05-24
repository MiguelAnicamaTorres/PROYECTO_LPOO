#pragma once

using namespace System;
using namespace dronmodel;
using namespace System::Collections::Generic;

namespace DronController {
	public ref class Controller
	{
		static List<Dron^>^ DronDB = gcnew List <Dron^>();
		static List<NaturalDisaster^>^ DisasterDB = gcnew List <NaturalDisaster^>();
		public:
			static void Send(Dron^ Dron,Position^ beginpoint,Position^ endpoint);
			static void AddDron(Dron^);
			static List<Dron^>^ QueryAllDrons();
			static void AddDisaster(NaturalDisaster^);
			static List<NaturalDisaster^>^ QueryAllDisasters();
			static Dron^ QueryDronBySerialNumber(int);
			static void UpdateDron(Dron^);
			static void DeleteDron(int);
			static NaturalDisaster^ QueryDisaster(int);

	};
}
