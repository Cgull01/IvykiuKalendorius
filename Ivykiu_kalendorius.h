#pragma once
#include "Funkcijos.h"

//----------------------------------------------------------
const string Cduom = "Duomenys.txt";
const string PaskyruAplankas = "Paskyros/";
const string RezultatuAplankas = "Rezultatai/";
//----------------------------------------------------------

namespace TomasMotiejunasIvykiuKalendorius 
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Ivykiu_kalendorius
	/// </summary>
	public ref class Ivykiu_kalendorius : public System::Windows::Forms::Form
	{
	public:
		
		Form ^obj;

		Ivykiu_kalendorius(String ^vardas, String ^slaptazodis, Form ^ obj1)
		{
			obj = obj1;
			InitializeComponent();

			Vardas = vardas;
			Slaptazodis = slaptazodis;

			label4->Text = Vardas + Slaptazodis;
			//
			//TODO: Add the constructor code here
			//
			IvykiuPaskyra = new Paskyra();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Ivykiu_kalendorius()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	public:

	private: 
		/// <summary>
		/// Required designer variable.
		Paskyra * IvykiuPaskyra;
		String ^data, ^pavadinimas, ^komentaras,
		^Vardas, ^Slaptazodis,
		^Theme, ^SvSimb, ^naikintiPo;

		bool PasirinktaDaug,
			 SvarbusIvykis,		
			 dragging = false,
			 blackText;
		
		Point offset;

		DateTime now = DateTime::Now;		// Šiandienos data
		String^ snddt = now.ToString("d");  // Šiandienos data į String

	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::Panel^  panel3;
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox2;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::MonthCalendar^  monthCalendar1;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::CheckBox^  checkBox1;

	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Panel^  panel5;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::ListBox^  listBox2;

	private: System::Windows::Forms::Label^  label8;

	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label9;

	private: System::Windows::Forms::Panel^  panel6;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;
	private: System::Windows::Forms::Button^  button16;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Button^  button17;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Button^  button18;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Button^  button21;
	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;

	private: System::ComponentModel::IContainer^  components;

		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Ivykiu_kalendorius::typeid));
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->button17 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->monthCalendar1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button16 = (gcnew System::Windows::Forms::Button());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->panel6->SuspendLayout();
			this->SuspendLayout();
			// 
			// button6
			// 
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.Image")));
			this->button6->Location = System::Drawing::Point(1, 400);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(55, 46);
			this->button6->TabIndex = 15;
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Ivykiu_kalendorius::button6_Click);
			// 
			// button7
			// 
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.Image")));
			this->button7->Location = System::Drawing::Point(0, 309);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(55, 48);
			this->button7->TabIndex = 14;
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &Ivykiu_kalendorius::button7_Click);
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(48)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->panel3->Controls->Add(this->button17);
			this->panel3->Controls->Add(this->button14);
			this->panel3->Controls->Add(this->button7);
			this->panel3->Controls->Add(this->button6);
			this->panel3->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel3->Location = System::Drawing::Point(0, 45);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(58, 557);
			this->panel3->TabIndex = 21;
			// 
			// button17
			// 
			this->button17->FlatAppearance->BorderSize = 0;
			this->button17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button17->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button17.Image")));
			this->button17->Location = System::Drawing::Point(3, 511);
			this->button17->Name = L"button17";
			this->button17->Size = System::Drawing::Size(55, 46);
			this->button17->TabIndex = 16;
			this->button17->UseVisualStyleBackColor = true;
			this->button17->Click += gcnew System::EventHandler(this, &Ivykiu_kalendorius::button17_Click);
			// 
			// button14
			// 
			this->button14->FlatAppearance->BorderSize = 0;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button14.Image")));
			this->button14->Location = System::Drawing::Point(0, 216);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(55, 48);
			this->button14->TabIndex = 13;
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &Ivykiu_kalendorius::button14_Click);
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(48)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->panel4->Controls->Add(this->button21);
			this->panel4->Controls->Add(this->button20);
			this->panel4->Controls->Add(this->button19);
			this->panel4->Controls->Add(this->button18);
			this->panel4->Controls->Add(this->pictureBox1);
			this->panel4->Controls->Add(this->label5);
			this->panel4->Controls->Add(this->label15);
			this->panel4->Controls->Add(this->label14);
			this->panel4->Controls->Add(this->label16);
			this->panel4->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel4->Location = System::Drawing::Point(58, 45);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(2, 557);
			this->panel4->TabIndex = 22;
			// 
			// button21
			// 
			this->button21->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button21->Location = System::Drawing::Point(28, 504);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(210, 34);
			this->button21->TabIndex = 7;
			this->button21->Text = L"Apie programą";
			this->button21->UseVisualStyleBackColor = true;
			this->button21->Click += gcnew System::EventHandler(this, &Ivykiu_kalendorius::button21_Click);
			// 
			// button20
			// 
			this->button20->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button20->Location = System::Drawing::Point(255, 504);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(210, 34);
			this->button20->TabIndex = 6;
			this->button20->Text = L"Programos naudojimas";
			this->button20->UseVisualStyleBackColor = true;
			this->button20->Click += gcnew System::EventHandler(this, &Ivykiu_kalendorius::button20_Click);
			// 
			// button19
			// 
			this->button19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button19->Location = System::Drawing::Point(255, 453);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(45, 36);
			this->button19->TabIndex = 4;
			this->button19->Text = L"<";
			this->button19->UseVisualStyleBackColor = true;
			this->button19->Visible = false;
			this->button19->Click += gcnew System::EventHandler(this, &Ivykiu_kalendorius::button19_Click);
			// 
			// button18
			// 
			this->button18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button18->Location = System::Drawing::Point(783, 453);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(45, 36);
			this->button18->TabIndex = 3;
			this->button18->Text = L">";
			this->button18->UseVisualStyleBackColor = true;
			this->button18->Visible = false;
			this->button18->Click += gcnew System::EventHandler(this, &Ivykiu_kalendorius::button18_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(255, 89);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(573, 357);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Visible = false;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(18, 18);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(128, 25);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Informacija";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->ForeColor = System::Drawing::Color::White;
			this->label15->Location = System::Drawing::Point(20, 216);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(184, 153);
			this->label15->TabIndex = 5;
			this->label15->Text = L"Įvykio redagavimas:\r\n1) Pasirinkite įvykį iš sąrašo\r\n\r\nPakeiskite įvykio\r\ndatą, p"
				L"avadinimą, svarbą.\r\n\r\n2) Išsaugogite pakeitimus \r\n    arba\r\n    ištrinkite įvykį"
				L"";
			this->label15->Visible = false;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->ForeColor = System::Drawing::Color::White;
			this->label14->Location = System::Drawing::Point(20, 89);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(236, 102);
			this->label14->TabIndex = 2;
			this->label14->Text = L"Įvykio įrašymas:\r\n1) Pasirinkite datą kalendoriuje\r\n\r\n2) Įrašykite įvykio pavadin"
				L"imą\r\n\r\n3) Spauskite \"Naujas įvykis\" mygtuką";
			this->label14->Visible = false;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->label16->ForeColor = System::Drawing::Color::White;
			this->label16->Location = System::Drawing::Point(252, 89);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(557, 306);
			this->label16->TabIndex = 8;
			this->label16->Text = resources->GetString(L"label16.Text");
			this->label16->Visible = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(12, 11);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(167, 22);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Vartotojo vardas";
			// 
			// button10
			// 
			this->button10->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button10->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button10->Location = System::Drawing::Point(827, 9);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(30, 30);
			this->button10->TabIndex = 1;
			this->button10->TabStop = false;
			this->button10->Text = L"_";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &Ivykiu_kalendorius::button10_Click);
			// 
			// button11
			// 
			this->button11->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button11->Font = (gcnew System::Drawing::Font(L"Calibri", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button11->Location = System::Drawing::Point(874, 9);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(30, 30);
			this->button11->TabIndex = 2;
			this->button11->TabStop = false;
			this->button11->Text = L"X";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &Ivykiu_kalendorius::button11_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(40)),
				static_cast<System::Int32>(static_cast<System::Byte>(40)));
			this->panel1->Controls->Add(this->button11);
			this->panel1->Controls->Add(this->button10);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(916, 45);
			this->panel1->TabIndex = 19;
			this->panel1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Ivykiu_kalendorius::panel1_MouseDown);
			this->panel1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Ivykiu_kalendorius::panel1_MouseMove);
			this->panel1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Ivykiu_kalendorius::panel1_MouseUp);
			// 
			// button3
			// 
			this->button3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button3->Location = System::Drawing::Point(498, 406);
			this->button3->MaximumSize = System::Drawing::Size(91, 43);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(91, 43);
			this->button3->TabIndex = 10;
			this->button3->Text = L"Ištrinti įvykį";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Visible = false;
			this->button3->Click += gcnew System::EventHandler(this, &Ivykiu_kalendorius::button3_Click);
			// 
			// button2
			// 
			this->button2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button2->Enabled = false;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(402, 357);
			this->button2->MaximumSize = System::Drawing::Size(187, 29);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(187, 29);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Naujas įvykis";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Ivykiu_kalendorius::button2_Click);
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(402, 406);
			this->button1->MaximumSize = System::Drawing::Size(90, 43);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(90, 43);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Išsaugoti pakeitimus";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Visible = false;
			this->button1->Click += gcnew System::EventHandler(this, &Ivykiu_kalendorius::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(75)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->textBox2->ForeColor = System::Drawing::Color::Gray;
			this->textBox2->Location = System::Drawing::Point(402, 168);
			this->textBox2->MaximumSize = System::Drawing::Size(249, 87);
			this->textBox2->MinimumSize = System::Drawing::Size(187, 87);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(187, 87);
			this->textBox2->TabIndex = 4;
			this->textBox2->Text = L"Komentaras";
			this->textBox2->Enter += gcnew System::EventHandler(this, &Ivykiu_kalendorius::textBox2_Enter);
			this->textBox2->Leave += gcnew System::EventHandler(this, &Ivykiu_kalendorius::textBox2_Leave);
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(398, 51);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(145, 23);
			this->label2->TabIndex = 18;
			this->label2->Text = L"Redagavimas:";
			this->label2->Visible = false;
			// 
			// textBox1
			// 
			this->textBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(75)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->textBox1->ForeColor = System::Drawing::Color::Gray;
			this->textBox1->Location = System::Drawing::Point(402, 130);
			this->textBox1->MaximumSize = System::Drawing::Size(249, 20);
			this->textBox1->MinimumSize = System::Drawing::Size(187, 20);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(187, 20);
			this->textBox1->TabIndex = 2;
			this->textBox1->Text = L"Įvykio pavadinimas";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Ivykiu_kalendorius::textBox1_TextChanged);
			this->textBox1->Enter += gcnew System::EventHandler(this, &Ivykiu_kalendorius::textBox1_Enter);
			this->textBox1->Leave += gcnew System::EventHandler(this, &Ivykiu_kalendorius::textBox1_Leave);
			// 
			// monthCalendar1
			// 
			this->monthCalendar1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->monthCalendar1->Font = (gcnew System::Drawing::Font(L"Calibri", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->monthCalendar1->ForeColor = System::Drawing::Color::Black;
			this->monthCalendar1->Location = System::Drawing::Point(619, 51);
			this->monthCalendar1->MaxSelectionCount = 100;
			this->monthCalendar1->Name = L"monthCalendar1";
			this->monthCalendar1->TabIndex = 1;
			this->monthCalendar1->DateChanged += gcnew System::Windows::Forms::DateRangeEventHandler(this, &Ivykiu_kalendorius::Pasirinkta_data);
			// 
			// listBox1
			// 
			this->listBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->listBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(75)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listBox1->ForeColor = System::Drawing::Color::White;
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 17;
			this->listBox1->Location = System::Drawing::Point(28, 51);
			this->listBox1->Name = L"listBox1";
			this->listBox1->SelectionMode = System::Windows::Forms::SelectionMode::MultiExtended;
			this->listBox1->Size = System::Drawing::Size(315, 344);
			this->listBox1->TabIndex = 11;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Ivykiu_kalendorius::listBox1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(398, 93);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(129, 21);
			this->label1->TabIndex = 9;
			this->label1->Text = L"pasirinkta data";
			// 
			// button4
			// 
			this->button4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(402, 312);
			this->button4->MaximumSize = System::Drawing::Size(187, 29);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(187, 29);
			this->button4->TabIndex = 8;
			this->button4->Text = L"Atšaukti redagavimą";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Visible = false;
			this->button4->Click += gcnew System::EventHandler(this, &Ivykiu_kalendorius::button4_Click);
			// 
			// button5
			// 
			this->button5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(28, 406);
			this->button5->MaximumSize = System::Drawing::Size(106, 23);
			this->button5->MinimumSize = System::Drawing::Size(106, 23);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(106, 23);
			this->button5->TabIndex = 12;
			this->button5->Text = L"Surikiuoti";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Ivykiu_kalendorius::button5_Click);
			// 
			// label4
			// 
			this->label4->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(731, 714);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(73, 16);
			this->label4->TabIndex = 1;
			this->label4->Text = L"Placeholder";
			this->label4->Visible = false;
			// 
			// button9
			// 
			this->button9->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button9->Location = System::Drawing::Point(568, 130);
			this->button9->MaximumSize = System::Drawing::Size(21, 20);
			this->button9->MinimumSize = System::Drawing::Size(21, 20);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(21, 20);
			this->button9->TabIndex = 3;
			this->button9->Text = L"X";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &Ivykiu_kalendorius::button9_Click);
			// 
			// button8
			// 
			this->button8->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::System;
			this->button8->Location = System::Drawing::Point(568, 235);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(21, 20);
			this->button8->TabIndex = 5;
			this->button8->Text = L"X";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &Ivykiu_kalendorius::button8_Click);
			// 
			// checkBox1
			// 
			this->checkBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)),
				static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->checkBox1->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->checkBox1->ForeColor = System::Drawing::Color::White;
			this->checkBox1->Location = System::Drawing::Point(402, 273);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(193, 25);
			this->checkBox1->TabIndex = 6;
			this->checkBox1->Text = L"Pažymėti kaip svarbų";
			this->checkBox1->UseVisualStyleBackColor = false;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->listBox2);
			this->panel2->Controls->Add(this->checkBox1);
			this->panel2->Controls->Add(this->button8);
			this->panel2->Controls->Add(this->button9);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->button5);
			this->panel2->Controls->Add(this->button4);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Controls->Add(this->listBox1);
			this->panel2->Controls->Add(this->monthCalendar1);
			this->panel2->Controls->Add(this->textBox1);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->textBox2);
			this->panel2->Controls->Add(this->button1);
			this->panel2->Controls->Add(this->button2);
			this->panel2->Controls->Add(this->button3);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(58, 45);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(858, 557);
			this->panel2->TabIndex = 20;
			// 
			// listBox2
			// 
			this->listBox2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->listBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(75)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->listBox2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F));
			this->listBox2->ForeColor = System::Drawing::Color::White;
			this->listBox2->FormattingEnabled = true;
			this->listBox2->ItemHeight = 17;
			this->listBox2->Location = System::Drawing::Point(341, 51);
			this->listBox2->MaximumSize = System::Drawing::Size(30, 688);
			this->listBox2->MinimumSize = System::Drawing::Size(30, 344);
			this->listBox2->Name = L"listBox2";
			this->listBox2->SelectionMode = System::Windows::Forms::SelectionMode::MultiExtended;
			this->listBox2->Size = System::Drawing::Size(30, 344);
			this->listBox2->TabIndex = 25;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(48)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->panel5->Controls->Add(this->numericUpDown1);
			this->panel5->Controls->Add(this->button16);
			this->panel5->Controls->Add(this->label13);
			this->panel5->Controls->Add(this->button15);
			this->panel5->Controls->Add(this->label9);
			this->panel5->Controls->Add(this->textBox3);
			this->panel5->Controls->Add(this->label8);
			this->panel5->Controls->Add(this->button12);
			this->panel5->Controls->Add(this->label7);
			this->panel5->Controls->Add(this->comboBox1);
			this->panel5->Controls->Add(this->label6);
			this->panel5->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel5->Location = System::Drawing::Point(60, 45);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(2, 557);
			this->panel5->TabIndex = 23;
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12));
			this->numericUpDown1->Location = System::Drawing::Point(158, 217);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(56, 27);
			this->numericUpDown1->TabIndex = 13;
			// 
			// button16
			// 
			this->button16->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button16->Location = System::Drawing::Point(286, 514);
			this->button16->Name = L"button16";
			this->button16->Size = System::Drawing::Size(58, 27);
			this->button16->TabIndex = 12;
			this->button16->Text = L"Ne";
			this->button16->UseVisualStyleBackColor = true;
			this->button16->Visible = false;
			this->button16->Click += gcnew System::EventHandler(this, &Ivykiu_kalendorius::button16_Click);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label13->ForeColor = System::Drawing::Color::White;
			this->label13->Location = System::Drawing::Point(227, 483);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(114, 18);
			this->label13->TabIndex = 11;
			this->label13->Text = L"Šalinti paskyrą";
			this->label13->Click += gcnew System::EventHandler(this, &Ivykiu_kalendorius::label13_Click);
			// 
			// button15
			// 
			this->button15->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button15->Location = System::Drawing::Point(222, 514);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(58, 27);
			this->button15->TabIndex = 10;
			this->button15->Text = L"Taip";
			this->button15->UseVisualStyleBackColor = true;
			this->button15->Visible = false;
			this->button15->Click += gcnew System::EventHandler(this, &Ivykiu_kalendorius::button15_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(18, 220);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(253, 20);
			this->label9->TabIndex = 8;
			this->label9->Text = L"Naikinti įvykius po                   dienų";
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(210, 150);
			this->textBox3->MaxLength = 1;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(37, 27);
			this->textBox3->TabIndex = 6;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(20, 154);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(184, 20);
			this->label8->TabIndex = 5;
			this->label8->Text = L"Svarbaus įvykio simbolis:";
			// 
			// button12
			// 
			this->button12->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button12->Location = System::Drawing::Point(45, 474);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(159, 27);
			this->button12->TabIndex = 4;
			this->button12->Text = L"Išsaugoti";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &Ivykiu_kalendorius::button12_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(18, 68);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(130, 20);
			this->label7->TabIndex = 3;
			this->label7->Text = L"Programos stilius:";
			// 
			// comboBox1
			// 
			this->comboBox1->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Tamsi", L"Šviesi", L"Oranžine", L"Melyna" });
			this->comboBox1->Location = System::Drawing::Point(21, 91);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 29);
			this->comboBox1->TabIndex = 2;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(18, 18);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(127, 25);
			this->label6->TabIndex = 1;
			this->label6->Text = L"Nustatymai";
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(48)), static_cast<System::Int32>(static_cast<System::Byte>(48)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->panel6->Controls->Add(this->label12);
			this->panel6->Controls->Add(this->label11);
			this->panel6->Controls->Add(this->textBox5);
			this->panel6->Controls->Add(this->button13);
			this->panel6->Controls->Add(this->label10);
			this->panel6->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel6->Location = System::Drawing::Point(62, 45);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(2, 557);
			this->panel6->TabIndex = 24;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->ForeColor = System::Drawing::Color::White;
			this->label12->Location = System::Drawing::Point(23, 107);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(64, 13);
			this->label12->TabIndex = 14;
			this->label12->Text = L"Failo vardas";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::Color::White;
			this->label11->Location = System::Drawing::Point(19, 504);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(270, 18);
			this->label11->TabIndex = 13;
			this->label11->Text = L"*Duomenys sėkmingai atspausdinti*";
			this->label11->Visible = false;
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(75)), static_cast<System::Int32>(static_cast<System::Byte>(80)),
				static_cast<System::Int32>(static_cast<System::Byte>(88)));
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Consolas", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox5->ForeColor = System::Drawing::Color::White;
			this->textBox5->Location = System::Drawing::Point(19, 131);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox5->Size = System::Drawing::Size(807, 358);
			this->textBox5->TabIndex = 12;
			this->textBox5->WordWrap = false;
			// 
			// button13
			// 
			this->button13->Font = (gcnew System::Drawing::Font(L"Century Gothic", 11.25F));
			this->button13->Location = System::Drawing::Point(253, 65);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(254, 34);
			this->button13->TabIndex = 11;
			this->button13->Text = L"Spausdinti duomenis į failą";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &Ivykiu_kalendorius::button13_Click);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Century Gothic", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(16, 18);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(153, 25);
			this->label10->TabIndex = 10;
			this->label10->Text = L"Spausdinimas";
			// 
			// Ivykiu_kalendorius
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(54)), static_cast<System::Int32>(static_cast<System::Byte>(57)),
				static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->ClientSize = System::Drawing::Size(916, 602);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Ivykiu_kalendorius";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Ivykiu_kalendorius";
			this->Load += gcnew System::EventHandler(this, &Ivykiu_kalendorius::Įvykių_kalendorius_Load);
			this->panel3->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	//--------------------------------------------------------------------------------------------
	private: System::Void Įvykių_kalendorius_Load(System::Object^  sender, System::EventArgs^  e) 
	{
		string vardas, slaptazodis, 
			theme, svsimb, 
			dt, pav, tekstas, svarbus, daysLeft;

		int n, skirtumas = 0, np;
		bool sv;

		label3->Text = Vardas;

		string siandien;
		StringTostring(snddt, siandien);

		StringTostring(Vardas, vardas);
		StringTostring(Slaptazodis, slaptazodis);

		string path; 
		path = PaskyruAplankas + vardas + slaptazodis + ".txt";

		ifstream in(path); // Atidaromas paskyros duomenų failas

		in.ignore(256, ':');
		in >> theme;

		in.ignore(256, ':');
		in >> svsimb;

		in.ignore(256, ':');
		in >> np;
		in.ignore(256, '\n');

		naikintiPo = np.ToString();

		numericUpDown1->Text = naikintiPo;

		in >> n;
		in.ignore(256, '\n');

		Theme = gcnew String(theme.c_str());
		SvSimb = gcnew String(svsimb.c_str());
		KeistiTema();
		comboBox1->SelectedItem = Theme;
		textBox1->ForeColor = Color::Gray;
		textBox2->ForeColor = Color::Gray;

		textBox3->Text = SvSimb;

		for (int i = 0; i < n; i++)
		{
			getline(in, dt, '~');
			getline(in, pav, '~');
			getline(in, tekstas, '~');
			getline(in, daysLeft, '~');
			getline(in, svarbus, '\n');

			string ivykiodata = dt.substr(0, 10);
			skirtumas = SkirtumasTarpDatu(siandien, ivykiodata);

			if (skirtumas > np*-1)
			{
				String^ str1 = gcnew String(dt.c_str());
				String^ str2 = gcnew String(pav.c_str());

				if (svarbus == "1")
				{
					sv = true;
					listBox1->Items->Add(SvSimb + str1 + " " + str2 + SvSimb + "\n");
					listBox2->Items->Add(skirtumas + "\n");

				}
				else
				{
					sv = false;
					listBox1->Items->Add(" " + str1 + " " + str2 + " " + "\n");
					listBox2->Items->Add(skirtumas + "\n");

				}

				Ivykis iv(dt, pav, tekstas, sv, skirtumas);
				IvykiuPaskyra->DetiIvyki(iv);
			}
		}
		in.close();

	}

	//--------------------------------------------------------------------------------------------
	private: System::Void Pasirinkta_data(System::Object^  sender, System::Windows::Forms::DateRangeEventArgs^  e)
	{
		label1->Text = e->Start.Date.ToShortDateString();

		if (e->Start.Date.ToShortDateString() != e->End.Date.ToShortDateString())
		{
			label1->Text += " - " + e->End.Date.ToShortDateString();
		}

		if (textBox1->Text->Trim()->Length > 0 && textBox1->Text != L"Įvykio pavadinimas")
		{
			button2->Enabled = true;
		}
		else
		{
			button2->Enabled = false;
		}

		data = label1->Text;
	}

	//--------------------------------------------------------------------------------------------
	private: System::Void textBox1_Enter(System::Object^  sender, System::EventArgs^  e)
	{
		if (textBox1->Text == L"Įvykio pavadinimas")
		{
			textBox1->Text = "";

			if (blackText == true)
			{
				textBox1->ForeColor = Color::Black;
			}
			else
			{
				textBox1->ForeColor = Color::White;
			}
		}
	}

	//--------------------------------------------------------------------------------------------
	private: System::Void textBox1_Leave(System::Object^  sender, System::EventArgs^  e) 
	{
		if (textBox1->Text == "")
		{
			textBox1->Text = L"Įvykio pavadinimas";
			textBox1->ForeColor = Color::Gray;
		}
	}

	//--------------------------------------------------------------------------------------------
	private: System::Void textBox2_Enter(System::Object^  sender, System::EventArgs^  e)
	{
		if (textBox2->Text == L"Komentaras")
		{
			textBox2->Text = "";

			if (blackText == true)
			{
				textBox2->ForeColor = Color::Black;
			}
			else
			{
				textBox2->ForeColor = Color::White;
			}
		}
	}

	//--------------------------------------------------------------------------------------------
	private: System::Void textBox2_Leave(System::Object^  sender, System::EventArgs^  e)
	{
		if (textBox2->Text == "")
		{
			textBox2->Text = L"Komentaras";
			textBox2->ForeColor = Color::Gray;
		}
	}
	
	//--------------------------------------------------------------------------------------------
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) 
	{
		if (textBox1->Text->Trim()->Length > 0 && textBox1->Text != L"Įvykio pavadinimas" && label1->Text != L"pasirinkta data")
		{		
			button1->Enabled = true;
			button2->Enabled = true;
		}
		else
		{
			button1->Enabled = false;
			button2->Enabled = false;
		}	
	}

	//--------------------------------------------------------------------------------------------
	//Mygtuko "Išsaugoti pakeitimus" veiksmai:
	//--------------------------------------------------------------------------------------------
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		int index;
		index = listBox1->SelectedIndex;

		pavadinimas = textBox1->Text;
		
		if (textBox2->Text->Trim()->Length > 0 && textBox2->Text != L"Komentaras")
		{
			komentaras = textBox2->Text;
		}
		else
		{
			komentaras = "";
		}

		data = label1->Text;

		string dt, pav, k;

		StringTostring(data, dt);
		StringTostring(pavadinimas, pav);
		StringTostring(komentaras, k);
	
		string siandien;
		StringTostring(snddt, siandien);
		int skirtumas = SkirtumasTarpDatu(siandien, dt);

		if (checkBox1->Checked == true)
		{
			listBox1->Items->RemoveAt(index);
			listBox2->Items->RemoveAt(index);

			SvarbusIvykis = true;
			listBox1->Items->Insert(index, SvSimb + data + " " + pavadinimas + SvSimb + "\n");
			listBox2->Items->Insert(index, skirtumas + "\n");

		}
		else
		{
			listBox1->Items->RemoveAt(index);
			listBox2->Items->RemoveAt(index);

			SvarbusIvykis = false;
			listBox1->Items->Insert(index, " " + data + " " + pavadinimas + " " + "\n");
			listBox2->Items->Insert(index, skirtumas + "\n");

		}

		Ivykis ivykis(dt, pav, k, SvarbusIvykis, skirtumas);
		IvykiuPaskyra->AtnaujintiIvyki(ivykis, index);

		textBox1->Text = L"Įvykio pavadinimas";
		textBox1->ForeColor = Color::Gray;

		textBox2->Text = L"Komentaras";
		textBox2->ForeColor = Color::Gray;

		AtsauktiRedagavima();
	}

	//--------------------------------------------------------------------------------------------
	//Mygtuko "Išstrinti įvykį" veiksmai:
	//--------------------------------------------------------------------------------------------
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e)
	{
		for (int i = 0; i < listBox1->Items->Count; i++)
		{
			if (listBox1->GetSelected(i) == true)
			{
				listBox1->Items->RemoveAt(i);
				listBox2->Items->RemoveAt(i);

				IvykiuPaskyra->Salinti(i);

				i--;

			}
		}

		textBox1->Text = L"Įvykio pavadinimas";
		textBox1->ForeColor = Color::Gray;

		textBox2->Text = L"Komentaras";
		textBox2->ForeColor = Color::Gray;

		AtsauktiRedagavima();
	}

	//--------------------------------------------------------------------------------------------	
	private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) 
	{
		int x = 0;

		listBox2->ClearSelected();
		listBox2->SelectedIndex = listBox1->SelectedIndex;

		if (listBox1->SelectedIndex >= 0)
		{
			for (int i = 0; i < listBox1->Items->Count; i++)
			{
				if (listBox1->GetSelected(i) == true)
				{
					x++;
				}
			}

			button2->Visible = false;

			if (x > 1)
			{
				listBox2->ClearSelected();

				label1->Text = "-";
				textBox1->Text = "-";
				textBox2->Text = "-";

				button1->Enabled = false;

				textBox1->Enabled = false;
				textBox2->Enabled = false;

				label2->Visible = true;

				checkBox1->Visible = false;

				button1->Visible = true;
				button3->Visible = true;
				button4->Visible = true;

				button8->Enabled = false;
				button9->Enabled = false;
			
				PasirinktaDaug = true;

			}
			else
			{
				button1->Enabled = true;

				textBox1->Enabled = true;
				textBox2->Enabled = true;

				label2->Visible = true;

				checkBox1->Visible = true;

				button1->Visible = true;
				button3->Visible = true;
				button4->Visible = true;

				button8->Enabled = true;
				button9->Enabled = true;

				string dt, pav, k;
				bool sv;
				int skirtumas = 0;

				IvykiuPaskyra->Imti(listBox1->SelectedIndex).Imti(dt, pav, k, sv, skirtumas);

				String^ str1 = gcnew String(dt.c_str());
				String^ str2 = gcnew String(pav.c_str());
				String^ str3 = gcnew String(k.c_str());

				if (sv == true)
				{
					checkBox1->Checked = true;
				}
				else
				{
					checkBox1->Checked = false;
				}

				label1->Text = str1;
				textBox1->Text = str2;
				textBox2->Text = str3;

				if (blackText == true)
				{
					textBox1->ForeColor = Color::Black;
					textBox2->ForeColor = Color::Black;

				}
				else
				{
					textBox1->ForeColor = Color::White;
					textBox2->ForeColor = Color::White;
				}

				PasirinktaDaug = false;
			}
		}
	}
	//--------------------------------------------------------------------------------------------
	//Mygtuko "Naujas įvykis" veiksmai:
	//--------------------------------------------------------------------------------------------
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		string dt, pav, k;

		data = label1->Text;
		pavadinimas = textBox1->Text;

		if (textBox2->Text->Trim()->Length > 0 && textBox2->Text != L"Komentaras")
		{
			komentaras = textBox2->Text;
		}
		else
		{
			komentaras = "";
		}

		StringTostring(data, dt);
		StringTostring(pavadinimas, pav);
		StringTostring(komentaras, k);

		string siandien;
		StringTostring(snddt, siandien);
		int skirtumas = SkirtumasTarpDatu(siandien, dt);

		if (checkBox1->Checked == true)
		{
			listBox1->Items->Add(SvSimb + data + " " + pavadinimas + SvSimb + "\n");
			listBox2->Items->Add(skirtumas + "\n");

			SvarbusIvykis = true;
		}
		else
		{
			listBox1->Items->Add(" " + data + " " + pavadinimas + " " + "\n");
			listBox2->Items->Add(skirtumas + "\n");

			SvarbusIvykis = false;
		}


		Ivykis ivykis(dt, pav, k, SvarbusIvykis, skirtumas);

		IvykiuPaskyra->DetiIvyki(ivykis);

	}

	//--------------------------------------------------------------------------------------------
	//Mygtuko "Atšaukti redagavimą" veiksmai:
	//--------------------------------------------------------------------------------------------
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e)
	{
		button2->Visible = true;
		
		AtsauktiRedagavima();

		textBox1->Text = L"Įvykio pavadinimas";
		textBox1->ForeColor = Color::Gray;

		textBox2->Text = L"Komentaras";
		textBox2->ForeColor = Color::Gray;

		listBox1->ClearSelected();

	}

	//-----------------------------------------------------------------------------------
	//Mygtuko "Surikiuoti" veiksmai:
	//-----------------------------------------------------------------------------------
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e)
	{
		RikiuotiIvykius(*IvykiuPaskyra);

		RefreshListBox();
	}

	//-----------------------------------------------------------------------------------
	// Mygtukas, atidarantis informacijos langą
	//-----------------------------------------------------------------------------------
	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		if (panel4->Width == 0)
		{
			panel4->Width = 854;
			panel5->Width = 2;
			panel6->Width = 2;

			label11->Visible = false;

			label13->ForeColor = Color::White;
			label13->Text = L"Šalinti paskyrą";

			button15->Visible = false;
			button16->Visible = false;
		}
		else
		{
			panel4->Width = 0;
		}

	}

	//-----------------------------------------------------------------------------------
	// Mygtukas, atidarantis nustatymų langą
	//-----------------------------------------------------------------------------------
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (panel5->Width == 2)
		{
			panel5->Width = 379;
			panel4->Width = 0;
			panel6->Width = 2;

			label11->Visible = false;

			label13->ForeColor = Color::White;
			label13->Text = L"Šalinti paskyrą";

			button15->Visible = false;
			button16->Visible = false;
		}
		else
		{
			panel5->Width = 2;
		}
	}

	//-----------------------------------------------------------------------------------
	// Mygtukas, atidarantis spausdinimo langą
	//-----------------------------------------------------------------------------------
	private: System::Void button14_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (panel6->Width == 2)
		{
			panel4->Width = 0;
			panel5->Width = 2;
			panel6->Width = 854;

			label11->Visible = false;

			label13->ForeColor = Color::White;
			label13->Text = L"Šalinti paskyrą";

			button15->Visible = false;
			button16->Visible = false;
		}
		else
		{
			panel6->Width = 2;
		}
	}

	//-----------------------------------------------------------------------------------
	// Mygtukas "X" skirtas išvalyti textBox1 įrašytą tekstą:
	//-----------------------------------------------------------------------------------
	private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e)
	{
		textBox1->Text = L"Įvykio pavadinimas";
		textBox1->ForeColor = Color::Gray;

	}

	//-----------------------------------------------------------------------------------
	// Mygtukas "X" skirtas išvalyti textBox2 įrašytą tekstą:
	//-----------------------------------------------------------------------------------
	private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		textBox2->Text = L"Komentaras";
		textBox2->ForeColor = Color::Gray;

	}

	//-----------------------------------------------------------------------------------
	// Funkcija, skirta paslėpti įvykio redagavimo mygtukus
	//-----------------------------------------------------------------------------------
	void AtsauktiRedagavima()
	{
		label2->Visible = false;
		button1->Visible = false;

		button2->Visible = true;

		button3->Visible = false;
		button4->Visible = false;

		checkBox1->Checked = false;

	}

	//--------------------------------------------------------------------------------------------------------
	private: System::Void panel1_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e)
	{
		dragging = true;
		offset = Point(e->X, e->Y);
	}

	//--------------------------------------------------------------------------------------------------------
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

	//--------------------------------------------------------------------------------------------------------
	private: System::Void panel1_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) 
	{	
		dragging = false;
	}

	//-----------------------------------------------------------------------------------
	// Programos išjungimo mygtuko "X" atliekami veiksmai:
	//-----------------------------------------------------------------------------------
	private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		string vardas, slaptazodis, theme, svsimb, np;
		int n;

		StringTostring(naikintiPo, np);

		StringTostring(Vardas, vardas);
		StringTostring(Slaptazodis, slaptazodis);
		StringTostring(Theme, theme);
		StringTostring(SvSimb, svsimb);

		n = IvykiuPaskyra->ImtiN();

		SaugotiDuomenis(*IvykiuPaskyra, vardas, slaptazodis, theme, n, svsimb, np);

		Application::Exit();

	}
	
	//--------------------------------------------------------------------------------------------
	// Formos sumažinimo mygtuko "_" atliekami veiksmai:
	//--------------------------------------------------------------------------------------------
	private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e)
	{
		WindowState = FormWindowState::Minimized;
	}

	//--------------------------------------------------------------------------------------------
	// Nustatymų mygtuko "Išsaugoti" atliekami veiksmai:
	//--------------------------------------------------------------------------------------------
	private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e)
	{
		if (textBox3->Text == "" || textBox3->Text == " ")
		{
			textBox3->Text = "*";
		}

		if (numericUpDown1->Text == "" || numericUpDown1->Text == " ")
		{
			numericUpDown1->Text = "3";
		}

		Theme = comboBox1->SelectedItem->ToString();

		KeistiTema();

		SvSimb = textBox3->Text;

		RefreshListBox();
	
		naikintiPo = numericUpDown1->Text;
	}


	//-----------------------------------------------------------------------------------
	// Funkcija, skirta pakeisti formos išvaizdą
	//-----------------------------------------------------------------------------------
	void KeistiTema()
	{
		if (Theme == L"Šviesi")
		{
			panel1->BackColor = Color::FromArgb(180, 180, 180);
			panel2->BackColor = Color::FromArgb(239, 240, 241);
			panel3->BackColor = Color::FromArgb(192, 192, 193);
			panel4->BackColor = Color::FromArgb(192, 192, 193);
			panel5->BackColor = Color::FromArgb(192, 192, 193);
			panel6->BackColor = Color::FromArgb(192, 192, 193);

			checkBox1->BackColor = Color::FromArgb(239, 240, 241);

			swapColor(Color::Black, Color::White);

			button7->Image=(Image::FromFile("Pictures/info_icon_whiteTheme.png"));
			button6->Image = (Image::FromFile("Pictures/settings_icon_whiteTheme.png"));
			button14->Image = (Image::FromFile("Pictures/print_icon_whiteTheme.png"));
			button17->Image = (Image::FromFile("Pictures/logout_icon_whiteTheme.png"));


			blackText = true;
		}
		if (Theme == L"Tamsi")
		{
			blackText = false;

			panel1->BackColor = Color::FromArgb(40, 40, 40);
			panel2->BackColor = Color::FromArgb(54,57,63);
			panel3->BackColor = Color::FromArgb(48, 48, 48);
			panel4->BackColor = Color::FromArgb(48, 48, 48);
			panel5->BackColor = Color::FromArgb(48, 48, 48);
			panel6->BackColor = Color::FromArgb(48, 48, 48);

			checkBox1->BackColor = Color::FromArgb(54, 57, 63);

			swapColor(Color::White, Color::FromArgb(75, 80, 88));

			button7->Image = (Image::FromFile("Pictures/info_icon_darkTheme.png"));
			button6->Image = (Image::FromFile("Pictures/settings_icon_darkTheme.png"));
			button14->Image = (Image::FromFile("Pictures/print_icon_darkTheme.png"));
			button17->Image = (Image::FromFile("Pictures/logout_icon_darkTheme.png"));

		}
		if (Theme == L"Melyna")
		{
			blackText = true;

			panel1->BackColor = Color::FromArgb(36, 152, 181);
			panel2->BackColor = Color::FromArgb(148, 216, 233);
			panel3->BackColor = Color::FromArgb(73, 189, 218);
			panel4->BackColor = Color::FromArgb(73, 189, 218);
			panel5->BackColor = Color::FromArgb(73, 189, 218);
			panel6->BackColor = Color::FromArgb(73, 189, 218);

			checkBox1->BackColor = Color::FromArgb(148, 216, 233);

			swapColor(Color::Black, Color::White);

			button7->Image = (Image::FromFile("Pictures/info_icon_whiteTheme.png"));
			button6->Image = (Image::FromFile("Pictures/settings_icon_whiteTheme.png"));
			button14->Image = (Image::FromFile("Pictures/print_icon_whiteTheme.png"));
			button17->Image = (Image::FromFile("Pictures/logout_icon_whiteTheme.png"));

		}
		if (Theme == L"Oranžine")
		{
			blackText = true;

			panel1->BackColor = Color::FromArgb(205, 116, 7);
			panel2->BackColor = Color::FromArgb(250, 188, 114);
			panel3->BackColor = Color::FromArgb(247, 148, 29);
			panel4->BackColor = Color::FromArgb(247, 148, 29);
			panel5->BackColor = Color::FromArgb(247, 148, 29);
			panel6->BackColor = Color::FromArgb(247, 148, 29);

			checkBox1->BackColor = Color::FromArgb(250, 188, 114);

			swapColor(Color::Black, Color::White);

			button7->Image = (Image::FromFile("Pictures/info_icon_whiteTheme.png"));
			button6->Image = (Image::FromFile("Pictures/settings_icon_whiteTheme.png"));
			button14->Image = (Image::FromFile("Pictures/print_icon_whiteTheme.png"));
			button17->Image = (Image::FromFile("Pictures/logout_icon_whiteTheme.png"));

		}
	}

	//-----------------------------------------------------------------------------------
	// Funkcija, skirta pakeisti formos teksto ir teksto langų išvaizdą
	//-----------------------------------------------------------------------------------
	void swapColor(Color c1, Color c2)
	{
		listBox1->ForeColor = c1;
		listBox2->ForeColor = c1;

		textBox1->ForeColor = c1;
		textBox2->ForeColor = c1;
		textBox5->ForeColor = c1;

		label1->ForeColor = c1;
		label2->ForeColor = c1;
		label3->ForeColor = c1;
		label5->ForeColor = c1;
		label6->ForeColor = c1;
		label7->ForeColor = c1;
		label8->ForeColor = c1;
		label9->ForeColor = c1;
		label10->ForeColor = c1;
		label11->ForeColor = c1;
		label12->ForeColor = c1;
		label14->ForeColor = c1;
		label15->ForeColor = c1;
		label16->ForeColor = c1;

		checkBox1->ForeColor = c1;

		listBox1->BackColor = c2;
		listBox2->BackColor = c2;

		textBox1->BackColor = c2;
		textBox2->BackColor = c2;
		textBox5->BackColor = c2;

		if (textBox1->Text == L"Įvykio pavadinimas")
		{
			textBox1->ForeColor = Color::Gray;
		}

		if (textBox2->Text == L"Komentaras")
		{
			textBox2->ForeColor = Color::Gray;
		}
	}

	//-----------------------------------------------------------------------------------
	// Funkcija, skirta perkrauti listBox duomenis 
	//-----------------------------------------------------------------------------------
	void RefreshListBox()
	{
		string dt, pav, k;
		bool sv;
		int dl;

		listBox1->Items->Clear();
		listBox2->Items->Clear();

		for (int i = 0; i < IvykiuPaskyra->ImtiN(); i++)
		{
			IvykiuPaskyra->Imti(i).Imti(dt,pav,k,sv,dl);

			String^ str1 = gcnew String(dt.c_str());
			String^ str2 = gcnew String(pav.c_str());
			String^ str3 = gcnew String(k.c_str());

			if (sv)
			{
				listBox1->Items->Add(SvSimb + str1 + " " + str2 + SvSimb + "\n");
				listBox2->Items->Add(dl + "\n");

			}
			else
			{
				listBox1->Items->Add(" " + str1 + " " + str2 + " " + "\n");
				listBox2->Items->Add(dl +"\n");

			}
		}
	}

	//-----------------------------------------------------------------------------------
	// Spausdinimo mygtuko "Spausdinti duomenis į failą" veiksmai:
	//-----------------------------------------------------------------------------------
	private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e)
	{	
		string failas, vardas, eil;
			
		StringTostring(Vardas, vardas);

		failas = vardas + "_rez.txt"; // Rezultatų failas

		String^ fv = gcnew String(failas.c_str());
		label12->Text = fv;

		Spausdinimas(failas, vardas, *IvykiuPaskyra);

		ifstream in(RezultatuAplankas + failas);

		textBox5->Clear();

		while (!in.eof())
		{
			getline(in, eil);
			String^ str4 = gcnew String(eil.c_str());

			textBox5->Text += str4 + System::Environment::NewLine;
		}

		in.close();

		label11->Visible = true;
	}

	//-----------------------------------------------------------------------------------
	private: System::Void label13_Click(System::Object^  sender, System::EventArgs^  e)
	{
		label13->ForeColor = Color::Red;
		label13->Text = L"Šalinti paskyrą?";

		button15->Visible = true;
		button16->Visible = true;
	}

	//-----------------------------------------------------------------------------------
	// Nustatymų mygtuko "Ne" veiksmai:
	//-----------------------------------------------------------------------------------
	private: System::Void button16_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		button15->Visible = false;
		button16->Visible = false;

		label13->ForeColor = Color::White;
		label13->Text = L"Šalinti paskyrą";
	}
	
	//-----------------------------------------------------------------------------------
	// Nustatymų mygtuko "Taip" veiksmai:
	//-----------------------------------------------------------------------------------
	private: System::Void button15_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		string paskyra, vardas, slaptazodis, eil[999];
		int m = 0;

		StringTostring(Vardas, vardas);
		StringTostring(Slaptazodis, slaptazodis);

		SalintiPaskyra(vardas, slaptazodis);


		obj->Show();

		this->Hide();

	}

	//-----------------------------------------------------------------------------------
	// Atsijungimo mygtuko veiksmai:
	//-----------------------------------------------------------------------------------
	private: System::Void button17_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		string vardas, slaptazodis, theme, svsimb, np;
		int n;

		StringTostring(naikintiPo, np);

		StringTostring(Vardas, vardas);
		StringTostring(Slaptazodis, slaptazodis);
		StringTostring(Theme, theme);
		StringTostring(SvSimb, svsimb);

		n = IvykiuPaskyra->ImtiN();

		SaugotiDuomenis(*IvykiuPaskyra, vardas, slaptazodis, theme, n, svsimb, np);
		

		obj->Show();

		this->Hide();

	}

	//-----------------------------------------------------------------------------------
	// Informacijos mygtuko ">" veiksmai:
	//-----------------------------------------------------------------------------------
	private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) 
	{	
		button18->Visible = false;
		button19->Visible = true;

		label14->Visible = false;
		label15->Visible = true;

		pictureBox1->Image = (Image::FromFile("Pictures/tutorial2.png"));
	}

	//-----------------------------------------------------------------------------------
	// Informacijos mygtuko "<" veiksmai:
	//-----------------------------------------------------------------------------------
	private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) 
	{	
		button19->Visible = false;
		button18->Visible = true;

		label15->Visible = false;
		label14->Visible = true;

		pictureBox1->Image = (Image::FromFile("Pictures/tutorial1.png"));
	}

	//-----------------------------------------------------------------------------------
	// Informacijos mygtuko "Programos naudojimas" veiksmai:
	//-----------------------------------------------------------------------------------
	private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		label5->Text = L"Programos naudojimas";

		label14->Visible = true;
		pictureBox1->Visible = true;
		button18->Visible = true;

		button19->Visible = false;
		label15->Visible = false;

		button20->Visible = false;
		button21->Visible = true;

		label16->Visible = false;

		pictureBox1->Image = (Image::FromFile("Pictures/tutorial1.png"));
	}

	//-----------------------------------------------------------------------------------
	// Informacijos mygtuko "Apie programą" veiksmai:
	//-----------------------------------------------------------------------------------
	private: System::Void button21_Click(System::Object^  sender, System::EventArgs^  e) 
	{
		label5->Text = L"Apie programą";

		label14->Visible = false;
		pictureBox1->Visible = false;
		button18->Visible = false;

		button19->Visible = false;
		label15->Visible = false;

		button20->Visible = true;
		button21->Visible = false;

		label16->Visible = true;
	}

};
}