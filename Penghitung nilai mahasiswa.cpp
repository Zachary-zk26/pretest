#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main()
{
	string nama,nim,kelas,mk,semester,status,relatif;
	float absolut;
	int presensi,tugas,quiz,praktik,uts,uas,bobot;
	cout<<"\tUjian Akhir Semester\n*********************************"<<"\n\nProgram c++ Menghitung nilai mahasiswa"<<"\nInput/masukkan Data Mahasiswa\n*********************************";
	cout<<"\nMasukkan Nama Mahasiswa:";cin>>nama;
	cout<<"\nMasukkan Nim Mahasiswa:";cin>>nim;
	cout<<"\nMasukkan Kelas Mahasiswa:";cin>>kelas;
	cout<<"\nMasukkan Nama Matakuliah Mahasiswa:";cin>>mk;
	cout<<"\nMasukkan Periode Semester Mahasiswa:";cin>>semester;
	cout<<"\n*********************************";
	cout<<"\n\nInput/masukkan Nilai Mahasiswa\n*********************************";
	cout<<"\nMasukkan Nilai Presensi Mahasiswa:";cin>>presensi;
	cout<<"\nMasukkan Nilai Tugas Mahasiswa:";cin>>tugas;
	cout<<"\nMasukkan Nilai Quiz Mahasiswa:";cin>>quiz;
	cout<<"\nMasukkan Nilai praktikum Mahasiswa:";cin>>praktik;
	cout<<"\nMasukkan Nilai UTS Mahasiswa:";cin>>uts;
	cout<<"\nMasukkan Nilai UAS Mahasiswa:";cin>>uas;
	cout<<"\n*********************************";
	absolut=(presensi*1/10)+(tugas*3/10)+(quiz*1/10)+(praktik*2/10)+(uts*1/10)+(uas*2/10);
	cout<<"\n\nData Output/Hasil\n*********************************";
	cout<<"\nNama Mahasiswa:"<<nama;
	cout<<"\nNIM Mahasiswa:"<<nim;
	cout<<"\nKelas Mahasiswa:"<<kelas;
	cout<<"\nMata kuliah:"<<mk;
	cout<<"\nsemester:"<<semester;
	cout<<"\nNilai Absolut:"<<absolut;
	cout<<"\nNilai Relatif:";if(absolut>=81&&absolut<=100)cout<<"A";
	else if(absolut>=76&&absolut<=80)cout<<"B+";
	else if(absolut>=66&&absolut<=75)cout<<"B";
	else if(absolut>=61&&absolut<=65)cout<<"C+";
	else if(absolut>=51&&absolut<=60)cout<<"C";
	else if(absolut>=26&&absolut<=50)cout<<"D";
	else if(absolut>=0&&absolut<=25)cout<<"E";
	if(absolut>=81&&absolut<=100){bobot=4;}
	else if(absolut>=76&&absolut<=80){bobot=3,5;}
	else if(absolut>=66&&absolut<=75){bobot=3;}
	else if(absolut>=61&&absolut<=65){bobot=2,5;}
	else if(absolut>=51&&absolut<=60){bobot=2;}
	else if(absolut>=26&&absolut<=50){bobot=1;}
	else if(absolut>=0&&absolut<=25){bobot=0;}
	cout<<"\nBobot Nilai Huruf:"<<bobot;
	cout<<"\nStatus:";if (bobot>=2)cout<<"lulus";else cout<<"tidak lulus";
}