#include <iostream>
using namespace std;

float add(float num1, float num2);
float sub(float num1, float num2);
float mult(float num1, float num2);
float div(float num1, float num2);

int main()
{
    char m;
    float n1, n2, result=0.0f;
    cout<<"WELCOME TO SIMPLE CALCULATOR\n";
    cout<<"----------------------------\n";
    cout<<"Enter [number 1] [+ - * /] [number 2]\n";

    cin>>n1 >>m>>n2;

    switch(m)
    {
        case '+': 
            result = add(n1, n2);
            break;

        case '-': 
            result = sub(n1, n2);
            break;

        case '*': 
            result = mult(n1, n2);
            break;

        case '/': 
            result = div(n1, n2);
            break;

        default: 
            printf("Invalid operator");
    }

    cout<<n1<<" " <<m<<" "<< n2 <<" = "<<result;

    return 0;
}

float add(float num1, float num2)
{
    return num1 + num2;
}

float sub(float num1, float num2)
{
    return num1 - num2;
}

float mult(float num1, float num2)
{
    return num1 * num2;
}

float div(float num1, float num2)
{
    return num1 / num2;
}
