
#include <iostream>
#include <string>
using namespace std;

const int Size = 3;

// Task1
// Task1
// Task1
// Task1
void Task1()
{
    string City[Size]{ "Москва", "Санкт - Петербург", "Воронеж" };

    for (size_t i = 0; i < Size; i++)
    {
        if (i < Size - 1)
        {
            cout << City[i] << ", ";
        }
        else
        {
            cout << City[i] << "." << endl;
        }
    }
}
// Task2
// Task2
// Task2
// Task2
void Task2()
{
    float a = 27;
    float b = 27.8;
    float c = 41.7;

    float ABC[Size]{ 27, 27.8, 41.7 };

    for (int i = 0; i < Size; i++)
    {
        ABC[i] /= 5;
        ABC[i] = round(ABC[i] * 1) * 5;
        cout << ABC[i] << " " << endl;
    }

}

// Task3
// Task3
// Task3
// Task3
void Task3()
{
    int a = 0;
    cout << "Введите (ЧИСЛО) сколько у вас компьютеров: ";
    cin >> a;

    if (a % 100 >= 11 && a % 100 <= 14)
    {
        cout << a << " Компьтеров" << endl;

    }

    else if (a % 10 >= 5 && a % 10 <= 9 || a % 10 == 0)
    {
        cout << a << " Компьтеров" << endl;
    }

    else if (a % 10 >= 2 && a % 10 <= 4)
    {
        cout << a << " Компьтера" << endl;
    }

    else if (a % 10 == 1)
    {
        cout << a << " Компьтер" << endl;
    }

}
// Task4
// Task4
// Task4
// Task4
void Task4()
{
    int a;
    cout << "Введите число ";
    cin >> a;
    bool IsPrime = true;

    if (a == 1 || a == 0)
    {
        IsPrime = false;
    }
    else if (a == 2)
    {
        IsPrime = true;
    }
    else if (a % 2 == 0)
    {
        IsPrime = false;
    }
    else
    {
        for (int i = 3; i < a; i += 2)
        {
            if (a % i == 0)
            {
                IsPrime = false;
                break;
            }
        }
    }
    if (IsPrime)
    {
        cout << "Простое число: " << a << endl;
    }
    else
    {
        cout << "Други числа " << a << endl;
    }

}
// Task5
// Task5
// Task5
// Task5
void Task5()
{
    int Xize = 0;
    int Arr1[]{ 7, 17, 1, 3, 1, 17, 56, 3, 23 };
    int Arr2[]{ 56, 17, 17, 1, 23, 3, 23, 1, 3, 1 };
    int* Arr = new int[Xize];
    bool bor = false;
    Arr[0] = 13;

    for (auto i = 0; i < sizeof(Arr1) / sizeof(Arr1[0]); i++)
    {
        bor = false;

        for (auto j = 0; j < sizeof(Arr1) / sizeof(Arr1[0]); j++)
        {

            if (bor)
            {
                break;
            }


            if (i == j)
            {
                continue;
            }


            if (Arr1[i] == Arr1[j])
            {

                for (auto a = 0; a < sizeof(Arr2) / sizeof(Arr2[0]); a++)
                {
                    if (bor)
                    {
                        break;
                    }

                    if (Arr1[i] == Arr2[a])
                    {
                        for (auto b = 0; b < sizeof(Arr2) / sizeof(Arr2[0]); b++)
                        {
                            if (a == b)
                            {
                                continue;
                            }
                            if (Arr2[a] == Arr2[b])
                            {

                                for (size_t c = 0; c <= Xize; c++)
                                {
                                    if (Arr[c] == Arr2[a])
                                    {
                                        bor = false;
                                        break;
                                    }
                                    bor = true;

                                }
                                if (bor)
                                {
                                    Arr[Xize] = Arr2[a];
                                    cout << Arr[Xize] << " ";
                                    Xize++;
                                    break;
                                }
                            }
                        }
                    }
                }
            }

        }


    }
    cout << endl;
}
// Task6
// Task6
// Task6
// Task6
void Task6()
{
    int num;
    int sum = 0;
    cout << "Введите число которе хотите умножить: ";
    cin >> num;

    for (int i = 1; i <= num; i++)
    {

        if (i == 1)
        {
            cout << "    ";
            for (size_t x = 0; x < num; x++)
            {
                sum++;
                cout << sum << "   ";
            }
            cout << endl;
            sum = i;
            cout << sum << "   ";
            for (size_t c = 0; c < num; c++)
            {
                cout << sum << "   ";
                sum++;
            }
            cout << endl;
        }

        sum = i;

        for (size_t c = 1; c < num; c++)
        {
            if (sum == i)
            {

                cout << sum << "   " << sum;

            }
            sum += i;
            if (sum >= 10)
            {
                cout.width(2);
                cout << " " << sum;
            }
            else
            {

                cout << "   " << sum;
            }

        }
        cout << endl;

    }
}
// Main
// Main
// Main
// Main
void main()
{
    setlocale(LC_ALL, "ru");
    Task1();
    Task2();
    Task3();
    Task4();
    Task5();
    Task6();
}

