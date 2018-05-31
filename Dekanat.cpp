#include "Dekanat.h"
#include <iostream>

using namespace std;

Dekanat::Dekanat(char* per1){
	Name=per1;
}

void Dekanat::CorrectStud(){
	system("cls");
	cout<<"Данные пользователя изменены!"<<endl;
	system("pause");
}


void Dekanat::AddStud(){
	system("cls");
	cout<<"Студент добавлен!"<<endl;
	system("pause");
	
	//system("cls");
}

void Dekanat::ShowOplata(){
	system("cls");
	cout<<"Оплата проверена"<<endl;
	system("pause");
}