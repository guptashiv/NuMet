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

double der(double a)
{
    return 2*a;
}

int main()
{
    double a,b;
    a=1;
    double tol = .000001;
    double c= a;
    double c1=a-(f(a)/der(a));
    
    int step=0;
    while(mod((c1-c)/c1)>tol)
    { step++;
            c=c1;
                c1=c-(f(c)/der(c));
        
    }
    cout<<"Steps: "<<step<<" Root: "<<c<<endl;
}
