#include "Student.h"
#include "Dekanat.h"
#include "TovarishPrepodavatel.h"
#include <iostream>
#include <string.h>

// Раз два три по почкам раз два три по печени
#include <sstream>
#include <conio.h>
#include <fstream> 
#include <conio.h> 
#include <iomanip> 
#include <stdlib.h>
#include <Windows.h>

// Миша привет
using namespace std;


//Уже завтра лето , а я тут плюшками играюсь


HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
void GotoXY(int X, int Y) {  //Установка координат курсора ввода
	COORD coord = { X, Y };
	SetConsoleCursorPosition(hStdOut, coord);
}
void SetColor(int text, int background) {   //Установка цвета
	SetConsoleTextAttribute(hStdOut, background * 16 + text);
}



const char *word[] = {			//	Первая менюха
	"		 Личный кабинет деканата					",
	"		 Личный кабинет студента					",
	"		 Личный кабинет товарища преподавателя					",
	"		 Выход					",	

};


void ShowMenu(int f) {
	SetColor(0, 15); // 0 , 0 
	for (int i = 0; i < 4; i++) {
		SetColor(0, 15);
		GotoXY(10, i + 5);
		if (f == i) { // Эх Шарик я как и ты был на цепи
			SetColor(13, 15);
			cout << "->";
		}
		else {
			SetColor(0, 15);
		}  // 3 255
		cout << "  " << word[i] << "";
	}
	SetColor(0, 15); // 15 0 
}

void ShowMain(){
cout<<"1 - Личный кабинет студента"<<endl;
cout<<"2 - Личный кабинет товарища преподавателя"<<endl;
cout<<"3 - Личный кабинет деканата"<<endl;




cout<<"0 - Выйти из программного продукта"<<endl<<endl;
}

void ShowMenu1(){ 
cout<<"1 - Добавить студента"<<endl;
cout<<"2 - Проверить оплату"<<endl; 
cout<<"3 - Редактировать студента"<<endl<<endl;
cout << "4 - Изменения расписания" << endl;
cout << " 5- Просмотр расписания" << endl;
cout << "6 - Удаление студента" << endl;
}

void ShowMenu2(){ 
cout<<"1 - Оплата общаги"<<endl; 
cout<<"2 - Добавить работу"<<endl;
cout<<"3 - Получить книгу"<<endl;
cout << "4 - Отдать книгу" << endl;
cout << "5 - Просмотр расписания" << endl;
cout << "6 - Просмотр оценок" << endl;
cout << " 7 -Просмотр задолжностей" << endl << endl;
}

void ShowMenu3(){ // Товарищ преподаватель
cout<<"1 - Проверить работу"<<endl; // полу нахуй не сдалось
cout << "2 - Выставление оценок" << endl;
cout << "3 -Внесение отметки о задолжности студента" << endl;
cout << "4 -Внесение отметки о сняти задолжности студента" << endl;
}



void Choose(int f) {   //Функция выбранного меню
					   //Переменные для ввода данных
	Student ST("Roman Gladchenko", "IS/B-23-O", 1); // Alpha
	Dekanat DE("Saevich");		//Betta
	TovarishPrepodavatel PR;		//Gamma
	
	int a=1;
	long double per1, per2, per3, per4, per5, per6, per7, per8, per9, per10;
	system("cls");
	long double  number_in_table = 0;
	//per1=2;
	//per1=per1+1;
	switch (f) {
		//per1=0;	
	case 0:
		ShowMenu1();
		cout << "Введите значения для выбора меню: ";
		cin >> a;
		if (a == 1) { DE.AddStud(); }
		if (a == 2) { DE.ShowOplata(); }
		if (a == 3) { DE.CorrectStud(); }
		break;

	case 1:
		ShowMenu2();
		cin >> a;
	
		if (a == 2) { ST.AddRabota(); }
		
		break;

	case 2:
		ShowMenu3();
		cout << "Введите значение для выбора меню: ";
		cin >> a;
		if (a == 1) { PR.Proverka(&ST); }
		
		break;
	case 3:
		exit(0);
		break;
	}
	cout << endl << endl;
	system("pause");
	system("cls");
}





int main(){
setlocale(LC_ALL, "Rus");

// Вот тут щас будут такие новвоведения , что пуля не дура - дурак человек


int y = 2;
int f = 0, ff = 0;;
SetColor(0, 15);
system("cls");
//SetColor(0,15); 														//Ãëàâíàÿ ïðîãðàììà. 
SetConsoleOutputCP(1251);
SetConsoleCP(1251);
int code;
string password;
GotoXY(14, 10);
cout << "Введите пароль , чтобы войти в ПО" << endl;
GotoXY(14, 11);//14 11
SetColor(15, 15);
cin >> password;
SetColor(0, 15);

while (password != "1") // Gladchenko1929
						//do
{
	system("cls");
	GotoXY(14, 10);
	cout << "Вы ввели неправильный пароль" << endl;
	GotoXY(14, 11);
	cout << "Введите заново" << endl;
	GotoXY(14, 12);
	SetColor(15, 15);
	cin >> password;
	SetColor(0, 15);
}
if (password == "1") // Добавь Gladchenko1929
{
	GotoXY(14, 10);
	system("cls");
	GotoXY(14, 10);
	cout << "От души душевно в душу" << endl;
	GotoXY(14, 11);
	
	system("pause");
	system("cls");

}
ShowMenu(f);
do {

	code = getch();
	if (code == 80) {  //Âíèç
		if (f == 3) { f = 0; } //9
		else { f = f + 1; }
		ShowMenu(f);
	}

	if (code == 72) {  //Ââåðõ
		if (f == 0) { f = 3; }//9
		else { f = f - 1; }
		ShowMenu(f);
	}

	if (code == 13) {  //Enter
		Choose(f);
		ShowMenu(f);
	}

} while (1);


//
}
