#include<iostream>
using namespace std;

bool doesBrickFit(int heightB,int depthB,int widthB,int heightH,int widthH);

main()
{
    int heightB,depthB,widthB;
    int heightH,widthH;

    cout << "Enter the height of brick: ";
    cin >> heightB;

    cout << "Enter the depth of brick: ";
    cin >> depthB;

    cout << "Enter the width of brick: ";
    cin >> widthB;

    cout << "Enter the height of hole: ";
    cin >> heightH;

    cout << "Enter the width of hole: ";
    cin >> widthH;

    bool x = doesBrickFit(heightB,depthB,widthB,heightH,widthH);
    cout << x;
}
bool doesBrickFit(int heightB,int depthB,int widthB,int heightH,int widthH)
{
    if(heightH == heightB)
    {
        if(widthH == widthB)
        {
            return true;
        }
        else if(widthH == depthB)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else if(heightH == depthB)
    {
        if(widthH == widthB)
        {
            return true;
        }
        else if(widthH == heightB)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else if(heightH == widthB)
    {
        if(widthH == heightB)
        {
            return true;
        }
        else if(widthH == depthB)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }

}