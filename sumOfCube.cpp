#include <cmath>

int sumOfCube(int n)
{
    if (n < 1)
    {
        return 0;
    }

    return pow(n,3) + sumOfCube(n-1);// + sumOfCube(n-2);
}