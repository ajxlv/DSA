#include <iostream>
using namespace std;
int main() {
int a,b,c;
cout<<"Enter three nuumbers";
cin>>a>>b>>c;
if(a>b && a>c){
 cout<<"a is the greatest";
 }
else if(b>a &&b>c){
 cout<<"b is the greatest";
}
else{
 cout<<"c is the greatest" ;
 }
}

/*pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B1.20$ g++ large.cpp
pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B1.20$ ./a.out
Enter three nuumbers 32
12
54
c is the greatestpl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B1.20$
*/


