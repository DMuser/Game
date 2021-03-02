#include <iostream>



void Menu(int Beda_Bashka, int medal, int fireresist, int Bible, int choose, int krek);


void First(int Beda_Bashka, int medal, int fireresist, int Bible, int choose, int krek);

void Second(int Beda_Bashka, int medal, int fireresist, int Bible, int choose, int krek);


int Third(int Beda_Bashka, int medal, int fireresist, int Bible, int choose, int krek);


void Fourht(int Beda_Bashka, int medal, int fireresist, int Bible, int choose, int krek);


void Fifth(int Beda_Bashka, int medal, int fireresist, int Bible, int choose, int krek);


void Six(int Beda_Bashka, int medal, int fireresist, int Bible, int choose, int krek);


void Seven(int Beda_Bashka, int medal, int fireresist, int Bible, int choose, int krek);
void Game(int Beda_Bashka, int medal, int fireresist, int Bible, int choose, int krek);
void Eight(int Beda_Bashka, int medal, int fireresist, int Bible, int choose, int krek);
void Ningt(int Beda_Bashka, int medal, int fireresist, int Bible, int choose, int krek);
void Ten(int Beda_Bashka, int medal, int fireresist, int Bible, int choose, int krek);
void Eleven(int Beda_Bashka, int medal, int fireresist, int Bible, int choose, int krek);
void Sekret(int Beda_Bashka, int medal, int fireresist, int Bible, int choose, int krek);

int main()
{
	setlocale(LC_ALL, "Rus");
	int Beda_Bashka = 0;
	int medal = 0;
	int fireresist = 0;
	int Bible = 0;
	int choose = 0;
	int Rezult_you = 0;
	int Rezult_Hit = 0;
	int krek = 0;
	Menu(Beda_Bashka, medal, fireresist, Bible, choose, krek);
	First(Beda_Bashka, medal, fireresist, Bible, choose, krek);
	Second(Beda_Bashka, medal, fireresist, Bible, choose, krek);
	Third(Beda_Bashka, medal, fireresist, Bible, choose, krek);
	printf("%d ", Beda_Bashka);
	Fourht(Beda_Bashka, medal, fireresist, Bible, choose, krek);
	Fifth(Beda_Bashka, medal, fireresist, Bible, choose, krek);
	Six(Beda_Bashka, medal, fireresist, Bible, choose, krek);
	Seven(Beda_Bashka, medal, fireresist, Bible, choose, krek);
	Game(Beda_Bashka, medal, fireresist, Bible, choose, krek);
	Seven(Beda_Bashka, medal, fireresist, Bible, choose, krek);
	Eight(Beda_Bashka, medal, fireresist, Bible, choose, krek);
	Ningt(Beda_Bashka, medal, fireresist, Bible, choose, krek);
	Ten(Beda_Bashka, medal, fireresist, Bible, choose, krek);
	Eleven(Beda_Bashka, medal, fireresist, Bible, choose, krek);
	Sekret(Beda_Bashka, medal, fireresist, Bible, choose, krek);

}

void Menu(int Beda_Bashka, int medal, int fireresist, int Bible, int choose, int krek)
{
	printf("Выберете вариант из меню\n 1-Новая игра\n 2-Загрузить игру\n 3-Выход из игры ");
	scanf_s("%d", &choose);
	
	switch (choose)
	{
	case 1:
	{
		printf("\n");
		int Beda_Bashka = 0;
		int medal = 0;
		int fireresist = 0;
		int Bible = 0;
		int choose = 0;
		First(Beda_Bashka, medal, fireresist, Bible, choose, krek);

	}
	break;
	case 2:
	{

	}
	break;
	case 3:
	{
		exit;
	}
	break;
	default:printf("No correct ");


	}
}

