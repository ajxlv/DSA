#include<iostream>
#include<math.h>
using namespace std;

struct term {
	int expo;
	float co;
};	
class polynomial {
	private:
		int a;
		struct term poly[20];
	public:
		void read();
		void display();
		double evaluate(double x);
		void add_poly(polynomial obj2);
		
};				


void polynomial :: read() {
cout<<"Enter the no. of terms: "<<endl;
cin>>a;
for(int i=0;i<a;i++) {
	cout<<"Enter the coeff of "<<i+1<<" term: ";
	cin>>poly[i].co;
	cout<<"Enter the exponent of "<<i+1<<" term: ";
	cin>>poly[i].expo;
}
}

void polynomial :: display() {
for(int i=0;i<a-1;i++) {
	cout<<poly[i].co<<"x^"<<poly[i].expo<<"\t";
if(poly[i].co>0){
	cout<<"+";
}		
else{
}
}
cout<<poly[a-1].co<<"x^"<<poly[a-1].expo;
}

double polynomial :: evaluate(double x) {
double result=0;
int i=0;
while(i<=a) {
result += poly[i].co * pow(x,poly[i].expo);
i++;
}
return result;
}

void polynomial :: add_poly(polynomial obj2) {
int i=0,j=0,k=0;
polynomial obj3;
obj3.a =0;
while (i<a && j<obj2.a) {
	if(poly[i].expo == obj2.poly[j].expo) {
		obj3.poly[k].co = poly[i].co + obj2.poly[j].co;
		obj3.poly[k].expo = poly[i].expo;
		i++,j++;
	}
	else if(poly[i].expo > obj2.poly[j].expo) {
		obj3.poly[k].co = poly[i].co;		
		obj3.poly[k].expo = poly[i].expo;
		i++;
	}
	else {
		obj3.poly[k].co = obj2.poly[j].co;	
		obj3.poly[k].expo = poly[i].expo;
		j++;
	}
	k++;
	obj3.a++;
}	
while(i<a) {
	obj3.poly[k].co = poly[i].co;	
	obj3.poly[k].expo = poly[i].expo;
	i++,k++;
}
while(j<obj2.a) {
	obj3.poly[k].co = obj2.poly[j].co;	
	obj3.poly[k].expo = obj2.poly[j].expo;
	j++,k++;
}
obj3.a = k-1;
obj3.display();
//return obj3;
}

		
int main() {
polynomial obj1,obj2;
obj1.read();
obj2.read();
double x;
int choice;

 
while(true) {
        cout << "\nMenu:\n";
        cout << "1. Display 1st polynomial\n"; 
        cout << "2. Display 2nd polynomial\n";
        cout << "3.Display evaluation of 1st polynomial\n"; 
        cout << "4.Display evaluation of 2nd polynomial\n";
        cout << "5.Display addition of both polynomials\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        
  switch (choice) {
	case 1:	   
                obj1.display();
                break;        
	case 2:
		obj2.display();
		break;
	case 3:	 
		
		cout<<"Enter the value of x: ";
		cin>>x;
		cout<<"The value of polynomial at "<<x<<" is: "<<obj1.evaluate(x)<<endl;
		
		break;
	case 4:	 
		
		cout<<"Enter the value of x: ";
		cin>>x;
		cout<<"The value of polynomial at "<<x<<" is: "<<obj2.evaluate(x)<<endl;
		break;
	case 5: 
		obj1.add_poly(obj2);
		break;	
		
	case 6:
		return 0;
			 	              
             
}
}
}

/*
hp@hp:~/B1.20$ g++ poly.cpp
hp@hp:~/B1.20$ ./a.out
Enter the no. of terms: 
4
Enter the coeff of 1 term: 3
Enter the exponent of 1 term: 2
Enter the coeff of 2 term: 6
Enter the exponent of 2 term: 3
Enter the coeff of 3 term: 8
Enter the exponent of 3 term: 4
Enter the coeff of 4 term: 5
Enter the exponent of 4 term: 1
Enter the no. of terms: 
3
Enter the coeff of 1 term: 6
Enter the exponent of 1 term: 2
Enter the coeff of 2 term: 7
Enter the exponent of 2 term: 3
Enter the coeff of 3 term: 5
Enter the exponent of 3 term: 8

Menu:
1. Display 1st polynomial
2. Display 2nd polynomial
3.Display evaluation of 1st polynomial
4.Display evaluation of 2nd polynomial
5.Display addition of both polynomials
6. Exit
Enter your choice: 1
3x^2	+6x^3	+8x^4	+5x^1
Menu:
1. Display 1st polynomial
2. Display 2nd polynomial
3.Display evaluation of 1st polynomial
4.Display evaluation of 2nd polynomial
5.Display addition of both polynomials
6. Exit
Enter your choice: 2
6x^2	+7x^3	+5x^8
Menu:
1. Display 1st polynomial
2. Display 2nd polynomial
3.Display evaluation of 1st polynomial
4.Display evaluation of 2nd polynomial
5.Display addition of both polynomials
6. Exit
Enter your choice: 3
Enter the value of x: 2
The value of polynomial at 2 is: 198

Menu:
1. Display 1st polynomial
2. Display 2nd polynomial
3.Display evaluation of 1st polynomial
4.Display evaluation of 2nd polynomial
5.Display addition of both polynomials
6. Exit
Enter your choice: 4
Enter the value of x: 8
The value of polynomial at 8 is: 8.389e+07

Menu:
1. Display 1st polynomial
2. Display 2nd polynomial
3.Display evaluation of 1st polynomial
4.Display evaluation of 2nd polynomial
5.Display addition of both polynomials
6. Exit
Enter your choice: 4
Enter the value of x: 2
The value of polynomial at 2 is: 1360

Menu:
1. Display 1st polynomial
2. Display 2nd polynomial
3.Display evaluation of 1st polynomial
4.Display evaluation of 2nd polynomial
5.Display addition of both polynomials
6. Exit
Enter your choice: 5
9x^2	+13x^3	+5x^4	+8x^4
*/
