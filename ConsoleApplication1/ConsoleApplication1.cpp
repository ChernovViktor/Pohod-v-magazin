#include <iostream>

using namespace std;

int arr[5];



string Name;
int flag;
enum Magnit_products {M_chees = 100, M_milk=65, M_bread=34, M_crevet=450, M_riet=150, M_rice=40, M_losos=350, M_danon=45, M_kefir=68, M_chocolate=110};  
int Magnit_array[10] = { M_chees , M_milk , M_bread, M_crevet , M_riet , M_rice , M_losos , M_danon , M_kefir , M_chocolate};
string product_list_base[10] = { "Сыр ","Молоко ","Хлеб ","Креветки ","Риет ","Рис ","Упаковка лосося ","йогурт Danon","кефир","Шоколадка" };
// 1.сыр 2.молоко 3.хлеб 4.креветки 5.риет 6.рис 7.упаковка лосося 8.йогурт Danon 9.кефир 10.Шоколадка
enum Lenta_products { L_chees = 105, L_milk = 60, L_bread = 40, L_crevet = 400, L_riet = 100, L_rice = 55, L_losos = 370, L_danon = 35, L_kefir = 60, L_chocolate = 80 };
int Lenta_array[10] = { 105, 60, 40, 400, 100,  55, 370, 35,  60,  80 };
enum Peterochka_products { P_chees = 95, P_milk = 63, P_bread = 35, P_crevet = 250, P_riet = 140, P_rice = 45, P_losos = 350, P_danon = 42, P_kefir = 55, P_chocolate = 65 };
int Peterochka_array[10] = { 95, 63, 35, 250, 140, 45, 350, 42, 55, 65 };

int main();

void product_list_Magnit()
{
	setlocale(LC_ALL, "ru");
	cout << "\n1.сыр " << M_chees
		<< "\n2.молоко" << M_milk
		<< "\n3.хлеб"<< M_bread
		<<" \n4.креветки"<< M_crevet
		<<" \n5.риет"<<M_riet
		<<" \n6.рис"<<M_rice
		<<" \n7.упаковка лосося "<<M_losos
		<<"\n8.йогурт Danon "<<M_danon
		<<"\n9.кефир"<<M_kefir
		<<" \n10.Шоколадка"<<M_chocolate<<"\n";
}
void product_list_Lenta()
{
	setlocale(LC_ALL, "ru");
	cout << "\n1.сыр " << L_chees
		<< "\n2.молоко" << L_milk
		<< "\n3.хлеб" << L_bread
		<< " \n4.креветки" << L_crevet
		<< " \n5.риет" << L_riet
		<< " \n6.рис" << L_rice
		<< " \n7.упаковка лосося " << L_losos
		<< "\n8.йогурт Danon " << L_danon
		<< "\n9.кефир" << L_kefir
		<< " \n10.Шоколадка" << L_chocolate << "\n";
}
void product_list_Peterochka()
{
	setlocale(LC_ALL, "ru");
	cout << "\n1.сыр " << P_chees
		<< "\n2.молоко" << P_milk
		<< "\n3.хлеб" << P_bread
		<< " \n4.креветки" << P_crevet
		<< " \n5.риет" << P_riet
		<< " \n6.рис" << P_rice
		<< " \n7.упаковка лосося " << P_losos
		<< "\n8.йогурт Danon " << P_danon
		<< "\n9.кефир" << P_kefir
		<< " \n10.Шоколадка" << P_chocolate << "\n";
}
void korzina_Magnit(int arr[])
{
	for (int i = 0; i < 4; i++)
	{

		system("cls");
		cout << "Магнит\n\n";
		product_list_Magnit();
		cout << "Выберите " << i + 1 << "й продукт в корзину (всего 4)\n";
		cin >> arr[i];
	}
	cout << "Корзина набрана\n";
	system("pause");
}
void korzina_Lenta(int arr[])
{
	for (int i = 0; i < 4; i++)
	{

		system("cls");
		cout << "Лента\n\n";

		product_list_Lenta();
		cout << "Выберите " << i + 1 << "й продукт в корзину (всего 4)\n";
		cin >> arr[i];
	}
	cout << "Корзина набрана\n";
	system("pause");
}
void korzina_Peterochka(int arr[])
{
	for (int i = 0; i < 4; i++)
	{

		system("cls");
		cout << "Пятерочка\n\n";

		product_list_Peterochka();
		cout << "Выберите " << i + 1 << "й продукт в корзину (всего 4)\n";
		cin >> arr[i];
	}
	cout << "Корзина набрана\n";
		system("pause");
}

