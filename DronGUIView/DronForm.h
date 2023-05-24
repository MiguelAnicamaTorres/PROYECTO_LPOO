#pragma once
#include "LoginForm.h"
#include "DronForm1.h"
#include "MapaAppiForm.h"
#include "RegistrodeDesastreForm.h"
#include "StockDronesForm.h"


namespace DronGUIView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MyForm
	/// </summary>
	public ref class DronForm : public System::Windows::Forms::Form
	{
	public:
		DronForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~DronForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ archivoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ operacionesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ enviarDronesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ buscarDronesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mantenimientoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ dronesToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ piezasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ dronesToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ stockToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ayudaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ acercaDeToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ contactanosToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem2;
	private: System::Windows::Forms::ToolStripMenuItem^ mapaToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ mapaAPIToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ registroDeDesastresToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ datosImportantesToolStripMenuItem;

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->archivoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mapaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mapaAPIToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->registroDeDesastresToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->operacionesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->enviarDronesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->buscarDronesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mantenimientoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dronesToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->piezasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dronesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->stockToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->datosImportantesToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ayudaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->acercaDeToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->contactanosToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->archivoToolStripMenuItem,
					this->mapaToolStripMenuItem, this->operacionesToolStripMenuItem, this->mantenimientoToolStripMenuItem, this->dronesToolStripMenuItem,
					this->ayudaToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(5, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(900, 30);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// archivoToolStripMenuItem
			// 
			this->archivoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->salirToolStripMenuItem });
			this->archivoToolStripMenuItem->Name = L"archivoToolStripMenuItem";
			this->archivoToolStripMenuItem->Size = System::Drawing::Size(73, 26);
			this->archivoToolStripMenuItem->Text = L"Archivo";
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(121, 26);
			this->salirToolStripMenuItem->Text = L"Salir";
			this->salirToolStripMenuItem->Click += gcnew System::EventHandler(this, &DronForm::salirToolStripMenuItem_Click);
			// 
			// mapaToolStripMenuItem
			// 
			this->mapaToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->mapaAPIToolStripMenuItem,
					this->registroDeDesastresToolStripMenuItem
			});
			this->mapaToolStripMenuItem->Name = L"mapaToolStripMenuItem";
			this->mapaToolStripMenuItem->Size = System::Drawing::Size(61, 26);
			this->mapaToolStripMenuItem->Text = L"Mapa";
			// 
			// mapaAPIToolStripMenuItem
			// 
			this->mapaAPIToolStripMenuItem->Name = L"mapaAPIToolStripMenuItem";
			this->mapaAPIToolStripMenuItem->Size = System::Drawing::Size(233, 26);
			this->mapaAPIToolStripMenuItem->Text = L"Mapa API";
			this->mapaAPIToolStripMenuItem->Click += gcnew System::EventHandler(this, &DronForm::mapaAPIToolStripMenuItem_Click);
			// 
			// registroDeDesastresToolStripMenuItem
			// 
			this->registroDeDesastresToolStripMenuItem->Name = L"registroDeDesastresToolStripMenuItem";
			this->registroDeDesastresToolStripMenuItem->Size = System::Drawing::Size(233, 26);
			this->registroDeDesastresToolStripMenuItem->Text = L"Registro de desastres";
			this->registroDeDesastresToolStripMenuItem->Click += gcnew System::EventHandler(this, &DronForm::registroDeDesastresToolStripMenuItem_Click);
			// 
			// operacionesToolStripMenuItem
			// 
			this->operacionesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->enviarDronesToolStripMenuItem,
					this->buscarDronesToolStripMenuItem, this->toolStripMenuItem2
			});
			this->operacionesToolStripMenuItem->Name = L"operacionesToolStripMenuItem";
			this->operacionesToolStripMenuItem->Size = System::Drawing::Size(106, 26);
			this->operacionesToolStripMenuItem->Text = L"Operaciones";
			// 
			// enviarDronesToolStripMenuItem
			// 
			this->enviarDronesToolStripMenuItem->Name = L"enviarDronesToolStripMenuItem";
			this->enviarDronesToolStripMenuItem->Size = System::Drawing::Size(186, 26);
			this->enviarDronesToolStripMenuItem->Text = L"Enviar Drones";
			this->enviarDronesToolStripMenuItem->Click += gcnew System::EventHandler(this, &DronForm::enviarDronesToolStripMenuItem_Click);
			// 
			// buscarDronesToolStripMenuItem
			// 
			this->buscarDronesToolStripMenuItem->Name = L"buscarDronesToolStripMenuItem";
			this->buscarDronesToolStripMenuItem->Size = System::Drawing::Size(186, 26);
			this->buscarDronesToolStripMenuItem->Text = L"Buscar Drones";
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->Size = System::Drawing::Size(186, 26);
			this->toolStripMenuItem2->Text = L" ";
			// 
			// mantenimientoToolStripMenuItem
			// 
			this->mantenimientoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->dronesToolStripMenuItem1,
					this->piezasToolStripMenuItem
			});
			this->mantenimientoToolStripMenuItem->Name = L"mantenimientoToolStripMenuItem";
			this->mantenimientoToolStripMenuItem->Size = System::Drawing::Size(124, 26);
			this->mantenimientoToolStripMenuItem->Text = L"Mantenimiento";
			// 
			// dronesToolStripMenuItem1
			// 
			this->dronesToolStripMenuItem1->Name = L"dronesToolStripMenuItem1";
			this->dronesToolStripMenuItem1->Size = System::Drawing::Size(224, 26);
			this->dronesToolStripMenuItem1->Text = L"Drones";
			this->dronesToolStripMenuItem1->Click += gcnew System::EventHandler(this, &DronForm::dronesToolStripMenuItem1_Click);
			// 
			// piezasToolStripMenuItem
			// 
			this->piezasToolStripMenuItem->Name = L"piezasToolStripMenuItem";
			this->piezasToolStripMenuItem->Size = System::Drawing::Size(224, 26);
			this->piezasToolStripMenuItem->Text = L"Piezas";
			// 
			// dronesToolStripMenuItem
			// 
			this->dronesToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->stockToolStripMenuItem,
					this->datosImportantesToolStripMenuItem
			});
			this->dronesToolStripMenuItem->Name = L"dronesToolStripMenuItem";
			this->dronesToolStripMenuItem->Size = System::Drawing::Size(70, 26);
			this->dronesToolStripMenuItem->Text = L"Drones";
			// 
			// stockToolStripMenuItem
			// 
			this->stockToolStripMenuItem->Name = L"stockToolStripMenuItem";
			this->stockToolStripMenuItem->Size = System::Drawing::Size(215, 26);
			this->stockToolStripMenuItem->Text = L"Stock";
			this->stockToolStripMenuItem->Click += gcnew System::EventHandler(this, &DronForm::stockToolStripMenuItem_Click);
			// 
			// datosImportantesToolStripMenuItem
			// 
			this->datosImportantesToolStripMenuItem->Name = L"datosImportantesToolStripMenuItem";
			this->datosImportantesToolStripMenuItem->Size = System::Drawing::Size(215, 26);
			this->datosImportantesToolStripMenuItem->Text = L"Datos importantes";
			// 
			// ayudaToolStripMenuItem
			// 
			this->ayudaToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->acercaDeToolStripMenuItem,
					this->contactanosToolStripMenuItem
			});
			this->ayudaToolStripMenuItem->Name = L"ayudaToolStripMenuItem";
			this->ayudaToolStripMenuItem->Size = System::Drawing::Size(65, 26);
			this->ayudaToolStripMenuItem->Text = L"Ayuda";
			// 
			// acercaDeToolStripMenuItem
			// 
			this->acercaDeToolStripMenuItem->Name = L"acercaDeToolStripMenuItem";
			this->acercaDeToolStripMenuItem->Size = System::Drawing::Size(174, 26);
			this->acercaDeToolStripMenuItem->Text = L"Acerca de ";
			this->acercaDeToolStripMenuItem->Click += gcnew System::EventHandler(this, &DronForm::acercaDeToolStripMenuItem_Click);
			// 
			// contactanosToolStripMenuItem
			// 
			this->contactanosToolStripMenuItem->Name = L"contactanosToolStripMenuItem";
			this->contactanosToolStripMenuItem->Size = System::Drawing::Size(174, 26);
			this->contactanosToolStripMenuItem->Text = L"Contactanos";
			this->contactanosToolStripMenuItem->Click += gcnew System::EventHandler(this, &DronForm::contactanosToolStripMenuItem_Click);
			// 
			// DronForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(900, 500);
			this->Controls->Add(this->menuStrip1);
			this->IsMdiContainer = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"DronForm";
			this->Text = L"Sistema de envio de Drones";
			this->Load += gcnew System::EventHandler(this, &DronForm::DronForm_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void enviarDronesToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		}
	private: System::Void acercaDeToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		}
	private: System::Void salirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
		}
	private: System::Void DronForm_Load(System::Object^ sender, System::EventArgs^ e) {
		LoginForm^ loginForm = gcnew LoginForm();
		loginForm->ShowDialog();
	}
	private: System::Void dronesToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		DronForm1^ maintenanceForm = gcnew DronForm1();
		maintenanceForm->MdiParent = this;
		maintenanceForm->Show();

	}
private: System::Void mapaAPIToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		MapaAppiForm^ mapaappiform = gcnew MapaAppiForm();
		mapaappiform->MdiParent = this;
		mapaappiform->Show();
}
private: System::Void registroDeDesastresToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	//Registro de Desastres//
	RegistrodeDesastreForm^ registrodedesastreform = gcnew RegistrodeDesastreForm();
	registrodedesastreform -> MdiParent = this;
	registrodedesastreform->Show();
}	
private: System::Void stockToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	//STOCK de drones//
	StockDronesForm^ stockdronesform = gcnew StockDronesForm();
	stockdronesform->MdiParent = this;
	stockdronesform->Show();
}
private: System::Void contactanosToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	//Contacatar con los creadores//
}
};
}
