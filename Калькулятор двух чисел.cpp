#include <iostream>

using namespace std;

class Calculator
{
public:
    double num1 = -1;
    double num2 = -1;

    double add()
    {
        return num1 + num2;
    }
    double multiply()
    {
        return num1 * num2;
    }
    double subtract_1_2()
    {
        return num1 - num2;
    }
    double subtract_2_1()
    {
        return num2 - num1;
    }
    double divide_1_2()
    {
        return num1 / num2;
    }
    double divide_2_1()
    {
        return num2 / num1;
    }
    bool set_num1(double num1)
    {
        if (this -> num1 != 0)
        {
            return true;
        }
        else
        {
            return false;
        }

    }
    bool set_num2(double num2)
    {
        if (this -> num2 != 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    setlocale(LC_ALL,"rus");

    Calculator calc;

    while (true)
    {
        do
        {
            if (calc.num1 == 0)
            {
                cout << "Неверный ввод!" << endl;
            }
            cout << "Введите num1: ";
            cin >> calc.num1;

        } while (!calc.set_num1(calc.num1));

        do
        {
            if (calc.num2 == 0)
            {
                cout << "Неверный ввод!" << endl;
            }
            cout << "Введите num2: ";
            cin >> calc.num2;

        } while (!calc.set_num1(calc.num2));

        cout << "num1 + num2 = " << calc.add() << endl;
        cout << "num1 * num2 = " << calc.multiply() << endl;
        cout << "num1 - num2 = " << calc.subtract_1_2() << endl;
        cout << "num2 - num1 = " << calc.subtract_2_1() << endl;
        cout << "num1 / num2 = " << calc.divide_1_2() << endl;
        cout << "num2 / num1 = " << calc.divide_2_1() << endl;
    }
}
