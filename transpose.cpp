#include<iostream>
using namespace std;
int r1=20,c1=20;
class matrix{
	private:
		int A[20][20],B[100][3],C[100][3];
		int k=1,len=0;
		int value=0;
	public:
		void read();
		void read1();
		void display();
		void triplet();
		void read2();
		void transpose();
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
				value++;
			}
		}
}
int B[value+1][3];
B[0][0]=r1;
B[0][1]=c1;
B[0][2]=value;
					
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

cout<<"triplet matrix:"<<"\n";

	for(int i=0;i<value+1;i++) {
		for(int j=0;j<3;j++) {
		cout<<B[i][j]<<"\t";
		}
	cout<<endl;
	}
}

void matrix :: transpose() {
C[0][0] = c1; 
C[0][1] = r1; 
C[0][2] = B[0][2];
int i=1;
for(int j=0;i<r1;i++) {
	for(int k=0;j<c1;j++) {
		if(B[k][1]=j) {				
			C[i][0]=B[k][j];
			C[i][1]=B[k][j];
			C[i][2]=B[k][j];
			i++;
		}
	}		
}		
}
void matrix :: display1() { 
cout<<"Transpose matrix:"<<"\n";
	for(int i=0;i<B[0][2]+1;i++) {
		for(int j=0;j<3;j++) {
			cout<<C[i][j]<<"\t";	
		}
cout<<endl;
}
}



int main() {
matrix obj;
obj.read();
obj.read1();
int choice;

 
while(true) {
        cout << "\nMenu:\n";
        cout << "1. Display the sparce matrix\n"; 
        cout << "2. Display the Triplet matrix\n"; 
        cout << "3. Display Simple transpose\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        
  switch (choice) {
	case 1:	   
                obj.display();
                break;        
	case 2:
		obj.triplet();
		break;
	case 3:	
		obj.transpose();
		obj.display1();
		break;
	case 4:		                
                return 0;
                
}

}
}                

