#include<iostream>
using namespace std;

int area(int);
int area(int,int);
float area(float);
float area(float,float);
int main()
{

	int s,l,b,num;
	float r,bs,ht;
    cout<<"1:square 2:rectangle 3:circle 4:triangle";
    cin>>num;
    if(num==1)
    {


	cout<<"Enter side of a square:";
	cin>>s;
    }
    else if(num==2)
    {


	cout<<"Enter length and breadth of rectangle:";
	cin>>l>>b;
	}
	else if(num==3)
    {


	cout<<"Enter radius of circle:";
	cin>>r;
    }
    else if(num==4)
    {


	cout<<"Enter base and height of triangle:";
	cin>>bs>>ht;
    }
	cout<<"Area of square is"<<area(s);
	cout<<"\nArea of rectangle is "<<area(l,b);
    cout<<"\nArea of circle is "<<area(r);
    cout<<"\nArea of triangle is "<<area(bs,ht);
}
int area(int s)
{
    return(s*s);
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
