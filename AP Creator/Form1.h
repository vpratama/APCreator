//Nama : Vitradisa Pratama
//NIM : 49013110
//Note: Jika Akses Point tidak bisa dibuat maka browse folder Debug di dalam Projectnya
//Kemudian Jalankan Aplikasi AP Creator.exe dengan terlebih dahulu Klik Kanan -> Run As Administrator

#pragma once

namespace APCreator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;

	/// <summary>
	/// Summary for Form1
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
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  ssid;
	private: System::Windows::Forms::TextBox^  passwd;
	private: System::Windows::Forms::Button^  startAP;
	private: System::Windows::Forms::Button^  stopAP;
	private: System::Windows::Forms::Button^  quit;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  report;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->ssid = (gcnew System::Windows::Forms::TextBox());
			this->passwd = (gcnew System::Windows::Forms::TextBox());
			this->startAP = (gcnew System::Windows::Forms::Button());
			this->stopAP = (gcnew System::Windows::Forms::Button());
			this->quit = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->report = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(32, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"SSID";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(13, 43);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Password";
			// 
			// ssid
			// 
			this->ssid->Location = System::Drawing::Point(93, 10);
			this->ssid->Name = L"ssid";
			this->ssid->Size = System::Drawing::Size(179, 20);
			this->ssid->TabIndex = 2;
			this->ssid->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::ssid_KeyPress);
			// 
			// passwd
			// 
			this->passwd->Location = System::Drawing::Point(93, 40);
			this->passwd->Name = L"passwd";
			this->passwd->Size = System::Drawing::Size(179, 20);
			this->passwd->TabIndex = 3;
			this->passwd->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::passwd_KeyPress);
			// 
			// startAP
			// 
			this->startAP->Location = System::Drawing::Point(16, 77);
			this->startAP->Name = L"startAP";
			this->startAP->Size = System::Drawing::Size(75, 23);
			this->startAP->TabIndex = 4;
			this->startAP->Text = L"Start";
			this->startAP->UseVisualStyleBackColor = true;
			this->startAP->Click += gcnew System::EventHandler(this, &Form1::startAP_Click);
			// 
			// stopAP
			// 
			this->stopAP->Location = System::Drawing::Point(107, 77);
			this->stopAP->Name = L"stopAP";
			this->stopAP->Size = System::Drawing::Size(75, 23);
			this->stopAP->TabIndex = 5;
			this->stopAP->Text = L"Stop";
			this->stopAP->UseVisualStyleBackColor = true;
			this->stopAP->Click += gcnew System::EventHandler(this, &Form1::stopAP_Click);
			// 
			// quit
			// 
			this->quit->Location = System::Drawing::Point(197, 77);
			this->quit->Name = L"quit";
			this->quit->Size = System::Drawing::Size(75, 23);
			this->quit->TabIndex = 6;
			this->quit->Text = L"Exit";
			this->quit->UseVisualStyleBackColor = true;
			this->quit->Click += gcnew System::EventHandler(this, &Form1::quit_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(16, 118);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(146, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Vitradisa Pratama - 49013110";
			// 
			// report
			// 
			this->report->Location = System::Drawing::Point(168, 113);
			this->report->Name = L"report";
			this->report->Size = System::Drawing::Size(104, 23);
			this->report->TabIndex = 8;
			this->report->Text = L"Report Error";
			this->report->UseVisualStyleBackColor = true;
			this->report->Click += gcnew System::EventHandler(this, &Form1::report_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 144);
			this->ControlBox = false;
			this->Controls->Add(this->report);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->quit);
			this->Controls->Add(this->stopAP);
			this->Controls->Add(this->startAP);
			this->Controls->Add(this->passwd);
			this->Controls->Add(this->ssid);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->Text = L"AP Creator";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void startAP_Click(System::Object^  sender, System::EventArgs^  e) {//Event ketika tombol Start Ditekan
				 if((ssid->Text == "") || (passwd->Text == "")) {//Pengecekan Input Kosong
					 MessageBox::Show("Tidak Boleh Kosong","Warning",MessageBoxButtons::OK,MessageBoxIcon::Warning);
				 } else if(passwd->TextLength <8) {//Pengecekan Panjang Karakter yang diinputkan pada TextBox Password
					 MessageBox::Show("Password Tidak Boleh Kurang dari 8 Karakter","Warning",MessageBoxButtons::OK,MessageBoxIcon::Warning);					 				 
			     } else {
					 setup();
					 starting();
				 }
			 }
private: System::Void stopAP_Click(System::Object^  sender, System::EventArgs^  e) {//Event ketika tombol Stop Ditekan
			 stopping();
		 }
private: System::Void quit_Click(System::Object^  sender, System::EventArgs^  e) {//Event ketika tombol Exit Ditekan
			 stopping();
			 this->Close();//Menutup Form
		 }
private: System::Void ssid_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {//Event ketika user mengetik di dalam Textbox
			 if(Char::IsWhiteSpace(e->KeyChar)) {//Menggecek Whitespace/karakter spasi
				 e->Handled = true;//e.handled untuk mencegah input karakter yag sudah didefinisikan di if//e.handled untuk mencegah input karakter yag sudah didefinisikan di if
			 }
		 }
private: System::Void passwd_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {//Event ketika user mengetik di dalam Textbox
			 if(Char::IsWhiteSpace(e->KeyChar)) {//Menggecek Whitespace/karakter spasi
				 e->Handled = true;//e.handled untuk mencegah input karakter yag sudah didefinisikan di if
			 }
		 }
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {//Event ketika Form Di Load
			 this->stopAP->Hide();//Menyembunyikan Tombol Stop
		 }
private: System::Void report_Click(System::Object^  sender, System::EventArgs^  e) {//Event ketika tombol Report Error Ditekan
			 Process::Start("mailto:vita.reinforce@gmail.com");//Kirim Email
		 }

		 void setup() {
			 Process^ config = gcnew Process();//Mendefinisikan Kelas Process
			 	 
			 String^ myssid = ssid->Text;//Men Assigment variabel myssid dengan isi dari TextBox SSID
			 String^ mypass = passwd->Text;//Men Assigment variabel mypass dengan isi dari TextBox Password

			 config->StartInfo->FileName = "NETSH.exe";//Mendefinisikan File yang akan dieksekusi
			 config->StartInfo->Arguments = "wlan set hostednetwork mode=allow ssid=" + myssid + " key=" + mypass;//Mendefinisikan Parameter
			 config->StartInfo->WindowStyle = ProcessWindowStyle::Hidden;//Mendefinisikan Windows Style
			 config->Start();//Menjalankan Process
		 }

		 void starting() {
			 Process^ starting = gcnew Process();//Mendefinisikan Kelas Process
			
			 starting->StartInfo->FileName = "NETSH.exe";//Mendefinisikan File yang akan dieksekusi
			 starting->StartInfo->Arguments = "wlan start hostednetwork";//Mendefinisikan Parameter
			 starting->StartInfo->WindowStyle = ProcessWindowStyle::Hidden;//Mendefinisikan Windows Style
			 starting->Start();//Menjalankan Process

			 this->startAP->Hide();//Menyembunyikan Tombol Start
			 this->ssid->Hide();//Menyembunyikan TextBox SSID
			 this->passwd->Hide();//Menyembunyikan TextBox Password
			 this->stopAP->Show();//Memunculkan Tombol Stop
		 }
		 
		 void stopping() {
			 Process^ stopping = gcnew Process();//Mendefinisikan Kelas Process
			 stopping->StartInfo->FileName = "NETSH.exe";//Mendefinisikan File yang akan dieksekusi
			 stopping->StartInfo->Arguments = "wlan stop hostednetwork";//Mendefinisikan Parameter
			 stopping->StartInfo->WindowStyle = ProcessWindowStyle::Hidden;//Mendefinisikan Windows Style
			 stopping->Start();//Menjalankan Process

			 ssid->Text = "";//Men Assign SSID Password dengan "" / Kosong
			 passwd->Text = "";//Men Assign TextBox Password dengan "" / Kosong
			 this->startAP->Show();//Memunculkan Tombol Start
			 this->ssid->Show();//Memunculkan TextBox SSID
			 this->passwd->Show();//Memunculkan TextBox Password
			 this->stopAP->Hide();//Menyembunyikan Tombol Stop
		 }
};
}

