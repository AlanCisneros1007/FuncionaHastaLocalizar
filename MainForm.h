#pragma once
#include "Agregar.h"
#include "Baja.h"
#include "Localizar.h"
#include <string.h>

struct Personas {

	unsigned int clavemaquina = 0;
	char nombremaquina[30] = "";
	char nombreproveedor[30] = "";
	char numerocelular[11] = "";
	char correoelectronico[40] = "";

	
};
Personas registros[50];

bool validarCadena(char cadena[]);
void Baja(System::String^ clave);

namespace ProyectoInterfazGrafica {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::Label^ label1;

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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->radioButton5);
			this->groupBox1->Controls->Add(this->radioButton4);
			this->groupBox1->Controls->Add(this->radioButton3);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Location = System::Drawing::Point(97, 94);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(243, 210);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Enter += gcnew System::EventHandler(this, &MainForm::groupBox1_Enter);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(70, 20);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(101, 17);
			this->radioButton1->TabIndex = 0;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Agregar Usuario";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(70, 44);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(95, 17);
			this->radioButton2->TabIndex = 1;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Borrar usuarios";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(70, 68);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(109, 17);
			this->radioButton3->TabIndex = 2;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Localizar usuarios";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(70, 92);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(63, 17);
			this->radioButton4->TabIndex = 3;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"Ordenar";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(70, 116);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(45, 17);
			this->radioButton5->TabIndex = 4;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"Salir";
			this->radioButton5->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(70, 153);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Go";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei UI", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(152, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(151, 28);
			this->label1->TabIndex = 1;
			this->label1->Text = L"C++ Program";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(455, 374);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (radioButton1->Checked) {
		std::ifstream archivo;
		int i = 0; 	int clavemaquina = 0, fail = 0; bool yaExiste = false;
		Agregar^ ag = gcnew Agregar();
		ag->ShowDialog();
		String^ texto2 = ag->getTexto();
		msclr::interop::marshal_context context;
		std::string std_string = context.marshal_as<std::string>(texto2);
		char texto[100] = "";
		strcpy_s(texto, std_string.c_str());
		char nm[30] = ""; char np[30] = ""; char nc[11] = ""; char ce[40] = "";
		archivo.open(texto, std::ios::in);

		if (archivo.fail()) {
			MessageBox::Show("El archivo no se pudo abrir o no existe. ", "Mensaje de ERROR");
		}
		else {
			while (!archivo.eof()) {

				while (registros[i].clavemaquina != 0) {
					i++;
				};

				if (registros[i].clavemaquina == 0 && i < 50) {
					yaExiste = false;
					clavemaquina = 0;
					archivo >> clavemaquina;
					char ncp[40];

					if (clavemaquina != 0) {
						archivo >> nm;
						archivo >> np;
						archivo >> ncp;
						if (strlen(ncp) < 11) {
							strcpy_s(nc, ncp);
						}
						else {
							MessageBox::Show("El usuario con matricula ["+clavemaquina +"] tiene un numero que excede los 10 digitos. ");
							strcpy_s(nc, "error");
						}
						archivo >> ce;
					}


					for (int i = 0; i < 50; i++) {
						if (clavemaquina != 0 && registros[i].clavemaquina == clavemaquina) {
							yaExiste = true;
							MessageBox::Show("El usuario con clave de maquina [" + clavemaquina + "] ya existe, no fue registrado. ");
						}
					}
/*
					if (validarCorreo(ce, 1) == 0) {
						cout << "Correo equivocado en la maquina con clave [" << clavemaquina << "]. Corriga para poder registrarla. " << endl;
					}

					if (validarCadena(nm) == 0) {
						MessageBox::Show("Nombre de la maquina equivocado en la maquina con clave [" + clavemaquina + "]. Corriga para poder registrarla. ");
					}

					if (validarCadena(np) == 0) {
						cout << "Nombre de proveedor equivocado en la maquina con clave [" + clavemaquina + "]. Corriga para poder registrarla. " << endl;
					}

					if (validarTelefono(nc) == 0) {
						MessageBox::Show("Telefono equivocado en la maquina con clave [" << clavemaquina << "]. Corriga para poder registrarla. ");
					}

					if (clavemaquina != 0 && validarRangoClave(clavemaquina) == 0) {
						MessageBox::Show("Clave no está en el rango requerido [XXXX] en la maquina con clave [" + clavemaquina + "]. Corriga para poder registrarla. ");
					}
					*/
					if (/*validarRangoClave(clavemaquina) && validarCorreo(ce, 0) && */validarCadena(nm) && validarCadena(np) == 1 && yaExiste == false && clavemaquina != 0 /*&& validarTelefono(nc) == 1 */&& nc != "error") {
						registros[i].clavemaquina = clavemaquina;
						strcpy_s(registros[i].nombremaquina, nm);
						strcpy_s(registros[i].nombreproveedor, np);
						strcpy_s(registros[i].numerocelular, nc);
						strcpy_s(registros[i].correoelectronico, ce);
						MessageBox::Show( "Maquina [" + clavemaquina + "] registrada en posicion [" + i + "]" );
						i++;
					}

				}
			}

			if (i > 50) {
				MessageBox::Show("Se ha excedido el numero maximo de registros, por favor borre o reinicie la aplicacion.\n ");
			}
		}
		archivo.close();

		for (int i = 0; i < 50; i++) {
			if (registros[i].clavemaquina != 0) {
				String^ x1 = gcnew String(registros[i].nombremaquina);
				String^ x2 = gcnew String(registros[i].nombreproveedor);
				String^ x3 = gcnew String(registros[i].numerocelular);
				String^ x4 = gcnew String(registros[i].correoelectronico);
				String^ final = "Nombre de la maquina: " + x1 + "\n" + "Nombre del proveedor:" + x2 + "\n" + "Numero celular: " + x3 + "\n" + "Correo electronico: " + x4 + "\n";
				MessageBox::Show("Clave de la maquina: " + registros[i].clavemaquina + "\n" + final);
			}
		}
	}

	if (radioButton2->Checked) {
		Baja^ b = gcnew Baja();
		b->ShowDialog();
		System::String^ texto2 = b->getTexto();
		msclr::interop::marshal_context context;
		std::string std_string = context.marshal_as<std::string>(texto2);
		char texto[100] = "";
		strcpy_s(texto, std_string.c_str());
		char vacio[10] = "";
		bool encontrado = false;

		for (int i = 0; i < 50; i++) {
			System::String^ s = registros[i].clavemaquina.ToString();
			if (s == texto2 && texto2 != "0") {
				System::Windows::Forms::MessageBox::Show("El usuario ha sido de baja con exito. ");
				registros[i].clavemaquina = 0;
				strcpy_s(registros[i].nombremaquina, vacio);
				strcpy_s(registros[i].nombreproveedor, vacio);
				strcpy_s(registros[i].numerocelular, vacio);
				strcpy_s(registros[i].correoelectronico, vacio);

				encontrado = true;
			}
		}
		if (encontrado == false) {
			System::Windows::Forms::MessageBox::Show("Lo sentimos, el ID no existe en la base de datos. ");
		}

		}
	if (radioButton3->Checked) {
		Localizar^ lo = gcnew Localizar();
		lo->ShowDialog();
		String^ texto2 = lo->getTexto();

		bool encontrado = false;
		for (int i = 0; i < 50; i++) {
			System::String^ s = registros[i].clavemaquina.ToString();
			if (s == texto2 && texto2 != "0") {
				String^ x1 = gcnew String(registros[i].nombremaquina);
				String^ x2 = gcnew String(registros[i].nombreproveedor);
				String^ x3 = gcnew String(registros[i].numerocelular);
				String^ x4 = gcnew String(registros[i].correoelectronico);
				String^ final = "Nombre de la maquina: "+x1 + "\n" +"Nombre del proveedor:"+ x2 + "\n"+"Numero celular: "+x3+"\n"+"Correo electronico: "+x4+"\n";
				MessageBox::Show("Clave de la maquina: " + registros[i].clavemaquina+"\n"+final);
				encontrado = true;
			}
		}

		if (encontrado == false) {
			MessageBox::Show("No se pudo localizar la máquina con esta clave. ");
		}
	}
	if (radioButton4->Checked) {

	}

	
	if (radioButton5->Checked) {
		exit(9);
	}

}
};
}

bool validarCadena(char cadena[]) {
	bool valCadena = true;
	for (int i = 0; i < strlen(cadena); i++) {
		if (isdigit(cadena[i]) != 0) valCadena = false;
	}
	return valCadena;
}