void First(int Beda_Bashka, int medal, int fireresist, int Bible, int choose, int krek)
{
	/*Альберт зашёл в маршрутку и сел на кресло вытянув ноги. Он откровенно устал после этой конференции и ему очень хотелось спать.
 "Может прикорнуть чуток?"
 Улыбнувшись своим мыслям он закрыл глаза , поразительно быстро погрузившись в мир снов.
 Открыв глаза Альберт , как бы помягче сказать , впал в шок. Вокруг него в небо уходили потоки пламени, а перед ним стоял высокий человек в черном костюме.
 Стряхнув невидимые пылинки с костюма тот бросил
 - Ну, привет.
 - Ты кто?
 Ошалело оглянувшись спросил Альберт.
 - Я? Я дьявол. Ты в аду.*/
	printf("1 ");
	scanf_s("%d", &choose);
	
	switch (choose)
	{
	case 1:
	{
		printf("2 ");
		printf("/*Что? Как? Я же никогда не грешил за свою жизнь!!!!!Дьявол удивленно поднимает бровь и махает на вас рукой. Вас хватают чертятата и утаскивают на сковроду.*/");

		system("pause");
		Menu(Beda_Bashka, medal, fireresist, Bible, choose, krek);
	}
	break;
	case 2:
	{
		printf("3 ");
		printf("/*Хах, давно я ждал этого момента . Если встречу Борьку, скажу что водки в России стало только больше.- А ты шутник. Ну что же, иди гуляй. Тебе здесь ещё лет так- он открыл откуда-то взявшийся блокнот- пять тысяч быть */");
		Second(Beda_Bashka, medal, fireresist, Bible, choose, krek);
	}
	break;
	default:printf("No correct ");


	}
}

void Second(int Beda_Bashka, int medal, int fireresist, int Bible, int choose, int krek)
{
	printf("2 ");
	/*Удивлённо Альберт осмотрелся вокруг. Повсюду носились какие-то люди, добавляя дрова под огромные котлы, раздавались крики и вопли. Но его внимание привлекло одно место- над небольшой площадкой, похожей на военный штаб, развивался итальянский флаг.
Подойдя к этому месту Альберт увидел среднего роста человека, который наклонился над картой Греции . Он сразу отреагировал на вошедшего, подняв на него глаза.
- О, новый человек в нашем проклятом царстве ! Смотрю ты сюда надолго попал. Как насчёт помочь мне в небольшом деле? Я Бенито.- он протянул Альберту руку*/
	scanf_s("%d", &choose);
	switch (choose)
	{
	case 1:
	{
		/*Пожать руку и посмотреть на карту.*/
		Third(Beda_Bashka, medal, fireresist, Bible, choose, krek);


	}
	break;
	case 2:
	{
		/*Непонимающе установится на него. */
		Third(Beda_Bashka, medal, fireresist, Bible, choose, krek);
	}

	break;
	default:printf("No correct ");
	}
}

 int Third(int Beda_Bashka, int medal, int fireresist, int Bible, int choose, int krek)
{
	printf("3 ");
	/*- Ну так вот- торопливо начал он - смотри это карта Греции. Вот это силы и итальянской армии армии - нам нужно взять эту проклятую страну! Как думаешь что делать ?*/
	scanf_s("%d", &choose);
	switch (choose)
	{
	case 1:
	{
		/*Танки должны ударить в горы и смять оборону Греков. Авиация пускай экономит топливо и только прикрывает наши силы. Пехота в атаку на всех фронтах! Немцы нам не нужны , без них обойдёмся.*/
		Beda_Bashka = Beda_Bashka + 1;
		printf("%d ", Beda_Bashka);
		/*- Ну как так- закричал Бенито- я тоже подумал что надо делать именно так , а получилась фигня какая-то! Ну почему почек почему ?????
Альберт, понимая , что ничего хорошего ему тут не перепадёт осторожно вышел из штаба .*/
		Fourht(Beda_Bashka, medal, fireresist, Bible, choose, krek);
	}
	break;
	case 2:
	{
		medal = medal + 1;
		/*Скоцентрировать удар в наиболее равнинной местности при поддержке авиации и танков. Артиллерия должна продолжать обстрел по врагу и переносить свой обстрел вглубь вражеской обороны. Необходимо провести несколько высадок на территорию противника при поддержке кораблей. Также привлечь авиацию и подразделения германских союзников . */
	/*Бенито улыбается и что-то пробурчав про великую победы разворачивается к Альберту.
- Я поздравляю вас , великий полководец Италии и вручаю вам вот эту медаль ! Теперь любой гражданин Италии проявит к вам уважение !
А теперь иди и неси свет миру !
Альберт самодовольно выходит из палатки и осматривается по сторонам .*/
		Fourht(Beda_Bashka, medal, fireresist, Bible, choose, krek);
	}
	break;
	case 3:
	{

		Beda_Bashka = Beda_Bashka + 1;
		/*Тактика неважна !!!! Итальянские солдаты смогут завоевать весь мир имею одну винтовку на дивизию и один патрон на батальон. Массовой атакой сомнем врага и войдем в Афины.*/
	/*- Ну как так- закричал Бенито- я тоже подумал что надо делать именно так , а получилась фигня какая-то! Ну почему почек почему ?????
Альберт, понимая , что ничего хорошего ему тут не перепадёт осторожно вышел из штаба .*/
		Fourht(Beda_Bashka, medal, fireresist, Bible, choose, krek);
	}

	default:printf("No correct ");
	}
	return (Beda_Bashka);
}

