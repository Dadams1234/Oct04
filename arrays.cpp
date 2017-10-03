#include <iostream>
using namespace std;
const int SIZE = 3;
int main()
{
    /*Define an array of 3 integers */
    int age[SIZE];
    float amount;
    float total;

    // take input
    for(int i = 0; i < SIZE; i++)
    {
        cout <<"Enter your age: ";
        cin >> age[i];
    }

    for(int i = 0; i < SIZE; i++)
    {
        cout <<" age " << i << " is "<< age[i];

    }

    cout<<" Done!";
    return 0;
}