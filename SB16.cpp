#include <iostream>
#include <ctime> //Библиотека для получения данных о текущей дате

using namespace std;

int main()
{
   time_t now = time(0);

   std::cout << "Today - " << time(0) <<"\n";

    const int N = 2;
    int summ = 0;
    int array[N][N] = { {0, 1}, {2, 3} };
    int Today = 27; // не понимаю как получить время предположим сегодня 27е число

    //Первая задача просто выводим все данные
    std::cout <<"task 1 output of array data " << "\n";
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            std::cout << array[i][j];
        }
        std::cout << "\n";
    }
    //Вторая задача выводим сумму элементов строки 0 или 1
    std::cout << "task 2 output of summ element -" << "\n";
        for (int j = 0; j < N; j++)
        {
           summ = summ + array[Today % N][j];
        }
        std::cout << summ << "\n";
 }