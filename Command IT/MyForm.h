#pragma once
#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include<fstream>
#include<string>
#include<iostream>
#include<stdlib.h>
#include <ShlObj.h>
#include <WinInet.h>
#pragma comment(lib, "WinInet.lib")
#include <windows.h>
#pragma comment(lib, "Winmm.lib")
#include <fstream>
#include<WinUser.h>

using namespace std;

namespace CommandIT {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Threading;
	using namespace std;
	/// <summary>
	/// Summary for MyForm
	/// </summary>

	public ref class MyForm : public System::Windows::Forms::Form
	{
	private:
		//^ thread;

	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		
		

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}


	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;

	private: System::Windows::Forms::Button^  button6;











	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button18;




	private: System::Windows::Forms::Label^  label2;




	private: System::Windows::Forms::Button^  button21;

	private: System::Windows::Forms::Button^  button22;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button13;
	private: System::Windows::Forms::Button^  button23;
	private: System::Windows::Forms::Button^  button24;
	private: System::Windows::Forms::Button^  button25;
	private: System::Windows::Forms::ToolTip^  toolTip1;

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button7;

	private: System::Windows::Forms::Button^  button19;
	private: System::Windows::Forms::Button^  button20;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button14;
	private: System::Windows::Forms::Button^  button15;


	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Panel^  panel3;

	private: System::Windows::Forms::Button^  button27;
	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::Button^  button28;
	private: System::Windows::Forms::Button^  button29;
	private: System::Windows::Forms::Button^  button30;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  button31;
	private: System::Windows::Forms::Button^  button32;
	private: System::Windows::Forms::Label^  label5;













