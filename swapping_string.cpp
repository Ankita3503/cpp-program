// wap to swap two string 
/*#include<iostream>
using namespace std;
void swap_string(string s1,string s2)
{
    string s3;
    s3=s1;
    s1=s2;
    s2=s3;
    cout<<"after swapping strings are :-";
    cout<<"string 1 : "<<s1;
    cout<<"string 2 : "<<s2;
}
int main()
{
    string s1;
    string s2;
    cout<<"enter the strings :-\n";
    getline(cin,s1);
    getline(cin,s2);
    swap_string(s1,s2);
return 0;
}*/

/*#include<iostream>
//#include<string.h>
using namespace std;
void swap_string(char **s1,char **s2)  // swapping using double pointer
{
    char *s3=*s1;
    *s1=*s2;
    *s2=s3;
}
int main()
{
    char *s1 = "ankita";
    char *s2 = "kumari";
    cout<<" the first strings  :-"<<s1 <<"\n"<<"the second string :- "<<s2;
    swap_string(&s1,&s2);
    cout<<"\nafter swapping the strings are :- \n";
    cout<<"string 1 :- "<<s1<<"\n "<<"string 2 :- "<<s2;
return 0;
}   */


#include<iostream>
#include<string.h>
using namespace std;
void swap_string(char *s1,char *s2)  // swapping using  pointer
{
   int len1 =strlen(s1);
   int len2 =strlen(s2);
   if(len1>len2)
   {
    for(int i=0;s1[i]!='\0';i++)
    {
        char t=s1[i];
        s1[i]=s2[i];
        s2[i]=t;
    }   
   }
   else
   {
   for(int i=0;s2[i]!='\0';i++)
    {
        char t=s1[i];
        s1[i]=s2[i];
        s2[i]=t;
    } 
   }
}
int main()
{
    char s1[] = "ankitakumari";
    char s2[] = "kumari";
    cout<<" the first strings  :-"<<s1 <<"\n"<<"the second string :- "<<s2;
    swap_string(s1,s2);
    cout<<"\nafter swapping the strings are :- \n";
    cout<<"string 1 :- "<<s1<<"\n "<<"string 2 :- "<<s2;
return 0;
}