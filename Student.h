#pragma once


#include "Polzovatel.h"
#include "Rabota.h"

class Student{

char *FIO;
char *Group;
bool Pol;
int kol_rabot;

public:

Polzovatel Uz;
Rabota Rb[3];

Student(char* per1,char *per2,bool per3);
void AddRabota();
void Prepod_Proverka();



};

