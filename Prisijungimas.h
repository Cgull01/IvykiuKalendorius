#pragma once
#include "Ivykiu_kalendorius.h"

namespace TomasMotiejunasIvykiuKalendorius {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	/// <summary>
	/// Summary for Prisijungimas
	/// </summary>
	public ref class Prisijungimas : public System::Windows::Forms::Form
	{
	public:
		Prisijungimas(void)
		{

			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			IvykiuPaskyra = new Paskyra();

		}

		
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Prisijungimas()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected:
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  textBox3;


	private:
		/// <summary>
		/// Required designer variable.
		Paskyra * IvykiuPaskyra;
		bool dragging = false;
		Point offset;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Panel^  panel1;


	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;


		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.

		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Calibri", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(113, 403);
			this->button1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(285, 57);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Prisijungti";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Prisijungimas::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Calibri", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(24, 504);
			this->button2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(147, 47);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Sukurti naują paskyrą";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Prisijungimas::button2_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(106, 69);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(321, 41);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Įvykių kalendorius";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(75)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::White;
			this->textBox1->Location = System::Drawing::Point(114, 157);
			this->textBox1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(284, 37);
			this->textBox1->TabIndex = 1;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(75)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->ForeColor = System::Drawing::Color::White;
			this->textBox2->Location = System::Drawing::Point(114, 242);
			this->textBox2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox2->Name = L"textBox2";
			this->textBox2->PasswordChar = '*';
			this->textBox2->Size = System::Drawing::Size(284, 37);
			this->textBox2->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(111, 129);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(136, 16);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Prisijungimo vardas";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(111, 218);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(83, 16);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Slaptažodis";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(111, 310);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(154, 16);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Pakartokite slaptažodį";
			this->label4->Visible = false;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(75)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->ForeColor = System::Drawing::Color::White;
			this->textBox3->Location = System::Drawing::Point(114, 335);
			this->textBox3->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->textBox3->Name = L"textBox3";
			this->textBox3->PasswordChar = '*';
			this->textBox3->Size = System::Drawing::Size(284, 37);
			this->textBox3->TabIndex = 3;
			this->textBox3->Visible = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Calibri", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
				static_cast<System::Int32>(static_cast<System::Byte>(71)));
			this->label6->Location = System::Drawing::Point(200, 218);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(123, 18);
			this->label6->TabIndex = 10;
			this->label6->Text = L"- Šis langas būtinas";
			this->label6->Visible = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Calibri", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
				static_cast<System::Int32>(static_cast<System::Byte>(71)));
			this->label5->Location = System::Drawing::Point(253, 129);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(123, 18);
			this->label5->TabIndex = 11;
			this->label5->Text = L"- Šis langas būtinas";
			this->label5->Visible = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Calibri", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(71)),
				static_cast<System::Int32>(static_cast<System::Byte>(71)));
			this->label7->Location = System::Drawing::Point(271, 310);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(123, 18);
			this->label7->TabIndex = 12;
			this->label7->Text = L"- Šis langas būtinas";
			this->label7->Visible = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::Lime;
			this->label8->Location = System::Drawing::Point(32, 482);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(121, 18);
			this->label8->TabIndex = 13;
			this->label8->Text = L"Paskyra sukurta";
			this->label8->Visible = false;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->panel1->Controls->Add(this->button3);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(505, 45);
			this->panel1->TabIndex = 20;
			this->panel1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Prisijungimas::panel1_MouseDown);
			this->panel1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Prisijungimas::panel1_MouseMove);
			this->panel1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Prisijungimas::panel1_MouseUp);
			// 
			// button3
			// 
			this->button3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button3->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(463, 6);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(30, 30);
			this->button3->TabIndex = 22;
			this->button3->TabStop = false;
			this->button3->Text = L"X";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Prisijungimas::button3_Click);
			// 
			// button4
			// 
			this->button4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button4->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(416, 6);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(30, 30);
			this->button4->TabIndex = 21;
			this->button4->TabStop = false;
			this->button4->Text = L"_";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Prisijungimas::button4_Click);
			// 
			// Prisijungimas
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)),
				static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->ClientSize = System::Drawing::Size(505, 564);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
			this->MaximizeBox = false;
			this->Name = L"Prisijungimas";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Prisijungimas";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Prisijungimas::Prisijungimas_FormClosing);
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	bool registracija = true;

	//-----------------------------------------------------------------------------------
	//Mygtuko "Sukurti naują paskyrą" veiksmai:
	//-----------------------------------------------------------------------------------
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		label5->Text = L"- Šis langas būtinas";	
		label6->Text = L"- Šis langas būtinas";
		label7->Text = L"- Šis langas būtinas";

		textBox1->Text = "";
		textBox2->Text = "";
		textBox3->Text = "";

		label2->ForeColor = Color::White;
		label3->ForeColor = Color::White;
		label4->ForeColor = Color::White;

		label5->Visible = false;
		label6->Visible = false;
		label7->Visible = false;
		label8->Visible = false;

		if (registracija == false)
		{
			label4->Visible = false;
			textBox3->Visible = false;
			label1->Text = L"Įvykių kalendorius";
			label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 26.25F, System::Drawing::FontStyle::Bold));

			registracija = true;
			button2->Text = L"Sukurti naują paskyra";
			button1->Text = L"Prisijungti";
		}
		else
		{
			label4->Visible = true;
			textBox3->Visible = true;
			label1->Text = L"Registracija";
			label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 26.25F, System::Drawing::FontStyle::Regular));
			registracija = false;
			button2->Text = L"Aš turiu paskyrą";
			button1->Text = L"Registruotis";
		}	
	}
	//-----------------------------------------------------------------------------------
	//Mygtuko "Prisijungti" veiksmai:
	//-----------------------------------------------------------------------------------
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		String ^Vardas, ^Slaptazodis1, ^Slaptazodis2;
		string vardas, slaptazodis1, slaptazodis2;
		
		label5->Text = L"- Šis langas būtinas";
		label6->Text = L"- Šis langas būtinas";
		label7->Text = L"- Šis langas būtinas";
		label8->Visible = false;

		if (registracija)
		{
			Vardas = textBox1->Text;
			Slaptazodis1 = textBox2->Text;

			StringTostring(Vardas, vardas);
			StringTostring(Slaptazodis1, slaptazodis1);

			int status = ArPrisijungta(vardas, slaptazodis1);

			if (textBox1->Text == "" && textBox2->Text == "")
			{

				label2->ForeColor = Color::Red;
				label3->ForeColor = Color::Red;
				label5->Visible = true;
				label6->Visible = true;

			}
			else if (textBox1->Text == "")
			{
				label2->ForeColor = Color::Red;
				label3->ForeColor = Color::White;
				label5->Visible = true;
				label6->Visible = false;
			}
			else if (textBox2->Text == "")
			{
				label2->ForeColor = Color::White;
				label3->ForeColor = Color::Red;
				label5->Visible = false;
				label6->Visible = true;
			}

			else if (status == 1) // Prisijungta
			{
				Ivykiu_kalendorius ^ Forma2 = gcnew Ivykiu_kalendorius(textBox1->Text, textBox2->Text, this);
				this->Hide();
				Forma2->ShowDialog();

				label2->ForeColor = Color::White;
				label3->ForeColor = Color::White;

				label5->Visible = false;
				label6->Visible = false;


			} 
			else if (status == 2) // Neteisingas slaptažodis
			{
				label2->ForeColor = Color::White;
				label3->ForeColor = Color::Red;

				label5->Visible = false;

				label6->Text = "- Slaptažodis neteisingas";
				label6->Visible = true;
			}
			else //Nėra paskyros
			{
				label2->ForeColor = Color::Red;
				label3->ForeColor = Color::White;

				label5->Visible = true;
				label5->Text = "- Paskyra neegzistuoja";

				label6->Visible = false;
			}

		}
		else
		{
			Vardas = textBox1->Text;
			Slaptazodis1 = textBox2->Text;
			Slaptazodis2 = textBox3->Text;

			StringTostring(Vardas, vardas);
			StringTostring(Slaptazodis1, slaptazodis1);
			StringTostring(Slaptazodis2, slaptazodis2);

			if (ArVardasKartojasi(vardas) == true)
			{
				label2->ForeColor = Color::Red;
				label3->ForeColor = Color::White;
				label4->ForeColor = Color::White;

				label5->Text = L"- Šis vartotojo vardas jau paimtas";
				label5->Visible = true;

			}
			else if (slaptazodis1 != slaptazodis2)
			{
				label4->ForeColor = Color::Red;
				label2->ForeColor = Color::White;
				label3->ForeColor = Color::White;
				
				label5->Visible = false;
				label6->Visible = false;

				label7->Text = L"- Slaptažodžiai nevienodi";
				label7->Visible = true;
			}
			else if (textBox1->Text == "" && textBox2->Text == ""&& textBox3->Text == "")
			{
				label2->ForeColor = Color::Red;
				label3->ForeColor = Color::Red;
				label4->ForeColor = Color::Red;

				label5->Visible = true;
				label6->Visible = true;
				label7->Visible = true;
			}
			else if (textBox1->Text == "")
			{
				label2->ForeColor = Color::Red;
				label3->ForeColor = Color::White;
				label4->ForeColor = Color::White;

				label5->Visible = true;
				label6->Visible = false;
				label7->Visible = false;

			}
			else if (textBox2->Text == "")
			{
				label2->ForeColor = Color::White;
				label3->ForeColor = Color::Red;
				label4->ForeColor = Color::White;

				label5->Visible = false;
				label6->Visible = true;
				label7->Visible = false;

			}
			else if (textBox3->Text == "")
			{
				label2->ForeColor = Color::White;
				label3->ForeColor = Color::White;
				label4->ForeColor = Color::Red;

				label5->Visible = false;
				label6->Visible = false;
				label5->Visible = true;

			}
			else
			{
				label2->ForeColor = Color::White;
				label3->ForeColor = Color::White;
				label4->ForeColor = Color::White;

				label5->Visible = false;
				label6->Visible = false;
				label7->Visible = false;

				label8->Visible = true;

				Uzregistravimas(vardas, slaptazodis1);
			}
		}
	}

	//-----------------------------------------------------------------------------------
	// Mygtuko "X" veiksmai:
	//-----------------------------------------------------------------------------------
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e)
	{
		Application::Exit();
	}

	//-----------------------------------------------------------------------------------
	// Mygtuko "_" veiksmai:
	//-----------------------------------------------------------------------------------	
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		WindowState = FormWindowState::Minimized;
	}

	//-----------------------------------------------------------------------------------
	private: System::Void panel1_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
	{
		dragging = true;
		offset = Point(e->X, e->Y);
	}

	//-----------------------------------------------------------------------------------
	private: System::Void panel1_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
	{
		if (dragging)
		{
			if (WindowState == FormWindowState::Maximized)
			{
				WindowState = FormWindowState::Normal;
			}

			Point currentScreenPos = PointToScreen(e->Location);
			Location = Point(currentScreenPos.X - this->offset.X, currentScreenPos.Y - this->offset.Y);
		}
	}

	//-----------------------------------------------------------------------------------
	private: System::Void panel1_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
	{
		dragging = false;
	}

	//--------------------------------------------------------------------------------------------------------------
	private: System::Void Prisijungimas_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) 
	{
		Application::Exit();
	}
};
}
