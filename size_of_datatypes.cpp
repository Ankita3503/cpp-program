#include<iostream>
using namespace std;
int main()
{
    int a; //signed int 
    long int  e; //long,signed long
    unsigned int f;
    long j; //long int or signed long
    unsigned long k;
    float b;
    long long l;
    unsigned long long m;
    char c;  //signed char
    unsigned char o;
    double d;
    long double n;
    bool g;
   short p;
   unsigned short q;
    wchar_t r;
    cout<<"size of int="<<sizeof(a)<<"\n";
    cout<<"size of unsigned int="<<sizeof(f)<<"\n";
    cout<<"size of  long int="<<sizeof(e)<<"\n";
    cout<<"size of unsigned long ="<<sizeof(k)<<"\n";
    cout<<"size of long="<<sizeof(j)<<"\n";
    cout<<"size of float="<<sizeof(b)<<"\n";
    cout<<"size of long long ="<<sizeof(l)<<"\n";
    cout<<"size of unsigned long long="<<sizeof(m)<<"\n";
    cout<<"size of char="<<sizeof(c)<<"\n";

    cout<<"size of unsigned char="<<sizeof(o)<<"\n";
    cout<<"size of double="<<sizeof(d)<<"\n";
    cout<<"size of long double="<<sizeof(n)<<"\n";
    cout<<"size of bool="<<sizeof(g)<<"\n";
    cout<<"size of short="<<sizeof(p)<<"\n";
    cout<<"size of unsigned short="<<sizeof(q)<<"\n";
    cout<<"size of wide character="<<sizeof(r)<<"\n";
    return 0;
    }