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
	printf("Выберете вариант из меню\n 1-Новая игра\n 2-Загрузить игру\n 3-Выход из игры\n ");
	printf("Ваш выбор: ");
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
		printf_s("Введите 1, чтобы загрузить последний чекпоинт, или 2, чтобы загрузить сохранение из файла\n");
		scanf_s("%i", &choose);
		switch (choose)
		{
		case 1:
			autoloadDES(WS, S, SV, medal, fireresist,  Bible, choose, Beda_Bashka,  krek,  Sigmar_blessings, level);
			break;
		case 2:
			loadDES(WS, S, SV, medal, fireresist, Bible, choose, Beda_Bashka, krek, Sigmar_blessings, level);
			break;
		default: printf_s("Ошибка.\n");
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
	printf("Ваш выбор: ");
	scanf_s("%d", &choose);
	switch (choose)
	{
	case 1:
	{
		printf_s("Дьявол удивленно поднимает бровь и махает на вас рукой. Вас хватают чертята и утаскивают на сковороду.");
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

	/*Здесь должна выводиться карта*/
	/*Вы оказались в настоящем предверии ада*/
	printf("Оглядевшись вокруг, вы нашли много интересных мест. которые стоит посетить.\n 1-Где-то вдали стоит огромная художественная школа.\n 2-Неподалеку мужик за столом с картой пытается что-то сделать.\n 3-На севере виднеется огромный лес.\n 4- На юге какой-то мужчина отстреливается от чертят\n  5- В центре виднеется огромный портал, по видимому ведущий еще глубже в ад.\n 6 - Сохранить игру\n 7 - Загрузить игру\n");
	printf("Ваш выбор: ");
	scanf_s("%d", &choose);

	switch (choose)
	{
	case 1:
	{
		if (SV == 6)
		{
			printf("Поздравляю с успехом, шкуру оставь себе, она мне не нужна, просто приятно видеть смерть врага. Итак, я знаю одного бога- Сигмара. Он тебе может помочь, ведь он также челвоек, как и ты. В любом случае был. Обратись к нему и он тебя услышит. ");
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
			printf_s("Залезая в печь Альберт сначала ничего не чувствует, а затем его обживает сильная боль. Он чувствует себя униженным и разбитым .");
			Beda_Bashka = Beda_Bashka + 1;
			printf("Ваше безумие: ");
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
			printf("Вы уже были у Муссолини.\n");
			FirstLevel(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
			break;
		}
		
	}
	break;
	case 3:
	{
		printf("Вы видите огромный темный лес.\n");
		Two(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
	}
	break;
	case 4:
	{
		if (S > 2)
		{
			printf("Вы уже здесь были.\n");
		}
		printf("Вы видите генерала в форме немецкой армии времен второй мировой войны. Он призывно махает вам рукой, застрелив еще одного чертенка.\n");
		printf("Подойдя, вы слышите слова \n - Помоги разогнать этих чертят, я смотрю тебе моя помощь не помешает.");
		Battle1(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);

	}
	break;
	case 5:
	{
		printf("Перед вами из алтаря появляется циклопических размеров голем, грозящий развороитить вас одним ударом..");
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
		printf_s("Введите 1, чтобы загрузить последний чекпоинт, или 2, чтобы загрузить сохранение из файла\n");
		scanf_s("%i", &choose);
		switch (choose)
		{
		case 1:
			autoloadDES(WS, S, SV, medal, fireresist, Bible, choose, Beda_Bashka, krek, Sigmar_blessings, level);
			break;
		case 2:
			loadDES(WS, S, SV, medal, fireresist, Bible, choose, Beda_Bashka, krek, Sigmar_blessings, level);
			break;
		default: printf_s("Ошибка сохранения.\n");
		}
		break;
	}

	default:printf("No correct ");


	}
}


	void  One(int WS, int S, int SV, int medal, int fireresist, int Bible, int choose, int Beda_Bashka, int krek, int Sigmar_blessings, int& level)
	{
		TEXTBENITO();
		printf("Ваш выбор: ");
		scanf_s("%d", &choose);
		switch (choose)
		{
		case 1:
		{
			printf("Альберт пожал руку и посмотрел на карту.");

		}
		break;
		case 2:
		{
			printf("Альберт непонимающе установился на него.");
		}

		break;
		default:printf("No correct ");
		}
		TEXTBENITO2();
		printf("Ваш выбор: ");
		scanf_s("%d", &choose);
		switch (choose)
		{
		case 1:
		{
			Beda_Bashka = Beda_Bashka + 1;
			printf("Ваше безумие: ");
			printf("%d ", Beda_Bashka);
			medal = 2;
			printf_s("- Ну как так- закричал Бенито- я тоже подумал что надо делать именно так , а получилась фигня какая-то! Ну почему почек почему ?????\nАльберт, понимая , что ничего хорошего ему тут не перепадёт осторожно вышел из штаба .");
			FirstLevel(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
			
		}
		break;
		case 2:
		{
			medal = 1;
			WS = WS + 1;
			printf("Ваше умение сражаться повысилось! Оно составляет: ");
			printf("%d ", WS);
			printf_s("Бенито улыбается и что-то пробурчав про великую победы разворачивается к Альберту.\n- Я поздравляю вас , великий полководец Италии и вручаю вам вот эту медаль! Теперь любой гражданин Италии проявит к вам уважение!\nА теперь иди и неси свет миру!\nАльберт самодовольно выходит из палатки и осматривается по сторонам.\n");
			FirstLevel(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
			
		}
		break;
		case 3:
		{
			printf_s("- Ну как так- закричал Бенито- я тоже подумал что надо делать именно так , а получилась фигня какая-то! Ну почему почек почему ?????\nАльберт, понимая , что ничего хорошего ему тут не перепадёт осторожно вышел из штаба .");
			Beda_Bashka = Beda_Bashka + 1;
			printf("Ваше безумие: ");
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
			printf("Вы уже победили ");
			FirstLevel(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
		}
		printf("Это настоящий адский лес, жуткие кривые деревья торчат со всех сторон. Смерть словно смотрит на вас. ");
		printf("1- Да ну, я туда не пойду. 2-Нужно преодолеть свой страх. Вперед. ");
		printf("Ваш выбор: ");
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
			printf("На вас напало чудовище-боевой пес ада! ");
			Battle(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
		}
		break;
		default:printf("No correct ");
		}
		
	}

	void  Battle(int WS, int S, int SV, int medal, int fireresist, int Bible, int choose, int Beda_Bashka, int krek, int Sigmar_blessings, int& level)
	{
		printf("Ваше умение сражаться повысилось! Оно составляет: ");
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
				printf("Вы победили!Тварь мертва... Вы снимете шкуру со врага. ");
				SV = 6;
				FirstLevel(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
			}
			printf("Сейчас вы можете выбрать способ сразиться.\n 1- Нанести обычный удар(не требует никаких усилий,но наносит меньше ран)\n 2- Нанести мощный удар ( расходует вашу выносливость  на 1) \n 3-Вознести молитву Сигмару(если вы знаете кто-это такой, хех)\n  ");
			printf("Ваш выбор: ");
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
						printf("Вы попали! ");
		
						if (S >= ES)
						{
							per = rand() % 7;
							if (per > 2)
							{
								printf("Вы ранили тварь!! ");
								EW = EW - 1;

							}
							else
							{
								printf("Вы не  ранили тварь! ");

							}

						}
						else
						{
							per = rand() % 7;
							if (per > 3)
							{
								printf("Вы ранили тварь!! ");
								EW = EW - 1;

							}
							else
							{
								printf("Вы не  ранили тварь! ");

							}

						}

					}
					else
					{
						printf("Вы не  попали! ");
						
					}
				}
				else
				{
					per = rand() % 7;
					if (per >= 3)
					{
						printf("Вы попали! ");

						if (S >= ES)
						{
							per = rand() % 7;
							if (per > 2)
							{
								printf("Вы ранили тварь!! ");
								EW = EW - 1;

							}
							else
							{
								printf("Вы не  ранили тварь! ");

							}

						}
						else
						{
							per = rand() % 7;
							if (per > 3)
							{
								printf("Вы ранили тварь!! ");
								EW = EW - 1;

							}
							else
							{
								printf("Вы не  ранили тварь! ");

							}
						}


					}
					else
					{
						printf("Вы не  попали! ");

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
							printf("Вы попали! ");

							if (S >= ES)
							{
								per = rand() % 7;
								if (per > 2)
								{
									printf("Вы ранили тварь!! ");
									EW = EW - 1;

								}
								else
								{
									printf("Вы не  ранили тварь! ");

								}

							}
							else
							{
								per = rand() % 7;
								if (per > 3)
								{
									printf("Вы ранили тварь!! ");
									EW = EW - 1;

								}
								else
								{
									printf("Вы не  ранили тварь! ");

								}

							}

						}
						else
						{
							printf("Вы не  попали! ");

						}
					}
					else
					{
						per = rand() % 7;
						if (per >= 3)
						{
							printf("Вы попали! ");

							if (S > ES)
							{
								per = rand() % 7;
								if (per > 1)
								{
									printf("Вы ранили тварь!! ");
									EW = EW - 1;

								}
								else
								{
									printf("Вы не  ранили тварь! ");

								}

							}
							else
							{
								per = rand() % 7;
								if (per > 2)
								{
									printf("Вы ранили тварь!! ");
									EW = EW - 1;

								}
								else
								{
									printf("Вы не  ранили тварь! ");

								}
							}


						}
						else
						{
							printf("Вы не  попали! ");

						}
					}
				}
				else
					printf("Вы не имеете достаточно выносливости  ");
			}
			break;
			case 3:
			{
				if (Sigmar_blessings > 0)
				{
					printf("Вы молитесь Сигмару  ");
					force = force + 2;
					W = W + 1;
				}
				else
					printf("Вы не можете молиться  Сигмару  ");
			}
			break;
			default:printf("No correct ");
			}
			
			printf("Вас бьет враг!  ");
			per = rand() % 7;
			if (per > 5)
			{
				printf("По вам попала тварь!  ");
				per = rand() % 7;
				if (SV >= per)
				{
					W = W - 1;
					printf("У вас осталось жизней:  ");
					printf("%d ", W);
				}
				else printf("Ваша броня отразила удар!  ");
			}
			else
			{
				printf("По вам не попала тварь!  ");
			}
		}
		if (W == 0)
		{
			printf("Вы пали смертью храбрых...");
			Menu(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
		}

	}
	void  Battle1(int WS, int S, int SV, int medal, int fireresist, int Bible, int choose, int Beda_Bashka, int krek, int Sigmar_blessings, int& level)
	{
		printf("Ваше умение сражаться составляет: ");
		printf("%d ", WS);
		printf("Ваша сила  составляет: ");
		printf("%d ",S);
		int W = 5;
		int EW = 2;
		int ES = 2;
		int EWS = 2;
		int per = 0;
		int force = 3;
		printf("Вражеское умение сражаться составляет: ");
		printf("%d ", EWS);
		printf("Ваша сила  составляет: ");
		printf("%d ", ES);
		while (W > 0)
		{
			if (EW == 0)
			{
				printf("Вы победили!Чертята мертвы. генерал благодарит вас и обучает фехтованию ");
				S = S+1;
				FirstLevel(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
			}
			printf("Сейчас вы можете выбрать способ сразиться.\n 1- Нанести обычный удар(не требует никаких усилий,но наносит меньше ран)\n 2- Нанести мощный удар ( расходует вашу выносливость  на 1) \n 3- Вознести молитву Сигмару(если вы знаете кто-это такой, хех)\n  ");
			printf("Ваш выбор: ");
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
						printf("Вы попали! ");

						if (S >= ES)
						{
							per = rand() % 7;
							if (per > 2)
							{
								printf("Вы ранили тварь!!\n  ");
								EW = EW - 1;

							}
							else
							{
								printf("Вы не  ранили тварь!\n  ");

							}

						}
						else
						{
							per = rand() % 7;
							if (per > 3)
							{
								printf("Вы ранили тварь!!\n  ");
								EW = EW - 1;

							}
							else
							{
								printf("Вы не  ранили тварь!\n  ");

							}

						}

					}
					else
					{
						printf("Вы не  попали!\n  ");

					}
				}
				else
				{
					per = rand() % 7;
					if (per >= 3)
					{
						printf("Вы попали!\n  ");

						if (S >= ES)
						{
							per = rand() % 7;
							if (per > 2)
							{
								printf("Вы ранили тварь!! \n ");
								EW = EW - 1;

							}
							else
							{
								printf("Вы не  ранили тварь!\n  ");

							}

						}
						else
						{
							per = rand() % 7;
							if (per > 3)
							{
								printf("Вы ранили тварь!!\n  ");
								EW = EW - 1;

							}
							else
							{
								printf("Вы не  ранили тварь!\n ");

							}
						}


					}
					else
					{
						printf("Вы не  попали!\n ");

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
							printf("Вы попали!\n ");

							if (S >= ES)
							{
								per = rand() % 7;
								if (per > 2)
								{
									printf("Вы ранили тварь!!\n ");
									EW = EW - 1;

								}
								else
								{
									printf("Вы не  ранили тварь!\n ");

								}

							}
							else
							{
								per = rand() % 7;
								if (per > 3)
								{
									printf("Вы ранили тварь!!\n ");
									EW = EW - 1;

								}
								else
								{
									printf("Вы не  ранили тварь! \n");

								}

							}

						}
						else
						{
							printf("Вы не  попали!\n ");

						}
					}
					else
					{
						per = rand() % 7;
						if (per >= 3)
						{
							printf("Вы попали!\n ");

							if (S > ES)
							{
								per = rand() % 7;
								if (per > 1)
								{
									printf("Вы ранили тварь!!\n ");
									EW = EW - 1;

								}
								else
								{
									printf("Вы не  ранили тварь! \n");

								}

							}
							else
							{
								per = rand() % 7;
								if (per > 2)
								{
									printf("Вы ранили тварь!!\n ");
									EW = EW - 1;

								}
								else
								{
									printf("Вы не  ранили тварь!\n ");

								}
							}


						}
						else
						{
							printf("Вы не  попали!\n ");

						}
					}
				}
				else
					printf("Вы не имеете достаточно выносливости \n ");
			}
			break;
			case 3:
			{
				if (Sigmar_blessings > 0)
				{
					printf("Вы молитесь Сигмару \n ");
					force = force + 2;
					W = W + 1;
				}
				else
					printf("Вы не можете молиться  Сигмару\n  ");
			}
			break;
			default:printf("No correct ");
			}

			printf("Вас бьет враг!  ");
			per = rand() % 7;
			if (per >= 5)
			{
				printf("По вам попала тварь!\n  ");
				per = rand() % 7;
				if (SV > per)
				{
					W = W - 1;
					printf("У вас осталось жизней: \n ");
					printf("%d ", W);
				}
				else printf("Ваша броня отразила удар!\n  ");
			}
			else
			{
				printf("По вам не попала тварь!\n  ");
			}
		}
		if (W == 0)
		{
			printf("Вы пали смертью храбрых...\n");
			Menu(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
		}

	}

	void  GrandBattle(int WS, int S, int SV, int medal, int fireresist, int Bible, int choose, int Beda_Bashka, int krek, int Sigmar_blessings, int& level)
	{
		printf("Ваше умение сражаться составляет: ");
		printf("%d ", WS);
		printf("Ваша сила  составляет: ");
		printf("%d ", S);
		int W = 5;
		int EW = 6;
		int ES = 10;
		int EWS = 2;
		int per = 0;
		int force = 3;
		printf("Вражеское умение сражаться составляет: ");
		printf("%d ", EWS);
		printf("Ваша сила  составляет: ");
		printf("%d ", ES);
		while (W > 0)
		{
			if (EW == 0)
			{
				printf("Вы победили! Огромный голем распадается на кусочки. ");
				TwoLevel(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
			}
			printf("Сейчас вы можете выбрать способ сразиться.\n 1- Нанести обычный удар(не требует никаких усилий,но наносит меньше ран)\n 2- Нанести мощный удар ( расходует вашу выносливость  на 1) \n 3- Вознести молитву Сигмару(если вы знаете кто-это такой, хех)\n  ");
			printf("Ваш выбор: ");
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
						printf("Вы попали!\n ");

						if (S >= ES)
						{
							per = rand() % 7;
							if (per > 2)
							{
								printf("Вы ранили тварь!!\n ");
								EW = EW - 1;

							}
							else
							{
								printf("Вы не  ранили тварь!\n ");

							}

						}
						else
						{
							per = rand() % 7;
							if (per > 3)
							{
								printf("Вы ранили тварь!!\n ");
								EW = EW - 1;

							}
							else
							{
								printf("Вы не  ранили тварь!\n ");

							}

						}

					}
					else
					{
						printf("Вы не  попали!\n ");

					}
				}
				else
				{
					per = rand() % 7;
					if (per >= 3)
					{
						printf("Вы попали!\n ");

						if (S >= ES)
						{
							per = rand() % 7;
							if (per > 2)
							{
								printf("Вы ранили тварь!!\n ");
								EW = EW - 1;

							}
							else
							{
								printf("Вы не  ранили тварь! \n");

							}

						}
						else
						{
							per = rand() % 7;
							if (per > 3)
							{
								printf("Вы ранили тварь!!\n ");
								EW = EW - 1;

							}
							else
							{
								printf("Вы не  ранили тварь!\n ");

							}
						}


					}
					else
					{
						printf("Вы не  попали!\n ");

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
							printf("Вы попали!\n ");

							if (S >= ES)
							{
								per = rand() % 7;
								if (per > 2)
								{
									printf("Вы ранили тварь!!\n ");
									EW = EW - 1;

								}
								else
								{
									printf("Вы не  ранили тварь!\n");

								}

							}
							else
							{
								per = rand() % 7;
								if (per > 3)
								{
									printf("Вы ранили тварь!!\n ");
									EW = EW - 1;

								}
								else
								{
									printf("Вы не  ранили тварь!\n ");

								}

							}

						}
						else
						{
							printf("Вы не  попали!\n ");

						}
					}
					else
					{
						per = rand() % 7;
						if (per >= 3)
						{
							printf("Вы попали!\n ");

							if (S > ES)
							{
								per = rand() % 7;
								if (per > 1)
								{
									printf("Вы ранили тварь!!\n ");
									EW = EW - 1;

								}
								else
								{
									printf("Вы не  ранили тварь!\n ");

								}

							}
							else
							{
								per = rand() % 7;
								if (per > 2)
								{
									printf("Вы ранили тварь!!\n ");
									EW = EW - 1;

								}
								else
								{
									printf("Вы не  ранили тварь!\n ");

								}
							}


						}
						else
						{
							printf("Вы не  попали!\n ");

						}
					}
				}
				else
					printf("Вы не имеете достаточно выносливости \n ");
			}
			break;
			case 3:
			{
				if (Sigmar_blessings > 0)
				{
					printf("Вы молитесь Сигмару\n  ");
					force = force + 2;
					W = W + 1;
				}
				else
					printf("Вы не можете молиться  Сигмару\n  ");
			}
			break;
			default:printf("No correct ");
			}

			printf("Вас бьет враг! \n ");
			per = rand() % 7;
			if (per >= 4)
			{
				printf("По вам попала тварь!\n  ");
				per = rand() % 7;
				if (SV > per)
				{
					W = W - 1;
					printf("У вас осталось жизней:\n  ");
					printf("%d ", W);
				}
				else printf("Ваша броня отразила удар!\n  ");
			}
			else
			{
				printf("По вам не попала тварь! \n ");
			}
		}
		if (W == 0)
		{
			printf("Вы пали смертью храбрых...");
			Menu(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
		}

	}

	void TwoLevel(int WS, int S, int SV, int medal, int fireresist, int Bible, int choose, int Beda_Bashka, int krek, int Sigmar_blessings, int& level)
	{
		/*Здесь должна выводиться вторая карта*/
		/*Вы оказались в настоящем  аду*/
		printf("Ваше умение сражаться составляет: ");
		printf("%d ", WS);
		printf("Ваша сила  составляет: ");
		printf("%d ", S);
		printf("Оглядевшись вокруг, вы снова нашли много интересных мест. которые стоит посетить.\n 1-Борис Ельцин пьет как не в себя.\n 2-Ученый пытаеться переубедить дьявола.\n 3-Промышленные катакомбы.\n 4-Ленин на броневике.\n 5- В центре виднеется огромный портал, по видимому ведущий еще глубже в ад.\n 6- Могучий бог Арес пытаеться словить капли воды.\n 7 - Сохранение\n 8 - Загрузка\n ");
		printf("Ваш выбор: ");
		scanf_s("%d", &choose);

		switch (choose)
		{
		case 1:
		{ 
			TEXTBORIS();
			printf_s("Ваш выбор:");
			scanf_s("%d", &choose);
			switch (choose)
			{
			case 1:
			{
				if (medal == 1) printf(" Вы ставите медаль\n");
				else
				{
					printf(" вы не моежете поставить медаль ввиду ее отсутствия\n");
					break;
				}
				printf_s("Альберт почти теряет сознание от дозы алкоголя, но подошедший сзади итальянец,\nвидя почетный знак распивает с Альбретом большую часть водки, позволяя вам выжить\nБорис даёт ему какую - то безделушку и падает на стол, начиная мирно храпеть.");
				Beda_Bashka = Beda_Bashka + 1;
				printf("Ваше безумие: ");
				printf("%d ", Beda_Bashka);
				TwoLevel(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
			}
			break;
			case 2:
			{
				/*(СДЕСЬ МИНИ_ИГРА) в итоге персонаж должен получить огнеупорность и +1 к S*/
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
				printf("Вы уже победили\n");
				TwoLevel(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
			}
			TEXTDARWIN();
			printf("Ваш выбор: ");
			scanf_s("%d", &choose);
			switch (choose)
			{
			case 1:
			{

				Beda_Bashka = Beda_Bashka + 1;
				printf("Ваше безумие: ");
				printf("%d ", Beda_Bashka);
				printf_s("Вы не смогли его убедить");
				TwoLevel(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
			}
			break;
			case 2:
			{

				Beda_Bashka = Beda_Bashka + 1;
				printf("Ваше безумие: ");
				printf("%d ", Beda_Bashka);
				printf_s("Вы не смогли его убедить");
				TwoLevel(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
			}
			break;
			case 3:
			{
				if (fireresist == 1)
				{
					printf_s("Вы, игнорируя исходящий от сковородки жар, стоите на ней. Чертенок в ужасе со всем соглашается.");
					printf_s("Поздравляю!- учёный, обрадованный, что чертенок, икая, закивал, протягивает Альберту книгу - вот возьми, это Библия.Может пригодится.\n");
					Bible = Bible + 1;
					SV = SV + 1;
					printf("Ваша защита теперь: ");
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
				printf("Вы уже победили\n");
				TwoLevel(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
			}
			printf("В темных и грязных уголках катакомб вы встречаете древнего и отвратительного упыря.\n");
			Battle2(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
		}
		break;
		case 4:
		{

			if (krek == 1)
			{
				printf("Вы уже победили\n");
				TwoLevel(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
			}


			TEXTLENIN();
			printf("Ваш выбор: ");
			scanf_s("%d", &choose);
			switch (choose)
			{
			case 1:
			{

				Game(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
				printf_s("- Спасибо! Бери вот этот крюк , он тебе пригодится. А я пойду их дьявола подавлю, совсем тут распоясались без коммунизма .");
				krek = 1;
				S = S + 1;
				printf("Ваша сила теперь: ");
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

			printf("Перед вами великий голем. 1- Идти,чтобы сразиться с ним. 2- Пока не атаковать. ");
			printf("Ваш выбор: ");
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
				printf("Вы уже победили\n");
				TwoLevel(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
			}
			printf("Вы видите Ареса, который сразу обращается к вам с просьбой. Друг, помог мне, пожалуйста. Вон с тех котлов падают капли на пол. Нужно их собрать. ");
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
			printf_s("Введите 1, чтобы загрузить последний чекпоинт, или 2, чтобы загрузить сохранение из файла\n");
			scanf_s("%i", &choose);
			switch (choose)
			{
			case 1:
				autoloadDES(WS, S, SV, medal, fireresist, Bible, choose, Beda_Bashka, krek, Sigmar_blessings, level);
				break;
			case 2:
				loadDES(WS, S, SV, medal, fireresist, Bible, choose, Beda_Bashka, krek, Sigmar_blessings, level);
				break;
			default: printf_s("Ошибка сохранения.\n");
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
				printf("Это число больше пяти");
			}
			else
			{
				printf("Это число меньше пяти");
			}
			if (c %2 ==0)
			{
				printf("Это число четное");
			}
			else
			{
				printf("Это число нечетное");
			}
			printf("Ваше предположение");
			scanf_s("%d", &k);
			if (k==c)
			{
				printf("Поздравляю, вы угадали");
				TwoLevel(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
			}
			else
			{
				printf("Поздравляю, вы не  угадали. Давайте еще раз.");
				Game(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);


			}
		}


		void  Battle2(int WS, int S, int SV, int medal, int fireresist, int Bible, int choose, int Beda_Bashka, int krek, int Sigmar_blessings, int& level)
		{


			printf("Ваше умение сражаться составляет: ");
			printf("%d ", WS);
			printf("Ваша сила  составляет: ");
			printf("%d ", S);
			int W = 5;
			int EW = 5;
			int ES = 5;
			int EWS = 3;
			int per = 0;
			int force = 3;
			printf("Вражеское умение сражаться составляет: ");
			printf("%d ", EWS);
			printf("Ваша сила  составляет: ");
			printf("%d ", ES);
			while (W > 0)
			{
				if (EW == 0)
				{
					printf("Вы победили!Монстр погиб ");
					WS = WS + 1;
					TwoLevel(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
				}
				printf("Сейчас вы можете выбрать способ сразиться.\n 1- Нанести обычный удар(не требует никаких усилий,но наносит меньше ран)\n 2- Нанести мощный удар ( расходует вашу выносливость  на 1) \n 3-Вознести молитву Сигмару(если вы знаете кто-это такой, хех)\n  ");
				printf("Ваш выбор: ");
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
							printf("Вы попали по конечности монстра!\n ");

							if (S >= ES)
							{
								per = rand() % 7;
								if (per > 2)
								{
									printf("Вы ранили тварь прямо в пузо!!\n ");
									EW = EW - 1;

								}
								else
								{
									printf("Вы не  ранили тварь!\n ");

								}

							}
							else
							{
								per = rand() % 7;
								if (per > 3)
								{
									printf("Вы ранили тварь в лицо!!\n ");
									EW = EW - 1;

								}
								else
								{
									printf("Вы не  ранили тварь!\n ");

								}

							}

						}
						else
						{
							printf("Вы не  попали!\n ");

						}
					}
					else
					{
						per = rand() % 7;
						if (per >= 3)
						{
							printf("Вы попали по конечности!\n ");

							if (S >= ES)
							{
								per = rand() % 7;
								if (per > 2)
								{
									printf("Вы ранили тварь, отрубив палец!!\n ");
									EW = EW - 1;

								}
								else
								{
									printf("Вы не  ранили тварь! \n");

								}

							}
							else
							{
								per = rand() % 7;
								if (per > 3)
								{
									printf("Вы ранили тварь!!\n ");
									EW = EW - 1;

								}
								else
								{
									printf("Вы не  ранили тварь!\n ");

								}
							}


						}
						else
						{
							printf("Вы не  попали!\n ");

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
								printf("Вы попали!\n ");

								if (S >= ES)
								{
									per = rand() % 7;
									if (per > 2)
									{
										printf("Вы ранили тварь!!\n ");
										EW = EW - 1;

									}
									else
									{
										printf("Вы не  ранили тварь!\n");

									}

								}
								else
								{
									per = rand() % 7;
									if (per > 3)
									{
										printf("Вы ранили тварь!!\n ");
										EW = EW - 1;

									}
									else
									{
										printf("Вы не  ранили тварь!\n ");

									}

								}

							}
							else
							{
								printf("Вы не  попали!\n ");

							}
						}
						else
						{
							per = rand() % 7;
							if (per >= 3)
							{
								printf("Вы попали!\n ");

								if (S > ES)
								{
									per = rand() % 7;
									if (per > 1)
									{
										printf("Вы ранили тварь!!\n ");
										EW = EW - 1;

									}
									else
									{
										printf("Вы не  ранили тварь!\n ");

									}

								}
								else
								{
									per = rand() % 7;
									if (per > 2)
									{
										printf("Вы ранили тварь!!\n ");
										EW = EW - 1;

									}
									else
									{
										printf("Вы не  ранили тварь!\n ");

									}
								}


							}
							else
							{
								printf("Вы не  попали!\n ");

							}
						}
					}
					else
						printf("Вы не имеете достаточно выносливости \n ");
				}
				break;
				case 3:
				{
					if (Sigmar_blessings > 0)
					{
						printf("Вы молитесь Сигмару\n  ");
						force = force + 2;
						W = W + 1;
					}
					else
						printf("Вы не можете молиться  Сигмару\n  ");
				}
				break;
				default:printf("No correct ");
				}

				printf("Вас бьет враг! \n ");
				per = rand() % 7;
				if (per >= 4)
				{
					printf("По вам попала тварь!\n  ");
					per = rand() % 7;
					if (SV > per)
					{
						W = W - 1;
						printf("У вас осталось жизней:\n  ");
						printf("%d ", W);
					}
					else printf("Ваша броня отразила удар!\n  ");
				}
				else
				{
					printf("По вам не попала тварь! \n ");
				}
			}
			if (W == 0)
			{
				printf("Вы пали смертью храбрых...");
				Menu(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
			}

		}

		void  LastBattle(int WS, int S, int SV, int medal, int fireresist, int Bible, int choose, int Beda_Bashka, int krek, int Sigmar_blessings, int& level)
		{
			if (Sigmar_blessings == 1)
			{

				printf("Ошарашенный, вы видите под своими ногами величеcтвенный меч, с надписью: Месть Его");
				S = S + 20;
			}
			printf("Ваше умение сражаться составляет: ");
			printf("%d ", WS);
			printf("Ваша сила  составляет: ");
			printf("%d ", S);
			int W = 5;
			int EW = 6;
			int ES = 8;
			int EWS = 5;
			int per = 0;
			int force = 3;
			printf("Вражеское умение сражаться составляет: ");
			printf("%d ", EWS);
			printf("Ваша сила  составляет: ");
			printf("%d ", ES);
			while (W > 0)
			{
				if (EW == 0)
				{
					printf("Вы победили!Монстр погиб ");
					WS = WS + 1;
					ThirdLevel(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
				}
				printf("Сейчас вы можете выбрать способ сразиться.\n 1- Нанести обычный удар(не требует никаких усилий,но наносит меньше ран)\n 2- Нанести мощный удар ( расходует вашу выносливость  на 1) \n 3-Вознести молитву Сигмару(если вы знаете кто-это такой, хех)\n  ");
				printf("Ваш выбор: ");
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
							printf("Вы попали по конечности монстра!\n ");

							if (S >= ES)
							{
								per = rand() % 7;
								if (per > 2)
								{
									printf("Вы ранили тварь прямо в пузо!!\n ");
									EW = EW - 1;

								}
								else
								{
									printf("Вы не  ранили тварь!\n ");

								}

							}
							else
							{
								per = rand() % 7;
								if (per > 3)
								{
									printf("Вы ранили тварь в лицо!!\n ");
									EW = EW - 1;

								}
								else
								{
									printf("Вы не  ранили тварь!\n ");

								}

							}

						}
						else
						{
							printf("Вы не  попали!\n ");

						}
					}
					else
					{
						per = rand() % 7;
						if (per >= 3)
						{
							printf("Вы попали по конечности!\n ");

							if (S >= ES)
							{
								per = rand() % 7;
								if (per > 2)
								{
									printf("Вы ранили тварь, отрубив палец!!\n ");
									EW = EW - 1;

								}
								else
								{
									printf("Вы не  ранили тварь! \n");

								}

							}
							else
							{
								per = rand() % 7;
								if (per > 3)
								{
									printf("Вы ранили тварь!!\n ");
									EW = EW - 1;

								}
								else
								{
									printf("Вы не  ранили тварь!\n ");

								}
							}


						}
						else
						{
							printf("Вы не  попали!\n ");

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
								printf("Вы попали!\n ");

								if (S >= ES)
								{
									per = rand() % 7;
									if (per > 2)
									{
										printf("Вы ранили тварь!!\n ");
										EW = EW - 1;

									}
									else
									{
										printf("Вы не  ранили тварь!\n");

									}

								}
								else
								{
									per = rand() % 7;
									if (per > 3)
									{
										printf("Вы ранили тварь!!\n ");
										EW = EW - 1;

									}
									else
									{
										printf("Вы не  ранили тварь!\n ");

									}

								}

							}
							else
							{
								printf("Вы не  попали!\n ");

							}
						}
						else
						{
							per = rand() % 7;
							if (per >= 3)
							{
								printf("Вы попали!\n ");

								if (S > ES)
								{
									per = rand() % 7;
									if (per > 1)
									{
										printf("Вы ранили тварь!!\n ");
										EW = EW - 1;

									}
									else
									{
										printf("Вы не  ранили тварь!\n ");

									}

								}
								else
								{
									per = rand() % 7;
									if (per > 2)
									{
										printf("Вы ранили тварь!!\n ");
										EW = EW - 1;

									}
									else
									{
										printf("Вы не  ранили тварь!\n ");

									}
								}


							}
							else
							{
								printf("Вы не  попали!\n ");

							}
						}
					}
					else
						printf("Вы не имеете достаточно выносливости \n ");
				}
				break;
				case 3:
				{
					if (Sigmar_blessings > 0)
					{
						printf("Вы молитесь Сигмару\n  ");
						force = force + 2;
						W = W + 1;
					}
					else
						printf("Вы не можете молиться  Сигмару\n  ");
				}
				break;
				default:printf("No correct ");
				}

				printf("Вас бьет враг! \n ");
				per = rand() % 7;
				if (per >= 4)
				{
					printf("По вам попала тварь!\n  ");
					per = rand() % 7;
					if (SV > per)
					{
						W = W - 1;
						printf("У вас осталось жизней:\n  ");
						printf("%d ", W);
					}
					else printf("Ваша броня отразила удар!\n  ");
				}
				else
				{
					printf("По вам не попала тварь! \n ");
				}
			}
			if (W == 0)
			{
				printf("Вы пали смертью храбрых...");
				Menu(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
			}

		}
	
	void  ThirdLevel(int WS, int S, int SV, int medal, int fireresist, int Bible, int choose, int Beda_Bashka, int krek, int Sigmar_blessings, int& level)
		{
			
			printf("Ваше умение сражаться составляет: ");
			printf("%d ", WS);
			printf("Ваша сила  составляет: ");
			printf("%d ", S);
			if (Sigmar_blessings == 1 && medal == 1)
			{
				printf("Вы видите яркую вспышку, а затем черти сгорают в очистительном пламени. Некая безмолвная сущность божественной мощи подает вам руку. ");
				Menu(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
			}

			if (Beda_Bashka > 2)
			{
				printf("Вы сходите с ума в этом аду ");
				if (Sigmar_blessings == 1)
				{
				
					printf("Но пылающий свет окутывает вас. Вы понимаете что живы и даже. Что? Маршутка? Вы выбрались из ада- ваша первая мысль.\n");
					Menu(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
				}
				Menu(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
			}
			printf("Далее вам предстоит выбрать свою концовку(до этого были  три концовки, но сейчас вам предстоит выбирать из этих). Некоторые будут закрыты.\n");
			printf("1-Я уничтожу. Их всех. Навсегда.\n ");
			printf("2-Да ну нафиг,там труба какая-то есть. В нее полезу.\n ");
			printf("3-Вон Ленин на броневике. Я ему помогу.\n ");
			printf("4-Алтарь! Как раз место для Библии\n 5 - Сохранение\n 6 - Загрузка\n ");
			printf("Ваш выбор: ");
			scanf_s("%d", &choose);
			switch (choose)
			{
			case 1:
			{
				
				if (S > 20)
				{
					printf("Вы врываетесь в толпы демонов и монстров, уничтожая их найденным клинком. Привествую вас в вечной войне. ");
					EndlessBattle(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
				}
				printf("Вашего умения недостаточно ");
				ThirdLevel(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
			}
			break;
			case 2:
			{
				if (krek > 0)
				{
					printf_s("Вы видите вспышку, теряете сознание и просыпаетесь от пинков бабки в маршрутке.\n- Конечная , вставай, олух.");
					Menu(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
				}
				printf("У вас недостаточно предметов ");
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

					printf_s("Вы видите вспышку, теряете сознание и просыпаетесь от пинков бабки в маршрутке.\n- Конечная , вставай, олух.");
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
				printf_s("Введите 1, чтобы загрузить последний чекпоинт, или 2, чтобы загрузить сохранение из файла\n");
				scanf_s("%i", &choose);
				switch (choose)
				{
				case 1:
					autoloadDES(WS, S, SV, medal, fireresist, Bible, choose, Beda_Bashka, krek, Sigmar_blessings, level);
					break;
				case 2:
					loadDES(WS, S, SV, medal, fireresist, Bible, choose, Beda_Bashka, krek, Sigmar_blessings, level);
					break;
				default: printf_s("Ошибка сохранения.\n");
				}
				break;
			}
			default:printf("No correct ");
			}
	}
		void  EndlessBattle(int WS, int S, int SV, int medal, int fireresist, int Bible, int choose, int Beda_Bashka, int krek, int Sigmar_blessings, int& level)
		{
			printf("Вы не победите в этой битве, но уничтожите как можно больше врагов!: ");
		printf("Ваше умение сражаться составляет: ");
		printf("%d ", WS);
		printf("Ваша сила  составляет: ");
		printf("%d ", S);
		int W = 5;
		int EW = 100;
		int ES = 8;
		int EWS = 5;
		int per = 0;
		int force = 3;
		printf("Вражеское умение сражаться составляет: ");
		printf("%d ", EWS);
		printf("Вражеская сила  составляет: ");
		printf("%d ", ES);
		while (W > 0)
		{
			if (EW == 0)
			{
				printf("Вы победили!Монстр погиб ");
				WS = WS + 1;
				TwoLevel(WS, S, SV, Bible, medal, fireresist, choose, Beda_Bashka, krek, Sigmar_blessings, level);
			}
			system("cls");
			printf("Сейчас вы можете выбрать способ сразиться.\n 1- Нанести обычный удар(не требует никаких усилий,но наносит меньше ран)\n 2- Нанести мощный удар ( расходует вашу выносливость  на 1) \n 3-Вознести молитву Сигмару(если вы знаете кто-это такой, хех)\n  ");
			printf("Ваш выбор: ");
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
						printf("Вы попали по конечности монстра!\n ");

						if (S >= ES)
						{
							per = rand() % 7;
							if (per > 2)
							{
								printf("Вы убили черта!!\n ");
								EW = EW - 1;

							}
							else
							{
								printf("Вы не  ранили тварь!\n ");

							}

						}
						else
						{
							per = rand() % 7;
							if (per > 3)
							{
								printf("Вы убили чертенка!!\n ");
								EW = EW - 1;

							}
							else
							{
								printf("Вы не  ранили тварь!\n ");

							}

						}

					}
					else
					{
						printf("Вы не  попали!\n ");

					}
				}
				else
				{
					per = rand() % 7;
					if (per >= 3)
					{
						printf("Вы попали по конечности!\n ");

						if (S >= ES)
						{
							per = rand() % 7;
							if (per > 2)
							{
								printf("Вы убили черта!!\n ");
								EW = EW - 1;

							}
							else
							{
								printf("Вы не  ранили тварь! \n");

							}

						}
						else
						{
							per = rand() % 7;
							if (per > 3)
							{
								printf("Вы убили черта!!\n ");
								EW = EW - 1;

							}
							else
							{
								printf("Вы не  ранили тварь!\n ");

							}
						}


					}
					else
					{
						printf("Вы не  попали!\n ");

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
							printf("Вы попали!\n ");

							if (S >= ES)
							{
								per = rand() % 7;
								if (per > 2)
								{
									printf("Вы ранили тварь!!\n ");
									EW = EW - 1;

								}
								else
								{
									printf("Вы не  ранили тварь!\n");

								}

							}
							else
							{
								per = rand() % 7;
								if (per > 3)
								{
									printf("Вы ранили тварь!!\n ");
									EW = EW - 1;

								}
								else
								{
									printf("Вы не  ранили тварь!\n ");

								}

							}

						}
						else
						{
							printf("Вы не  попали!\n ");

						}
					}
					else
					{
						per = rand() % 7;
						if (per >= 3)
						{
							printf("Вы попали!\n ");

							if (S > ES)
							{
								per = rand() % 7;
								if (per > 1)
								{
									printf("Вы ранили тварь!!\n ");
									EW = EW - 1;

								}
								else
								{
									printf("Вы не  ранили тварь!\n ");

								}

							}
							else
							{
								per = rand() % 7;
								if (per > 2)
								{
									printf("Вы ранили тварь!!\n ");
									EW = EW - 1;

								}
								else
								{
									printf("Вы не  ранили тварь!\n ");

								}
							}


						}
						else
						{
							printf("Вы не  попали!\n ");

						}
					}
				}
				else
					printf("Вы не имеете достаточно выносливости \n ");
			}
			break;
			case 3:
			{
				if (Sigmar_blessings > 0)
				{
					printf("Вы молитесь Сигмару\n  ");
					force = force + 2;
					W = W + 1;
				}
				else
					printf("Вы не можете молиться  Сигмару\n  ");
			}
			break;
			default:printf("No correct ");
			}

			printf("Вас бьет враг! \n ");
			per = rand() % 7;
			if (per >= 4)
			{
				printf("По вам попала тварь!\n  ");
				per = rand() % 7;
				if (SV > per)
				{
					W = W - 1;
					printf("У вас осталось жизней:\n  ");
					printf("%d ", W);
				}
				else printf("Ваша броня отразила удар!\n  ");
			}
			else
			{
				printf("По вам не попала тварь! \n ");
			}
		}
		if (W == 0)
		{
			printf("Вы пали смертью храбрых...");
			if (Sigmar_blessings > 0)
			{
				printf("Вас окутывает пыляющий полог и вы снова в своем мире. В своей маршрутке. Но как же это было...");
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
				printf("Ошибка!\n");
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
				printf("Ошибка!\n");
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
				printf("Ошибка!\n");
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
				printf("Ошибка!\n");
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
				printf("Ошибка!\n");
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
				printf("Ошибка!\n");
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
				printf("Ошибка!\n");
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
				printf("Ошибка!\n");
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
				printf("Ошибка!\n");
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
				printf_s("Промахи %d", miss);
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
				printf_s("Промахи %d\n", miss);
				if (miss > 2)
				{
					printf_s("Не повезло. Надо попробовать ещё.");
					system("pause");
					system("cls");
					ARESGAME();
				}
				system("cls");
				z++;
			} while (z < 90);
			printf_s("Отлично! Арес подходит к Альберту и даёт ему свой щит. ");
			
		}