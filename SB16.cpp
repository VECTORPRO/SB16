#include <Windows.h>
#include <iostream>

using namespace std;

int correctDay()
{
    SYSTEMTIME st;
    GetLocalTime(&st);

    return st.wDay;
}

int main()
{
    const int N = 2;
    int summ = 0;
    int array[N][N] = { {3, 5}, {4, 6} };
    int Today = 27; // не понимаю как получить время предположим сегодня 27е число

    //Первая задача просто выводим все данные
    std::cout <<"task 1 output of array data " << "\n";
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            std::cout << array[i][j] << "  ";
        }
        std::cout << "\n";
    }
    //Вторая задача выводим сумму элементов строки 0 или 1
    std::cout << "task 2 output of summ element -" << "\n";
        for (int j = 0; j < N; j++)
        {
           summ = summ + array[(correctDay()) % N][j];
        }
        std::cout << "Summa Elementov : -" << summ << "\n";
        std::cout << "\n";
        std::cout << "Today : -" << correctDay() << "\n";
 }