int check(int a, int sum)
{
	switch (a)
	{
	 case 1:
	 {
		 //Магнит

		 for (int i = 0; i < 4; i++)
		 {
			 sum += Magnit_array[i];
		 }
		 break;

	 }
	 case 2:
	 {
		 //Лента

		 for (int i = 0; i < 4; i++)
		 {
			 sum += Lenta_array[i];
		 }
		 break;

	 }
	 case 3:
	 {
		 //Пятерочка

		 for (int i = 0; i < 4; i++)
		 {
			 sum += Peterochka_array[i];
		 }
		 break;

	 }
	}
	return sum;
}

void show_check(int sum, int arr[4], string a, int choose)
{
	switch (choose)
	{
	 case 1:
	 {
		 cout << "   " << a << endl
			 << "**************\n"
			 << "" << product_list_base[arr[0]] << " " << Magnit_array[arr[0]] <<"\n"
			 << "" << product_list_base[arr[1]] << " " << Magnit_array[arr[1]] << "\n"
			 << "" << product_list_base[arr[2]] << " " << Magnit_array[arr[2]] << "\n"
			 << "" << product_list_base[arr[3]] << " " << Magnit_array[arr[3]] << "\n"
			 << "\n"
			 << "\n"
			 << "Всего" << sum<< "р." << "\n"
			 << "     Спасибо за покупку!\n"
			 << "**************\n";
		 break;
	 }
	 case 2:
	 {
		 cout << "   " << a << endl
			 << "**************\n"
			 << "" << product_list_base[arr[0]] << " " << Lenta_array[arr[0]] << "\n"
			 << "" << product_list_base[arr[1]] << " " << Lenta_array[arr[1]] << "\n"
			 << "" << product_list_base[arr[2]] << " " << Lenta_array[arr[2]] << "\n"
			 << "" << product_list_base[arr[3]] << " " << Lenta_array[arr[3]] << "\n"
			 << "\n"
			 << "\n"
			 << "Всего" << sum << "р." << "\n"
			 << "     Спасибо за покупку!\n"
			 << "**************\n";
		 break;
	 }
	 case 3:
	 {
		 cout << "   " << a << endl
			 << "**************\n"
			 << "" << product_list_base[arr[0]] << " " << Peterochka_array[arr[0]] << "\n"
			 << "" << product_list_base[arr[1]] << " " << Peterochka_array[arr[1]] << "\n"
			 << "" << product_list_base[arr[2]] << " " << Peterochka_array[arr[2]] << "\n"
			 << "" << product_list_base[arr[3]] << " " << Peterochka_array[arr[3]] << "\n"
			 << "\n"
			 << "\n"
			 << "Всего" << sum << "р." << "\n"
			 << "     Спасибо за покупку!\n"
			 << "**************\n";
		 break;
	 }
	}
}
void credit(int sum)
{
	double sum_end = double(sum) * 1.0474;

	cout << "\n\nкредит на 120 дней с 19% годовых\n";
	cout << "Ежемесячная плата составляет " << sum_end / 3 << " рублей в месяц\n";
}

void conec()
{
	int a = 0;
	cout << "1)Закрыть программу\n2)Сходить в магазин еще раз\n";
	cin >> a;
	switch (a)
	{
	case 1:
	{
		system("cls");
		cout << "До свидания!\n";
		system("pause");
		exit(0);
	}
	system("cls");
	main();
	}
}



int main()
{
	setlocale(LC_ALL, "ru");
	cout << "Выберите магазин\n1) Магнит\n2) Лента\n 3) Пятерочка\n";
	int a = 0;
	cin >> a;
	switch (a)
	{
	 case 1:
	 {
		 cout << "Магнит\n";
		 int arr[4] = {};
		 korzina_Magnit(arr);
		 string Name = "Магнит";
		 
		 int sum = 0;
		 sum = check(a, sum);
		 system("pause");
		 system("cls");
		 show_check(sum, arr, Name, a);
		 credit(sum);
		 system("pause");
		 conec();



	 }
	 case 2:
	 {
		 cout << "Лента\n";
		 int arr[4] = {};
		 korzina_Lenta(arr);
		 string Name = "Лента";


		 int sum = 0;
		 sum = check(a, sum);
		 show_check(sum, arr, Name, a);
		 credit(sum);
		 system("pause");
		 conec();

	 }
	 case 3:
	 {
		 cout << "Пятерочка\n";
		 int arr[4] = {};
		 korzina_Peterochka(arr);
		 string Name = "Пятерочка";


		 int sum = 0;
		 sum = check(a, sum);
		 show_check(sum, arr, Name, a);
		 credit(sum);
		 system("pause");
		 conec();

	     

	 }
	}
}