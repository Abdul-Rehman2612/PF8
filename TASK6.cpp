#include<iostream>
#include<cmath>
using namespace std;

int pileCube(double volume);

main()
{
    double volume;

    cout << "Enter the volume: ";
    cin >> volume;

    int result = pileCube(volume);
    cout << result;
}
int pileCube(double volume)
{
    double sum=0;
    int numberOfCalculations=0;
    for(int number=1;sum<=volume;number++)
    {
        sum=sum+pow(number,3);
        numberOfCalculations=numberOfCalculations+1;

        if(sum==volume)
        {
            break;
        }  
    }
    if(sum<=volume)
    {
        return numberOfCalculations;
    }
    else
    {
        return -1;
    }   
}