#include <iostream>

using namespace std;

int sum(int number1, int number2)
{
    int result;
    result = number1 + number2;
    return (result);
}

int sub(int number1, int number2)
{
    int result;
    result = number1 - number2;
    return (result);
}

int mul(int number1, int number2)
{
    int result;
    result = number1 * number2;
    return (result);
}

int divi(int number1, int number2)
{
    int result;
    result = number1 / number2;
    return (result);
}

int calculator()
{
    int number1;
    int number2;
    cout << "숫자1을 입력하세요 :)" << endl;
    cin >> number1;
    if (number1 == 'N')
    {
        exit;
    }
    cout << "숫자 \t" << number1 << "\t을 입력하셨습니다." << endl;
    cout << "숫자2를 입력하세요 :)" << endl;
    cin >> number2;
    if (number1 == 'N')
    {
        exit;
    }
    cout << "숫자 \t" << number2 << "\t을 입력하셨습니다." << endl;
    // cout << number1 << number2 << endl;
    cout << "--------------------------" << endl;
    cout << number1 << " + " << number2 << " =  " << sum(number1, number2) << endl;
    cout << number1 << " - " << number2 << " =  " << sub(number1, number2) << endl;
    cout << number1 << " * " << number2 << " =  " << mul(number1, number2) << endl;
    cout << number1 << " / " << number2 << " =  " << divi(number1, number2) << endl;
    cout << "--------------------------" << endl;
}