#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    srand(time(0));
    const int number = 5; 
    int list[number]; // массив
    int first_number; //3 числа положительных
    int second_number; //2 отрицательных + положительное

    for (int i = 0; i < number; i++)
    {
        list[i] = rand()%21 + (-10); // числа от -10 до 10 для удобства проверки
    }
    

    //------------Вывод массива------------//
    sort(list, list + number);
    for (int i = 0; i < number; i++)
    {
        cout << list[i] << "\n";
    }
    

    //-----------Присваиваем значения и выводим наибольшее-------------//
    for (int i = 0; i < number; i++)
    {
        first_number = list[i] * list[i-1] * list[i-2];
        second_number = list[0] * list[1] * list[i];
    }

    if (first_number > second_number)
    {
        cout << first_number;
    }
    else
    {
        cout << second_number;
    }

    return 0;
}