int sumOfCube(int n)
{
    int num = 0;

    if (n < 1)
    {
        return num;
    }

    num = n * n * n;

    return sumOfCube(n-1) + num;
}