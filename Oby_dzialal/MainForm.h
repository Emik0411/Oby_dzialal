#pragma once
#include "DodawanieForm.h"
#include "SkladnikiForm.h"
#include "PrzygotowanieForm.h"
#include "przeglad.h"
#include "Skladka.h"

#include <string>



namespace Obydzialal {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;



	/// <summary>
	/// Podsumowanie informacji o MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		
		MainForm(void)
		{
			InitializeComponent();


			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyść wszystkie używane zasoby.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Label^ label1;

	protected:

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obsługi projektanta — nie należy modyfikować
		/// jej zawartości w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button1->Cursor = System::Windows::Forms::Cursors::Default;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Century", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button1->Location = System::Drawing::Point(50, 40);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(250, 100);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Dodawanie";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->listBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->listBox1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Century", 20));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 39;
			this->listBox1->Location = System::Drawing::Point(300, 190);
			this->listBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(648, 431);
			this->listBox1->TabIndex = 2;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button2->Font = (gcnew System::Drawing::Font(L"Century", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::ControlText;
			this->button2->Location = System::Drawing::Point(340, 40);
			this->button2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(250, 100);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Oglądanie";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MainForm::button2_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button5->Font = (gcnew System::Drawing::Font(L"Century", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(970, 190);
			this->button5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(250, 100);
			this->button5->TabIndex = 7;
			this->button5->Text = L"Wybierz";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MainForm::button5_Click);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1332, 653);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->DoubleBuffered = true;
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(254)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->MaximumSize = System::Drawing::Size(1350, 700);
			this->MinimumSize = System::Drawing::Size(1350, 700);
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Książka z przepisami";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		String^ connString = "Server=localhost;port=3306;database=dbshop;uid=root;password=root";

		MySqlConnection^ conn = gcnew MySqlConnection(connString);


	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		// Przejście na formularz DodawanieForm
		DodawanieForm^ obj1 = gcnew DodawanieForm(this);
		obj1->StartPosition = FormStartPosition::Manual;
		obj1->Location = this->Location;
		obj1->ShowDialog();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		// Odświeżanie listy przepisów
		listBox1->Items->Clear();

		conn->Open();

		String^ cmdString1 = "SELECT Nazwa_przepisu FROM Wszystkie_przepisy WHERE Istnienie = 'Tak'";
		MySqlCommand^ cmd1 = gcnew MySqlCommand(cmdString1, conn);

		MySqlDataReader^ reader;
		reader = cmd1->ExecuteReader();
		while (reader->Read())
		{
			String^ nazwa;
			nazwa = reader->GetString("nazwa_przepisu");
			listBox1->Items->Add(nazwa);
		}

		conn->Close();
	}
	private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
		// Otwieranie aplikacji 
		listBox1->Items->Clear();

		conn->Open();

		String^ cmdString = "SELECT Nazwa_przepisu FROM Wszystkie_przepisy WHERE Istnienie = 'Tak'";
		MySqlCommand^ cmd = gcnew MySqlCommand(cmdString, conn);

		MySqlDataReader^ reader;
		reader = cmd->ExecuteReader();
		while (reader->Read())
		{
			String^ nazwa;
			nazwa = reader->GetString("nazwa_przepisu");
			listBox1->Items->Add(nazwa);
		}

		conn->Close();
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		// Przejście do szczegółów przepisu
		if (listBox1->SelectedIndex >= 0)
		{
			this->Hide();
			przeglad^ objprzeglad = gcnew przeglad(this);
			objprzeglad->StartPosition = FormStartPosition::Manual;
			objprzeglad->Location = this->Location;

			String^ nazwa_przepisu = listBox1->SelectedItem->ToString();

			conn->Open();

			String^ cmdString = "SELECT ID_przepisu FROM Wszystkie_przepisy WHERE nazwa_przepisu = '" + nazwa_przepisu + "'";
			MySqlCommand^ cmd = gcnew MySqlCommand(cmdString, conn);

			MySqlDataReader^ reader;
			reader = cmd->ExecuteReader();
			while (reader->Read())
			{
				int^ nazwa;
				nazwa = reader->GetInt32("ID_przepisu");
				objprzeglad->Id_przepisu = nazwa;
			}

			conn->Close();

			objprzeglad->ShowDialog();
		}
	}
};
}
