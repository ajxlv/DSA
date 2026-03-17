#include<iostream>
using namespace std;
int r1=20,r2=20,c1=20,c2=20;
class matrix{
	private:
		int A[20][20],B[20][20];
		int C[100][3],D[100][3];
		int k=1,l=1;
	public:
		void read();
		void read1();
		void read2();
		void display1();
		void display2();
		void triplet1();
		void triplet2();
		void add();
};

void matrix :: read() {
cout<<"enter the rows and columns for matrix A: ";
cin>>r1;
cin>>c1;
cout<<"enter the rows and columns for matrix B :";
cin>>r2;
cin>>c2;
}

void matrix :: read1() {
	cout<<"for sparse matrix 1:"<<endl;
	for(int i=0;i<r1;i++) {
		for(int j=0;j<c1;j++) {
		cout<<"enter element for row "<<i<<" and column "<<j<<": ";
		cin>>A[i][j];
		}
	}
}

void matrix :: read2() {
	cout<<"for sparse matrix 2:"<<endl;
	for(int i=0;i<r2;i++) {
		for(int j=0;j<c2;j++) {
		cout<<"enter element for row "<<i<<" and column "<<j<<": ";
		cin>>B[i][j];
		}
	}
}

void matrix :: display2() {
cout<<"Sparce matrix:"<<"\n";
	for(int i=0;i<r2;i++) {
		for(int j=0;j<c2;j++) {
		cout<<B[i][j]<<"\t";
		}
	cout<<endl;
	}
}

void matrix :: display1() {
cout<<"Sparce matrix:"<<"\n";
	for(int i=0;i<r1;i++) {
		for(int j=0;j<c1;j++) {
		cout<<A[i][j]<<"\t";
		}
	cout<<endl;
	}
}

void matrix :: triplet1() {
int value=0;
for(int i=0;i<r1;i++) {
		for(int j=0;j<c1;j++) {
			if(A[i][j] != 0) {
				value++;
			}
		}
}
int C[value+1][3];
C[0][0]=r1;
C[0][1]=c1;
C[0][2]=value;
					
	for(int i=0;i<r1;i++) {
		for(int j=0;j<c1;j++) {
			if(A[i][j] != 0) {				
				C[k][0]=i;
				C[k][1]=j;
				C[k][2]=A[i][j];
				k++;
			}
			
		}		
	}		

cout<<"triplet matrix 1:"<<"\n";

	for(int i=0;i<value+1;i++) {
		for(int j=0;j<3;j++) {
		cout<<C[i][j]<<"\t";
		}
	cout<<endl;
	}
}

void matrix :: triplet2() {
int count=0;
for(int i=0;i<r2;i++) {
		for(int j=0;j<c2;j++) {
			if(B[i][j] != 0) {
				count++;
			}
		}
}
int D[count+1][3];
D[0][0]=r1;
D[0][1]=c1;
D[0][2]=count;
					
	for(int i=0;i<r2;i++) {
		for(int j=0;j<c2;j++) {
			if(B[i][j] != 0) {				
				D[l][0]=i;
				D[l][1]=j;
				D[l][2]=B[i][j];
				l++;
			}
			
		}		
	}		

cout<<"triplet matrix 2:"<<"\n";

	for(int i=0;i<count+1;i++) {
		for(int j=0;j<3;j++) {
		cout<<D[i][j]<<"\t";
		}
	cout<<endl;
	}
}

void matrix :: add() {
int i,t1,t2,j,k;
t1=C[0][2];
t2=D[0][2];
i=j=k=0;
D[0][0]=C[0][0];
D[0][1]=C[0][1];

while (i<t1 && i<=t2) {
	if (C[i][0]<D[j][0]) {
		D[k][0]=C[i][0];
		D[k][1]=C[i][1];
		D[k][2]=C[i][2];
		k++;
		i++;
	}
	else if (C[i][0]>D[j][0]) {
			
















int main() {
matrix obj;
obj.read();
obj.read1();
obj.read2();
int choice;

 
while(true) {
        cout << "\nMenu:\n";
        cout << "1. Display the sparce matrix 1\n"; 
        cout << "2. Display the sparce matrix 2\n"; 
        cout << "3. Display the Triplet matrix 1\n";
        cout << "4. Display the Triplet matrix 2\n";
        cout << "5. Display addition of two triplet matrices.\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        
  switch (choice) {
	case 1:	   
                obj.display1();
                break;   
        case 2:	   
                obj.display2();
                break;      
	case 3:
		obj.triplet1();
		break;
	case 4:
		obj.triplet2();
		break;
	case 5:
		obj.add();
		break;
	case 6:	                
                return 0;
                
}

}
}                

