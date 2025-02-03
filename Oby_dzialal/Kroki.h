#pragma once

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
	/// Podsumowanie informacji o Kroki
	/// </summary>
	public ref class Kroki : public System::Windows::Forms::Form
	{
	public:
		int^ Numerp;
		int numer_krok = 1;
		Kroki(void)
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
		~Kroki()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	protected:
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;	
	private: System::Windows::Forms::Label^ label1;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Kroki::typeid));
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// richTextBox1
			// 
			this->richTextBox1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Century", 17));
			this->richTextBox1->Location = System::Drawing::Point(385, 132);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(486, 442);
			this->richTextBox1->TabIndex = 9;
			this->richTextBox1->Text = L"";
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button4->Font = (gcnew System::Drawing::Font(L"Century", 15));
			this->button4->Location = System::Drawing::Point(909, 215);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(200, 75);
			this->button4->TabIndex = 8;
			this->button4->Text = L"Następny";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &Kroki::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button3->Font = (gcnew System::Drawing::Font(L"Century", 15));
			this->button3->Location = System::Drawing::Point(909, 320);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(200, 75);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Koniec";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Kroki::button3_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(52, 42);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(588, 40);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Krok 3. Opis sposobu przygotowania";
			// 
			// Kroki
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1332, 653);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(1350, 700);
			this->MinimumSize = System::Drawing::Size(1350, 700);
			this->Name = L"Kroki";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Książka z przepisami";
			this->Load += gcnew System::EventHandler(this, &Kroki::Kroki_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		String^ connString = "Server=localhost;port=3306;database=dbshop;uid=root;password=root";

		MySqlConnection^ conn = gcnew MySqlConnection(connString);

	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		// Koniec dodawanie przepisu
		this->Hide();
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		// Dodawanie kolejnego kroku
		String^ Krok = richTextBox1->Text;

		conn->Open();

		String^ cmdString = "INSERT INTO Przygotowanie_przepisy (ID_przepisu, ID_nr_przygotowania, opis) VALUES (@ID_przepisu, @ID_nr_przygotowania, @opis)";
		MySqlCommand^ cmd = gcnew MySqlCommand(cmdString, conn);
		cmd->Parameters->AddWithValue("@ID_przepisu", Numerp);
		cmd->Parameters->AddWithValue("@ID_nr_przygotowania", numer_krok);
		cmd->Parameters->AddWithValue("@opis", Krok);
		cmd->ExecuteNonQuery();

		conn->Close();

		numer_krok += 1;
		richTextBox1->Clear();

	}
	private: System::Void Kroki_Load(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
