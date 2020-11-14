#pragma once
#include <msclr\marshal_cppstd.h>
#include <iostream>
#include <fstream>
#include <string>





namespace ProyectoInterfazGrafica {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	
	/// <summary>
	/// Resumen de Agregar
	/// </summary>
	public ref class Agregar : public System::Windows::Forms::Form
	{
	public:
		Agregar(void)
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
		~Agregar()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;

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
	
	
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(135, 113);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(164, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Registrar usuarios mediante .TXT";
			this->label1->Click += gcnew System::EventHandler(this, &Agregar::label1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(138, 154);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(161, 20);
			this->textBox1->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(180, 210);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Agregar::button1_Click);
			// 
			// Agregar
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(455, 374);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Name = L"Agregar";
			this->Text = L"Agregar";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	public: String^ getTexto() {
			   return textBox1->Text;
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		/*std::ifstream archivo;
		String^ hola = this->textBox1->Text;
		msclr::interop::marshal_context context;
		std::string std_string = context.marshal_as<std::string>(textBox1->Text);
		
		strcpy_s(texto, std_string.c_str());*/
		/*int i = 0;
		archivo.open(texto, std::ios::in);

		if (archivo.fail()) {
			MessageBox::Show("El archivo no se pudo abrir o no existe. ","Mensaje de ERROR");
		}
		else {
			MessageBox::Show("El archivo existe. ", "Mensaje de APPROVAL");
		}
		archivo.close();
	*/
		Close();
	}
	};
}

