#include <iostream>
#include<ctime>
#include<conio.h>
#include"needsforsaves.h"


int main()
{

	srand(time(NULL));
	system("chcp 1251");

	int level=1;
	int WS = 2;
	int S = 2;
	int SV = 7;
	int medal = 0;
	int fireresist = 0;
	int Bible = 0;
	int choose = 0;
	int Beda_Bashka = 0;
	int krek = 0;
	int Sigmar_blessings = 0;
	
	char savename;

	Menu(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
	Pred(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
	FirstLevel(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
	One(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
	Two(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
	Battle(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
	Battle1(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
	GrandBattle(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
	TwoLevel(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
	Game(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
	Battle2(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
	LastBattle(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
	ThirdLevel(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
	EndlessBattle(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
}

void  Menu(int WS, int S, int SV, int medal, int fireresist, int Bible, int choose, int Beda_Bashka, int krek, int Sigmar_blessings, int &level)
{
	system("cls");
	printf("�������� ������� �� ����\n 1-����� ����\n 2-��������� ����\n 3-����� �� ����\n ");
	printf("��� �����: ");
	scanf_s("%d", &choose);

	switch (choose)
	{
	case 1:
	{
		printf("\n");
		
		level = 1;
		int WS = 2;
		int S = 2;
		int SV = 7;
		int medal = 0;
		int fireresist = 0;
		int Bible = 0;
		int choose = 0;
		int Beda_Bashka = 0;
		int krek = 0;
		int Sigmar_blessings = 0;
		Pred(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);

	}
	break;
	case 2:
	{
		printf_s("������� 1, ����� ��������� ��������� ��������, ��� 2, ����� ��������� ���������� �� �����\n");
		scanf_s("%i", &choose);
		switch (choose)
		{
		case 1:
			autoloadDES(WS, S, SV, medal, fireresist,  Bible, choose, Beda_Bashka,  krek,  Sigmar_blessings, level);
			break;
		case 2:
			loadDES(WS, S, SV, medal, fireresist, Bible, choose, Beda_Bashka, krek, Sigmar_blessings, level);
			break;
		default: printf_s("������.\n");
		}
		break;
	}
	case 3:
	{
		exit(0);
	}
	break;
	default:printf("No correct ");


	}
}

void  Pred(int WS, int S, int SV, int medal, int fireresist, int Bible, int choose, int Beda_Bashka, int krek, int Sigmar_blessings, int &level)
{
	TEXTDEVIL();
	printf("��� �����: ");
	scanf_s("%d", &choose);
	switch (choose)
	{
	case 1:
	{
		printf_s("������ ��������� ��������� ����� � ������ �� ��� �����. ��� ������� ������� � ���������� �� ���������.");
		system("pause");
		Menu(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);

	}
	break;
	case 2:
	{
		FirstLevel(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
	}
	break;
	default:printf("No correct ");
	}
}

void FirstLevel(int WS, int S, int SV, int medal, int fireresist, int Bible, int choose, int Beda_Bashka, int krek, int Sigmar_blessings, int &level)
{

	/*����� ������ ���������� �����*/
	/*�� ��������� � ��������� ��������� ���*/
	printf("����������� ������, �� ����� ����� ���������� ����. ������� ����� ��������.\n 1-���-�� ����� ����� �������� �������������� �����.\n 2-���������� ����� �� ������ � ������ �������� ���-�� �������.\n 3-�� ������ ��������� �������� ���.\n 4- �� ��� �����-�� ������� �������������� �� ������\n  5- � ������ ��������� �������� ������, �� �������� ������� ��� ������ � ��.\n 6 - ��������� ����\n 7 - ��������� ����\n");
	printf("��� �����: ");
	scanf_s("%d", &choose);

	switch (choose)
	{
	case 1:
	{
		if (SV == 6)
		{
			printf("���������� � �������, ����� ������ ����, ��� ��� �� �����, ������ ������� ������ ������ �����. ����, � ���� ������ ����- �������. �� ���� ����� ������, ���� �� ����� �������, ��� � ��. � ����� ������ ���. �������� � ���� � �� ���� �������. ");
			int Sigmar_blessings =1;
			FirstLevel(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
		}
		/*FACEHITLER(N);*/
		TEXTHITLER();
		scanf_s("%d", &choose);
		switch (choose)
		{


		case 1:
		{
			printf_s("������� � ���� ������� ������� ������ �� ���������, � ����� ��� �������� ������� ����. �� ��������� ���� ��������� � �������� .");
			Beda_Bashka = Beda_Bashka + 1;
			printf("���� �������: ");
			printf("%d ", Beda_Bashka);
			FirstLevel(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
		}
		break;
		case 2:
		{
			TEXTHITLER2();
			FirstLevel(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
		}
		break;
		


		default:printf("No correct ");


		}
	}
	break;
	case 2:
	{
		if (medal == 0) One(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
		else
		{
			printf("�� ��� ���� � ���������.\n");
			FirstLevel(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
			break;
		}
		
	}
	break;
	case 3:
	{
		printf("�� ������ �������� ������ ���.\n");
		Two(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
	}
	break;
	case 4:
	{
		if (S > 2)
		{
			printf("�� ��� ����� ����.\n");
		}
		printf("�� ������ �������� � ����� �������� ����� ������ ������ ������� �����. �� �������� ������ ��� �����, ��������� ��� ������ ��������.\n");
		printf("�������, �� ������� ����� \n - ������ ��������� ���� ������, � ������ ���� ��� ������ �� ��������.");
		Battle1(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);

	}
	break;
	case 5:
	{
		printf("����� ���� �� ������ ���������� ������������� �������� �����, �������� ������������ ��� ����� ������..");
		GrandBattle(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
	}
	break;
	case 6:
	{
		saveDES(WS, S,  SV,  medal, fireresist,  Bible,  choose,  Beda_Bashka,  krek, Sigmar_blessings, level);
		system("cls");
		FirstLevel(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
		break;
	}
	case 7:
	{
		printf_s("������� 1, ����� ��������� ��������� ��������, ��� 2, ����� ��������� ���������� �� �����\n");
		scanf_s("%i", &choose);
		switch (choose)
		{
		case 1:
			autoloadDES(WS, S, SV, medal, fireresist, Bible, choose, Beda_Bashka, krek, Sigmar_blessings, level);
			break;
		case 2:
			loadDES(WS, S, SV, medal, fireresist, Bible, choose, Beda_Bashka, krek, Sigmar_blessings, level);
			break;
		default: printf_s("������ ����������.\n");
		}
		break;
	}

	default:printf("No correct ");


	}
}


	void  One(int WS, int S, int SV, int medal, int fireresist, int Bible, int choose, int Beda_Bashka, int krek, int Sigmar_blessings, int& level)
	{
		TEXTBENITO();
		printf("��� �����: ");
		scanf_s("%d", &choose);
		switch (choose)
		{
		case 1:
		{
			printf("������� ����� ���� � ��������� �� �����.");

		}
		break;
		case 2:
		{
			printf("������� ����������� ����������� �� ����.");
		}

		break;
		default:printf("No correct ");
		}
		TEXTBENITO2();
		printf("��� �����: ");
		scanf_s("%d", &choose);
		switch (choose)
		{
		case 1:
		{
			Beda_Bashka = Beda_Bashka + 1;
			printf("���� �������: ");
			printf("%d ", Beda_Bashka);
			medal = 2;
			printf_s("- �� ��� ���- �������� ������- � ���� ������� ��� ���� ������ ������ ��� , � ���������� ����� �����-��! �� ������ ����� ������ ?????\n�������, ������� , ��� ������ �������� ��� ��� �� �������� ��������� ����� �� ����� .");
			FirstLevel(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
			
		}
		break;
		case 2:
		{
			medal = 1;
			WS = WS + 1;
			printf("���� ������ ��������� ����������! ��� ����������: ");
			printf("%d ", WS);
			printf_s("������ ��������� � ���-�� ��������� ��� ������� ������ ��������������� � ��������.\n- � ���������� ��� , ������� ���������� ������ � ������ ��� ��� ��� ������! ������ ����� ��������� ������ ������� � ��� ��������!\n� ������ ��� � ���� ���� ����!\n������� ������������ ������� �� ������� � ������������� �� ��������.\n");
			FirstLevel(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
			
		}
		break;
		case 3:
		{
			printf_s("- �� ��� ���- �������� ������- � ���� ������� ��� ���� ������ ������ ��� , � ���������� ����� �����-��! �� ������ ����� ������ ?????\n�������, ������� , ��� ������ �������� ��� ��� �� �������� ��������� ����� �� ����� .");
			Beda_Bashka = Beda_Bashka + 1;
			printf("���� �������: ");
			printf("%d ", Beda_Bashka);
			medal = 2;
			FirstLevel(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
			
		}

		default:printf("No correct ");
		}
	
	}

	void  Two(int WS, int S, int SV, int medal, int fireresist, int Bible, int choose, int Beda_Bashka, int krek, int Sigmar_blessings, int &level)
	{
		if (SV == 6)
		{
			printf("�� ��� �������� ");
			FirstLevel(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
		}
		printf("��� ��������� ������ ���, ������ ������ ������� ������ �� ���� ������. ������ ������ ������� �� ���. ");
		printf("1- �� ��, � ���� �� �����. 2-����� ���������� ���� �����. ������. ");
		printf("��� �����: ");
		scanf_s("%d", &choose);
		switch (choose)
		{
		case 1:
		{
			FirstLevel(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
		}
		break;
		case 2:
		{
			printf("�� ��� ������ ��������-������ ��� ���! ");
			Battle(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
		}
		break;
		default:printf("No correct ");
		}
		
	}

	void  Battle(int WS, int S, int SV, int medal, int fireresist, int Bible, int choose, int Beda_Bashka, int krek, int Sigmar_blessings, int& level)
	{
		printf("���� ������ ��������� ����������! ��� ����������: ");
		printf("%d ", WS);
		int W = 5;
		int EW = 3;
		int ES = 3;
		int EWS = 3;
		int per = 0;
		int force = 3;
		while ( W > 0)
		{
			if (EW==0)
			{
				printf("�� ��������!����� ������... �� ������� ����� �� �����. ");
				SV = 6;
				FirstLevel(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
			}
			printf("������ �� ������ ������� ������ ���������.\n 1- ������� ������� ����(�� ������� ������� ������,�� ������� ������ ���)\n 2- ������� ������ ���� ( ��������� ���� ������������  �� 1) \n 3-�������� ������� �������(���� �� ������ ���-��� �����, ���)\n  ");
			printf("��� �����: ");
			scanf_s("%d", &choose);
			switch (choose)
			{
			case 1:
			{
				if (WS >= EWS)
				{
					per = rand() % 7;
					if (per > 2)
					{
						printf("�� ������! ");
		
						if (S >= ES)
						{
							per = rand() % 7;
							if (per > 2)
							{
								printf("�� ������ �����!! ");
								EW = EW - 1;

							}
							else
							{
								printf("�� ��  ������ �����! ");

							}

						}
						else
						{
							per = rand() % 7;
							if (per > 3)
							{
								printf("�� ������ �����!! ");
								EW = EW - 1;

							}
							else
							{
								printf("�� ��  ������ �����! ");

							}

						}

					}
					else
					{
						printf("�� ��  ������! ");
						
					}
				}
				else
				{
					per = rand() % 7;
					if (per >= 3)
					{
						printf("�� ������! ");

						if (S >= ES)
						{
							per = rand() % 7;
							if (per > 2)
							{
								printf("�� ������ �����!! ");
								EW = EW - 1;

							}
							else
							{
								printf("�� ��  ������ �����! ");

							}

						}
						else
						{
							per = rand() % 7;
							if (per > 3)
							{
								printf("�� ������ �����!! ");
								EW = EW - 1;

							}
							else
							{
								printf("�� ��  ������ �����! ");

							}
						}


					}
					else
					{
						printf("�� ��  ������! ");

					}
				}
			}
			break;
			case 2:
			{
				if (force > 0)
				{
					force = force - 1;
					if (WS >= EWS)
					{
						per = rand() % 7;
						if (per > 2)
						{
							printf("�� ������! ");

							if (S >= ES)
							{
								per = rand() % 7;
								if (per > 2)
								{
									printf("�� ������ �����!! ");
									EW = EW - 1;

								}
								else
								{
									printf("�� ��  ������ �����! ");

								}

							}
							else
							{
								per = rand() % 7;
								if (per > 3)
								{
									printf("�� ������ �����!! ");
									EW = EW - 1;

								}
								else
								{
									printf("�� ��  ������ �����! ");

								}

							}

						}
						else
						{
							printf("�� ��  ������! ");

						}
					}
					else
					{
						per = rand() % 7;
						if (per >= 3)
						{
							printf("�� ������! ");

							if (S > ES)
							{
								per = rand() % 7;
								if (per > 1)
								{
									printf("�� ������ �����!! ");
									EW = EW - 1;

								}
								else
								{
									printf("�� ��  ������ �����! ");

								}

							}
							else
							{
								per = rand() % 7;
								if (per > 2)
								{
									printf("�� ������ �����!! ");
									EW = EW - 1;

								}
								else
								{
									printf("�� ��  ������ �����! ");

								}
							}


						}
						else
						{
							printf("�� ��  ������! ");

						}
					}
				}
				else
					printf("�� �� ������ ���������� ������������  ");
			}
			break;
			case 3:
			{
				if (Sigmar_blessings > 0)
				{
					printf("�� �������� �������  ");
					force = force + 2;
					W = W + 1;
				}
				else
					printf("�� �� ������ ��������  �������  ");
			}
			break;
			default:printf("No correct ");
			}
			
			printf("��� ���� ����!  ");
			per = rand() % 7;
			if (per > 5)
			{
				printf("�� ��� ������ �����!  ");
				per = rand() % 7;
				if (SV >= per)
				{
					W = W - 1;
					printf("� ��� �������� ������:  ");
					printf("%d ", W);
				}
				else printf("���� ����� �������� ����!  ");
			}
			else
			{
				printf("�� ��� �� ������ �����!  ");
			}
		}
		if (W == 0)
		{
			printf("�� ���� ������� �������...");
			Menu(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
		}

	}
	void  Battle1(int WS, int S, int SV, int medal, int fireresist, int Bible, int choose, int Beda_Bashka, int krek, int Sigmar_blessings, int& level)
	{
		printf("���� ������ ��������� ����������: ");
		printf("%d ", WS);
		printf("���� ����  ����������: ");
		printf("%d ",S);
		int W = 5;
		int EW = 2;
		int ES = 2;
		int EWS = 2;
		int per = 0;
		int force = 3;
		printf("��������� ������ ��������� ����������: ");
		printf("%d ", EWS);
		printf("���� ����  ����������: ");
		printf("%d ", ES);
		while (W > 0)
		{
			if (EW == 0)
			{
				printf("�� ��������!������� ������. ������� ���������� ��� � ������� ���������� ");
				S = S+1;
				FirstLevel(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
			}
			printf("������ �� ������ ������� ������ ���������.\n 1- ������� ������� ����(�� ������� ������� ������,�� ������� ������ ���)\n 2- ������� ������ ���� ( ��������� ���� ������������  �� 1) \n 3- �������� ������� �������(���� �� ������ ���-��� �����, ���)\n  ");
			printf("��� �����: ");
			scanf_s("%d", &choose);
			switch (choose)
			{
			case 1:
			{
				if (WS >= EWS)
				{
					per = rand() % 7;
					if (per > 2)
					{
						printf("�� ������! ");

						if (S >= ES)
						{
							per = rand() % 7;
							if (per > 2)
							{
								printf("�� ������ �����!!\n  ");
								EW = EW - 1;

							}
							else
							{
								printf("�� ��  ������ �����!\n  ");

							}

						}
						else
						{
							per = rand() % 7;
							if (per > 3)
							{
								printf("�� ������ �����!!\n  ");
								EW = EW - 1;

							}
							else
							{
								printf("�� ��  ������ �����!\n  ");

							}

						}

					}
					else
					{
						printf("�� ��  ������!\n  ");

					}
				}
				else
				{
					per = rand() % 7;
					if (per >= 3)
					{
						printf("�� ������!\n  ");

						if (S >= ES)
						{
							per = rand() % 7;
							if (per > 2)
							{
								printf("�� ������ �����!! \n ");
								EW = EW - 1;

							}
							else
							{
								printf("�� ��  ������ �����!\n  ");

							}

						}
						else
						{
							per = rand() % 7;
							if (per > 3)
							{
								printf("�� ������ �����!!\n  ");
								EW = EW - 1;

							}
							else
							{
								printf("�� ��  ������ �����!\n ");

							}
						}


					}
					else
					{
						printf("�� ��  ������!\n ");

					}
				}
			}
			break;
			case 2:
			{
				if (force > 0)
				{
					force = force - 1;
					if (WS >= EWS)
					{
						per = rand() % 7;
						if (per > 2)
						{
							printf("�� ������!\n ");

							if (S >= ES)
							{
								per = rand() % 7;
								if (per > 2)
								{
									printf("�� ������ �����!!\n ");
									EW = EW - 1;

								}
								else
								{
									printf("�� ��  ������ �����!\n ");

								}

							}
							else
							{
								per = rand() % 7;
								if (per > 3)
								{
									printf("�� ������ �����!!\n ");
									EW = EW - 1;

								}
								else
								{
									printf("�� ��  ������ �����! \n");

								}

							}

						}
						else
						{
							printf("�� ��  ������!\n ");

						}
					}
					else
					{
						per = rand() % 7;
						if (per >= 3)
						{
							printf("�� ������!\n ");

							if (S > ES)
							{
								per = rand() % 7;
								if (per > 1)
								{
									printf("�� ������ �����!!\n ");
									EW = EW - 1;

								}
								else
								{
									printf("�� ��  ������ �����! \n");

								}

							}
							else
							{
								per = rand() % 7;
								if (per > 2)
								{
									printf("�� ������ �����!!\n ");
									EW = EW - 1;

								}
								else
								{
									printf("�� ��  ������ �����!\n ");

								}
							}


						}
						else
						{
							printf("�� ��  ������!\n ");

						}
					}
				}
				else
					printf("�� �� ������ ���������� ������������ \n ");
			}
			break;
			case 3:
			{
				if (Sigmar_blessings > 0)
				{
					printf("�� �������� ������� \n ");
					force = force + 2;
					W = W + 1;
				}
				else
					printf("�� �� ������ ��������  �������\n  ");
			}
			break;
			default:printf("No correct ");
			}

			printf("��� ���� ����!  ");
			per = rand() % 7;
			if (per >= 5)
			{
				printf("�� ��� ������ �����!\n  ");
				per = rand() % 7;
				if (SV > per)
				{
					W = W - 1;
					printf("� ��� �������� ������: \n ");
					printf("%d ", W);
				}
				else printf("���� ����� �������� ����!\n  ");
			}
			else
			{
				printf("�� ��� �� ������ �����!\n  ");
			}
		}
		if (W == 0)
		{
			printf("�� ���� ������� �������...\n");
			Menu(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
		}

	}

	void  GrandBattle(int WS, int S, int SV, int medal, int fireresist, int Bible, int choose, int Beda_Bashka, int krek, int Sigmar_blessings, int& level)
	{
		printf("���� ������ ��������� ����������: ");
		printf("%d ", WS);
		printf("���� ����  ����������: ");
		printf("%d ", S);
		int W = 5;
		int EW = 6;
		int ES = 10;
		int EWS = 2;
		int per = 0;
		int force = 3;
		printf("��������� ������ ��������� ����������: ");
		printf("%d ", EWS);
		printf("���� ����  ����������: ");
		printf("%d ", ES);
		while (W > 0)
		{
			if (EW == 0)
			{
				printf("�� ��������! �������� ����� ����������� �� �������. ");
				TwoLevel(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
			}
			printf("������ �� ������ ������� ������ ���������.\n 1- ������� ������� ����(�� ������� ������� ������,�� ������� ������ ���)\n 2- ������� ������ ���� ( ��������� ���� ������������  �� 1) \n 3- �������� ������� �������(���� �� ������ ���-��� �����, ���)\n  ");
			printf("��� �����: ");
			scanf_s("%d", &choose);
			switch (choose)
			{
			case 1:
			{
				if (WS >= EWS)
				{
					per = rand() % 7;
					if (per > 2)
					{
						printf("�� ������!\n ");

						if (S >= ES)
						{
							per = rand() % 7;
							if (per > 2)
							{
								printf("�� ������ �����!!\n ");
								EW = EW - 1;

							}
							else
							{
								printf("�� ��  ������ �����!\n ");

							}

						}
						else
						{
							per = rand() % 7;
							if (per > 3)
							{
								printf("�� ������ �����!!\n ");
								EW = EW - 1;

							}
							else
							{
								printf("�� ��  ������ �����!\n ");

							}

						}

					}
					else
					{
						printf("�� ��  ������!\n ");

					}
				}
				else
				{
					per = rand() % 7;
					if (per >= 3)
					{
						printf("�� ������!\n ");

						if (S >= ES)
						{
							per = rand() % 7;
							if (per > 2)
							{
								printf("�� ������ �����!!\n ");
								EW = EW - 1;

							}
							else
							{
								printf("�� ��  ������ �����! \n");

							}

						}
						else
						{
							per = rand() % 7;
							if (per > 3)
							{
								printf("�� ������ �����!!\n ");
								EW = EW - 1;

							}
							else
							{
								printf("�� ��  ������ �����!\n ");

							}
						}


					}
					else
					{
						printf("�� ��  ������!\n ");

					}
				}
			}
			break;
			case 2:
			{
				if (force > 0)
				{
					force = force - 1;
					if (WS >= EWS)
					{
						per = rand() % 7;
						if (per > 2)
						{
							printf("�� ������!\n ");

							if (S >= ES)
							{
								per = rand() % 7;
								if (per > 2)
								{
									printf("�� ������ �����!!\n ");
									EW = EW - 1;

								}
								else
								{
									printf("�� ��  ������ �����!\n");

								}

							}
							else
							{
								per = rand() % 7;
								if (per > 3)
								{
									printf("�� ������ �����!!\n ");
									EW = EW - 1;

								}
								else
								{
									printf("�� ��  ������ �����!\n ");

								}

							}

						}
						else
						{
							printf("�� ��  ������!\n ");

						}
					}
					else
					{
						per = rand() % 7;
						if (per >= 3)
						{
							printf("�� ������!\n ");

							if (S > ES)
							{
								per = rand() % 7;
								if (per > 1)
								{
									printf("�� ������ �����!!\n ");
									EW = EW - 1;

								}
								else
								{
									printf("�� ��  ������ �����!\n ");

								}

							}
							else
							{
								per = rand() % 7;
								if (per > 2)
								{
									printf("�� ������ �����!!\n ");
									EW = EW - 1;

								}
								else
								{
									printf("�� ��  ������ �����!\n ");

								}
							}


						}
						else
						{
							printf("�� ��  ������!\n ");

						}
					}
				}
				else
					printf("�� �� ������ ���������� ������������ \n ");
			}
			break;
			case 3:
			{
				if (Sigmar_blessings > 0)
				{
					printf("�� �������� �������\n  ");
					force = force + 2;
					W = W + 1;
				}
				else
					printf("�� �� ������ ��������  �������\n  ");
			}
			break;
			default:printf("No correct ");
			}

			printf("��� ���� ����! \n ");
			per = rand() % 7;
			if (per >= 4)
			{
				printf("�� ��� ������ �����!\n  ");
				per = rand() % 7;
				if (SV > per)
				{
					W = W - 1;
					printf("� ��� �������� ������:\n  ");
					printf("%d ", W);
				}
				else printf("���� ����� �������� ����!\n  ");
			}
			else
			{
				printf("�� ��� �� ������ �����! \n ");
			}
		}
		if (W == 0)
		{
			printf("�� ���� ������� �������...");
			Menu(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
		}

	}

	void TwoLevel(int WS, int S, int SV, int medal, int fireresist, int Bible, int choose, int Beda_Bashka, int krek, int Sigmar_blessings, int& level)
	{
		/*����� ������ ���������� ������ �����*/
		/*�� ��������� � ���������  ���*/
		printf("���� ������ ��������� ����������: ");
		printf("%d ", WS);
		printf("���� ����  ����������: ");
		printf("%d ", S);
		printf("����������� ������, �� ����� ����� ����� ���������� ����. ������� ����� ��������.\n 1-����� ������ ���� ��� �� � ����.\n 2-������ ��������� ����������� �������.\n 3-������������ ���������.\n 4-����� �� ���������.\n 5- � ������ ��������� �������� ������, �� �������� ������� ��� ������ � ��.\n 6- ������� ��� ���� ��������� ������� ����� ����.\n 7 - ����������\n 8 - ��������\n ");
		printf("��� �����: ");
		scanf_s("%d", &choose);

		switch (choose)
		{
		case 1:
		{ 
			TEXTBORIS();
			printf_s("��� �����:");
			scanf_s("%d", &choose);
			switch (choose)
			{
			case 1:
			{
				if (medal == 1) printf(" �� ������� ������\n");
				else
				{
					printf(" �� �� ������� ��������� ������ ����� �� ����������\n");
					break;
				}
				printf_s("������� ����� ������ �������� �� ���� ��������, �� ���������� ����� ���������,\n���� �������� ���� ��������� � ��������� ������� ����� �����, �������� ��� ������\n����� ��� ��� ����� - �� ���������� � ������ �� ����, ������� ����� �������.");
				Beda_Bashka = Beda_Bashka + 1;
				printf("���� �������: ");
				printf("%d ", Beda_Bashka);
				TwoLevel(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
			}
			break;
			case 2:
			{
				/*(����� ����_����) � ����� �������� ������ �������� ������������� � +1 � S*/
			}

			break;
			case 3:
			{
				TwoLevel(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
			}

			break;
			default:printf("No correct ");
			}
		}
		break;
		case 2:
		{
			if (Bible = Bible + 1)
			{
				printf("�� ��� ��������\n");
				TwoLevel(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
			}
			TEXTDARWIN();
			printf("��� �����: ");
			scanf_s("%d", &choose);
			switch (choose)
			{
			case 1:
			{

				Beda_Bashka = Beda_Bashka + 1;
				printf("���� �������: ");
				printf("%d ", Beda_Bashka);
				printf_s("�� �� ������ ��� �������");
				TwoLevel(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
			}
			break;
			case 2:
			{

				Beda_Bashka = Beda_Bashka + 1;
				printf("���� �������: ");
				printf("%d ", Beda_Bashka);
				printf_s("�� �� ������ ��� �������");
				TwoLevel(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
			}
			break;
			case 3:
			{
				if (fireresist == 1)
				{
					printf_s("��, ��������� ��������� �� ���������� ���, ������ �� ���. �������� � ����� �� ���� �����������.");
					printf_s("����������!- ������, ������������, ��� ��������, ����, �������, ����������� �������� ����� - ��� ������, ��� ������.����� ����������.\n");
					Bible = Bible + 1;
					SV = SV + 1;
					printf("���� ������ ������: ");
					printf("%d ", SV);
					TwoLevel(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
				}

				Beda_Bashka = Beda_Bashka + 1;
			}
			break;
			default:printf("No correct ");
			}


		}
		break;
		case 3:
		{
			if (WS>3)
			{
				printf("�� ��� ��������\n");
				TwoLevel(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
			}
			printf("� ������ � ������� ������� �������� �� ���������� �������� � ��������������� �����.\n");
			Battle2(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
		}
		break;
		case 4:
		{

			if (krek == 1)
			{
				printf("�� ��� ��������\n");
				TwoLevel(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
			}


			TEXTLENIN();
			printf("��� �����: ");
			scanf_s("%d", &choose);
			switch (choose)
			{
			case 1:
			{

				Game(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
				printf_s("- �������! ���� ��� ���� ���� , �� ���� ����������. � � ����� �� ������� �������, ������ ��� ������������ ��� ���������� .");
				krek = 1;
				S = S + 1;
				printf("���� ���� ������: ");
				printf("%d ", S);
				TwoLevel(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
			}
			break;
			case 2:
			{
				TwoLevel(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
			}
			break;


			default:printf("No correct ");
			}

		}
		break;
		case 5:
		{

			printf("����� ���� ������� �����. 1- ����,����� ��������� � ���. 2- ���� �� ���������. ");
			printf("��� �����: ");
			scanf_s("%d", &choose);
			switch (choose)
			{
			case 1:
			{
				LastBattle(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);

			}
			break;
			case 2:
			{
				TwoLevel(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
			}
			break;


			default:printf("No correct ");

			}
		}
			break;
		case 6:
		{

			if (SV==4)
			{
				printf("�� ��� ��������\n");
				TwoLevel(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
			}
			printf("�� ������ �����, ������� ����� ���������� � ��� � ��������. ����, ����� ���, ����������. ��� � ��� ������ ������ ����� �� ���. ����� �� �������. ");
			ARESGAME();
			SV = 4;

		}
			break;
		case 7:
		{
			saveDES(WS, S, SV, medal, fireresist, Bible, choose, Beda_Bashka, krek, Sigmar_blessings, level);
			system("cls");
			TwoLevel(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
			break;
		}
		case 8:
		{
			printf_s("������� 1, ����� ��������� ��������� ��������, ��� 2, ����� ��������� ���������� �� �����\n");
			scanf_s("%i", &choose);
			switch (choose)
			{
			case 1:
				autoloadDES(WS, S, SV, medal, fireresist, Bible, choose, Beda_Bashka, krek, Sigmar_blessings, level);
				break;
			case 2:
				loadDES(WS, S, SV, medal, fireresist, Bible, choose, Beda_Bashka, krek, Sigmar_blessings, level);
				break;
			default: printf_s("������ ����������.\n");
			}
			break;
		}
		default:printf("No correct ");
		}
		
	
	}

		void  Game(int WS, int S, int SV, int medal, int fireresist, int Bible, int choose, int Beda_Bashka, int krek, int Sigmar_blessings, int& level)
	{
			int k = 0;
			int c = rand()%10 +1;
			if (c>5)
			{
				printf("��� ����� ������ ����");
			}
			else
			{
				printf("��� ����� ������ ����");
			}
			if (c %2 ==0)
			{
				printf("��� ����� ������");
			}
			else
			{
				printf("��� ����� ��������");
			}
			printf("���� �������������");
			scanf_s("%d", &k);
			if (k==c)
			{
				printf("����������, �� �������");
				TwoLevel(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
			}
			else
			{
				printf("����������, �� ��  �������. ������� ��� ���.");
				Game(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);


			}
		}


		void  Battle2(int WS, int S, int SV, int medal, int fireresist, int Bible, int choose, int Beda_Bashka, int krek, int Sigmar_blessings, int& level)
		{


			printf("���� ������ ��������� ����������: ");
			printf("%d ", WS);
			printf("���� ����  ����������: ");
			printf("%d ", S);
			int W = 5;
			int EW = 5;
			int ES = 5;
			int EWS = 3;
			int per = 0;
			int force = 3;
			printf("��������� ������ ��������� ����������: ");
			printf("%d ", EWS);
			printf("���� ����  ����������: ");
			printf("%d ", ES);
			while (W > 0)
			{
				if (EW == 0)
				{
					printf("�� ��������!������ ����� ");
					WS = WS + 1;
					TwoLevel(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
				}
				printf("������ �� ������ ������� ������ ���������.\n 1- ������� ������� ����(�� ������� ������� ������,�� ������� ������ ���)\n 2- ������� ������ ���� ( ��������� ���� ������������  �� 1) \n 3-�������� ������� �������(���� �� ������ ���-��� �����, ���)\n  ");
				printf("��� �����: ");
				scanf_s("%d", &choose);
				switch (choose)
				{
				case 1:
				{
					if (WS >= EWS)
					{
						per = rand() % 7;
						if (per > 2)
						{
							printf("�� ������ �� ���������� �������!\n ");

							if (S >= ES)
							{
								per = rand() % 7;
								if (per > 2)
								{
									printf("�� ������ ����� ����� � ����!!\n ");
									EW = EW - 1;

								}
								else
								{
									printf("�� ��  ������ �����!\n ");

								}

							}
							else
							{
								per = rand() % 7;
								if (per > 3)
								{
									printf("�� ������ ����� � ����!!\n ");
									EW = EW - 1;

								}
								else
								{
									printf("�� ��  ������ �����!\n ");

								}

							}

						}
						else
						{
							printf("�� ��  ������!\n ");

						}
					}
					else
					{
						per = rand() % 7;
						if (per >= 3)
						{
							printf("�� ������ �� ����������!\n ");

							if (S >= ES)
							{
								per = rand() % 7;
								if (per > 2)
								{
									printf("�� ������ �����, ������� �����!!\n ");
									EW = EW - 1;

								}
								else
								{
									printf("�� ��  ������ �����! \n");

								}

							}
							else
							{
								per = rand() % 7;
								if (per > 3)
								{
									printf("�� ������ �����!!\n ");
									EW = EW - 1;

								}
								else
								{
									printf("�� ��  ������ �����!\n ");

								}
							}


						}
						else
						{
							printf("�� ��  ������!\n ");

						}
					}
				}
				break;
				case 2:
				{
					if (force > 0)
					{
						force = force - 1;
						if (WS >= EWS)
						{
							per = rand() % 7;
							if (per > 2)
							{
								printf("�� ������!\n ");

								if (S >= ES)
								{
									per = rand() % 7;
									if (per > 2)
									{
										printf("�� ������ �����!!\n ");
										EW = EW - 1;

									}
									else
									{
										printf("�� ��  ������ �����!\n");

									}

								}
								else
								{
									per = rand() % 7;
									if (per > 3)
									{
										printf("�� ������ �����!!\n ");
										EW = EW - 1;

									}
									else
									{
										printf("�� ��  ������ �����!\n ");

									}

								}

							}
							else
							{
								printf("�� ��  ������!\n ");

							}
						}
						else
						{
							per = rand() % 7;
							if (per >= 3)
							{
								printf("�� ������!\n ");

								if (S > ES)
								{
									per = rand() % 7;
									if (per > 1)
									{
										printf("�� ������ �����!!\n ");
										EW = EW - 1;

									}
									else
									{
										printf("�� ��  ������ �����!\n ");

									}

								}
								else
								{
									per = rand() % 7;
									if (per > 2)
									{
										printf("�� ������ �����!!\n ");
										EW = EW - 1;

									}
									else
									{
										printf("�� ��  ������ �����!\n ");

									}
								}


							}
							else
							{
								printf("�� ��  ������!\n ");

							}
						}
					}
					else
						printf("�� �� ������ ���������� ������������ \n ");
				}
				break;
				case 3:
				{
					if (Sigmar_blessings > 0)
					{
						printf("�� �������� �������\n  ");
						force = force + 2;
						W = W + 1;
					}
					else
						printf("�� �� ������ ��������  �������\n  ");
				}
				break;
				default:printf("No correct ");
				}

				printf("��� ���� ����! \n ");
				per = rand() % 7;
				if (per >= 4)
				{
					printf("�� ��� ������ �����!\n  ");
					per = rand() % 7;
					if (SV > per)
					{
						W = W - 1;
						printf("� ��� �������� ������:\n  ");
						printf("%d ", W);
					}
					else printf("���� ����� �������� ����!\n  ");
				}
				else
				{
					printf("�� ��� �� ������ �����! \n ");
				}
			}
			if (W == 0)
			{
				printf("�� ���� ������� �������...");
				Menu(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
			}

		}

		void  LastBattle(int WS, int S, int SV, int medal, int fireresist, int Bible, int choose, int Beda_Bashka, int krek, int Sigmar_blessings, int& level)
		{
			if (Sigmar_blessings == 1)
			{

				printf("�����������, �� ������ ��� ������ ������ ������c������� ���, � ��������: ����� ���");
				S = S + 20;
			}
			printf("���� ������ ��������� ����������: ");
			printf("%d ", WS);
			printf("���� ����  ����������: ");
			printf("%d ", S);
			int W = 5;
			int EW = 6;
			int ES = 8;
			int EWS = 5;
			int per = 0;
			int force = 3;
			printf("��������� ������ ��������� ����������: ");
			printf("%d ", EWS);
			printf("���� ����  ����������: ");
			printf("%d ", ES);
			while (W > 0)
			{
				if (EW == 0)
				{
					printf("�� ��������!������ ����� ");
					WS = WS + 1;
					ThirdLevel(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
				}
				printf("������ �� ������ ������� ������ ���������.\n 1- ������� ������� ����(�� ������� ������� ������,�� ������� ������ ���)\n 2- ������� ������ ���� ( ��������� ���� ������������  �� 1) \n 3-�������� ������� �������(���� �� ������ ���-��� �����, ���)\n  ");
				printf("��� �����: ");
				scanf_s("%d", &choose);
				switch (choose)
				{
				case 1:
				{
					if (WS >= EWS)
					{
						per = rand() % 7;
						if (per > 2)
						{
							printf("�� ������ �� ���������� �������!\n ");

							if (S >= ES)
							{
								per = rand() % 7;
								if (per > 2)
								{
									printf("�� ������ ����� ����� � ����!!\n ");
									EW = EW - 1;

								}
								else
								{
									printf("�� ��  ������ �����!\n ");

								}

							}
							else
							{
								per = rand() % 7;
								if (per > 3)
								{
									printf("�� ������ ����� � ����!!\n ");
									EW = EW - 1;

								}
								else
								{
									printf("�� ��  ������ �����!\n ");

								}

							}

						}
						else
						{
							printf("�� ��  ������!\n ");

						}
					}
					else
					{
						per = rand() % 7;
						if (per >= 3)
						{
							printf("�� ������ �� ����������!\n ");

							if (S >= ES)
							{
								per = rand() % 7;
								if (per > 2)
								{
									printf("�� ������ �����, ������� �����!!\n ");
									EW = EW - 1;

								}
								else
								{
									printf("�� ��  ������ �����! \n");

								}

							}
							else
							{
								per = rand() % 7;
								if (per > 3)
								{
									printf("�� ������ �����!!\n ");
									EW = EW - 1;

								}
								else
								{
									printf("�� ��  ������ �����!\n ");

								}
							}


						}
						else
						{
							printf("�� ��  ������!\n ");

						}
					}
				}
				break;
				case 2:
				{
					if (force > 0)
					{
						force = force - 1;
						if (WS >= EWS)
						{
							per = rand() % 7;
							if (per > 2)
							{
								printf("�� ������!\n ");

								if (S >= ES)
								{
									per = rand() % 7;
									if (per > 2)
									{
										printf("�� ������ �����!!\n ");
										EW = EW - 1;

									}
									else
									{
										printf("�� ��  ������ �����!\n");

									}

								}
								else
								{
									per = rand() % 7;
									if (per > 3)
									{
										printf("�� ������ �����!!\n ");
										EW = EW - 1;

									}
									else
									{
										printf("�� ��  ������ �����!\n ");

									}

								}

							}
							else
							{
								printf("�� ��  ������!\n ");

							}
						}
						else
						{
							per = rand() % 7;
							if (per >= 3)
							{
								printf("�� ������!\n ");

								if (S > ES)
								{
									per = rand() % 7;
									if (per > 1)
									{
										printf("�� ������ �����!!\n ");
										EW = EW - 1;

									}
									else
									{
										printf("�� ��  ������ �����!\n ");

									}

								}
								else
								{
									per = rand() % 7;
									if (per > 2)
									{
										printf("�� ������ �����!!\n ");
										EW = EW - 1;

									}
									else
									{
										printf("�� ��  ������ �����!\n ");

									}
								}


							}
							else
							{
								printf("�� ��  ������!\n ");

							}
						}
					}
					else
						printf("�� �� ������ ���������� ������������ \n ");
				}
				break;
				case 3:
				{
					if (Sigmar_blessings > 0)
					{
						printf("�� �������� �������\n  ");
						force = force + 2;
						W = W + 1;
					}
					else
						printf("�� �� ������ ��������  �������\n  ");
				}
				break;
				default:printf("No correct ");
				}

				printf("��� ���� ����! \n ");
				per = rand() % 7;
				if (per >= 4)
				{
					printf("�� ��� ������ �����!\n  ");
					per = rand() % 7;
					if (SV > per)
					{
						W = W - 1;
						printf("� ��� �������� ������:\n  ");
						printf("%d ", W);
					}
					else printf("���� ����� �������� ����!\n  ");
				}
				else
				{
					printf("�� ��� �� ������ �����! \n ");
				}
			}
			if (W == 0)
			{
				printf("�� ���� ������� �������...");
				Menu(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
			}

		}
	
	void  ThirdLevel(int WS, int S, int SV, int medal, int fireresist, int Bible, int choose, int Beda_Bashka, int krek, int Sigmar_blessings, int& level)
		{
			
			printf("���� ������ ��������� ����������: ");
			printf("%d ", WS);
			printf("���� ����  ����������: ");
			printf("%d ", S);
			if (Sigmar_blessings == 1 && medal == 1)
			{
				printf("�� ������ ����� �������, � ����� ����� ������� � ������������� �������. ����� ���������� �������� ������������ ���� ������ ��� ����. ");
				Menu(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
			}

			if (Beda_Bashka > 2)
			{
				printf("�� ������� � ��� � ���� ��� ");
				if (Sigmar_blessings == 1)
				{
				
					printf("�� �������� ���� ��������� ���. �� ��������� ��� ���� � ����. ���? ��������? �� ��������� �� ���- ���� ������ �����.\n");
					Menu(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
				}
				Menu(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
			}
			printf("����� ��� ��������� ������� ���� ��������(�� ����� ����  ��� ��������, �� ������ ��� ��������� �������� �� ����). ��������� ����� �������.\n");
			printf("1-� ��������. �� ����. ��������.\n ");
			printf("2-�� �� �����,��� ����� �����-�� ����. � ��� ������.\n ");
			printf("3-��� ����� �� ���������. � ��� ������.\n ");
			printf("4-������! ��� ��� ����� ��� ������\n 5 - ����������\n 6 - ��������\n ");
			printf("��� �����: ");
			scanf_s("%d", &choose);
			switch (choose)
			{
			case 1:
			{
				
				if (S > 20)
				{
					printf("�� ���������� � ����� ������� � ��������, ��������� �� ��������� �������. ���������� ��� � ������ �����. ");
					EndlessBattle(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
				}
				printf("������ ������ ������������ ");
				ThirdLevel(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
			}
			break;
			case 2:
			{
				if (krek > 0)
				{
					printf_s("�� ������ �������, ������� �������� � ������������ �� ������ ����� � ���������.\n- �������� , �������, ����.");
					Menu(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
				}
				printf("� ��� ������������ ��������� ");
				ThirdLevel(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
			}
			break;
			case 3:
			{
				TEXTFIN();
			}
			break;
			case 4:
			{
				if (Bible > 0)
				{

					printf_s("�� ������ �������, ������� �������� � ������������ �� ������ ����� � ���������.\n- �������� , �������, ����.");
				}
			
			}
			break;
			case 5:
			{
				saveDES(WS, S, SV, medal, fireresist, Bible, choose, Beda_Bashka, krek, Sigmar_blessings, level);
				system("cls");
				FirstLevel(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
				break;
			}
			case 6:
			{
				printf_s("������� 1, ����� ��������� ��������� ��������, ��� 2, ����� ��������� ���������� �� �����\n");
				scanf_s("%i", &choose);
				switch (choose)
				{
				case 1:
					autoloadDES(WS, S, SV, medal, fireresist, Bible, choose, Beda_Bashka, krek, Sigmar_blessings, level);
					break;
				case 2:
					loadDES(WS, S, SV, medal, fireresist, Bible, choose, Beda_Bashka, krek, Sigmar_blessings, level);
					break;
				default: printf_s("������ ����������.\n");
				}
				break;
			}
			default:printf("No correct ");
			}
	}
		void  EndlessBattle(int WS, int S, int SV, int medal, int fireresist, int Bible, int choose, int Beda_Bashka, int krek, int Sigmar_blessings, int& level)
		{
			printf("�� �� �������� � ���� �����, �� ���������� ��� ����� ������ ������!: ");
		printf("���� ������ ��������� ����������: ");
		printf("%d ", WS);
		printf("���� ����  ����������: ");
		printf("%d ", S);
		int W = 5;
		int EW = 100;
		int ES = 8;
		int EWS = 5;
		int per = 0;
		int force = 3;
		printf("��������� ������ ��������� ����������: ");
		printf("%d ", EWS);
		printf("��������� ����  ����������: ");
		printf("%d ", ES);
		while (W > 0)
		{
			if (EW == 0)
			{
				printf("�� ��������!������ ����� ");
				WS = WS + 1;
				TwoLevel(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
			}
			system("cls");
			printf("������ �� ������ ������� ������ ���������.\n 1- ������� ������� ����(�� ������� ������� ������,�� ������� ������ ���)\n 2- ������� ������ ���� ( ��������� ���� ������������  �� 1) \n 3-�������� ������� �������(���� �� ������ ���-��� �����, ���)\n  ");
			printf("��� �����: ");
			scanf_s("%d", &choose);
			switch (choose)
			{
			case 1:
			{
				if (WS >= EWS)
				{
					per = rand() % 7;
					if (per > 2)
					{
						printf("�� ������ �� ���������� �������!\n ");

						if (S >= ES)
						{
							per = rand() % 7;
							if (per > 2)
							{
								printf("�� ����� �����!!\n ");
								EW = EW - 1;

							}
							else
							{
								printf("�� ��  ������ �����!\n ");

							}

						}
						else
						{
							per = rand() % 7;
							if (per > 3)
							{
								printf("�� ����� ��������!!\n ");
								EW = EW - 1;

							}
							else
							{
								printf("�� ��  ������ �����!\n ");

							}

						}

					}
					else
					{
						printf("�� ��  ������!\n ");

					}
				}
				else
				{
					per = rand() % 7;
					if (per >= 3)
					{
						printf("�� ������ �� ����������!\n ");

						if (S >= ES)
						{
							per = rand() % 7;
							if (per > 2)
							{
								printf("�� ����� �����!!\n ");
								EW = EW - 1;

							}
							else
							{
								printf("�� ��  ������ �����! \n");

							}

						}
						else
						{
							per = rand() % 7;
							if (per > 3)
							{
								printf("�� ����� �����!!\n ");
								EW = EW - 1;

							}
							else
							{
								printf("�� ��  ������ �����!\n ");

							}
						}


					}
					else
					{
						printf("�� ��  ������!\n ");

					}
				}
			}
			break;
			case 2:
			{
				if (force > 0)
				{
					force = force - 1;
					if (WS >= EWS)
					{
						per = rand() % 7;
						if (per > 2)
						{
							printf("�� ������!\n ");

							if (S >= ES)
							{
								per = rand() % 7;
								if (per > 2)
								{
									printf("�� ������ �����!!\n ");
									EW = EW - 1;

								}
								else
								{
									printf("�� ��  ������ �����!\n");

								}

							}
							else
							{
								per = rand() % 7;
								if (per > 3)
								{
									printf("�� ������ �����!!\n ");
									EW = EW - 1;

								}
								else
								{
									printf("�� ��  ������ �����!\n ");

								}

							}

						}
						else
						{
							printf("�� ��  ������!\n ");

						}
					}
					else
					{
						per = rand() % 7;
						if (per >= 3)
						{
							printf("�� ������!\n ");

							if (S > ES)
							{
								per = rand() % 7;
								if (per > 1)
								{
									printf("�� ������ �����!!\n ");
									EW = EW - 1;

								}
								else
								{
									printf("�� ��  ������ �����!\n ");

								}

							}
							else
							{
								per = rand() % 7;
								if (per > 2)
								{
									printf("�� ������ �����!!\n ");
									EW = EW - 1;

								}
								else
								{
									printf("�� ��  ������ �����!\n ");

								}
							}


						}
						else
						{
							printf("�� ��  ������!\n ");

						}
					}
				}
				else
					printf("�� �� ������ ���������� ������������ \n ");
			}
			break;
			case 3:
			{
				if (Sigmar_blessings > 0)
				{
					printf("�� �������� �������\n  ");
					force = force + 2;
					W = W + 1;
				}
				else
					printf("�� �� ������ ��������  �������\n  ");
			}
			break;
			default:printf("No correct ");
			}

			printf("��� ���� ����! \n ");
			per = rand() % 7;
			if (per >= 4)
			{
				printf("�� ��� ������ �����!\n  ");
				per = rand() % 7;
				if (SV > per)
				{
					W = W - 1;
					printf("� ��� �������� ������:\n  ");
					printf("%d ", W);
				}
				else printf("���� ����� �������� ����!\n  ");
			}
			else
			{
				printf("�� ��� �� ������ �����! \n ");
			}
		}
		if (W == 0)
		{
			printf("�� ���� ������� �������...");
			if (Sigmar_blessings > 0)
			{
				printf("��� ��������� �������� ����� � �� ����� � ����� ����. � ����� ���������. �� ��� �� ��� ����...");
				Menu(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
			}
			Menu(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
		}
		}
		void TEXTDEVIL()
		{
			FILE* ft;
			if (fopen_s(&ft, "DEVIL.txt", "rt") != 0)
			{
				printf("������!\n");
			}
			else
			{
				char cor[710] = { 0 };
				fread(cor, sizeof(char), 709, ft);
				fclose(ft);
				printf("%s\n", cor);
			}
		}
		void TEXTHITLER()
		{
			FILE* ft;
			if (fopen_s(&ft, "HITLER.txt", "rt") != 0)
			{
				printf("������!\n");
			}
			else
			{
				char cor[560] = { 0 };
				fread(cor, sizeof(char), 559, ft);
				fclose(ft);
				printf("%s\n", cor);
			}
		}
		void TEXTHITLER2()
		{
			FILE* ft;
			if (fopen_s(&ft, "HITLER2.txt", "rt") != 0)
			{
				printf("������!\n");
			}
			else
			{
				char cor[350] = { 0 };
				fread(cor, sizeof(char), 349, ft);
				fclose(ft);
				printf("%s\n", cor);
			}
		}
		void TEXTBENITO()
		{
			FILE* ft;
			if (fopen_s(&ft, "BENITO.txt", "rt") != 0)
			{
				printf("������!\n");
			}
			else
			{
				char cor[370] = { 0 };
				fread(cor, sizeof(char), 369, ft);
				fclose(ft);
				printf("%s\n", cor);
			}
		}
		void TEXTBENITO2()
		{
			FILE* ft;
			if (fopen_s(&ft, "BENITO2.txt", "rt") != 0)
			{
				printf("������!\n");
			}
			else
			{
				char cor[900] = { 0 };
				fread(cor, sizeof(char), 899, ft);
				fclose(ft);
				printf("%s\n", cor);
			}
		}
		void TEXTBORIS()
		{
			FILE* ft;
			if (fopen_s(&ft, "BORIS.txt", "rt") != 0)
			{
				printf("������!\n");
			}
			else
			{
				char cor[330] = { 0 };
				fread(cor, sizeof(char), 329, ft);
				fclose(ft);
				printf("%s\n", cor);
			}
		}
		void TEXTDARWIN()
		{
			FILE* ft;
			if (fopen_s(&ft, "DARWIN.txt", "rt") != 0)
			{
				printf("������!\n");
			}
			else
			{
				char cor[340] = { 0 };
				fread(cor, sizeof(char), 339, ft);
				fclose(ft);
				printf("%s\n", cor);
			}
		}
		void TEXTLENIN()
		{
			FILE* ft;
			if (fopen_s(&ft, "LENIN.txt", "rt") != 0)
			{
				printf("������!\n");
			}
			else
			{
				char cor[310] = { 0 };
				fread(cor, sizeof(char), 309, ft);
				fclose(ft);
				printf("%s\n", cor);
			}
		}
		void TEXTFIN()
		{
			FILE* ft;
			if (fopen_s(&ft, "FIN.txt", "rt") != 0)
			{
				printf("������!\n");
			}
			else
			{
				char cor[500] = { 0 };
				fread(cor, sizeof(char), 499, ft);
				fclose(ft);
				printf("%s\n", cor);
			}
		}
		void ARESGAME()
		{
			int drop[6][4] = { 0 }, sh[4] = { 1, 0, 0, 0 };
			int miss = 0, z = 0, dr, shield = 0, score = 0, input, sch = 0, prv = 0;
			do
			{
				if (z % 3 == 0)
				{
					dr = rand() % (3 - 0 + 1) + 0;
					drop[0][dr] = 1;
				}
				for (int y = 0; y < 5; y++)
				{
					for (int x = 0; x < 4; x++)
					{
						if (drop[x][y] == 1)
						{
							sch++;
						}
					}
				}
				prv = 0;
				int prv2 = 0;
				for (int y = 0; y < 5; y++)
				{
					if (prv2 == 0)
					{
						for (int x = 0; x < 4; x++)
						{
							if ((drop[y][x] == 1) && (sch == 1))
							{
								drop[y + 1][x] = drop[y][x];
								drop[y][x] = 0;
								prv2 = 1;
								break;
							}
							else
							{
								if (drop[y][x] == 1 && prv == 0)
								{
									drop[y + 1][x] = drop[y][x];
									drop[y][x] = 0;
									prv = 1;
								}
								else
								{
									if (drop[y][x] == 1 && prv == 1)
									{
										prv = 0;
									}
								}
							}
						}
					}
					else
						break;
				}
				printf_s("\n");
				for (int y = 0; y < 6; y++)
				{
					for (int x = 0; x < 4; x++)
					{
						if (x == 4 - 1)
						{
							printf_s("%d\n", drop[y][x]);
						}
						else printf_s("%d ", drop[y][x]);
					}
				}
				for (int i = 0; i < 4; i++)
				{
					printf_s("%d ", sh[i]);
				}
				printf_s("\n");
				printf_s("������� %d", miss);
				sh[shield] = 0;
				printf_s("\n");
				input = _getch();
				switch (input)
				{
				case 244:
				{
					if (shield == 0)
					{
						break;
					}
					shield--;
					break;
				}
				case 226:
				{
					if (shield == 3)
					{
						break;
					}
					shield++;
					break;
				}
				}
				sh[shield] = 1;
				system("cls");
				for (int x = 0; x < 4; x++)
				{
					if (drop[5][x] == 1)
					{
						if (shield == x)
						{
							drop[5][x] = 0;
							score++;
						}
						else
						{
							drop[5][x] = 0;
							miss++;
						}
					}
				}
				printf_s("\n");
				for (int y = 0; y < 6; y++)
				{
					for (int x = 0; x < 4; x++)
					{
						if (x == 4 - 1)
						{
							printf_s("%d\n", drop[y][x]);
						}
						else printf_s("%d ", drop[y][x]);
					}
				}
				for (int i = 0; i < 4; i++)
				{
					printf_s("%d ", sh[i]);
				}
				printf_s("\n");
				printf_s("������� %d\n", miss);
				if (miss > 2)
				{
					printf_s("�� �������. ���� ����������� ���.");
					system("pause");
					system("cls");
					ARESGAME();
				}
				system("cls");
				z++;
			} while (z < 90);
			printf_s("�������! ���� �������� � �������� � ��� ��� ���� ���. ");
			
		}