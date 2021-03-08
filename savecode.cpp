#include<iostream>

void saveDES(int Beda_Bashka, int medal, int fireresist, int Bible, int choose, int krek)
{
	FILE* savedata;
	if (fopen_s(&savedata, "save.txt", "w+") != 0)
	{
		printf("File error!\n");
	}
	else
	{
		fprintf(savedata, "%i\n%i\n%i\n", Beda_Bashka, medal, fireresist);
		fprintf(savedata, "%i\n%i\n%i\n", Bible, choose, krek);
	}
	fclose(savedata);
}

void loadDES(int& Beda_Bashka, int& medal, int& fireresist, int& Bible, int& choose, int& krek)
{
	FILE* savedata;
	if (fopen_s(&savedata, "save.txt", "rt") != 0)
	{
		printf("File error!\n");
	}
	else
	{
		fscanf_s(savedata, "%i%i%i", &Beda_Bashka, &medal, &fireresist);
		fscanf_s(savedata, "%i%i%i", &Bible, &choose, &krek);
	}
	fclose(savedata);

}

int main()
{
	system("chcp 1251");

	printf_s("Сейчас откроется файл для работы. В него внесут данные. Потом обнулят их и выведут.\n");

	int Beda_Bashka = 8;
	int medal = 4;
	int fireresist = 1;
	int Bible = 15;
	int choose = 9;
	int Rezult_you = 2;
	int Rezult_Hit = 2;
	int krek = 1;

	saveDES(Beda_Bashka, medal, fireresist, Bible, choose, krek);

	Beda_Bashka = 0;
	medal = 0;
	fireresist = 0;
	Bible = 0;
	choose = 0;
	Rezult_you = 0;
	Rezult_Hit = 0;
	krek = 0;

	printf_s("Обнуляем значения....\n");
	printf_s("%i %i %i %i %i %i", Beda_Bashka, medal, fireresist, Bible, choose, krek);
	printf_s("\n\nТеперь загрузим их из файла и выведем:\n");

	loadDES(Beda_Bashka, medal, fireresist, Bible, choose, krek);

	printf_s("%i %i %i %i %i %i\n\n", Beda_Bashka, medal, fireresist, Bible, choose, krek);
	
	
	
	printf_s("Как видите, всё работает. Проверено дважды.\n");


	return(0);
}