	private: System::ComponentModel::IContainer^  components;



	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button18 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button21 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button23 = (gcnew System::Windows::Forms::Button());
			this->button24 = (gcnew System::Windows::Forms::Button());
			this->button25 = (gcnew System::Windows::Forms::Button());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button19 = (gcnew System::Windows::Forms::Button());
			this->button20 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button15 = (gcnew System::Windows::Forms::Button());
			this->button27 = (gcnew System::Windows::Forms::Button());
			this->button31 = (gcnew System::Windows::Forms::Button());
			this->button32 = (gcnew System::Windows::Forms::Button());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button30 = (gcnew System::Windows::Forms::Button());
			this->button29 = (gcnew System::Windows::Forms::Button());
			this->button28 = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->Location = System::Drawing::Point(402, 155);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(149, 34);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Monitor Off";
			this->toolTip1->SetToolTip(this->button2, L"Turns Off Monitor Screen");
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->Location = System::Drawing::Point(402, 455);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(149, 33);
			this->button3->TabIndex = 2;
			this->button3->Text = L"IP Adrress";
			this->toolTip1->SetToolTip(this->button3, L"Shows Your Network IP Address");
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.Image")));
			this->button4->Location = System::Drawing::Point(230, 241);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(149, 33);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Control Panel";
			this->toolTip1->SetToolTip(this->button4, L"Opens Control Panel");
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.Image")));
			this->button6->Location = System::Drawing::Point(402, 199);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(149, 35);
			this->button6->TabIndex = 5;
			this->button6->Text = L"Log Off";
			this->toolTip1->SetToolTip(this->button6, L"Logs Off");
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button9.Image")));
			this->button9->Location = System::Drawing::Point(735, 198);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(136, 36);
			this->button9->TabIndex = 17;
			this->button9->Text = L"Notepad";
			this->toolTip1->SetToolTip(this->button9, L"Opens a Notepad");
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click_1);
			// 
			// button18
			// 
			this->button18->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->button18->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button18->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button18.Image")));
			this->button18->Location = System::Drawing::Point(659, 241);
			this->button18->Name = L"button18";
			this->button18->Size = System::Drawing::Size(136, 33);
			this->button18->TabIndex = 18;
			this->button18->Text = L"Disable Internet";
			this->toolTip1->SetToolTip(this->button18, L"Disconnects Network");
			this->button18->UseVisualStyleBackColor = false;
			this->button18->Click += gcnew System::EventHandler(this, &MyForm::button18_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::HotTrack;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label2.Image")));
			this->label2->Location = System::Drawing::Point(102, 294);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 18);
			this->label2->TabIndex = 23;
			// 
			// button21
			// 
			this->button21->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->button21->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button21->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button21.Image")));
			this->button21->Location = System::Drawing::Point(402, 280);
			this->button21->Name = L"button21";
			this->button21->Size = System::Drawing::Size(149, 39);
			this->button21->TabIndex = 28;
			this->button21->Text = L"Mobility Center";
			this->toolTip1->SetToolTip(this->button21, L"If You Dont Know About This,Must Check It Out");
			this->button21->UseVisualStyleBackColor = false;
			this->button21->Click += gcnew System::EventHandler(this, &MyForm::button21_Click);
			// 
			// button22
			// 
			this->button22->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->button22->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button22->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button22.Image")));
			this->button22->Location = System::Drawing::Point(230, 280);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(149, 39);
			this->button22->TabIndex = 30;
			this->button22->Text = L"System Info";
			this->toolTip1->SetToolTip(this->button22, L"Displays System Information");
			this->button22->UseVisualStyleBackColor = false;
			this->button22->Click += gcnew System::EventHandler(this, &MyForm::button22_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.Image")));
			this->button5->Location = System::Drawing::Point(230, 325);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(149, 39);
			this->button5->TabIndex = 31;
			this->button5->Text = L"Clear Temp Files";
			this->toolTip1->SetToolTip(this->button5, L"Makes Some Memory Space");
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click_1);
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->button10->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button10.Image")));
			this->button10->Location = System::Drawing::Point(402, 325);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(149, 39);
			this->button10->TabIndex = 32;
			this->button10->Text = L"Run";
			this->toolTip1->SetToolTip(this->button10, L"Opens Run Command");
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click_1);
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->button13->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button13->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button13.Image")));
			this->button13->Location = System::Drawing::Point(230, 370);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(149, 40);
			this->button13->TabIndex = 33;
			this->button13->Text = L"Chrome Incognito";
			this->toolTip1->SetToolTip(this->button13, L"Browse Privately");
			this->button13->UseVisualStyleBackColor = false;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click_1);
			// 
			// button23
			// 
			this->button23->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->button23->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button23->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button23.Image")));
			this->button23->Location = System::Drawing::Point(402, 370);
			this->button23->Name = L"button23";
			this->button23->Size = System::Drawing::Size(149, 40);
			this->button23->TabIndex = 34;
			this->button23->Text = L"Camera";
			this->toolTip1->SetToolTip(this->button23, L" Opens Camera :)");
			this->button23->UseVisualStyleBackColor = false;
			this->button23->Click += gcnew System::EventHandler(this, &MyForm::button23_Click);
			// 
			// button24
			// 
			this->button24->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->button24->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button24->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button24.Image")));
			this->button24->Location = System::Drawing::Point(230, 416);
			this->button24->Name = L"button24";
			this->button24->Size = System::Drawing::Size(149, 33);
			this->button24->TabIndex = 35;
			this->button24->Text = L"Night Light";
			this->toolTip1->SetToolTip(this->button24, L"Good For Eyes");
			this->button24->UseVisualStyleBackColor = false;
			this->button24->Click += gcnew System::EventHandler(this, &MyForm::button24_Click);
			// 
			// button25
			// 
			this->button25->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->button25->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button25->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button25.Image")));
			this->button25->Location = System::Drawing::Point(402, 416);
			this->button25->Name = L"button25";
			this->button25->Size = System::Drawing::Size(149, 33);
			this->button25->TabIndex = 36;
			this->button25->Text = L"Sleep";
			this->toolTip1->SetToolTip(this->button25, L"Goes To Sleep");
			this->button25->UseVisualStyleBackColor = false;
			this->button25->Click += gcnew System::EventHandler(this, &MyForm::button25_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(230, 155);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(149, 34);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Open CD-Rom";
			this->toolTip1->SetToolTip(this->button1, L"Opens a CD-Rom");
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->button7->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button7.Image")));
			this->button7->Location = System::Drawing::Point(580, 155);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(149, 34);
			this->button7->TabIndex = 6;
			this->button7->Text = L"Facebook";
			this->toolTip1->SetToolTip(this->button7, L"Zuckerberg Is Watching You");
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// button19
			// 
			this->button19->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->button19->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button19->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button19.Image")));
			this->button19->Location = System::Drawing::Point(580, 198);
			this->button19->Name = L"button19";
			this->button19->Size = System::Drawing::Size(149, 36);
			this->button19->TabIndex = 25;
			this->button19->Text = L"Instagram";
			this->toolTip1->SetToolTip(this->button19, L"Check Out Stories");
			this->button19->UseVisualStyleBackColor = false;
			this->button19->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// button20
			// 
			this->button20->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->button20->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button20->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button20.Image")));
			this->button20->Location = System::Drawing::Point(735, 155);
			this->button20->Name = L"button20";
			this->button20->Size = System::Drawing::Size(136, 34);
			this->button20->TabIndex = 26;
			this->button20->Text = L"Google";
			this->toolTip1->SetToolTip(this->button20, L"Explore More");
			this->button20->UseVisualStyleBackColor = false;
			this->button20->Click += gcnew System::EventHandler(this, &MyForm::button20_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->button11->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button11.Image")));
			this->button11->Location = System::Drawing::Point(580, 406);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(149, 33);
			this->button11->TabIndex = 38;
			this->button11->Text = L"Swap Mouse";
			this->toolTip1->SetToolTip(this->button11, L"Right To Left , Left To Right");
			this->button11->UseVisualStyleBackColor = false;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click_1);
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->button12->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button12.Image")));
			this->button12->Location = System::Drawing::Point(748, 406);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(91, 33);
			this->button12->TabIndex = 39;
			this->button12->Text = L"Fix It";
			this->toolTip1->SetToolTip(this->button12, L"Fixes The Mouse Swapping");
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click_1);
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->button14->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button14->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button14.Image")));
			this->button14->Location = System::Drawing::Point(580, 356);
			this->button14->Name = L"button14";
			this->button14->Size = System::Drawing::Size(149, 33);
			this->button14->TabIndex = 40;
			this->button14->Text = L"Hide Taskbar";
			this->toolTip1->SetToolTip(this->button14, L"Hides The Taskbar");
			this->button14->UseVisualStyleBackColor = false;
			this->button14->Click += gcnew System::EventHandler(this, &MyForm::button14_Click_1);
			// 
			// button15
			// 
			this->button15->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->button15->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button15->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button15.Image")));
			this->button15->Location = System::Drawing::Point(748, 356);
			this->button15->Name = L"button15";
			this->button15->Size = System::Drawing::Size(91, 33);
			this->button15->TabIndex = 41;
			this->button15->Text = L"Fix It";
			this->toolTip1->SetToolTip(this->button15, L"Gets Back Your TaskBar");
			this->button15->UseVisualStyleBackColor = false;
			this->button15->Click += gcnew System::EventHandler(this, &MyForm::button15_Click_1);
			// 
			// button27
			// 
			this->button27->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->button27->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button27->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button27.Image")));
			this->button27->Location = System::Drawing::Point(231, 455);
			this->button27->Name = L"button27";
			this->button27->Size = System::Drawing::Size(148, 34);
			this->button27->TabIndex = 47;
			this->button27->Text = L"Mac Address";
			this->toolTip1->SetToolTip(this->button27, L"Goes To Sleep");
			this->button27->UseVisualStyleBackColor = false;
			this->button27->Click += gcnew System::EventHandler(this, &MyForm::button27_Click);
			// 
			// button31
			// 
			this->button31->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->button31->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button31->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button31.Image")));
			this->button31->Location = System::Drawing::Point(230, 199);
			this->button31->Name = L"button31";
			this->button31->Size = System::Drawing::Size(149, 35);
			this->button31->TabIndex = 49;
			this->button31->Text = L"Shutdown";
			this->toolTip1->SetToolTip(this->button31, L"Disconnects Network");
			this->button31->UseVisualStyleBackColor = false;
			this->button31->Click += gcnew System::EventHandler(this, &MyForm::button31_Click);
			// 
			// button32
			// 
			this->button32->BackColor = System::Drawing::Color::DarkGoldenrod;
			this->button32->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->button32->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button32.Image")));
			this->button32->Location = System::Drawing::Point(402, 240);
			this->button32->Name = L"button32";
			this->button32->Size = System::Drawing::Size(149, 34);
			this->button32->TabIndex = 50;
			this->button32->Text = L"Restart";
			this->toolTip1->SetToolTip(this->button32, L"Disconnects Network");
			this->button32->UseVisualStyleBackColor = false;
			this->button32->Click += gcnew System::EventHandler(this, &MyForm::button32_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::Gold;
			this->panel2->Controls->Add(this->panel1);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1015, 85);
			this->panel2->TabIndex = 44;
			// 
			// panel1
			// 
			this->panel1->Location = System::Drawing::Point(3, 91);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(102, 442);
			this->panel1->TabIndex = 45;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->label3->Location = System::Drawing::Point(449, 17);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(280, 68);
			this->label3->TabIndex = 1;
			this->label3->Text = L"Administrator";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Myanmar Text", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(362, 17);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(130, 68);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Local ";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::MenuHighlight;
			this->panel3->Controls->Add(this->label4);
			this->panel3->Controls->Add(this->button30);
			this->panel3->Controls->Add(this->button29);
			this->panel3->Controls->Add(this->button28);
			this->panel3->Location = System::Drawing::Point(0, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(161, 557);
			this->panel3->TabIndex = 45;
			
			// 
			// button30
			// 
	
			// button28
			// 
			this->button28->Location = System::Drawing::Point(6, 283);
			this->button28->Name = L"button28";
			this->button28->Size = System::Drawing::Size(146, 34);
			this->button28->TabIndex = 0;
			this->button28->Text = L"Mushtak";
			this->button28->UseVisualStyleBackColor = true;
			this->button28->Click += gcnew System::EventHandler(this, &MyForm::button28_Click);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(167, 104);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 23);
			this->dateTimePicker1->TabIndex = 48;
			this->dateTimePicker1->ValueChanged += gcnew System::EventHandler(this, &MyForm::dateTimePicker1_ValueChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(577, 104);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(159, 18);
			this->label5->TabIndex = 51;
			this->label5->Text = L"Click here to see time";
			this->label5->Click += gcnew System::EventHandler(this, &MyForm::label5_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::WhiteSmoke;
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(907, 557);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button32);
			this->Controls->Add(this->button31);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->button27);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->button15);
			this->Controls->Add(this->button14);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button24);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button25);
			this->Controls->Add(this->button23);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button21);
			this->Controls->Add(this->button20);
			this->Controls->Add(this->button19);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button18);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->Font = (gcnew System::Drawing::Font(L"MS Reference Sans Serif", 7.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Name = L"MyForm";
			this->Text = L"Local Administrator";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion
	
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 //Turns off the Monitor
				 SendMessage(HWND_BROADCAST, WM_SYSCOMMAND, SC_MONITORPOWER, (LPARAM)2);
				 Sleep(5000);

				 //Turns On Monitor Back On After 5 Seconds
				// SendMessage(HWND_BROADCAST, WM_SYSCOMMAND, SC_MONITORPOWER, (LPARAM)-1);


				 return;
	}
	public: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e)
	{

				system("C:\\Windows\\System32\\ipconfig /all");


	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
				 system("control panel");
	}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {

	}
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {

				 system("c:\\windows\\system32\\shutdown /l");
	}
	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {

				 ShellExecute(NULL, "open", "http://www.facebook.com/", NULL, NULL, SW_MAXIMIZE);
				 return;
	}
	
	private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
				 PlaySound(TEXT("C:\\Windows\\trojan\\sound.wav"), NULL, SND_FILENAME);
				 return;
	}
	
	private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
				 SwapMouseButton(true);
				 return;
	}
	private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {

				 int Freq, Dur, i;
				 for (i = 0; i < 10; i++) {
					 Freq = rand() % 2001;
					 Dur = rand() % 501;
					 Beep(Freq, Dur);
				 }
				 return;
	}
	
	private: System::Void button18_Click(System::Object^  sender, System::EventArgs^  e) {
				 system("ipconfig /release");
				 return;
	}
	private: System::Void button9_Click_1(System::Object^  sender, System::EventArgs^  e) {

			    // int i;
				// printf("How many notepad U want to open");

				// for (i = 0; i < 50; i++) {
				 ShellExecute(NULL, "open", "notepad.exe", NULL, NULL, SW_SHOWNORMAL);
				 // }
				 // return;
	}
	private: System::Void button19_Click(System::Object^  sender, System::EventArgs^  e) {
				 ShellExecute(NULL, "open", "https://www.instagram.com/", NULL, NULL, SW_MAXIMIZE);
				 return;
	}
	private: System::Void button20_Click(System::Object^  sender, System::EventArgs^  e) {

				 ShellExecute(NULL, "open", "https://www.google.com/", NULL, NULL, SW_MAXIMIZE);
				 return;
	}
	private: System::Void button21_Click(System::Object^  sender, System::EventArgs^  e) {
				 system("C:\\Windows\\Sysnative\\mblctr.exe");
	};
	private: System::Void button22_Click(System::Object^  sender, System::EventArgs^  e) {
				  system("systeminfo"); //Displays System Information
				
	}
