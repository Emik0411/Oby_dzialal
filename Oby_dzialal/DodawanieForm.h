#pragma once

//#include "SkladnikiForm.h"
#include "Skladka.h"



namespace Obydzialal {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;

	using namespace System::IO; // do zapisywania w pliku
	/// <summary>
	/// Podsumowanie informacji o DodawanieForm
	/// </summary>
	/// 
	/// 
	/// 



	public ref class DodawanieForm : public System::Windows::Forms::Form
	{
	public:
		Form^ obj;
		String^ nazwa = "";
		int^ IDDodawanie;
		DodawanieForm(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}
		DodawanieForm(Form^ obj1)
		{
			obj = obj1;
			InitializeComponent();
			
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyść wszystkie używane zasoby.
		/// </summary>
		~DodawanieForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::PictureBox^ pictureBox1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(DodawanieForm::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button1->Font = (gcnew System::Drawing::Font(L"Century", 15));
			this->button1->Location = System::Drawing::Point(289, 35);
			this->button1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(200, 75);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Oglądanie";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &DodawanieForm::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::WhiteSmoke;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Century", 20));
			this->textBox2->Location = System::Drawing::Point(87, 199);
			this->textBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(589, 48);
			this->textBox2->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century", 15));
			this->label1->Location = System::Drawing::Point(82, 147);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(198, 29);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Nazwa przepisu";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button2->Font = (gcnew System::Drawing::Font(L"Century", 15));
			this->button2->Location = System::Drawing::Point(1031, 506);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(200, 75);
			this->button2->TabIndex = 6;
			this->button2->Text = L"Zapisz";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &DodawanieForm::button2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(56, 441);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(0, 16);
			this->label3->TabIndex = 7;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button3->Font = (gcnew System::Drawing::Font(L"Century", 15));
			this->button3->Location = System::Drawing::Point(38, 35);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(200, 75);
			this->button3->TabIndex = 8;
			this->button3->Text = L"Dodawanie";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &DodawanieForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button4->Font = (gcnew System::Drawing::Font(L"Century", 15));
			this->button4->Location = System::Drawing::Point(1031, 411);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(200, 75);
			this->button4->TabIndex = 9;
			this->button4->Text = L"Zdjęcie";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &DodawanieForm::button4_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Location = System::Drawing::Point(87, 268);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(833, 343);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 10;
			this->pictureBox1->TabStop = false;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century", 20));
			this->label4->Location = System::Drawing::Point(689, 50);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(381, 40);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Krok 1.  Tytuł przepisu";
			// 
			// DodawanieForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::WhiteSmoke;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1332, 653);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button1);
			this->Cursor = System::Windows::Forms::Cursors::Cross;
			this->Font = (gcnew System::Drawing::Font(L"Century", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->MaximumSize = System::Drawing::Size(1350, 700);
			this->MinimumSize = System::Drawing::Size(1350, 700);
			this->Name = L"DodawanieForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Książka z przepisami";
			this->Load += gcnew System::EventHandler(this, &DodawanieForm::DodawanieForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		String^ connString = "Server=localhost;port=3306;database=dbshop;uid=root;password=root";

		MySqlConnection^ conn = gcnew MySqlConnection(connString);

	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		// Przejście do głównego okna
		this->Hide();
		obj->Show();
	}
	private: System::Void DodawanieForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		// Zapisywanie nazwy i zdjęcia przepisu
		String^ Nazwa = textBox2->Text;
		if (Nazwa != "")
		{
			conn->Open();

			String^ cmdString = "INSERT INTO Wszystkie_przepisy (Nazwa_przepisu, Istnienie, Zdjecie_przepisu) VALUES (@Nazwa, @Istnienie, @zdjecie)";
			MySqlCommand^ cmd = gcnew MySqlCommand(cmdString, conn);
			cmd->Parameters->AddWithValue("@Nazwa", Nazwa);
			cmd->Parameters->AddWithValue("@Istnienie", "Tak");
			if (nazwa != "")
			{
				cmd->Parameters->AddWithValue("@zdjecie", "tytul.png");
			}
			else
			{
				cmd->Parameters->AddWithValue("@zdjecie", "no");
			}
			cmd->ExecuteNonQuery();
			String^ cmd1String = "SELECT LAST_INSERT_ID()";
			MySqlCommand^ cmd1 = gcnew MySqlCommand(cmd1String, conn);
			MySqlDataReader^ reader = cmd1->ExecuteReader();

			reader->Read();
			String^ id_string = reader->GetString(0);
			int^ id = reader->GetInt32(0);
			id = id;

			conn->Close();

			Skladka^ ss = gcnew Skladka();
			ss->Numer = id;
			ss->ShowDialog();
			ss->StartPosition = FormStartPosition::Manual;
			ss->Location = this->Location;
			this->Hide();
			
			System::IO::Directory::CreateDirectory("Pliki\\" + id_string);

			if (nazwa != "")
			{
				Bitmap^ bit = gcnew Bitmap(nazwa);
				SaveFileDialog^ zapisek = gcnew SaveFileDialog;
				String^ tytul = "Pliki\\" + id_string + "\\" + "tytul.png";
				bit->Save(tytul);
			}
		}
		else
		{
			MessageBox::Show("Nie podałeś nazwy przepisu!", "Brak nazwy!",
			MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		// Odświeżanie okna
		textBox2->Clear();
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		// Dodawanie zdjęcia
		Stream^ Mystreamdodatek;
		OpenFileDialog^ openFileDialogDodatek = gcnew OpenFileDialog;
		if (openFileDialogDodatek->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			if ((Mystreamdodatek = openFileDialogDodatek->OpenFile()) != nullptr)
			{
				nazwa = openFileDialogDodatek->FileName;
				Mystreamdodatek->Close();
			}
		}
		Bitmap^ bit = gcnew Bitmap(nazwa);
		pictureBox1->Image = bit;
	}
	};
}
