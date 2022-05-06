int sumOfCube(int n)
{
    if (n < 1)
    {
        return 0;
    }

    return (n*n*n) + sumOfCube(n-1);// + sumOfCube(n-2);
}