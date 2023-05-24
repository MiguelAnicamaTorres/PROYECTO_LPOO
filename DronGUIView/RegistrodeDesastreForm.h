#pragma once

namespace DronGUIView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace DronController;
	using namespace dronmodel;
	/// <summary>
	/// Resumen de RegistrodeDesastreForm
	/// </summary>
	public ref class RegistrodeDesastreForm : public System::Windows::Forms::Form
	{
	public:
		RegistrodeDesastreForm(void)
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
		~RegistrodeDesastreForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Label^ Tipo_txt;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtDisasterType;
	private: System::Windows::Forms::TextBox^ txtPosition;


	private: System::Windows::Forms::TextBox^ txtDate;
	private: System::Windows::Forms::Button^ btnAddDisaster;
	private: System::Windows::Forms::Button^ btnEditDisaster;
	private: System::Windows::Forms::Button^ btnDeleteDisaster;





	private: System::Windows::Forms::DataGridView^ dgvND;

	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DisasterName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Disastertype;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Disasterdate;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DisasterPosition;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ txtDisasterName;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ archivoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ nuevoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ editarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem;





	protected:


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
			this->Tipo_txt = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtDisasterType = (gcnew System::Windows::Forms::TextBox());
			this->txtPosition = (gcnew System::Windows::Forms::TextBox());
			this->txtDate = (gcnew System::Windows::Forms::TextBox());
			this->btnAddDisaster = (gcnew System::Windows::Forms::Button());
			this->btnEditDisaster = (gcnew System::Windows::Forms::Button());
			this->btnDeleteDisaster = (gcnew System::Windows::Forms::Button());
			this->dgvND = (gcnew System::Windows::Forms::DataGridView());
			this->DisasterName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Disastertype = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Disasterdate = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DisasterPosition = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtDisasterName = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->archivoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nuevoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->editarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvND))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// Tipo_txt
			// 
			this->Tipo_txt->AutoSize = true;
			this->Tipo_txt->Location = System::Drawing::Point(282, 108);
			this->Tipo_txt->Name = L"Tipo_txt";
			this->Tipo_txt->Size = System::Drawing::Size(31, 13);
			this->Tipo_txt->TabIndex = 1;
			this->Tipo_txt->Text = L"Type";
			this->Tipo_txt->Click += gcnew System::EventHandler(this, &RegistrodeDesastreForm::label1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(282, 66);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Position";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(46, 116);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(33, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Date:";
			// 
			// txtDisasterType
			// 
			this->txtDisasterType->Location = System::Drawing::Point(373, 108);
			this->txtDisasterType->Name = L"txtDisasterType";
			this->txtDisasterType->Size = System::Drawing::Size(100, 20);
			this->txtDisasterType->TabIndex = 4;
			// 
			// txtPosition
			// 
			this->txtPosition->Location = System::Drawing::Point(373, 66);
			this->txtPosition->Name = L"txtPosition";
			this->txtPosition->Size = System::Drawing::Size(100, 20);
			this->txtPosition->TabIndex = 5;
			// 
			// txtDate
			// 
			this->txtDate->Location = System::Drawing::Point(137, 108);
			this->txtDate->Name = L"txtDate";
			this->txtDate->Size = System::Drawing::Size(100, 20);
			this->txtDate->TabIndex = 6;
			// 
			// btnAddDisaster
			// 
			this->btnAddDisaster->Location = System::Drawing::Point(49, 157);
			this->btnAddDisaster->Name = L"btnAddDisaster";
			this->btnAddDisaster->Size = System::Drawing::Size(75, 23);
			this->btnAddDisaster->TabIndex = 7;
			this->btnAddDisaster->Text = L"Agregar";
			this->btnAddDisaster->UseVisualStyleBackColor = true;
			this->btnAddDisaster->Click += gcnew System::EventHandler(this, &RegistrodeDesastreForm::button1_Click);
			// 
			// btnEditDisaster
			// 
			this->btnEditDisaster->Location = System::Drawing::Point(220, 156);
			this->btnEditDisaster->Name = L"btnEditDisaster";
			this->btnEditDisaster->Size = System::Drawing::Size(75, 23);
			this->btnEditDisaster->TabIndex = 8;
			this->btnEditDisaster->Text = L"Modificar";
			this->btnEditDisaster->UseVisualStyleBackColor = true;
			this->btnEditDisaster->Click += gcnew System::EventHandler(this, &RegistrodeDesastreForm::btnEditDisaster_Click);
			// 
			// btnDeleteDisaster
			// 
			this->btnDeleteDisaster->Location = System::Drawing::Point(398, 156);
			this->btnDeleteDisaster->Name = L"btnDeleteDisaster";
			this->btnDeleteDisaster->Size = System::Drawing::Size(75, 23);
			this->btnDeleteDisaster->TabIndex = 9;
			this->btnDeleteDisaster->Text = L"Eliminar";
			this->btnDeleteDisaster->UseVisualStyleBackColor = true;
			this->btnDeleteDisaster->Click += gcnew System::EventHandler(this, &RegistrodeDesastreForm::btnDeleteDisaster_Click);
			// 
			// dgvND
			// 
			this->dgvND->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvND->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->DisasterName, this->Disastertype,
					this->Disasterdate, this->DisasterPosition
			});
			this->dgvND->Location = System::Drawing::Point(63, 203);
			this->dgvND->Margin = System::Windows::Forms::Padding(2);
			this->dgvND->Name = L"dgvND";
			this->dgvND->RowHeadersWidth = 51;
			this->dgvND->RowTemplate->Height = 24;
			this->dgvND->Size = System::Drawing::Size(409, 122);
			this->dgvND->TabIndex = 10;
			this->dgvND->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &RegistrodeDesastreForm::dgvND_CellClick);
			// 
			// DisasterName
			// 
			this->DisasterName->HeaderText = L"Nombre";
			this->DisasterName->MinimumWidth = 6;
			this->DisasterName->Name = L"DisasterName";
			this->DisasterName->Width = 125;
			// 
			// Disastertype
			// 
			this->Disastertype->HeaderText = L"Tipo";
			this->Disastertype->MinimumWidth = 6;
			this->Disastertype->Name = L"Disastertype";
			this->Disastertype->Width = 125;
			// 
			// Disasterdate
			// 
			this->Disasterdate->HeaderText = L"Fecha";
			this->Disasterdate->MinimumWidth = 6;
			this->Disasterdate->Name = L"Disasterdate";
			this->Disasterdate->Width = 125;
			// 
			// DisasterPosition
			// 
			this->DisasterPosition->HeaderText = L"Posicion";
			this->DisasterPosition->MinimumWidth = 6;
			this->DisasterPosition->Name = L"DisasterPosition";
			this->DisasterPosition->Width = 125;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(46, 68);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 13);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Name";
			// 
			// txtDisasterName
			// 
			this->txtDisasterName->Location = System::Drawing::Point(137, 66);
			this->txtDisasterName->Margin = System::Windows::Forms::Padding(2);
			this->txtDisasterName->Name = L"txtDisasterName";
			this->txtDisasterName->Size = System::Drawing::Size(76, 20);
			this->txtDisasterName->TabIndex = 12;
			// 
			// menuStrip1
			// 
			this->menuStrip1->AllowMerge = false;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->archivoToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(524, 24);
			this->menuStrip1->TabIndex = 13;
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
			// 
			// nuevoToolStripMenuItem
			// 
			this->nuevoToolStripMenuItem->Name = L"nuevoToolStripMenuItem";
			this->nuevoToolStripMenuItem->Size = System::Drawing::Size(109, 22);
			this->nuevoToolStripMenuItem->Text = L"Nuevo";
			// 
			// editarToolStripMenuItem
			// 
			this->editarToolStripMenuItem->Name = L"editarToolStripMenuItem";
			this->editarToolStripMenuItem->Size = System::Drawing::Size(109, 22);
			this->editarToolStripMenuItem->Text = L"Editar";
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(109, 22);
			this->salirToolStripMenuItem->Text = L"Salir";
			this->salirToolStripMenuItem->Click += gcnew System::EventHandler(this, &RegistrodeDesastreForm::salirToolStripMenuItem_Click);
			// 
			// RegistrodeDesastreForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(524, 372);
			this->Controls->Add(this->txtDisasterName);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->dgvND);
			this->Controls->Add(this->btnDeleteDisaster);
			this->Controls->Add(this->btnEditDisaster);
			this->Controls->Add(this->btnAddDisaster);
			this->Controls->Add(this->txtDate);
			this->Controls->Add(this->txtPosition);
			this->Controls->Add(this->txtDisasterType);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Tipo_txt);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"RegistrodeDesastreForm";
			this->Text = L"RegistrodeDesastreForm";
			this->Load += gcnew System::EventHandler(this, &RegistrodeDesastreForm::RegistrodeDesastreForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvND))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void RegistrodeDesastreForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}	
	private: System::Void Salir_RD_Txt_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		NaturalDisaster^ ND = gcnew NaturalDisaster();
		ND->Name = txtDisasterName->Text;
		ND->Type = txtDisasterType->Text;
		//ND->DisasterPos = Int32::Parse(txtPosition->Text);// error
		ND->Date = txtDate->Text;
		Controller::AddDisaster(ND);
	
		RefreshDisaster();
	}	

		   void RefreshDisaster() {

			   List<NaturalDisaster^>^ NDList = Controller::QueryAllDisasters();
			   dgvND->Rows->Clear();

			   for (int i = 0; i < NDList->Count; i++) {

				   dgvND->Rows->Add(gcnew array<String^>{

					   NDList[i]->Name,
						   NDList[i]->Type,
						   NDList[i]->Date,
						   "" + NDList[i]->DisasterPos,
						   
				   });

			   }


		   }
	
private: System::Void salirToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	this -> Close();

}
private: System::Void dgvND_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	int selectedRowIndex = dgvND->SelectedCells[0]->RowIndex;
	int Name_desastre = Int32::Parse(dgvND->Rows[selectedRowIndex]->Cells[0]->Value->ToString());
	NaturalDisaster^ disaster = Controller::QueryDisaster(Name_desastre);
	txtDisasterName->Text = "" + disaster->Name;
	txtDisasterType->Text = disaster->Type;
	//txtPosition->Text = 
	txtDate->Text = disaster-> Date;

}
private: System::Void btnEditDisaster_Click(System::Object^ sender, System::EventArgs^ e) {
	NaturalDisaster^ ND = gcnew NaturalDisaster();
	ND->Name = txtDisasterName->Text;
	ND->Type = txtDisasterType->Text;
	//ND->DisasterPos = Int32::Parse(txtPosition->Text);// error
	ND->Date = txtDate->Text;
	Controller::UpdateDisaster(ND);

	RefreshDisaster();
}
private: System::Void btnDeleteDisaster_Click(System::Object^ sender, System::EventArgs^ e) {
	Controller::DeleteDisaster(Int32::Parse(txtDisasterName->Text));

	RefreshDisaster();

}
};

}
