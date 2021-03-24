#include <iostream>

using namespace std;

class BaseMath
{
public:
    BaseMath(){}
    bool isEvent(int number)
    {
        if (n % 2 == 0) return true;
        return false;
    }
    int factorial(int n)
    {
        int res = 1;
        for (int i = 1; i <= n; i++)
            res *= i;
        return res;
    }
};

class AdvancedMath: public BaseMath
{
public:
    AdvancedMath() {}
    double estimateEulerNumber(int loops)
    {
        double s = 1;
        for (int i = 1; i <= loops; i++){
            s += 1.0 / factorial(i);
        }
        return s;
    }
};
int main()
{
    AdvancedMath k;
    cout << k.estimateEulerNumber(30) << "\n";
    cout << k.factorial(30);
    return 0;
}
