#include<iostream>
using namespace std;
class string1{
	private:
		char A[10],B[10],D[10], n;
		int count=0;
		
	public:
		void read();
		void read2();
		void length();
		void freq();
		void concat();
		void copy();
		void compare();
		void palindrome();  
};

void string1 :: read() {
		cout<<"enter the elements of 1st string: ";
		cin>>A;
	}	
void string1 :: read2() {
		cout<<"enter the elements of 2nd string: ";
		cin>>B;
	}	
	

void string1 :: length() {
	int i=0;
	for(i=0; A[i]!='\0'; i++)
	{ 	
	}
	cout<<i;		
}

void string1 :: freq() {
int count=0;
char x;
cout<<"enter the alphabet: ";
cin>>x;
for(int i = 0; A[i] != '\0'; i++) { 
	if(A[i] == x) {
	 count++; 
	 }
}
cout<<"frequency of "<<x<<" is "<<count; 
}

void string1 :: concat() {
int i=0, j=0;
while(A[i]!='\0') {
i++;
}
for(j;B[j]!='\0'; j++) {
	A[i]=B[j];
	i=i+1;
}
A[i]='\0';	
cout<<A;
}

void string1 :: copy() {
int i=0;
for(i=0; A[i]!='\0'; i++) {
B[i]=A[i];
}
B[i]='\0';
cout<<B<<"  ";
}

void string1 :: compare() {
int i=0;
	if(A[i]==B[i])
	cout<<"string are equal";
	else
	cout<<"string are not equal";
	i++;
}

void string1 :: palindrome() {
cout<<"palindrome checked for string 1.\n";
int i=0, check=0,length=0;
while(A[i]!='\0') {
length++;
i++;
}
for(int j=(length-1);j>=0;j--) {
	D[i]=A[j];
	i++;
}
while(i<length) {
D[i]!= A[i];
check=1;
i++;
}

if(check==1)
cout<<A<<" is not a palindrome";
else
cout<<A<<" is a palindrome";	
}



		
int main() {
string1 obj1;
obj1.read();
obj1.read2();
int choice;

 
while(true) {
        cout << "\nMenu:\n";
        cout << "1. Calculate string length\n"; 
        cout << "2. Calculate frequency of a alphabet\n"; 
        cout << "3. Concatenate two strings\n"; 
        cout << "4. Copy string 1 in 2\n"; 
        cout << "5. Compare two strings\n";
        cout << "6. Check if it is a palindrome\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        
  switch (choice) {
	case 1:	   
                cout << "length of the string is: ";
                obj1.length();
                break;        
	case 2:
		obj1.freq();
		break;
	case 3:
		obj1.concat();
		break;
	case 4:
		obj1.copy();
		break;
	case 5:	
		obj1.compare();
		break;
	case 6:			
                obj1.palindrome();
                break;
	case 7:	                
                return 0;
                
}
return 0;
}
}                





		