void Fourht(int Beda_Bashka, int medal, int fireresist, int Bible, int choose, int krek)
{
	printf("4 ");
	/*Снова осматриваясь он видит большое здание художественной академии. На входе широкий дядька в дорогой одежде кричит на худого парня , держащего в руках картину.
- Твои картины только в бомжовках вещать надо !
Обруганный человек отходит от дверей задания и идёт к вам.
- О привет ! Я художник , австрийский , а ты... А ты тоже сюда попал . Я вот не понимаю за что . И думаю ты со мной согласен. Смотри - он указывает пальцем назад - там печка . Лезь в печь и вернёшься на землю!*/
	scanf_s("%d", &choose);
	switch (choose)
	{
	case 1:
	{
		/*1) Залезая в печь Альберт сначала ничего не чувствует, а затем его обживает сильная боль. Он чувствует себя униженными и разбитым .*/
		Beda_Bashka = Beda_Bashka + 1;
		printf("%d ", Beda_Bashka);
		Fifth(Beda_Bashka, medal, fireresist, Bible, choose, krek);


	}
	break;
	case 2:
	{
		/*Ой, спасибо, я настолько познал этот мир что мне не нужны все эти ваши печки, свечки, речки.*/
	/*Но вот что хотел бы сказать - ты отличный художник , продолжай рисовать!*/
		Fifth(Beda_Bashka, medal, fireresist, Bible, choose, krek);
	}
	break;


	default:printf("No correct ");
	}
}

void Fifth(int Beda_Bashka, int medal, int fireresist, int Bible, int choose, int krek)
{
	printf("5 ");
	/*Вам и вправду нравятся мои картины? Огромное спасибо! Я очень люблю рисовать и даже неплохой архитектор. Пройдем со мной я покажу свои достижения .
Пройдя пару метров с ним Альберт увидел мужика , сидящего за развившимся на несколько кусков столом . Он опрокидывал стопку за стопкой в себя и повторял что он - мухожук.*/
	scanf_s("%d", &choose);
	switch (choose)
	{
	case 1:
	{

		/*Подойти к человеку предварительно извинившись .*/
		Six(Beda_Bashka, medal, fireresist, Bible, choose, krek);
	}
	break;
	case 2:
	{
		/*Продолжить идти*/
		Seven(Beda_Bashka, medal, fireresist, Bible, choose, krek);
	}
	break;


	default:printf("No correct ");
	}

}


void Six(int Beda_Bashka, int medal, int fireresist, int Bible, int choose, int krek)
{
	printf("6 ");
	/*Радостный мужчина поднимается и пропитым голосом говорит
- Здравствуй, я Борис...- он икнул- хочу с тобой выпить! Если перепьешь меня то я тебе дам ... Огонька дам. Станешь огнеупорным. Но только ты что-то поставить должен*/
	scanf_s("%d", &choose);
	switch (choose)
	{
	case 1:
	{

		/*поставить итальянскую медаль*/
		if (medal == 1) printf(" Вы ставите медаль\n");
		else
		{
			printf(" вы не моежете поставить медаль ввиду ее отсутствия\n");
			break;
		}
		/*Альберт почти теряет сознание от дозы алкоголя, но подошедший сзади итальянец , видя почетный знак распивает с Альбретом большую часть водки, позволяя вам выжить
Борис даёт ему какую-то безделушку и падает на стол, начиная мирно храпеть.*/
		Seven(Beda_Bashka, medal, fireresist, Bible, choose, krek);
	}
	break;
	case 2:
	{
		/*Извинившись уйти.*/
		Seven(Beda_Bashka, medal, fireresist, Bible, choose, krek);
	}
	break;


	default:printf("No correct ");
	}

}

