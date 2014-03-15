#pragma once


namespace GUIv21 {

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
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::ProgressBar^  progressBar1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  toolStripMenuItem1;

	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  aideToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  quitterToolStripMenuItem;
	private: System::Windows::Forms::ComboBox^  comboBox1;

	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::TrackBar^  trackBar1;


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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->aideToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->quitterToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->trackBar1 = (gcnew System::Windows::Forms::TrackBar());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBar1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(142, 76);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Connecter";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(74, 229);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Avancer";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(12, 269);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Gauche";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(133, 269);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 3;
			this->button4->Text = L"Droite";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(74, 307);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 4;
			this->button5->Text = L"Arrière";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(27, 367);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(100, 23);
			this->progressBar1->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(24, 351);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(43, 13);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Batterie";
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Size = System::Drawing::Size(32, 19);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->aideToolStripMenuItem, 
				this->quitterToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(523, 24);
			this->menuStrip1->TabIndex = 7;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// aideToolStripMenuItem
			// 
			this->aideToolStripMenuItem->Name = L"aideToolStripMenuItem";
			this->aideToolStripMenuItem->Size = System::Drawing::Size(43, 20);
			this->aideToolStripMenuItem->Text = L"Aide";
			this->aideToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::aideToolStripMenuItem_Click);
			// 
			// quitterToolStripMenuItem
			// 
			this->quitterToolStripMenuItem->Name = L"quitterToolStripMenuItem";
			this->quitterToolStripMenuItem->Size = System::Drawing::Size(56, 20);
			this->quitterToolStripMenuItem->Text = L"Quitter";
			this->quitterToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::quitterToolStripMenuItem_Click);
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"Simulateur", L"Wifibot"});
			this->comboBox1->Location = System::Drawing::Point(13, 76);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 8;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(223, 76);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(90, 23);
			this->button6->TabIndex = 10;
			this->button6->Text = L"Déconnecter";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Red;
			this->panel1->Location = System::Drawing::Point(319, 76);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(27, 23);
			this->panel1->TabIndex = 11;
			// 
			// trackBar1
			// 
			this->trackBar1->Location = System::Drawing::Point(13, 171);
			this->trackBar1->Name = L"trackBar1";
			this->trackBar1->Size = System::Drawing::Size(271, 45);
			this->trackBar1->TabIndex = 12;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(523, 423);
			this->Controls->Add(this->trackBar1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->KeyPreview = true;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"WifiBot Graphical Interface";
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::Form1_KeyDown);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->trackBar1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void aideToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 MessageBox::Show("Ceci ne vous aide pas beaucoup"); // Aide
			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

	// Choix De la connexion
	if (comboBox1->SelectedIndex != -1)
	{
		if (comboBox1->SelectedItem == "Simulateur")// Partie Simulateur
			MessageBox::Show("Simulator !");
			panel1->BackColor = System::Drawing::Color::Green;

		if (comboBox1->SelectedItem == "Wifibot")// Partie Wifibot
			MessageBox::Show("Wifibator !");
			panel1->BackColor = System::Drawing::Color::Green;
	}
	else
	{
		MessageBox::Show("Selectionnez une option valide");// Message D'erreur
	}
			 
		 }
private: System::Void quitterToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 Close(); // Quiter le GUI
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			 // Déconnexion
			 panel1->BackColor = System::Drawing::Color::Red;
		 }




private: System::Void Form1_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
		
		if ((e->KeyCode == Keys::A))// Ne pas oublier de mettre la propriété KeyPreview de la form a "true"
		{
			panel1->BackColor = System::Drawing::Color::Blue;
			MessageBox::Show("Touche A activée");
		}
		 }
};
}

