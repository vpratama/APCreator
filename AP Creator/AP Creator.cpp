//Nama : Vitradisa Pratama
//NIM : 49013110
//Note: Jika Akses Point tidak bisa dibuat maka browse folder Debug di dalam Projectnya
//Kemudian Jalankan Aplikasi AP Creator.exe dengan terlebih dahulu Klik Kanan>Run As Administrator
// AP Creator.cpp : main project file.

#include "stdafx.h"
#include "Form1.h"

using namespace APCreator;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// Create the main window and run it
	Application::Run(gcnew Form1());
	return 0;
}
