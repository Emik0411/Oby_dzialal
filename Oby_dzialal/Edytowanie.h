#pragma once
#include <string>
//#include "przeglad.h"

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
	/// Podsumowanie informacji o Edytowanie
	/// </summary>
	public ref class Edytowanie : public System::Windows::Forms::Form
	{
		
	
	public:
		int Kroczek = 1;
		Form^ Edycjee;
		int^ NumerprzygotowaniaMain;
		String^ nazwa;
		int^ Id_przepisuob;
		int index;
		Edytowanie(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}
		Edytowanie(Form^ Edycje)
		{
			Edycjee = Edycje;
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyść wszystkie używane zasoby.
		/// </summary>
		~Edytowanie()
		{
			if (components)
			{
				delete components;
			}
		}
	
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ Zapisz;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::ListBox^ listBox2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Edytowanie::typeid));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->Zapisz = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button1->Font = (gcnew System::Drawing::Font(L"Century", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(559, 566);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(200, 75);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Koniec";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Edytowanie::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Century", 12));
			this->textBox1->Location = System::Drawing::Point(22, 74);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(381, 32);
			this->textBox1->TabIndex = 1;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Location = System::Drawing::Point(504, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(255, 313);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 14;
			this->pictureBox1->TabStop = false;
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Century", 12));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 23;
			this->listBox1->Location = System::Drawing::Point(34, 281);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(254, 280);
			this->listBox1->TabIndex = 15;
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button2->Font = (gcnew System::Drawing::Font(L"Century", 15));
			this->button2->Location = System::Drawing::Point(308, 447);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(200, 75);
			this->button2->TabIndex = 16;
			this->button2->Text = L"Usuń";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Edytowanie::button2_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Century", 12));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"gram", L"dekagram", L"kilogram", L"litr", L"mililitr",
					L"Łyżka", L"Łyżeczka", L"Szklanka", L"Szczypta", L"Sztuka"
			});
			this->comboBox1->Location = System::Drawing::Point(347, 294);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(136, 31);
			this->comboBox1->TabIndex = 20;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->numericUpDown1->Font = (gcnew System::Drawing::Font(L"Century", 12));
			this->numericUpDown1->Location = System::Drawing::Point(347, 243);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(136, 32);
			this->numericUpDown1->TabIndex = 19;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::WhiteSmoke;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Century", 12));
			this->textBox2->Location = System::Drawing::Point(34, 243);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(291, 32);
			this->textBox2->TabIndex = 18;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button4->Font = (gcnew System::Drawing::Font(L"Century", 15));
			this->button4->Location = System::Drawing::Point(308, 366);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(200, 75);
			this->button4->TabIndex = 17;
			this->button4->Text = L"Następny";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Edytowanie::button4_Click);
			// 
			// listBox2
			// 
			this->listBox2->BackColor = System::Drawing::Color::WhiteSmoke;
			this->listBox2->Font = (gcnew System::Drawing::Font(L"Century", 12));
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 23;
			this->listBox2->Location = System::Drawing::Point(773, 269);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(177, 280);
			this->listBox2->TabIndex = 21;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button3->Font = (gcnew System::Drawing::Font(L"Century", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(966, 217);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(150, 45);
			this->button3->TabIndex = 22;
			this->button3->Text = L"Edytuj";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Edytowanie::button3_Click);
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Century", 12));
			this->richTextBox1->Location = System::Drawing::Point(966, 269);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(334, 292);
			this->richTextBox1->TabIndex = 24;
			this->richTextBox1->Text = L"";
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button5->Font = (gcnew System::Drawing::Font(L"Century", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(966, 166);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(150, 45);
			this->button5->TabIndex = 23;
			this->button5->Text = L"Zapisz";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &Edytowanie::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button6->Font = (gcnew System::Drawing::Font(L"Century", 15));
			this->button6->Location = System::Drawing::Point(858, 49);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(200, 75);
			this->button6->TabIndex = 25;
			this->button6->Text = L"Zdjęcie";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &Edytowanie::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button7->Font = (gcnew System::Drawing::Font(L"Century", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button7->Location = System::Drawing::Point(1137, 166);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(163, 97);
			this->button7->TabIndex = 26;
			this->button7->Text = L"Dodaj kolejny";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &Edytowanie::button7_Click);
			// 
			// Zapisz
			// 
			this->Zapisz->BackColor = System::Drawing::Color::WhiteSmoke;
			this->Zapisz->Font = (gcnew System::Drawing::Font(L"Century", 15));
			this->Zapisz->Location = System::Drawing::Point(283, 126);
			this->Zapisz->Name = L"Zapisz";
			this->Zapisz->Size = System::Drawing::Size(200, 75);
			this->Zapisz->TabIndex = 28;
			this->Zapisz->Text = L"Zapisz";
			this->Zapisz->UseVisualStyleBackColor = false;
			this->Zapisz->Click += gcnew System::EventHandler(this, &Edytowanie::Zapisz_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button8->Font = (gcnew System::Drawing::Font(L"Century", 15));
			this->button8->Location = System::Drawing::Point(1100, 49);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(200, 75);
			this->button8->TabIndex = 29;
			this->button8->Text = L"Usuń zdjęcie";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &Edytowanie::button8_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century", 15));
			this->label1->Location = System::Drawing::Point(17, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(198, 29);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Nazwa przepisu";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century", 15));
			this->label2->Location = System::Drawing::Point(768, 217);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(182, 29);
			this->label2->TabIndex = 13;
			this->label2->Text = L"Przygotowanie";
			// 
			// Edytowanie
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1332, 653);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->Zapisz);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->listBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Font = (gcnew System::Drawing::Font(L"Century", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(1350, 700);
			this->MinimumSize = System::Drawing::Size(1350, 700);
			this->Name = L"Edytowanie";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Książka z przepisami";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Edytowanie::Edytowanie_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Edytowanie::Edytowanie_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		String^ connString = "Server=localhost;port=3306;database=dbshop;uid=root;password=root";

		MySqlConnection^ conn = gcnew MySqlConnection(connString);

	private: System::Void Edytowanie_Load(System::Object^ sender, System::EventArgs^ e) {
		// Początek
		conn->Open();

		String^ cmdString = "SELECT ID_skladnika, ilosc_skladnika, jednostka FROM skladniki_do_przepisu WHERE ID_przepisu ='" + Id_przepisuob + "'";
		MySqlCommand^ cmd = gcnew MySqlCommand(cmdString, conn);
		MySqlDataReader^ reader;
		reader = cmd->ExecuteReader();
		while (reader->Read())
		{
			String^ nazwa;
			String^ calosc;
			nazwa = reader->GetString("ID_skladnika");

			calosc = calosc + nazwa;
			nazwa = reader->GetString("ilosc_skladnika");
			calosc = calosc + " - " + nazwa;
			nazwa = reader->GetString("jednostka");
			calosc = calosc + " " + nazwa;

			listBox1->Items->Add(calosc);
			calosc = "";
		}
		conn->Close();

		conn->Open();

		String^ cmdString1 = "SELECT ID_nr_przygotowania, opis FROM przygotowanie_przepisy WHERE ID_przepisu ='" + Id_przepisuob + "'";
		MySqlCommand^ cmd1 = gcnew MySqlCommand(cmdString1, conn);
		String^ calosc1;
		MySqlDataReader^ reader1;
		reader1 = cmd1->ExecuteReader();
		while (reader1->Read())
		{
			String^ nazwa;

			nazwa = reader1->GetString("ID_nr_przygotowania");

			calosc1 = calosc1 + nazwa + ". ";
			nazwa = reader1->GetString("opis");

			calosc1 = calosc1 + nazwa + "\n";
			listBox2->Items->Add(calosc1);
			calosc1 = "";
		}
		conn->Close();

		conn->Open();

		String^ tytulek = "";
		String^ cmdString2 = "SELECT Nazwa_przepisu, Zdjecie_przepisu FROM Wszystkie_przepisy WHERE ID_przepisu = '" + Id_przepisuob + "'";
		MySqlCommand^ cmd2 = gcnew MySqlCommand(cmdString2, conn);
		MySqlDataReader^ reader2;
		reader2 = cmd2->ExecuteReader();
		while (reader2->Read())
		{
			String^ nazwa;
			nazwa = reader2->GetString("Nazwa_przepisu");
			tytulek = reader2->GetString("Zdjecie_przepisu");
			textBox1->Text = nazwa;
		}
		conn->Close();

		String^ direct;
		if (tytulek != "no")
		{
			direct = "Pliki\\" + Id_przepisuob + "\\" + tytulek;
		}
		
		if (File::Exists(direct))
		{
			Bitmap^ bit = gcnew Bitmap(direct);
			pictureBox1->Image = bit;
			nazwa = direct;
			auto Plik = File::OpenRead(direct);
			Plik->Close();
		}
		else
		{
			nazwa = "";
		}
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		// Kończenie edytowania
		this->Hide();
		Refresh();
		Edycjee->Show();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		// Usuwanie składnika
		if (listBox1->SelectedIndex >= 0)
		{
			String^ wszystko = listBox1->SelectedItem->ToString();
			listBox1->Items->Remove(listBox1->SelectedItem->ToString());

			String^ skladniczek = "";
			for (int j = 0; j < wszystko->Length; j++)
			{
				if (wszystko->Substring(j, 1) == "-")
				{
					int dlo = System::Convert::ToInt32(wszystko->Length - j - 2);
					wszystko = wszystko->Substring(j + 2, dlo);
					break;
				}
				skladniczek = skladniczek + wszystko->Substring(j, 1);
			}
			skladniczek = skladniczek->Substring(0, skladniczek->Length - 1);

			String^ ilosci_str;
			for (int j = 0; j < wszystko->Length; j++)
			{
				if (wszystko->Substring(j, 1) == " ")
				{
					int dlug = System::Convert::ToInt32(wszystko->Length);
					wszystko = wszystko->Substring(j, dlug - j);
					break;
				}
				ilosci_str = ilosci_str + wszystko->Substring(j, 1);
			}
			float ilosci = System::Convert::ToDouble(ilosci_str);

			String^ jendostkaa = wszystko->Substring(1, wszystko->Length - 1);
			int id = System::Convert::ToInt32(Id_przepisuob);

			conn->Open();

			String^ cmdString1 = "DELETE FROM skladniki_do_przepisu WHERE ID_przepisu = '" + id + "' and ID_skladnika = '" + skladniczek + "' and ilosc_skladnika = '" + ilosci + "' and jednostka = '" + jendostkaa + "'";
			MySqlCommand^ cmd1 = gcnew MySqlCommand(cmdString1, conn);
			cmd1->ExecuteNonQuery();

			conn->Close();
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		// Edycja kroku
		if (listBox2->SelectedIndex >= 0)
		{
			index = listBox2->SelectedIndex;
			String^ Nazwa = listBox2->SelectedItem->ToString();
			String^ Nowy;

			int^ NumerPrzygotowania;
			for (int i = 0; i < Nazwa->Length; i++)
			{
				if (Nazwa->Substring(i, 1) == ".")
				{
					break;
				}
				else
				{
					Nowy = Nowy + Nazwa->Substring(i, 1);
				}
			}
			NumerPrzygotowania = System::Convert::ToInt32(Nowy);

			Nowy = "";
			for (int i = 0; i < Nazwa->Length; i++)
			{
				if (Nazwa->Substring(i, 1) == " ")
				{
					Nowy = Nazwa->Substring(i + 1, Nazwa->Length - i - 1);
					break;
				}
			}

			richTextBox1->Text = Nowy;
			NumerprzygotowaniaMain = NumerPrzygotowania;
		}
	}
	private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		// Zapisywanie zmian po edycji kroku
		if (listBox2->SelectedIndex >= 0)
		{
			String^ Nazwa = richTextBox1->Text;
			String^ opis = Nazwa;
			Nazwa = System::Convert::ToString(NumerprzygotowaniaMain) + ". " + Nazwa;
			int Indexi = System::Convert::ToInt32(NumerprzygotowaniaMain);
			int numereczek = 1;
			Indexi = Indexi - numereczek;
			listBox2->Items->RemoveAt(index);
			listBox2->Items->Insert(index, Nazwa);
			richTextBox1->Text = "";

			// Do mysql
			conn->Open();

			String^ cmdString = "UPDATE przygotowanie_przepisy SET opis = '" + opis + "' WHERE ID_przepisu = '" + Id_przepisuob + "' and ID_nr_przygotowania = '" + NumerprzygotowaniaMain + "'";
			MySqlCommand^ cmd = gcnew MySqlCommand(cmdString, conn);
			cmd->ExecuteNonQuery();

			conn->Close();
		}
	}
	private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
		// Zapisywanie nowego kroku
		String^ Nazwa = richTextBox1->Text;
		int numer = listBox2->Items->Count;
		String^ Opis = Nazwa;
		Nazwa = System::Convert::ToString(numer + 1) + ". " + Nazwa;
		listBox2->Items->Add(Nazwa);
		richTextBox1->Text = "";

		// Do mysql
		conn->Open();

		String^ cmdString2 = "INSERT INTO przygotowanie_przepisy (ID_przepisu, ID_nr_przygotowania, opis) VALUES (@ID, @Nr, @opis)";
		MySqlCommand^ cmd2 = gcnew MySqlCommand(cmdString2, conn);
		cmd2->Parameters->AddWithValue("@ID", Id_przepisuob);
		cmd2->Parameters->AddWithValue("@Nr", numer + 1);
		cmd2->Parameters->AddWithValue("@opis", Opis);
		cmd2->ExecuteNonQuery();

		conn->Close();
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		// Dodawanie nowego składnika
		String^ produkt = textBox2->Text;
		String^ ilosc = numericUpDown1->Text;
		String^ jednostka = comboBox1->Text;
		String^ calosc = produkt + " - " + ilosc + " " + jednostka;
		listBox1->Items->Add(calosc);

		// Do mysql
		conn->Open();

		String^ cmdString2 = "INSERT INTO skladniki_do_przepisu (ID_przepisu, ID_skladnika, ilosc_skladnika, jednostka) VALUES (@ID, @Nazwa, @ilosc, @jednostka)";
		MySqlCommand^ cmd2 = gcnew MySqlCommand(cmdString2, conn);
		cmd2->Parameters->AddWithValue("@ID", Id_przepisuob);
		cmd2->Parameters->AddWithValue("@Nazwa", produkt);
		cmd2->Parameters->AddWithValue("@ilosc", ilosc);
		cmd2->Parameters->AddWithValue("@jednostka", jednostka);
		cmd2->ExecuteNonQuery();

		conn->Close();

		textBox2->Clear();
		numericUpDown1->Value = 0;
		comboBox1->ResetText();
	}
	private: System::Void Zapisz_Click(System::Object^ sender, System::EventArgs^ e) {
		// Zapisywanie zmian nazwy i obrazu
		String^ nazwa_przepisu = textBox1->Text;
		String^ direct = "Pliki\\" + Id_przepisuob + "\\" + "tytul.png";
		String^ tytul = "";
		String^ nazwaa = "";
		if (File::Exists(direct))
		{
			Bitmap^ bit = gcnew Bitmap(nazwa);
			SaveFileDialog^ zapisek = gcnew SaveFileDialog;
			for (int i = 1; i < 100; i++)
			{
				String^ tytulstary = "Pliki\\" + System::Convert::ToString(Id_przepisuob) + "\\" + "tytul" + i + ".png";
				if (!File::Exists(tytulstary))
				{
					nazwaa = "tytul" + i + ".png";
					bit->Save(tytulstary);
					break;
				}
			}
			tytul = "Pliki\\" + System::Convert::ToString(Id_przepisuob) + "\\" + "tytul.png";
			Kroczek = Kroczek + 1;
		}
		else 
		{
			if (nazwa != "")
			{
				Bitmap^ bit = gcnew Bitmap(nazwa);
				SaveFileDialog^ zapisek = gcnew SaveFileDialog;
				nazwaa = "tytul.png";
				tytul = "Pliki\\" + System::Convert::ToString(Id_przepisuob) + "\\" + "tytul.png";
				bit->Save(tytul);
			}
		}

		// Do mysql
		conn->Open();

		String^ cmdString = "UPDATE Wszystkie_przepisy SET Nazwa_przepisu = '" + nazwa_przepisu + "', Zdjecie_przepisu = '" + nazwaa + "' WHERE ID_przepisu = '" + Id_przepisuob + "'";
		MySqlCommand^ cmd = gcnew MySqlCommand(cmdString, conn);
		cmd->ExecuteNonQuery();

		conn->Close();
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		// Zmiana zdjęcia
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
	private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
		// Usuń zdjęcie
		conn->Open();

		String^ cmdString = "UPDATE Wszystkie_przepisy SET Zdjecie_przepisu = '" + "no" + "' WHERE ID_przepisu = '" + Id_przepisuob + "'";
		MySqlCommand^ cmd = gcnew MySqlCommand(cmdString, conn);
		cmd->ExecuteNonQuery();

		conn->Close();
	
		pictureBox1->Image = nullptr;
	}
private: System::Void Edytowanie_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
	this->Hide();
	Refresh();
	Edycjee->Show();
}
};
}
