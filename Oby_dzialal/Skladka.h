#pragma once
#include "Kroki.h"


namespace Obydzialal {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace MySql::Data::MySqlClient;
	using namespace System::Collections::Generic;

	/// <summary>
	/// Podsumowanie informacji o Skladka
	/// </summary>
	public ref class Skladka : public System::Windows::Forms::Form
	{
	public:
		int^ Numer;
		String^ liczebka;
	public: Skladka(void)
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
		~Skladka()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ListBox^ listBox1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Label^ label4;

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obsługi projektanta — nie należy modyfikować
		/// jej zawartości w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Skladka::typeid));
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Century", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(10) {
				L"gram", L"dekagram", L"kilogram", L"litr", L"mililitr",
					L"Łyżka", L"Łyżeczka", L"Szklanka", L"Szczypta", L"Sztuka"
			});
			this->comboBox1->Location = System::Drawing::Point(930, 157);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(195, 37);
			this->comboBox1->TabIndex = 23;
			// 
			// listBox1
			// 
			this->listBox1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Century", 17));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 33;
			this->listBox1->Location = System::Drawing::Point(389, 230);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(581, 367);
			this->listBox1->TabIndex = 22;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button3->Font = (gcnew System::Drawing::Font(L"Century", 15));
			this->button3->Location = System::Drawing::Point(1014, 397);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(200, 75);
			this->button3->TabIndex = 21;
			this->button3->Text = L"Koniec";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Skladka::button3_Click);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->numericUpDown1->Font = (gcnew System::Drawing::Font(L"Century", 15));
			this->numericUpDown1->Location = System::Drawing::Point(731, 156);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(158, 38);
			this->numericUpDown1->TabIndex = 20;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Century", 15));
			this->textBox1->Location = System::Drawing::Point(186, 157);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(496, 38);
			this->textBox1->TabIndex = 19;
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button4->Font = (gcnew System::Drawing::Font(L"Century", 15));
			this->button4->Location = System::Drawing::Point(1014, 297);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(200, 75);
			this->button4->TabIndex = 18;
			this->button4->Text = L"Następny";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Skladka::button4_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(59, 47);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(402, 39);
			this->label4->TabIndex = 28;
			this->label4->Text = L"Krok 2. Lista składników";
			// 
			// Skladka
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::Color::WhiteSmoke;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1332, 653);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button4);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(1350, 700);
			this->MinimumSize = System::Drawing::Size(1350, 700);
			this->Name = L"Skladka";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Książka z przepisami";
			this->Load += gcnew System::EventHandler(this, &Skladka::Skladka_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		String^ connString = "Server=localhost;port=3306;database=dbshop;uid=root;password=root";

		MySqlConnection^ conn = gcnew MySqlConnection(connString);

	private: System::Void Skladka_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		// Przechodzenie do kolejnego okna
		this->Hide();
		Kroki^ poniedzialek = gcnew Kroki();
		poniedzialek->Numerp = Numer;
		poniedzialek->ShowDialog();
	}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	// Dodawanie składnika do przepisu
	String^ Skladnik = textBox1->Text;
	String^ Ilosc = numericUpDown1->Text;
	String^ Jednostka = comboBox1->Text;

	conn->Open();

	String^ cmdString = "INSERT INTO Skladniki_do_przepisu (ID_przepisu, ID_skladnika, ilosc_skladnika, jednostka) VALUES (@ID_przepisu, @ID_skladnika, @ilosc_skladnika, @jednostka)";
	MySqlCommand^ cmd = gcnew MySqlCommand(cmdString, conn);
	cmd->Parameters->AddWithValue("@ID_skladnika", Skladnik);
	cmd->Parameters->AddWithValue("@ID_przepisu", Numer);
	cmd->Parameters->AddWithValue("@ilosc_skladnika", Ilosc);
	cmd->Parameters->AddWithValue("@jednostka", Jednostka);
	cmd->ExecuteNonQuery();

	conn->Close();

	listBox1->Items->Add(Skladnik + " - " + Ilosc + " " + Jednostka);
	textBox1->Clear();
	numericUpDown1->Value = 0;
}
};
}
