#pragma once

namespace DronGUIView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace dronmodel;
	using namespace DronController;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Resumen de DronForm1
	/// </summary>
	public ref class DronForm1 : public System::Windows::Forms::Form
	{
	public:
		DronForm1(void)
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
		~DronForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ txtName;
	private: System::Windows::Forms::TextBox^ txtSerialNumber;
	private: System::Windows::Forms::TextBox^ txtType;
	private: System::Windows::Forms::TextBox^ txtBatteryAvailableTime;
	private: System::Windows::Forms::TextBox^ txtLoadCapacity;
	private: System::Windows::Forms::TextBox^ txtMaximunDistance;
	private: System::Windows::Forms::DataGridView^ dgvDrons;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Dron_Name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Dron_Serial_Number;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Dron_Type;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Dron_Battery_Available_Time;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Dron_Load_Capacity;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Dron_Maximun_Distance;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::Button^ btnUpdate;
	private: System::Windows::Forms::Button^ btnDelete;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ archivoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ nuevoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ editarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem;
	private: System::Windows::Forms::PictureBox^ pictureBox1;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(DronForm1::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->txtSerialNumber = (gcnew System::Windows::Forms::TextBox());
			this->txtType = (gcnew System::Windows::Forms::TextBox());
			this->txtBatteryAvailableTime = (gcnew System::Windows::Forms::TextBox());
			this->txtLoadCapacity = (gcnew System::Windows::Forms::TextBox());
			this->txtMaximunDistance = (gcnew System::Windows::Forms::TextBox());
			this->dgvDrons = (gcnew System::Windows::Forms::DataGridView());
			this->Dron_Name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Dron_Serial_Number = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Dron_Type = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Dron_Battery_Available_Time = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Dron_Load_Capacity = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Dron_Maximun_Distance = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->archivoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nuevoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvDrons))->BeginInit();
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(83, 47);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(38, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Name:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(86, 89);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(76, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Serial Number:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(86, 136);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(34, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Type:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(294, 47);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(115, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Battery Available Time:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(294, 89);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(78, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Load Capacity:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(294, 136);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(97, 13);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Maximun Distance:";
			// 
			// txtName
			// 
			this->txtName->Location = System::Drawing::Point(162, 47);
			this->txtName->Margin = System::Windows::Forms::Padding(2);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(76, 20);
			this->txtName->TabIndex = 6;
			// 
			// txtSerialNumber
			// 
			this->txtSerialNumber->Location = System::Drawing::Point(162, 89);
			this->txtSerialNumber->Margin = System::Windows::Forms::Padding(2);
			this->txtSerialNumber->Name = L"txtSerialNumber";
			this->txtSerialNumber->Size = System::Drawing::Size(76, 20);
			this->txtSerialNumber->TabIndex = 7;
			// 
			// txtType
			// 
			this->txtType->Location = System::Drawing::Point(162, 136);
			this->txtType->Margin = System::Windows::Forms::Padding(2);
			this->txtType->Name = L"txtType";
			this->txtType->Size = System::Drawing::Size(76, 20);
			this->txtType->TabIndex = 8;
			// 
			// txtBatteryAvailableTime
			// 
			this->txtBatteryAvailableTime->Location = System::Drawing::Point(416, 47);
			this->txtBatteryAvailableTime->Margin = System::Windows::Forms::Padding(2);
			this->txtBatteryAvailableTime->Name = L"txtBatteryAvailableTime";
			this->txtBatteryAvailableTime->Size = System::Drawing::Size(76, 20);
			this->txtBatteryAvailableTime->TabIndex = 9;
			// 
			// txtLoadCapacity
			// 
			this->txtLoadCapacity->Location = System::Drawing::Point(416, 88);
			this->txtLoadCapacity->Margin = System::Windows::Forms::Padding(2);
			this->txtLoadCapacity->Name = L"txtLoadCapacity";
			this->txtLoadCapacity->Size = System::Drawing::Size(76, 20);
			this->txtLoadCapacity->TabIndex = 10;
			// 
			// txtMaximunDistance
			// 
			this->txtMaximunDistance->Location = System::Drawing::Point(416, 136);
			this->txtMaximunDistance->Margin = System::Windows::Forms::Padding(2);
			this->txtMaximunDistance->Name = L"txtMaximunDistance";
			this->txtMaximunDistance->Size = System::Drawing::Size(76, 20);
			this->txtMaximunDistance->TabIndex = 11;
			// 
			// dgvDrons
			// 
			this->dgvDrons->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvDrons->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Dron_Name, this->Dron_Serial_Number,
					this->Dron_Type, this->Dron_Battery_Available_Time, this->Dron_Load_Capacity, this->Dron_Maximun_Distance
			});
			this->dgvDrons->Location = System::Drawing::Point(9, 212);
			this->dgvDrons->Margin = System::Windows::Forms::Padding(2);
			this->dgvDrons->Name = L"dgvDrons";
			this->dgvDrons->RowHeadersWidth = 51;
			this->dgvDrons->RowTemplate->Height = 24;
			this->dgvDrons->Size = System::Drawing::Size(620, 141);
			this->dgvDrons->TabIndex = 12;
			this->dgvDrons->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &DronForm1::dgvDrons_CellClick);
			// 
			// Dron_Name
			// 
			this->Dron_Name->HeaderText = L"Nombre";
			this->Dron_Name->MinimumWidth = 6;
			this->Dron_Name->Name = L"Dron_Name";
			this->Dron_Name->Width = 125;
			// 
			// Dron_Serial_Number
			// 
			this->Dron_Serial_Number->HeaderText = L"Num. Serie";
			this->Dron_Serial_Number->MinimumWidth = 6;
			this->Dron_Serial_Number->Name = L"Dron_Serial_Number";
			this->Dron_Serial_Number->Width = 125;
			// 
			// Dron_Type
			// 
			this->Dron_Type->HeaderText = L"Tipo";
			this->Dron_Type->MinimumWidth = 6;
			this->Dron_Type->Name = L"Dron_Type";
			this->Dron_Type->Width = 125;
			// 
			// Dron_Battery_Available_Time
			// 
			this->Dron_Battery_Available_Time->HeaderText = L"Bateria Disponible";
			this->Dron_Battery_Available_Time->MinimumWidth = 6;
			this->Dron_Battery_Available_Time->Name = L"Dron_Battery_Available_Time";
			this->Dron_Battery_Available_Time->Width = 125;
			// 
			// Dron_Load_Capacity
			// 
			this->Dron_Load_Capacity->HeaderText = L"Capacidad de carga";
			this->Dron_Load_Capacity->MinimumWidth = 6;
			this->Dron_Load_Capacity->Name = L"Dron_Load_Capacity";
			this->Dron_Load_Capacity->Width = 125;
			// 
			// Dron_Maximun_Distance
			// 
			this->Dron_Maximun_Distance->HeaderText = L"Distancia Maxima";
			this->Dron_Maximun_Distance->MinimumWidth = 6;
			this->Dron_Maximun_Distance->Name = L"Dron_Maximun_Distance";
			this->Dron_Maximun_Distance->Width = 125;
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(108, 169);
			this->btnAdd->Margin = System::Windows::Forms::Padding(2);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(56, 19);
			this->btnAdd->TabIndex = 13;
			this->btnAdd->Text = L"Agregar";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &DronForm1::btnAdd_Click);
			// 
			// btnUpdate
			// 
			this->btnUpdate->Location = System::Drawing::Point(263, 168);
			this->btnUpdate->Margin = System::Windows::Forms::Padding(2);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(56, 19);
			this->btnUpdate->TabIndex = 14;
			this->btnUpdate->Text = L"Modificar";
			this->btnUpdate->UseVisualStyleBackColor = true;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &DronForm1::btnUpdate_Click);
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(425, 168);
			this->btnDelete->Margin = System::Windows::Forms::Padding(2);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(56, 19);
			this->btnDelete->TabIndex = 15;
			this->btnDelete->Text = L"Eliminar";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &DronForm1::btnDelete_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->AllowMerge = false;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->archivoToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Padding = System::Windows::Forms::Padding(4, 2, 0, 2);
			this->menuStrip1->Size = System::Drawing::Size(695, 24);
			this->menuStrip1->TabIndex = 16;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// archivoToolStripMenuItem
			// 
			this->archivoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->nuevoToolStripMenuItem,
					this->editarToolStripMenuItem, this->salirToolStripMenuItem
			});
			this->archivoToolStripMenuItem->Name = L"archivoToolStripMenuItem";
			this->archivoToolStripMenuItem->Size = System::Drawing::Size(60, 20);
			this->archivoToolStripMenuItem->Text = L"Archivo";
			this->archivoToolStripMenuItem->Click += gcnew System::EventHandler(this, &DronForm1::archivoToolStripMenuItem_Click);
			// 
			// nuevoToolStripMenuItem
			// 
			this->nuevoToolStripMenuItem->Name = L"nuevoToolStripMenuItem";
			this->nuevoToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->nuevoToolStripMenuItem->Text = L"Nuevo";
			this->nuevoToolStripMenuItem->Click += gcnew System::EventHandler(this, &DronForm1::nuevoToolStripMenuItem_Click);
			// 
			// editarToolStripMenuItem
			// 
			this->editarToolStripMenuItem->Name = L"editarToolStripMenuItem";
			this->editarToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->editarToolStripMenuItem->Text = L"Editar";
			this->editarToolStripMenuItem->Click += gcnew System::EventHandler(this, &DronForm1::editarToolStripMenuItem_Click);
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->salirToolStripMenuItem->Text = L"Salir";
			this->salirToolStripMenuItem->Click += gcnew System::EventHandler(this, &DronForm1::salirToolStripMenuItem_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(528, 47);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(158, 146);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 17;
			this->pictureBox1->TabStop = false;
			// 
			// DronForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(695, 388);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnUpdate);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->dgvDrons);
			this->Controls->Add(this->txtMaximunDistance);
			this->Controls->Add(this->txtLoadCapacity);
			this->Controls->Add(this->txtBatteryAvailableTime);
			this->Controls->Add(this->txtType);
			this->Controls->Add(this->txtSerialNumber);
			this->Controls->Add(this->txtName);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"DronForm1";
			this->Text = L"Mantenimiento";
			this->Load += gcnew System::EventHandler(this, &DronForm1::DronForm1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvDrons))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		
	private: System::Void archivoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void salirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
		
	}
	private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
		Dron^ dron1 = gcnew Dron();
		dron1->	Nombre = txtName->Text;
		dron1->Serialnumber = Int32::Parse(txtSerialNumber->Text);
		dron1->Type = txtType->Text;
		dron1->Batteryavailabletime = Int32::Parse(txtBatteryAvailableTime->Text);
		dron1->Loadcapacity = Int32::Parse(txtLoadCapacity->Text);
		dron1->Maximumdistance = Int32::Parse(txtMaximunDistance->Text);

		Controller::AddDron(dron1);

		RefreshDron();

	}
		   void RefreshDron() {

			   List<Dron^>^ dronList1 = Controller::QueryAllDrons();
			   dgvDrons->Rows->Clear();

			   for (int i = 0; i < dronList1->Count; i++) {

				   dgvDrons->Rows->Add(gcnew array<String^>{
				   
					    dronList1[i]->Nombre,
						"" + dronList1[i]->Serialnumber,
						dronList1[i]->Type,
						"" + dronList1[i]->Batteryavailabletime,
						"" + dronList1[i]->Loadcapacity,
						"" + dronList1[i]->Maximumdistance
				   });

			   }


		   }
	private: System::Void dgvDrons_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		int selectedRowIndexx = dgvDrons->SelectedCells[0]->RowIndex;
		int dronSerialNumbers =Int32::Parse(dgvDrons->Rows[selectedRowIndexx]->Cells[0]->Value->ToString());//error//
		Dron^ dron2 = Controller::QueryDronBySerialNumber(dronSerialNumbers);
		txtName->Text = dron2->Nombre;
		txtSerialNumber->Text = "" + dron2->Serialnumber;
		txtType->Text = dron2->Type;
		txtBatteryAvailableTime->Text = "" + dron2->Batteryavailabletime;
		txtLoadCapacity->Text = "" + dron2->Loadcapacity;
		txtMaximunDistance->Text = "" + dron2->Maximumdistance;
	}

	private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
		Dron^ dron3 = gcnew Dron();
		dron3->Nombre = txtName->Text;
		dron3->Serialnumber = Int32::Parse(txtSerialNumber->Text);
		dron3->Type = txtType->Text;
		dron3->Batteryavailabletime = Int32::Parse(txtBatteryAvailableTime->Text);
		dron3->Loadcapacity = Int32::Parse(txtLoadCapacity->Text);
		dron3->Maximumdistance = Int32::Parse(txtMaximunDistance->Text);
		Controller::UpdateDron(dron3);

		RefreshDron();
	}

private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
		Controller::DeleteDron(Int32::Parse(txtName->Text));
		RefreshDron();

}
private: System::Void nuevoToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	btnAdd->Enabled = true;
	btnUpdate->Enabled = false;
	btnDelete->Enabled = false;
	CleanControls();
}
	   void CleanControls() {
		   txtName->Text = "";
		   txtType->Text = "";
		   txtSerialNumber->Text = "";
		   txtLoadCapacity->Text = "";
		   txtMaximunDistance->Text = "";
		   txtBatteryAvailableTime->Text = "";
	   }
private: System::Void editarToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	btnAdd->Enabled = false;
	btnUpdate->Enabled = true;
	btnDelete->Enabled = true;

}
private: System::Void DronForm1_Load(System::Object^ sender, System::EventArgs^ e) {
	RefreshDron();
}
};
}
