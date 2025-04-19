#include<iostream>
#include<cmath>
using namespace std;

void documentation()
{
    cout << "\t\t\t\tDocumantation of Calculator\nSelect the options for scientific calculator or traditional calculator\n'S' --> Scientific Calculator\n'T' --> Traditional Calculator\n\nOptions under Scientific Calculator are\n1 --> Addition\n2 --> Subraction\n3 --> Multipication\n4 --> Exponent/Power\n5 --> Factorial\n6 --> Sqaure root\n7 --> Log\n8 --> Division\n\nOptions under Traditional Calculator are\n1 --> Addition\n2 --> Subraction\n3 --> Multipication\n4 --> Divison\n\n\n";
    return;
}

bool optionForScientific(char option)
{
    if(option == 'S' || option == 's')
    {
        return true;
    }
    else
    {
        return false;
    }
}

double traditionalCalculator(double a, double b, int choice)
{
    switch (choice)
    {
    case 1:
        return a + b;
        break;
    case 2:
        return (a > b ? a -b : b - a);
        break;
    case 3:
        return a * b;
        break;
    case 4:
        return (a > b ? a/b : b/a);
        break;
    }
}

double factorial(double a)
{
    if (a > 1)
    {
        return a * factorial(a-1);
    }
}
double scientificCalculator(double a, double b, int choice)
{
    switch (choice)
    {
    case 1:
        return a + b;
        break;
    case 2:
        return (a > b ? a -b : b - a);
        break;
    case 3:
        return a * b;
        break;
    case 8:
        return (a > b ? a/b : b/a);
        break;
    case 4:
        return pow(a,b);
        break;
    case 6:
        return sqrt((a > b ? a : b));
        break;
    case 7:
       return log10((a > b ? a : b));
       break;
    case 5:
        return factorial((a > b ? a : b));
        break;
    }
}

int main()
{
    documentation();
    double a = 10,
    b = 40;
    int choice = 4;
    char option = 's';
    if(optionForScientific(option))
    {
        cout << "Answer : " << scientificCalculator(a, b, choice);
    }
    else
    {
        cout << "Answer : " << traditionalCalculator(a, b, choice);
    }
    return 0;
}
