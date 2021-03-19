#include"needsforsaves.h"
#include<iostream>
#include<cstring>



void autosaveDES(int WS, int S, int SV, int medal, int fireresist, int Bible, int choose, int Beda_Bashka, int krek, int Sigmar_blessings, int level)
{
	printf_s("Пожалуйста, подождите. Идёт сохранение\n");

	FILE* asave;
	if (fopen_s(&asave, "autosave.txt", "w+") != 0)
	{
		printf("File error!\n");
	}
	else
	{
		fprintf(asave, "%i\n%i\n%i\n%i\n%i\n", WS, S, SV, medal, fireresist);
		fprintf(asave, "%i\n%i\n%i\n%i\n%i\n%i\n", Bible, choose, Beda_Bashka, krek, Sigmar_blessings, level);
		fclose(asave);
	}

}

void autoloadDES(int &WS, int &S, int &SV, int &medal, int &fireresist, int &Bible, int &choose, int &Beda_Bashka, int &krek, int &Sigmar_blessings, int &level)
{
	FILE* asave;
	if (fopen_s(&asave, "autosave.txt", "w+") != 0)
	{
		printf("File error!\n");
	}
	else
	{
		fscanf_s(asave, "%i\n%i\n%i\n%i\n%i\n", WS, S, SV, medal, fireresist);
		fscanf_s(asave, "%i\n%i\n%i\n%i\n%i\n%i\n", Bible, choose, Beda_Bashka, krek, Sigmar_blessings, level);
		fclose(asave);

		printf_s("Загружен последний чекпоинт...\n\n");
	}


}
//void callnamesave()
//{
//	char savename[50];
//
//	printf_s("Введите имя для файла сохранения:");
//
//	scanf_s("&c", savename);
//
//	strcat(savename, ".txt");
//}
void saveDES(int WS, int S, int SV, int medal, int fireresist, int Bible, int choose, int Beda_Bashka, int krek, int Sigmar_blessings, int level)
{
	char savename[50];

	printf_s("Введите имя для файла сохранения:\n");
	scanf_s("%s", savename);

	strcat_s(savename, ".txt");

	FILE* save;

	if (fopen_s(&save, savename, "w+") != 0)
	{
		printf("File error!\n");
	}
	else
	{
	
		fprintf_s(save, "%i\n%i\n%i\n%i\n%i\n", WS, S, SV, medal, fireresist);
		fprintf_s(save, "%i\n%i\n%i\n%i\n%i\n%i\n", Bible, choose, Beda_Bashka, krek, Sigmar_blessings, level);

		fclose(save);

		printf_s("\n\nСохранение прошло успешно, в файл %s\n\n", savename);
	}

}

void loadDES(int& WS, int& S, int& SV, int& medal, int& fireresist, int& Bible, int& choose, int& Beda_Bashka, int& krek, int& Sigmar_blessings, int &level)
{
	char savename[50];

	printf_s("Введите имя файла сохранения:\n");
	scanf_s("%s", savename);

	strcat_s(savename, ".txt");

	FILE* save;

	if (fopen_s(&save, savename, "rt") != 0)
	{
		printf("File error!\n");
		Menu(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
	}
	else
	{

		fscanf_s(save, "%i\n%i\n%i\n%i\n%i\n", &WS, &S, &SV, &medal, &fireresist);
		fscanf_s(save, "%i\n%i\n%i\n%i\n%i\n%i\n", &Bible, &choose, &Beda_Bashka, &krek, &Sigmar_blessings, &level);

		fclose(save);
	}

}

//int main()
//{
//	system("chcp 1251");
//
//			int WS = 2;
//			int S = 2;
//			int SV = 7;
//			int medal = 0;
//			int fireresist = 0;
//			int Bible = 0;
//			int choose = 0;
//			int Beda_Bashka = 0;
//			int krek = 0;
//			int Sigmar_blessings = 0;
//
//	saveDES(WS, S, SV, medal, fireresist, Bible, choose, Beda_Bashka, krek, Sigmar_blessings);
//
//	WS = 0;
//	S = 0;
//	SV = 0;
//	medal = 0;
//	fireresist = 5;
//	Bible = 5;
//	choose = 5;
//	Beda_Bashka = 5;
//	krek = 5;
//	Sigmar_blessings = 5;
//
//	printf_s("%i  %i  %i  %i  %i  %i  %i  %i  %i  %i\n\n", WS, S, SV, medal, fireresist, Bible, choose, Beda_Bashka, krek, Sigmar_blessings);
//
//	loadDES(WS, S, SV, medal, fireresist, Bible, choose, Beda_Bashka, krek, Sigmar_blessings);
//
//	printf_s("%i  %i  %i  %i  %i  %i  %i  %i  %i  %i\n\n", WS, S, SV, medal, fireresist, Bible, choose, Beda_Bashka, krek, Sigmar_blessings);
//
//	system("pause");
//	return(0);
//}