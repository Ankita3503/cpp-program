/*#include <iostream>
using namespace std;

int main() {
 int T;

 cin>>T;
 while(T--)
 { char val[6];
     cin>>val;
     if(val=="B")//|| val='b')
     {
         cout<<"Battleship\n";
     }
      if(val=="C")//|| val='c')
     {
         cout<<"Cruiser\n";
     }
      if(val=="D")//|| val='d')
     {
         cout<<"Destroyer\n";
     }
      if(val=="F")//|| val='f')
     {
         cout<<"Frigate\n";
     }
     
 }
	return 0;
}   
*/
/*
id_and_ship_codechef_solution.cpp:11:23: error: lvalue required as left operand of assignment
   11 |      if(val='B'|| val='b')
      |                       ^~~
id_and_ship_codechef_solution.cpp:15:24: error: lvalue required as left operand of assignment
   15 |       if(val='C'|| val='c')
      |                        ^~~
id_and_ship_codechef_solution.cpp:19:24: error: lvalue required as left operand of assignment
   19 |       if(val='D'|| val='d')
      |                        ^~~
id_and_ship_codechef_solution.cpp:23:24: error: lvalue required as left operand of assignment
   23 |       if(val='F'|| val='f')
      |                        ^~~
PS C:\Users\Ankita kumari\Desktop\vs code my\.vscode\.vscode> 3cd "c:\Users\Ankita kumari\Desktop\vs code my\.vscode\.vscode\" ; if ($?) { g++ id_and_ship_codechef_solution.cpp -o id_and_ship_codechef_solution } ; if ($?) { .\id_and_ship_codechef_solution }
3cd : The term '3cd' is not recognized as the name of a cmdlet, function, script file, or operable program. Check the spelling of the   
name, or if a path was included, verify that the path is correct and try again.
At line:1 char:1
+ 3cd "c:\Users\Ankita kumari\Desktop\vs code my\.vscode\.vscode\" ; if ...
+ ~~~
    + CategoryInfo          : ObjectNotFound: (3cd:String) [], CommandNotFoundException
    + FullyQualifiedErrorId : CommandNotFoundException

PS C:\Users\Ankita kumari\Desktop\vs code my\.vscode\.vscode> cd "c:\Users\Ankita kumari\Desktop\vs code my\.vscode\.vscode\" ; if ($?) 
{ g++ id_and_ship_codechef_solution.cpp -o id_and_ship_codechef_solution } ; if ($?) { .\id_and_ship_codechef_solution }
id_and_ship_codechef_solution.cpp:11:13: error: incompatible types in assignment of 'char' to 'char [6]'
   11 |      if(val='B')//|| val='b')
      |             ^~~
id_and_ship_codechef_solution.cpp:15:14: error: incompatible types in assignment of 'char' to 'char [6]'
   15 |       if(val='C')//|| val='c')
      |              ^~~
id_and_ship_codechef_solution.cpp:19:14: error: incompatible types in assignment of 'char' to 'char [6]'
   19 |       if(val='D')//|| val='d')
      |              ^~~
id_and_ship_codechef_solution.cpp:23:14: error: incompatible types in assignment of 'char' to 'char [6]'
      |              ^~~
PS C:\Users\Ankita kumari\Desktop\vs code my\.vscode\.vscode> cd "c:\Users\Ankita kumari\Desktop\vs code my\.vscode\.vscode\" ; if ($?) 
{ g++ id_and_ship_codechef_solution.cpp -o id_and_ship_codechef_solution } ; if ($?) { .\id_and_ship_codechef_solution }
id_and_ship_codechef_solution.cpp: In function 'int main()':
id_and_ship_codechef_solution.cpp:11:14: error: 'B' was not declared in this scope
   11 |      if(val==B)//|| val='b')
      |              ^
id_and_ship_codechef_solution.cpp:15:15: error: 'C' was not declared in this scope
   15 |       if(val==C)//|| val='c')
      |               ^
id_and_ship_codechef_solution.cpp:19:15: error: 'D' was not declared in this scope
   19 |       if(val==D)//|| val='d')
      |               ^
id_and_ship_codechef_solution.cpp:23:15: error: 'F' was not declared in this scope
      |               ^
PS C:\Users\Ankita kumari\Desktop\vs code my\.vscode\.vscode> cd "c:\Users\Ankita kumari\Desktop\vs code my\.vscode\.vscode\" ; if ($?) 
{ g++ id_and_ship_codechef_solution.cpp -o id_and_ship_codechef_solution } ; if ($?) { .\id_and_ship_codechef_solution }
id_and_ship_codechef_solution.cpp: In function 'int main()':
id_and_ship_codechef_solution.cpp:11:14: error: ISO C++ forbids comparison between pointer and integer [-fpermissive]
   11 |      if(val=='B')//|| val='b')
      |              ^~~
id_and_ship_codechef_solution.cpp:15:15: error: ISO C++ forbids comparison between pointer and integer [-fpermissive]
   15 |       if(val=='C')//|| val='c')
      |               ^~~
id_and_ship_codechef_solution.cpp:19:15: error: ISO C++ forbids comparison between pointer and integer [-fpermissive]
   19 |       if(val=='D')//|| val='d')
      |               ^~~
id_and_ship_codechef_solution.cpp:23:15: error: ISO C++ forbids comparison between pointer and integer [-fpermissive]
   23 |       if(val=='F')//|| val='f')
      |               ^~~
PS C:\Users\Ankita kumari\Desktop\vs code my\.vscode\.vscode> cd "c:\Users\Ankita kumari\Desktop\vs code my\.vscode\.vscode\" ; if ($?) 
{ g++ id_and_ship_codechef_solution.cpp -o id_and_ship_codechef_solution } ; if ($?) { .\id_and_ship_codechef_solution }
3
D
c
D
PS C:\Users\Ankita kumari\Desktop\vs code my\.vscode\.vscode>
*/ 


// correct answer
#include <iostream>
using namespace std;

int main() {
 int T;
 cin>>T;
 while(T--)
 { char val;
     cin>>val;
     if(val=='b'|| val=='B')
     {
         cout<<"BattleShip\n";
     }
     else if(val=='c'|| val=='C')
     {
         cout<<"Cruiser\n";
     }
     else if(val=='d'|| val=='D')
     {
         cout<<"Destroyer\n";
     }
     else if(val=='f'|| val=='F')
     {
         cout<<"Frigate\n";
     }
     
 }
	return 0;
}


