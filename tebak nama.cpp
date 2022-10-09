#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main()
{int n=3;
string nama,tebak;
cout<<"Selamat datang di game sederhana kami\n###################";
cout<<"\n\nDaftar nama : Septi, Bayu, Budi, Tono, Dika, Danu, Anto, Elga, Safi";
cout<<"\nPlayer 1: Buatlah secret name berdasarkan dari nama di atas";
cout<<"\nMasukkan secret name yang akan ditebak oleh lawan main anda berdasarkan daftar nama di atas:";cin>>nama;
system("CLS");
cout<<"Secret name yang anda masukkan sudah tersimpan di sistem kami, biarkan teman anda untuk menebaknya";
cout<<"\nDaftar nama: Septi, Bayu, Budi, Tono, Dika, Danu, Anto, Elga, Safi";
cout<<"\nSekarang giliran lawanmu yang menebak";
cout<<"\nPlayer 2:masukkan secret name yang akan kamu tebak:";cin>>tebak;
A: if (tebak==nama) cout<<"selamat jawaban anda benar";
else
while (n>=2)
{n--;
if (tebak!=nama) cout<<"Maaf tebakanmu salah | Coba lagi ya...\nSisa anda mencoba "<<n<<" kali lagi";
cout<<"\nPlayer 2:masukkan secret name yang akan kamu tebak:";cin>>tebak;
if (tebak==nama) goto A;
if(n<2) cout<<"maaf kesempatanmu telah habis";	
}cout<<"\nterimakasih telah bermain";
}
