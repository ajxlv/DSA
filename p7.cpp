#include<iostream>
using namespace std;
class array{
	private:
		int A[10], n;
	public:
		void read();
		void dis();
};

void array :: read() {
	cout<<"enter the value of n";
	cin>>n;
	for(int i=0; i<n; i++) {
		cout<<"enter the elements of array";
		cin>>A[i];
	}	
}

void array :: dis() {
	for(int i=0; i<n; i++) {
		cout<<A[i]<<"  ";
	}		
}	

int main() {
array obj1;
obj1.read();
obj1.dis();
}


*/ pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B1.20$ ./a.out
enter the value of n5
enter the elements of array10
enter the elements of array20
enter the elements of array30
enter the elements of array40
enter the elements of array50
10  20  30  40  50  pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B1.20$ 
*/

