#include<iostream>
using namespace std;

int primeNumCount(int Number);

main()
{
    int Number;

    cout << "Enter Number: ";
    cin >> Number;

    cout << primeNumCount(Number);
}
int primeNumCount(int Number)
{
    int multiplyPrime=1,primeNumber=0;
    int primeCount=0;
    while (primeNumber<=Number)
    {
        if(primeNumber<=2)
        {
            if(primeNumber==2)
            {
                primeCount=primeCount+1;
            }
            primeNumber=primeNumber+1;
        }
        else if(primeNumber>=3)
        {
            int j=3;
            for(int i=j;i<=primeNumber;i=i+2)
            {
                if(primeNumber%i==0 && primeNumber!=i)
                {    
                    primeNumber=primeNumber+2;
                    break;
                }
                else if(primeNumber%i==0 && primeNumber==i)
                {
                    primeCount=primeCount+1;
                    primeNumber=primeNumber+2;
                    break;
                }
            }
        }
    }
    return primeCount;
}