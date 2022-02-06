#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    vector<double> p; //создаем вектор в котором будем хранить параматры
    ifstream in("c:\\1.txt"); // окрываем файл для чтения
    if (in.is_open()) //проверяем открылся или нет файл
    {
        double s; //создаем переменную для чтения
        while (in >> s) ///читаем параметры пока не закончииться файл
        {
            p.push_back(s); //сохраняем параметр в вектор
        }
    }
    in.close();//закрываем файл
    sort(p.begin(), p.end()); //сортируем вектор
    for (double d : p)// выводим на дисплей
        cout << d << "\t";

    //если задание сделано, то следующие задание: вывести сумму всех элементов вектора (массива)
    //решение написать ниже данных комментариев

}