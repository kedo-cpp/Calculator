#include <windows.h>
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");

    const string NEW_LINE = "\n";

    int numberOne, numberTwo;
    string action;
    int result;

    cout << "Простой канкулятор на С++ с сохранением истории в \'info.txt\'" << endl;
    ofstream out("info.txt", ios::app);

    if (!out.is_open())
    {
        std::cout << "Не удалось открыть файл!" << std::endl;
        return 1;
    }

    cout << "Введите первое число: ";
    cin >> numberOne;
    
    cout << "Выберите арефметическое действие (+, -, /, *): ";
    cin >> action;

    cout << "Введите второе число: ";
    cin >> numberTwo;

    if (action == "+")
    {
        cout << "Результат сложения: " << numberOne + numberTwo;
        out << "Решение \"+\" >> " << numberOne << "+" << numberTwo << "=" << result << NEW_LINE;
    }

    else if (action == "-")
    {
        cout << "Результат сложения: " << numberOne - numberTwo;
        out << "Решение \"-\" >> " << numberOne << "-" << numberTwo << NEW_LINE;
    }

    else if (action == "/")
    {
        cout << "Результат сложения: " << numberOne / numberTwo;
        out << "Решение \"/\" >> " << numberOne << "/" << numberTwo << NEW_LINE;
    }

    else if (action == "*")
    {
        cout << "Результат сложения: " << numberOne * numberTwo;
        out << "Решение \"*\" >> " << numberOne << "*" << numberTwo << NEW_LINE;
    }

    else
    {
        cout << "Недопустимая операция!" << std::endl;
        out.close();
        return 1;
    }

    out.close();
    return 0;
}