void Seven(int Beda_Bashka, int medal, int fireresist, int Bible, int choose, int krek)
{
	printf("7 ");
	/*Догнав художника вы находите его в большой палатке , за столом.
- А давай сыграем в кости ? Если победишь, скажу где выход !*/
	scanf_s("%d", &choose);
	switch (choose)
	{
	case 1:
	{

		/*Сыграть*/
		

	}
	break;
	case 2:
	{
		/*Ты же уже говорил где выход. Не будет ли второй таким же ?*/
	/*Нееее, не будет . Давай не бойся.*/
		

	}
	break;


	default:printf("No correct ");
	}
}

void Game(int Beda_Bashka, int medal, int fireresist, int Bible, int choose, int krek)
{

	choose = rand() % 6;
	krek = rand() % 6;
	if (choose == krek)
	{
		printf(" % d", choose);
		printf(" % d", krek);
		krek = 0;
		(" Ничья\n");
		Game( Beda_Bashka, medal, fireresist, Bible, choose, krek);
	}
	else
	{
		if (choose > krek)
		{
			
			printf(" % d", choose);
			printf(" % d", krek);
			krek = 0;
			(" Победа! Поздравляю.Ты меня переиграл.Есть идея насчёт твоего спасения отсюда - ты можешь полезть в ту печку, которую я предлагал, но для того чтобы вылезти на поверхность нужен крюк.Найди его и приходи на то место.\n");
			
			Eight(Beda_Bashka, medal, fireresist, Bible, choose, krek);

		}
		else
		{
			printf(" % d", choose);
			printf(" % d", krek);
			krek = 0;
			(" Поражение\n");
			Beda_Bashka = Beda_Bashka + 1;
			Eight(Beda_Bashka, medal, fireresist, Bible, choose, krek);
		}
		
		
	}

}

void Eight(int Beda_Bashka, int medal, int fireresist, int Bible, int choose,int krek)
{
	printf("8 ");
	/*Отойдя от палатки и снова осмотревшись вы находите катящегося на броневике человека, который во весь голос говорит речь перед группой чертей, распгуивая их и разгоняя
- О товарищ! Помоги мне! Эти гады не дают мне проехать на красную площадь! Разгони их!*/

	/*1) Показав свой итальянский медальон, Альберт заставил часть их разбежаться .
2) Напугать их запахом перегара после тоста с Борисом. */
	scanf_s("%d", &choose);
	switch (choose)
	{
	case 1:
	{
		if (medal == 1) 
		{ 
			printf(" Вы показываете медаль\n");
			/*- Спасибо тебе ! Бери вот этот крюк , он тебе пригодится. А я пойду их дьявола подавлю, совсем тут распоясались без коммунизма .*/
			krek = 1;
	}
		else
		{
			printf(" Вы не моежете показать медаль\n");
			Eight(Beda_Bashka, medal, fireresist, Bible, choose, krek);
		}
		

	}
	break;
	case 2:
	{
		/*- Спасибо тебе ! Бери вот этот крюк , он тебе пригодится. А я пойду их дьявола подавлю, совсем тут распоясались без коммунизма .*/
		krek = 1;
	}
	break;


	default:printf("No correct ");
	}
}

