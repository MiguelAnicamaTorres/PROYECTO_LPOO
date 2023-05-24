#pragma once

namespace DronGUIView {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MapaAppiForm
	/// </summary>
	public ref class MapaAppiForm : public System::Windows::Forms::Form
	{
	public:
		MapaAppiForm(void)
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
		~MapaAppiForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ mapa_appi_txt;
	private: System::Windows::Forms::Button^ Salir_ma_txt;
	protected:

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
			this->mapa_appi_txt = (gcnew System::Windows::Forms::Label());
			this->Salir_ma_txt = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// mapa_appi_txt
			// 
			this->mapa_appi_txt->AutoSize = true;
			this->mapa_appi_txt->Location = System::Drawing::Point(25, 36);
			this->mapa_appi_txt->Name = L"mapa_appi_txt";
			this->mapa_appi_txt->Size = System::Drawing::Size(34, 13);
			this->mapa_appi_txt->TabIndex = 0;
			this->mapa_appi_txt->Text = L"Mapa";
			// 
			// Salir_ma_txt
			// 
			this->Salir_ma_txt->Location = System::Drawing::Point(104, 207);
			this->Salir_ma_txt->Name = L"Salir_ma_txt";
			this->Salir_ma_txt->Size = System::Drawing::Size(75, 23);
			this->Salir_ma_txt->TabIndex = 1;
			this->Salir_ma_txt->Text = L"Salir";
			this->Salir_ma_txt->UseVisualStyleBackColor = true;
			this->Salir_ma_txt->Click += gcnew System::EventHandler(this, &MapaAppiForm::Salir_ma_txt_Click);
			// 
			// MapaAppiForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->Salir_ma_txt);
			this->Controls->Add(this->mapa_appi_txt);
			this->Name = L"MapaAppiForm";
			this->Text = L"MapaAppiForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Salir_ma_txt_Click(System::Object^ sender, System::EventArgs^ e) {
		Close();
	}
	};
}
