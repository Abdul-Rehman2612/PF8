#include<iostream>
using namespace std;

string howBad(int number);

main()
{
    int number;

    cout << "Enter a number: ";
    cin >> number;
    
    string result = howBad(number);
    cout << result;
}
string howBad(int number)
{
    string result="";
    int binaryCount=0;
    int sum=0;
    int product=1;
    for(number;number>=1;number=number/2)
    {
        int a=number%2;
        if(a==0)
        {
            product=product*10;
        }
        if(a==1)
        {
            binaryCount=binaryCount+a*product;
            product=product*10;
        }
    }
    for(binaryCount;binaryCount>0;binaryCount=binaryCount/10)
    {
        int b=binaryCount%10;
        sum=sum+b;
    }
    if(sum%2==0)
    {
        result=result+"Evil";
    }
    else
    {
        result=result+"Odius";
    }
    if(sum==2 || sum==3)
    {
        result=result+", Pernicious";
    }
    else
    {
        for(int i=3;i<=sum;i=i+2)
        {
            if(sum%i==0 && sum==i)
            {
                result=result+", Pernicious";
            }
        }
    }
    return result;
}