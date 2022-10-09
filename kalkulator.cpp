#include <iostream>
#include <conio.h>


using namespace std;

int main()
	{
	
		char operasi;
		float a,b,hasil;
		
	while (operasi!='exit')
		{
		start:
		cout<<"Masukkan Operasi : ";
		cin>>operasi;
		if (operasi=='+') goto hitung;
		else if (operasi=='-') goto hitung;
		else if (operasi=='*') goto hitung;
		else if (operasi=='/') goto hitung;
		else if (operasi=='exit') goto end;
		else goto salah;
		hitung:
		cout<<"Masukkan Angka Pertama : ";
		cin>>a;
		cout<<"Masukkan Angka Kedua : ";
		cin>>b;
		
	
			if (operasi=='+') {hasil=a+b;}
			else if (operasi=='-') {hasil=a-b;}
			else if (operasi=='*') {hasil=a*b;}
			else if (operasi=='/') {hasil=a/b;}



		cout<<"Hasil : "<<hasil;}
		
		salah:
		cout<<"\n\nPerintah tidak dikenali";goto start;
		end:
		cout<<"\n\nTerima Kasih telah menggunakan aplikasi ini";
	
getch();
}
