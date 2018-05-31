#include "Dekanat.h"
#include <iostream>

using namespace std;

Dekanat::Dekanat(char* per1){
	Name=per1;
}

void Dekanat::CorrectStud(){
	cout<<"Данные пользователя изменены!"<<endl;
	system("pause");
}


void Dekanat::AddStud(){
	cout<<"Студент добавлен!"<<endl;
	system("pause");
}

void Dekanat::ShowOplata(){
	cout<<"Оплата проверена"<<endl;
	system("pause");
}