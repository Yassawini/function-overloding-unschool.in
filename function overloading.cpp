//C program for function overloading//
#include<iostream>
using namespace std;
int area(int,int);
float area(float);
float area(float,float);
int main()
{
    int l,b;
    float r,bs,ht;
    cout<<"enter length and breadth of rectangle:\n";
    cin>>l>>b;
    cout<<"enter radius of circle:\n";
    cin>>r;
    cout<<"Enter base and height of  triangle:\n";
    cin>>bs>>ht;
    cout<<"\nArea of rectangle is:"<<area(l,b);
    cout<<"\nArea of circle is:"<<area(r);
    cout<<"\nArea of triangle is:"<<area(bs,ht);
}
int area(int l,int b)
{
    return(l*b);
}
float area(float r)
{
    return(3.14*r*r);

}
float area(float bs,float ht)
{
    return((bs*ht)/2);

}
