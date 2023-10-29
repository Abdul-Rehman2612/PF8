#include<iostream>
using namespace std;

string plant(string seed,int water,int fertilizers,int temperature);

main()
{
    string seed;
    int water,fertilizers,temperature;

    cout << "Enter flower type: ";
    cin >> seed;

    cout << "Enter the number of times plant watered: ";
    cin >> water;

    cout << "Enter the number of fertilizers: ";
    cin >> fertilizers;

    cout << "Enter the temperature: ";
    cin >> temperature;

    string plantsType = plant(seed,water,fertilizers,temperature);
    cout << plantsType;
}
string plant(string seed,int water,int fertilizers,int temperature)
{
    string plantsType="";
    for(int i=1;i<=water;i++)
    {
        for(int j=1;j<=water;j++)
        {
            plantsType=plantsType+"-";
        }
        if(temperature>=20 && temperature<=30)
        {
            for(int k=1;k<=fertilizers;k++)
            {
                plantsType=plantsType+seed;
            }
        }
        if((temperature<20 || temperature>30) && i==water)
        {
            plantsType=plantsType+seed;
        }
    }
    return plantsType;
}