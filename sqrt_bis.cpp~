#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>
using namespace std;

double f(double a)
{
	return (a*a-2);
}

double mod(double a)
{
    return (a<0)?-a:a;
}

int main()
{
    double a,b;
    a=1;
    b=3;
    
    double tol = .000001;
    double c=(a+b)/2;
    double c1=a;
    
    int step=0;
    while(mod(c1-c)>tol)
    { step++;
        if(f(a)*f(c)<0)
            c1=c,b=c;
        else
            c1=c, a=c;
            
        c=(a+b)/2.000;    
    }
    cout<<"Steps: "<< step<<" Root: "<<c1<<endl;
}
