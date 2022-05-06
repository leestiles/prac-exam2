#include <iostream>

using namespace std;

extern int sumOfCube(int n);

int main() 
{
    int number = 5;

    cout << "Result: " << sumOfCube(number) << endl;


    return 0;
}