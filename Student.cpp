#include "Student.h"
#include <iostream>


using namespace std;

Student::Student(char* per1,char *per2,bool per3){
FIO=per1;
Group=per2;
Pol=per3;

kol_rabot=0;
}


void Student::AddRabota(){

if (kol_rabot<3){
	Rb[kol_rabot].Nazv="������";
	Rb[kol_rabot].stat=0;
	cout<<endl<<"������ ���������!"<<endl;
	kol_rabot++;
}
else{
	cout<<endl<<"��������� ������ �� �������!"<<endl;
}

system("pause");

}



void Student::Prepod_Proverka(){
int kol=0;
for (int i = 0; i < kol_rabot; i++){
	if (Rb[i].stat==0){
		cout<<i+1<<" --- "<<Rb[i].Nazv<<endl;
		kol++;
	}
}
	
if (kol==0){
	cout<<endl<<"�� ����������� ������ �����������! "<<endl;
	system("pause");
	return;
}

int k;
cout<<"������� ����� ������: ";
cin>>k;
k--;

if (k<0 || k>kol_rabot-1){
	cout<<endl<<"�������� ����� ������!"<<endl;
}
else{
	Rb[k].stat=1;
	cout<<endl<<"������ ������ �������!"<<endl;
	system("pause");
}

}


