#include<iostream>
using namespace std;

float addNum(float num1,float num2);
float addNum(float num1,float num2){
    float sum = num1+num2;
    cout<<"The sum is: "<<sum<<endl;
    return sum;
}
float subNum(float num1,float num2);
float subNum(float num1,float num2){
    float dif = num1-num2;
    cout<<"The difference is: "<<dif<<endl;
    return dif;
}
float multNum(float num1,float num2);
float multNum(float num1,float num2){
    float product = num1*num2;
    cout<<"The product is: "<<product<<endl;
    return product;
}
float divNum(float num1,float num2);
float divNum(float num1,float num2){
    float quo = num1/num2;
    cout<<"The quotient is: "<<quo<<endl;
    return quo;
}
float avgNum(float num1,float num2);
float avgNum(float num1,float num2){
    float avg = (num1+num2)/2;
    cout<<"The average is: "<<avg<<endl;
    return avg;
}

int main(){
    float a,s,m,d,av;
    float num1,num2;
    int selection;
    cout<<"Welcome to myCalculator"<<endl;
    cout<<"Select the following to perform actions: "<<endl;
    cout<<"For Addition: 1"<<endl;
    cout<<"For Subtraction: 2"<<endl;
    cout<<"For Multipliction: 3"<<endl;
    cout<<"For Division: 4"<<endl;
    cout<<"For Average: 5"<<endl;

    cout<<"Make your selection: ";
    cin>>selection;
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;

    switch (selection)
    {
    case 1:
        a = addNum(num1,num2);
        break;
    case 2:
        s = subNum(num1,num2);
        break;
    case 3:
        m = multNum(num1,num2);
        break;
    case 4:
        d = divNum(num1,num2);       
        break;
    case 5:
        av = avgNum(num1,num2);
        break;
    default: ;
        cout<<"Invalid Selection";
        break;
    }
}