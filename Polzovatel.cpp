#include "Polzovatel.h"
#include <iostream>

using namespace std;


void Polzovatel::Avtoriz(int T){
	if (T==1){
	cout<<endl<<"Добро пожаловать студент!"<<endl;
	system("pause");
	}

	if (T==2){
	cout<<endl<<"Добро пожаловать преподаватель!"<<endl;
	system("pause");
	}

	if (T==3){
	cout<<endl<<"Добро пожаловить деканат!"<<endl;
	system("pause");
	}

	if (T==4){
	cout<<endl<<"Добро пожаловить библиотекарь!"<<endl;
	system("pause");
	}
}
