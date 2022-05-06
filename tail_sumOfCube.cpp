#include <cmath>

int sumOfCube(int n)
{
    int num = 0;

    if (n < 1)
    {
        return num;
    }

    num = pow(n, 3);

    return sumOfCube(n-1) + num;
}