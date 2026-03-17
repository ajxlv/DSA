#include<iostream>
using namespace std;
int main(){

int a[10];
int sum=0;
int avg;
for(int i=0; i<10; i++){
	cin>>a[i];
}
for(int i=0; i<10; i++){
	sum=sum+a[i];
}
for(int i=0; i<10; i++){
	cout<<a[i]<<"  ";
}
avg=sum/10;
cout<<"\n";
cout<<sum<<" \n";
cout<<avg;
 }
 
/*output
 pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B1.20$ g++ array.cpp
pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B1.20$ ./a.out
10
20
30
40
50
60
70
80
90
100
10  20  30  40  50  60  70  80  90  100  
sum is = 550 
avg is =55 pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B1.20$ 

*/
