#include "Student.h"
#include "Dekanat.h"
#include "TovarishPrepodavatel.h"
#include <iostream>
#include <string.h>


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


const char *word1[] = {			//	Декан
	"		 Добавить студента					",
	"		 Изменения расписания					",
	"		 Просмотр расписания					",
	"		 Удаление студента				",
	"		 Выход							",

};

const char *word2[] = {			//	Студент
	"		 Просмотр расписания					",
	"		 Просмотр оценок					",
	"		 Просмотр задолжностей					",
	"		 Выход							",
};

const char *word3[] = {			//	Товарищ Преподаватель
	"		 Выставление оценок					",
	"		 Внесение отметки о задолжности студента					",
	"		 Внесение отметки о снятии задолжности					",
	"		 Выход							",


};


void ShowwMenu1(int f) {			// Менюха для декана
	SetColor(0, 15); // 0 , 0 
	for (int i = 0; i < 5; i++) {
		SetColor(0, 15);
		GotoXY(10, i + 5);
		if (f == i) { // Эх Шарик я как и ты был на цепи
			SetColor(13, 15);
			cout << "->";
		}
		else {
			SetColor(0, 15);
		}  // 3 255
		cout << "  " << word1[i] << "";
	}
	SetColor(0, 15); // 15 0 
}


void ShowwMenu2(int f) {			// Менюха для студента
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
		cout << "  " << word2[i] << "";
	}
	SetColor(0, 15); // 15 0 
}

void ShowwMenu3(int f) {			// Менюха для товарища преподавателя
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
		cout << "  " << word3[i] << "";
	}
	SetColor(0, 15); // 15 0 
}






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
cout<<"1 - Личный кабинет деканата"<<endl;
cout<<"2 - Личный кабинет товарища преподавателя"<<endl;
cout<<"3 - Личный кабинет студента"<<endl;




cout<<"0 - Выйти из программного продукта"<<endl<<endl;
}



/*
void ShowMenu3(){ // Товарищ преподаватель
cout<<"1 - Проверить работу"<<endl; // полу нахуй не сдалось
cout << "2 - Выставление оценок" << endl;
cout << "3 -Внесение отметки о задолжности студента" << endl;
cout << "4 -Внесение отметки о сняти задолжности студента" << endl;
}
*/


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

	{//Декан
		system("cls");
		int a, f, ff, code;
		f = 0;
		ff = 0;
		a = 0;
		ShowwMenu1(ff);
		do {

			code = getch();
			if (code == 80) {  //Âíèç
				if (ff == 4) { ff = 0; } //9
				else { ff = ff + 1; }
				ShowwMenu1(ff);
			}

			if (code == 72) {  //Ââåðõ
				if (ff == 0) { ff = 4; }//9
				else { ff = ff - 1; }
				ShowwMenu1(ff);
			}

			if (code == 13) {  //Enter
				//system("cls");
				if (ff == 0) {
					DE.AddStud(); break;
				}
				if (ff == 1) { DE.ShowOplata(); break; }
				if (ff == 2) { DE.CorrectStud(); break; }
				if (ff == 3) { break; }
				if (ff == 4) { break; }
			}
			//break;

		}

		while (1);

		break;
	}


	case 1: {
	
		system("cls");
		int a, f, ff, code;
		f = 0;
		ff = 0;
		a = 0;
		ShowwMenu2(ff);
		do {

			code = getch();
			if (code == 80) {  //Âíèç
				if (ff == 3) { ff = 0; } //9
				else { ff = ff + 1; }
				ShowwMenu2(ff);
			}

			if (code == 72) {  //Ââåðõ
				if (ff == 0) { ff = 3; }//9
				else { ff = ff - 1; }
				ShowwMenu2(ff);
			}

			if (code == 13) {  //Enter
							   //system("cls");
				if (ff == 0) { ST.AddRabota(); break; }
				if (ff == 1) { break; }
				if (ff == 2) { break; }
				if (ff == 3) { break;}
			}
			//break;

		}

		while (1);

		
			break;
	}
	case 2:			// Товарищ преподаватель.
	{
		system("cls");
		int a, f, ff, code;
		f = 0;
		ff = 0;
		a = 0;
		ShowwMenu3(ff);
		do {

			code = getch();
			if (code == 80) {  //Âíèç
				if (ff == 3) { ff = 0; } //9
				else { ff = ff + 1; }
				ShowwMenu3(ff);
			}

			if (code == 72) {  //Ââåðõ
				if (ff == 0) { ff = 3; }//9
				else { ff = ff - 1; }
				ShowwMenu3(ff);
			}

			if (code == 13) {  //Enter
							   //system("cls");
				if (ff == 0) { break; }
				if (ff == 1) { PR.Proverka(&ST); break; }
				if (ff == 2) { break; }
				if (ff == 3) { break; }
				}
			}
				//break;

			

			while (1);

			break;
		}


	//	break;
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
//SetColor(0,15); 														
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
