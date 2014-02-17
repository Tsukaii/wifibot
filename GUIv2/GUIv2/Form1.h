#pragma once


namespace GUIv2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected: 
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  aideToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  quitterToolStripMenuItem;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ProgressBar^  progressBar1;
	private: System::Windows::Forms::Label^  label2;




	private:
		/// <summary>
		/// Required designer variable.
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
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->aideToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->quitterToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(159, 78);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Connecter";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(94, 141);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 35);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Avancer";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(169, 202);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 35);
			this->button4->TabIndex = 3;
			this->button4->Text = L"droite";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(15, 202);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 35);
			this->button3->TabIndex = 4;
			this->button3->Text = L"gauche";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(94, 260);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 35);
			this->button5->TabIndex = 5;
			this->button5->Text = L"Reculer";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->aideToolStripMenuItem, 
				this->quitterToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(635, 24);
			this->menuStrip1->TabIndex = 6;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// aideToolStripMenuItem
			// 
			this->aideToolStripMenuItem->Name = L"aideToolStripMenuItem";
			this->aideToolStripMenuItem->Size = System::Drawing::Size(43, 20);
			this->aideToolStripMenuItem->Text = L"Aide";
			// 
			// quitterToolStripMenuItem
			// 
			this->quitterToolStripMenuItem->Name = L"quitterToolStripMenuItem";
			this->quitterToolStripMenuItem->Size = System::Drawing::Size(56, 20);
			this->quitterToolStripMenuItem->Text = L"Quitter";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"Simulateur", L"Wifibot"});
			this->comboBox1->Location = System::Drawing::Point(12, 80);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 7;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(9, 54);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(148, 13);
			this->label1->TabIndex = 8;
			this->label1->Text = L"Choississez le type de support";
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(15, 373);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(100, 23);
			this->progressBar1->TabIndex = 9;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 357);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(43, 13);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Batterie";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(635, 408);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"GUIv2";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion



};
}

