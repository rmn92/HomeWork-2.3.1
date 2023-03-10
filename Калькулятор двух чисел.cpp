#include <iostream>

using namespace std;

class Calculator
{
public:
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
        if (num1 != 0)
        {
            this->num1 = num1;
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
            this->num2 = num2;
            return true;
        }
        else
        {
            return false;
        }
    }
private:
    double num1 = 1;
    double num2 = 1;
};

int main()
{
    setlocale(LC_ALL,"rus");

    Calculator calc;
    double num1 = 1; 
    double num2 = 1;

    while (true)
    {
        do
        {
            if (!calc.set_num1(num1))
            {
                cout << "Неверный ввод!" << endl;
            }
            cout << "Введите num1: ";
            cin >> num1;

        } while (!calc.set_num1(num1));
        
        do
        {
            if (!calc.set_num1(num2))
            {
                cout << "Неверный ввод!" << endl;
            }
            cout << "Введите num2: ";
            cin >> num2;

        } while (!calc.set_num1(num2));

        cout << "num1 + num2 = " << calc.add() << endl;
        cout << "num1 * num2 = " << calc.multiply() << endl;
        cout << "num1 - num2 = " << calc.subtract_1_2() << endl;
        cout << "num2 - num1 = " << calc.subtract_2_1() << endl;
        cout << "num1 / num2 = " << calc.divide_1_2() << endl;
        cout << "num2 / num1 = " << calc.divide_2_1() << endl;
    }
}