void Ningt(int Beda_Bashka, int medal, int fireresist, int Bible, int choose, int krek)
{
	/*1) Пойти к печке.
	2) Двигаться за ним, посмотреть что будет .*/
	if (Beda_Bashka > 3)
	{
		printf(" хАХАХАХХАХАххахаахмхам-говорит Альберт- Я кажись Чайник.\n");
		Menu(Beda_Bashka, medal, fireresist, Bible, choose, krek);
	}
	scanf_s("%d", &choose);
	switch (choose)
	{
	case 1:
	{
		/*Используя все нажитые предметы вы лезете по трубе вверх, к далёкому свету .
Вы видите вспышку, теряете сознание и просыпаетесь от пинков бабки в маршрутке.
- Конечная , вставай, олух*/
		Menu(Beda_Bashka, medal, fireresist, Bible, choose, krek);

	}
	break;
	case 2:
	{
		Ten(Beda_Bashka, medal, fireresist, Bible, choose, krek);
	}
	break;


	default:printf("No correct ");
	}


}

void Ten(int Beda_Bashka, int medal, int fireresist, int Bible, int choose, int krek)
{
	if (Beda_Bashka > 3)
	{
		printf(" хАХАХАХХАХАххахаахмхам-говорит Альберт- Я кажись Чайник.\n");
		Menu(Beda_Bashka, medal, fireresist, Bible, choose, krek);
	}
	/*Идя за Лениным Алббрет встречает ученого, который доказывает какому - то чертенку, что он произошёл от обезьяны.
		- Парень, привет !- кричит тот - мне нужна твоя помощь!Обьясни ему что он произошёл от обезьяны!*/
	/*1) Закричать на чертенка- Ты мать-перемать обезьяна
2) Медленно и вдумчиво , разбавляя фактами объяснить.
3) Обдать его запахом перегара и сказать
- Браток, ну ты понимаешь, мы обезьяны , да?*/
	scanf_s("%d", &choose);
	switch (choose)
	{
	case 1:
	{

		Beda_Bashka = Beda_Bashka + 1;
	}
	break;
	case 2:
	{
		Beda_Bashka = Beda_Bashka + 1;
	}
	break;
	case 3:
	{

	/*Поздравляю!- учёный, обрадованный, что чертенок, икая, закивал протягивает Альберту книгу - вот возьми, это Библия.Может пригодится.*/
		Bible = Bible + 1;
	}
	break;
	default:printf("No correct ");
	}



}

void Eleven(int Beda_Bashka, int medal, int fireresist, int Bible, int choose, int krek)
{
	if (Beda_Bashka > 3)
	{
		printf(" хАХАХАХХАХАххахаахмхам-говорит Альберт- Я кажись Чайник.\n");
		Menu(Beda_Bashka, medal, fireresist, Bible, choose, krek);
	}
	/*Пройдя за Лениным вы видите как тот на бронемашине гоняет дьявола там, где вы впервые оказались.
Вы видите большие ворота , где есть проем для книги.
1)Положить туда Библию .
2) Идти к печке.
3) Вместе с Лениным погонять дьявола.*/
	scanf_s("%d", &choose);
	switch (choose)
	{
	case 1:
	{

		/*Вы видите вспышку, теряете сознание и просыпаетесь от пинков бабки в маршрутке.
- Конечная , вставай, олух.*/
		Menu(Beda_Bashka, medal, fireresist, Bible, choose, krek);
	}
	break;
	case 2:
	{

		/*Вы видите вспышку, теряете сознание и просыпаетесь от пинков бабки в маршрутке.
- Конечная , вставай, олух.*/
		Menu(Beda_Bashka, medal, fireresist, Bible, choose, krek);
	}
	break;
	case 3:
	{

		
		/*Вы подбегаете к дьяволу и хватаете его за руку . Ленин наконец-то догоняет того и придавливает ему ноги.
- Ну что скотина ! Думал ты один такой умный ! Быстро меня на землю вернул , гад. А то я тебе все твое царство на колени поставлю я как империю Российскую .
- Ладно ладно.
- И моего товарища не забудь .*/
		Sekret(Beda_Bashka, medal, fireresist, Bible, choose, krek);
	}
	break;
	default:printf("No correct ");
	}

}

void Sekret(int Beda_Bashka, int medal, int fireresist, int Bible, int choose, int krek)
{

	/*Альберт видит вспышку и просыпаетсяна броневике.
- Товарищ! -Окликает Альберта Ленин.-Вставай в ряд нашей красной армии ! Я смотрю много белых развелось. Пора им показать !*/

}