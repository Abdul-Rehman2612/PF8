#include<iostream>
using namespace std;

int damageCalculate(string yourType,string opponentType,int yourAttack,int opponentDefense);

main()
{
    string yourType,opponentType;
    int yourAttack,opponentDefense;

    cout << "Enter your Type: " ;
    cin >> yourType;

    cout << "Enter opponent Type: ";
    cin >> opponentType;

    cout << "Enter your attack power: ";
    cin >> yourAttack;

    cout << "Enter opponent defense: ";
    cin >> opponentDefense;

    int power = damageCalculate(yourType,opponentType,yourAttack,opponentDefense);
    cout << power;
}
int damageCalculate(string yourType,string opponentType,int yourAttack,int opponentDefense)
{
    int damage;
    if(yourType=="fire")
    {
        if(opponentType=="grass")
        {
            damage=50*(yourAttack/opponentDefense)*2;
        }
        else if(opponentType=="water" || opponentType=="fire")
        {
            damage=50*(yourAttack/opponentDefense)*0.5;
        }
        else if(opponentType=="electric")
        {
            damage=50*(yourAttack/opponentDefense);
        }
        else
        {
            damage=0;
        }
    }
    else if(yourType=="grass")
    {
        if(opponentType=="fire" || opponentType=="grass")
        {
            damage=50*(yourAttack/opponentDefense)*0.5;
        }
        else if(opponentType=="water")
        {
            damage=50*(yourAttack/opponentDefense)*2;
        }
        else if(opponentType=="electric")
        {
            damage=50*(yourAttack/opponentDefense);
        }
        else
        {
            damage=0;
        }
    }
    else if(yourType=="electric")
    {
        if(opponentType=="fire" || opponentType=="grass")
        {
            damage=50*(yourAttack/opponentDefense);
        }
        else if(opponentType=="water")
        {
            damage=50*(yourAttack/opponentDefense)*2;
        }
        else if(opponentType=="electric")
        {
            damage=50*(yourAttack/opponentDefense)*0.5;
        }
        else
        {
            damage=0;
        }
    }
    else if(yourType=="water")
    {
        if(opponentType=="grass" || opponentType=="water" || opponentType=="electric")
        {
            damage=50*(yourAttack/opponentDefense)*0.5;
        }
        else if(opponentType=="fire")
        {
            damage=50*(yourAttack/opponentDefense)*2;
        }
        else
        {
            damage=0;
        }
    }
    else
    {
        damage=0;
    }
    return damage;
}