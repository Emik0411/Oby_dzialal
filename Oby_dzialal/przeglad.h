#pragma once
#include "DodawanieForm.h"
#include <string>
#include "Edytowanie.h"


namespace Obydzialal {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace PdfSharp::Pdf;
	using namespace PdfSharp::Drawing;


	/// <summary>
	/// Podsumowanie informacji o przeglad
	/// </summary>
	public ref class przeglad : public System::Windows::Forms::Form
	{
	public:
		int^ Id_przepisu;
		int obecny_krok = 1;
		String^ Nazwa_przepisu;
		Form^ obj;
		int ostatni_krok;
		przeglad(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}
		przeglad(Form^ objprzeglad)
		{
			obj = objprzeglad;
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyść wszystkie używane zasoby.
		/// </summary>
		~przeglad()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::CheckedListBox^ checkedListBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button8;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(przeglad::typeid));
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button2->Font = (gcnew System::Drawing::Font(L"Century", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(50, 40);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(200, 75);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Oglądanie";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &przeglad::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century", 20, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(58, 132);
			this->label1->MaximumSize = System::Drawing::Size(350, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(270, 40);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Nazwa przepisu";
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->BackColor = System::Drawing::Color::WhiteSmoke;
			this->checkedListBox1->Font = (gcnew System::Drawing::Font(L"Century", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Location = System::Drawing::Point(50, 187);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(358, 328);
			this->checkedListBox1->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::WhiteSmoke;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century", 13.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(429, 90);
			this->label2->MaximumSize = System::Drawing::Size(425, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(169, 28);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Przygotowanie";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Location = System::Drawing::Point(870, 31);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(439, 465);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 6;
			this->pictureBox1->TabStop = false;
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button3->Font = (gcnew System::Drawing::Font(L"Century", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(50, 537);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(200, 76);
			this->button3->TabIndex = 7;
			this->button3->Text = L"Edytuj";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &przeglad::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button4->Font = (gcnew System::Drawing::Font(L"Century", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(285, 537);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(200, 74);
			this->button4->TabIndex = 8;
			this->button4->Text = L"Usuń";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &przeglad::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button5->Font = (gcnew System::Drawing::Font(L"Century", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(870, 537);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(200, 75);
			this->button5->TabIndex = 9;
			this->button5->Text = L"Refresh";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &przeglad::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button6->Font = (gcnew System::Drawing::Font(L"Century", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button6->Location = System::Drawing::Point(1109, 538);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(200, 75);
			this->button6->TabIndex = 10;
			this->button6->Text = L"PDF";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &przeglad::button6_Click);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button7->Location = System::Drawing::Point(434, 40);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(60, 30);
			this->button7->TabIndex = 11;
			this->button7->Text = L"<-";
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &przeglad::button7_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::WhiteSmoke;
			this->button8->Location = System::Drawing::Point(568, 40);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(60, 30);
			this->button8->TabIndex = 12;
			this->button8->Text = L"->";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &przeglad::button8_Click);
			// 
			// przeglad
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1332, 653);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->checkedListBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(1350, 700);
			this->MinimumSize = System::Drawing::Size(1350, 700);
			this->Name = L"przeglad";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Książka z przepisami";
			this->Load += gcnew System::EventHandler(this, &przeglad::przeglad_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		String^ connString = "Server=localhost;port=3306;database=dbshop;uid=root;password=root";

		MySqlConnection^ conn = gcnew MySqlConnection(connString);

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		// Przechodzenie do głównej strony
		this->Hide();
		obj->Location = this->Location;
		obj->Show();
	}
	private: System::Void przeglad_Load(System::Object^ sender, System::EventArgs^ e) {
		// Dodawanie składników do formularza
		conn->Open();

		String^ cmdString = "SELECT ID_skladnika, ilosc_skladnika, jednostka FROM skladniki_do_przepisu WHERE ID_przepisu ='" + Id_przepisu + "'";
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
			checkedListBox1->Items->Add(calosc);
		}
		conn->Close();

		// Sprawdzanie ile jest kroków w przepisie
		conn->Open();

		ostatni_krok = 0;
		String^ cmdString1 = "SELECT ID_nr_przygotowania FROM przygotowanie_przepisy WHERE ID_przepisu ='" + Id_przepisu + "'";
		MySqlCommand^ cmd1 = gcnew MySqlCommand(cmdString1, conn);
		MySqlDataReader^ reader1;
		reader1 = cmd1->ExecuteReader();
		while (reader1->Read())
		{
			ostatni_krok = ostatni_krok + 1; 
		}
		conn->Close();

		// Dodawanie pierwszego kroku do formularza 
		conn->Open();

		String^ cmdString6 = "SELECT opis FROM przygotowanie_przepisy WHERE ID_przepisu ='" + Id_przepisu + "' AND ID_nr_przygotowania = '1'";
		MySqlCommand^ cmd6 = gcnew MySqlCommand(cmdString6, conn);
		String^ calosc1 = "";
		MySqlDataReader^ reader6;
		reader6 = cmd6->ExecuteReader();
		while (reader6->Read())
		{
			String^ nazwa;
			calosc1 = calosc1 + 1 + ". ";
			nazwa = reader6->GetString("opis");
			calosc1 = calosc1 + nazwa;
		}
		label2->Text = "";
		label2->Text = calosc1;
		conn->Close();

		// Dodawanie nazwy przepisu i zdjęcia do formularza
		conn->Open();

		String^ cmdString2 = "SELECT Nazwa_przepisu, Zdjecie_przepisu FROM Wszystkie_przepisy WHERE ID_przepisu = '" + Id_przepisu + "'";
		MySqlCommand^ cmd2 = gcnew MySqlCommand(cmdString2, conn);
		String^ zdjecie = "";
		MySqlDataReader^ reader2;
		reader2 = cmd2->ExecuteReader();
		while (reader2->Read())
		{
			String^ nazwa;
			nazwa = reader2->GetString("Nazwa_przepisu");
			zdjecie = reader2->GetString("Zdjecie_przepisu");
			Nazwa_przepisu = nazwa;
		}
		label1->Text = Nazwa_przepisu;
		conn->Close();

		String^ direct = "Pliki\\" + Id_przepisu + "\\" + zdjecie;
		if (File::Exists(direct))
		{
			Bitmap^ bit = gcnew Bitmap(direct);
			pictureBox1->Image = bit;
			pictureBox1->Refresh();
		}
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		// Guzik na edytowanie przepisu
		Edytowanie^ Edycje = gcnew Edytowanie(this);
		this->Hide();
		Edycje->Id_przepisuob = Id_przepisu;
		Edycje->Location = this->Location;
		Edycje->ShowDialog();
		Refresh();
	}
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		// Guzik na usuwanie przepisu
		if (MessageBox::Show("Czy na pewno chcesz usunąć ten przepis?", "Usuwanie przepisu",
			MessageBoxButtons::YesNo, MessageBoxIcon::Question) == System::Windows::Forms::DialogResult::Yes) 
		{
			conn->Open();

			String^ cmdString = "UPDATE Wszystkie_przepisy SET Istnienie = 'Nie' WHERE nazwa_przepisu = '" + Nazwa_przepisu + "'";
			MySqlCommand^ cmd = gcnew MySqlCommand(cmdString, conn);
			cmd->ExecuteNonQuery();

			conn->Close();

			this->Hide();
			obj->ShowDialog();
		}
	}
	public: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
		// Guzik na odświeżanie formularza
		this->Controls->Clear();
		InitializeComponent();
		this->przeglad_Load(sender, e);
	}
	private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
		// Tworzenie PDF przepisu
		PdfDocument^ document = gcnew PdfDocument();

		conn->Open();

		String^ cmdString2 = "SELECT Nazwa_przepisu, Zdjecie_przepisu FROM Wszystkie_przepisy WHERE ID_przepisu = '" + Id_przepisu + "'";
		MySqlCommand^ cmd2 = gcnew MySqlCommand(cmdString2, conn);
		String^ tu = "";
		MySqlDataReader^ reader2;
		reader2 = cmd2->ExecuteReader();
		while (reader2->Read())
		{
			String^ nazwa;
			nazwa = reader2->GetString("Nazwa_przepisu");

			tu = reader2->GetString("Zdjecie_przepisu");
			Nazwa_przepisu = nazwa;
		}
		conn->Close();


		// Dodawanie strony do dokumentu
		double co = 50;
		PdfPage^ page = document->AddPage();
		XGraphics^ gfx = XGraphics::FromPdfPage(page);
		XFont^ font_nazwa = gcnew XFont("Arial", 30, XFontStyle::Bold);
		XFont^ font = gcnew XFont("Arial", 20, XFontStyle::Regular);

		// Dodawanie zdjęcia i nazwy przepisu
		if (tu != "no")
		{	
			XImage^ image = XImage::FromFile("Pliki\\" + Id_przepisu + "\\" + tu);
			double pageWidth = (page->Width - 100) / 2;
			double pageHeight = (page->Height - 100) / 2;

			double imageWidth = image->Width;
			double imageHeight = image->Height;

			double scale = Math::Min(pageWidth / imageWidth, pageHeight / imageHeight);

			double scaledWidth = imageWidth * scale;
			double scaledHeight = imageHeight * scale;

			co = co + scaledHeight + 30;
			gfx->DrawImage(image, 50, 50, scaledWidth, scaledHeight);
			gfx->DrawString(Nazwa_przepisu, font_nazwa, XBrushes::Black, XPoint(50, scaledHeight + 50 + 30));
			co = co + 30;
		}
		else
		{
			co = co + 30;
			gfx->DrawString(Nazwa_przepisu, font_nazwa, XBrushes::Black, XPoint(50, 50));
		}

		// Dodawanie składników
		gfx->DrawString("Składniki:", font_nazwa, XBrushes::Black, XPoint(50, co + 20));
		co = co + 20 + 30;

		conn->Open();

		String^ cmdString = "SELECT ID_skladnika, ilosc_skladnika, jednostka FROM skladniki_do_przepisu WHERE ID_przepisu ='" + Id_przepisu + "'";
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

			gfx->DrawString(calosc, font, XBrushes::Black, XPoint(70, co));
			co = co + 20 + 5;
		}
		conn->Close();

		// Dodawanie nowej strony do dokumentu
		PdfPage^ page2 = document->AddPage();
		co = 50;
		XGraphics^ gfx2 = XGraphics::FromPdfPage(page2);
		
		// Dodawanie przygotowań
		gfx2->DrawString("Przygotowanie:", font_nazwa, XBrushes::Black, XPoint(50, co));
		co = co + 30;

		conn->Open();

		String^ cmdString1 = "SELECT ID_nr_przygotowania, opis FROM przygotowanie_przepisy WHERE ID_przepisu ='" + Id_przepisu + "'";
		MySqlCommand^ cmd1 = gcnew MySqlCommand(cmdString1, conn);
		String^ calosc1 = "";
		MySqlDataReader^ reader1;
		reader1 = cmd1->ExecuteReader();
		XRect rect(70, co, page->Width - 70 - 50, page->Height - co);
		XStringFormat^ format = XStringFormats::TopLeft;
		while (reader1->Read())
		{
			String^ nazwa;
			calosc1 = "";
			nazwa = reader1->GetString("ID_nr_przygotowania");

			calosc1 = calosc1 + nazwa + ". ";
			nazwa = reader1->GetString("opis");

			calosc1 = calosc1 + nazwa;

			array<String^>^ slowa = calosc1->Split(' ');
			String^ currentLine = "";

			for each (String ^ slowo in slowa)
			{
				String^ testLine = currentLine + (currentLine->Length > 0 ? " " : "") + slowo;
				double testWidth = gfx2->MeasureString(testLine, font).Width;

				if (co >= page->Height - 50) {
					// Dodawanie nowej strony, gdy przepis się nie mieści
					page = document->AddPage();
					co = 50;
					gfx2 = XGraphics::FromPdfPage(page);
				}

				if(testWidth <= page->Width - 70 - 50) {
					// Dodawanie słowa do linijki, gdy się mieści na stronie
					currentLine = testLine;
				}
				 else {
					// Dodawanie nowej linijki, gdy słowo się nie mieści na stronie
					gfx2->DrawString(currentLine, font, XBrushes::Black, XPoint(70, co));
					co += 20;
					currentLine = slowo;
				}
			}
			if (!String::IsNullOrEmpty(currentLine)) {
				// Dodawanie ostatniej linijki kroku
				gfx2->DrawString(currentLine, font, XBrushes::Black, XPoint(70, co));
				co = co + 20;
			}
			co = co + 10;
		}
		conn->Close();

		// Zapisywanie przepisu do PDF
		SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog();
		saveFileDialog1->Filter = "Pdf Files | *.pdf";
		saveFileDialog1->Title = "Save an PDF File";
		saveFileDialog1->FileName = Nazwa_przepisu + ".pdf";
		saveFileDialog1->ShowDialog();

		if (saveFileDialog1->FileName != "")
		{
			String^ dotNetPath = saveFileDialog1->FileName;
			document->Save(dotNetPath);
		}

		document->Close();
	}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	// Poprzedni krok w przepisie
	if (obecny_krok <= 1)
	{
		MessageBox::Show("Nie ma wcześniejszego kroku, to jest początek!", "To jest pierwszy krok!",
		MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
	else
	{
		conn->Open();

		obecny_krok = obecny_krok - 1;
		String^ cmdString6 = "SELECT opis FROM przygotowanie_przepisy WHERE ID_przepisu ='" + Id_przepisu + "' AND ID_nr_przygotowania = '" + obecny_krok + "'";
		MySqlCommand^ cmd6 = gcnew MySqlCommand(cmdString6, conn);
		String^ calosc1 = "";
		MySqlDataReader^ reader6;
		reader6 = cmd6->ExecuteReader();
		while (reader6->Read())
		{
			String^ nazwa;
			calosc1 = calosc1 + obecny_krok + ". ";
			nazwa = reader6->GetString("opis");
			calosc1 = calosc1 + nazwa;
		}
		label2->Text = "";
		label2->Text = calosc1;

		conn->Close();
	}
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
	// Kolejny krok w przepisie
	if (obecny_krok >= ostatni_krok)
	{
		MessageBox::Show("Nie ma kolejnego kroku, twoje danie jest gotowe!", "To jest ostatni krok!",
			MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	else
	{
		conn->Open();

		obecny_krok = obecny_krok + 1;
		String^ cmdString6 = "SELECT opis FROM przygotowanie_przepisy WHERE ID_przepisu ='" + Id_przepisu + "' AND ID_nr_przygotowania = '" + obecny_krok + "'";
		MySqlCommand^ cmd6 = gcnew MySqlCommand(cmdString6, conn);
		String^ calosc1 = "";
		MySqlDataReader^ reader6;
		reader6 = cmd6->ExecuteReader();
		while (reader6->Read())
		{
			String^ nazwa;
			calosc1 = calosc1 + obecny_krok + ". ";
			nazwa = reader6->GetString("opis");
			calosc1 = calosc1 + nazwa;
		}
		label2->Text = "";
		label2->Text = calosc1;

		conn->Close();
	}
}
private: System::Void OnClosing(System::Object^ sender, System::EventArgs^ e)
{
		Application::Exit();
}
};
}
