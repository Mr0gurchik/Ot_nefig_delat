#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    string chislo;
    cout << "Введите число: ";
    cin >> chislo;
    vector<int> IMBA; // Вектор это просто пушка деномический масив который сам следит за собой и подчишает память
    int summ = 0;

    stringstream stream(chislo);
    char simvol;

    while (stream >> simvol) 
    {
        int cifra = simvol - '0'; // Тут короче очень сложная тема. Здесь происходет конвертация смволов в цифры (в таблице ASCII 0 имеит значение 48 и если отнять это от значения переменной cifra то мы узнаем цифру к примеру 49(1)-48=1)
        IMBA.push_back(cifra); // это запихивает новое число в vector
    }

    for (int i : IMBA) // это короче приравнивает поочериде числа из vectora к переменной i
    {
        summ=summ + i;
    }
    
    cout << summ << endl;
    return 0;
}