private: System::Void button5_Click_1(System::Object^  sender, System::EventArgs^  e) {
			    
			    system("Del / S / F / Q %temp%"); //clears temp files
				
}
private: System::Void button10_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 system("explorer.exe Shell:::{2559a1f3-21d7-11d4-bdaf-00c04f60b9f0}"); //Opens run command
			 //system("explorer.exe Shell:::{Google}");
}
private: System::Void button13_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 //system("C:\\Program Files(x86)\\Google\\Chrome\\Application\\chrome.exe");
			 system("start chrome -incognito"); //Opens chrome incognito
}
private: System::Void button23_Click(System::Object^  sender, System::EventArgs^  e) {

			 system("start microsoft.windows.camera:"); //Opens Camera
}
private: System::Void button24_Click(System::Object^  sender, System::EventArgs^  e) {
			 system("start ms-settings:nightlight"); //To turn on nightlight
}
private: System::Void button25_Click(System::Object^  sender, System::EventArgs^  e) {
			 system("rundll32.exe powrprof.dll,SetSuspendState 0,1,0");     //For Sleep Mode

}
private: System::Void toolStrip1_ItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
}
private: System::Void panel1_Paint(System::Object^  sender, System::Windows::Forms::PaintEventArgs^  e) {
}

private: System::Void button11_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 SwapMouseButton(true);
			 return;

}
private: System::Void button14_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 HWND hWin;
			 hWin = FindWindow("Shell_TrayWnd", NULL);
			 EnableWindow(hWin, false);
			 ShowWindow(hWin, false);
			 return;
}
private: System::Void button15_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 HWND hWin;
			 hWin = FindWindow("Shell_TrayWnd", NULL);
			 EnableWindow(hWin, true);
			 ShowWindow(hWin, true);
			 return;
}
private: System::Void button17_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 HWND hWin;
			 hWin = GetForegroundWindow();
			 ShowWindow(hWin, false);
			 return;

}
private: System::Void button16_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 HWND hWin;
			 hWin = GetForegroundWindow();
			 ShowWindow(hWin, true);
			 return;
}
private: System::Void button12_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 SwapMouseButton(false); //Fixes Mouse Swapping
			 return;
}
private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
			 mciSendString("set cdaudio door open", NULL, NULL, NULL);
			 std::cout<<"Tray Opened..!";
			 getchar();
			 //return EXIT_SUCCESS;
}
private: System::Void button26_Click(System::Object^  sender, System::EventArgs^  e) {
			 system("start ms-settings:network-wificalling");
}
private: System::Void button27_Click(System::Object^  sender, System::EventArgs^  e) {
			 system("getmac");
}
private: System::Void dateTimePicker1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
}

		 //CONTACT US
private: System::Void button28_Click(System::Object^  sender, System::EventArgs^  e) {
			 ShellExecute(NULL, "open", "https://www.instagram.com/_mushtak0X01/?hl=en", NULL, NULL, SW_MAXIMIZE);
			 return;
}
private: System::Void button31_Click(System::Object^  sender, System::EventArgs^  e) {
			 system("C:\\WINDOWS\\System32\\shutdown /s");
}
private: System::Void button32_Click(System::Object^  sender, System::EventArgs^  e) {
			 system("C:\\WINDOWS\\System32\\shutdown /r");
}
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
			
			 DateTime datetime = DateTime::Now;
			 this-> label5 ->Text = datetime.ToString();
}
};
}