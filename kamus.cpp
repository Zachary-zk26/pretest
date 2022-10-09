#include <iostream>
#include <string.h>
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
int main()
{FILE *MyFolder;
char msg[100][15];
char ind[15];
int a,b;
if(MyFolder=fopen("tranlate.txt","r"))
{
for(a=1;a<=100;a++)
fgets(msg[a], sizeof(msg),MyFolder);
cout<<"indonesia : ";
gets(ind);
strcat(ind,"\n");
cout<<"Sumbawa : ";
for(a=1;a<=100;a++)
if(strcmp(ind,msg[a])==0)
cout<<msg[a+1];
fclose(MyFolder);
getche();}}