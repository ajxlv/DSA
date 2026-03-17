#include<iostream>
using namespace std;
int r1=20,r2=20,c1=20;
class matrix{
	private:
		int A[20][20],B[100][3];
		int k=1,len=0;
	public:
		void read();
		void read1();
		void display();
		void triplet();
		void read2();
		void display1();
};

void matrix :: read() {
cout<<"enter the rows and columns for matrix A: ";
cin>>r1;
cin>>c1;
}

void matrix :: read1() {
	for(int i=0;i<r1;i++) {
		for(int j=0;j<c1;j++) {
		cout<<"enter element for row "<<i<<" and column "<<j<<": ";
		cin>>A[i][j];
		}
	}
}

void matrix :: display() {
cout<<"Sparce matrix:"<<"\n";
	for(int i=0;i<r1;i++) {
		for(int j=0;j<c1;j++) {
		cout<<A[i][j]<<"\t";
		}
	cout<<endl;
	}
}

void matrix :: triplet() {
	for(int i=0;i<r1;i++) {
		for(int j=0;j<c1;j++) {
			if(A[i][j] != 0) {				
				B[k][0]=i;
				B[k][1]=j;
				B[k][2]=A[i][j];
				k++;
			}
			
		}		
	}		
}
void matrix :: read2() {
int l=0;
while(B[k][l]!='\0') {
len++;
k++;
l++;
}
}
			
void matrix :: display1() {
cout<<"triplet matrix:"<<"\n";
B[0][0]=r1;
B[0][1]=c1;
B[0][2]=len+1;
	for(int i=0;i<r2;i++) {
		for(int j=0;j<3;j++) {
		cout<<B[i][j]<<"\t";
		}
	cout<<endl;
	}
}

int main() {
matrix obj;
obj.read();
obj.read1();
obj.triplet();
obj.read2();
int choice;

 
while(true) {
        cout << "\nMenu:\n";
        cout << "1. Display the sparce matrix\n"; 
        cout << "2. Display the Triplet matrix\n"; 
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        
  switch (choice) {
	case 1:	   
                obj.display();
                break;        
	case 2:
		obj.display1();
		break;
	case 3:	                
                return 0;
                
}
return 0;
}
}                



	
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
			
								
