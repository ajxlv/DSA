#include<iostream>
using namespace std;

int main()
{
int r1,r2,c1,c2,r3,c3;
cout<<"enter the rows and columns for matrix A: ";
cin>>r1;
cin>>c1;
cout<<"enter the rows and columns for matrix B :";
cin>>r2;
cin>>c2;
int A[r1][c1],B[r2][c2],C[r1][c1];

cout<<"A matrix"<<"\n";
for(int i=0;i<r1;i++) {
	for(int j=0;j<c1;j++) {
		cout<<"enter element for row "<<i<<" and column "<<j<<": ";
		cin>>A[i][j];
	}
}
cout<<"B matrix"<<"\n";
for(int i=0;i<r2;i++) {
	for(int j=0;j<c2;j++) {
		cout<<"enter element for row "<<i<<" and column "<<j<<": ";
		cin>>B[i][j];
	}
}
cout<<"A matrix"<<"\n";
for(int i=0;i<r1;i++) {
	for(int j=0;j<c1;j++) {
		cout<<A[i][j]<<"\t";
	}
	cout<<endl;
}
cout<<"B matrix"<<"\n";
for(int i=0;i<r2;i++) {
	for(int j=0;j<c2;j++) {
		cout<<B[i][j]<<"\t";
	}
	cout<<endl;
}

r3=r1;
c3=c1;
for(int i=0;i<r3;i++) {
	for(int j=0;j<c3;j++) {
		C[i][j]=A[i][j]+B[i][j];
	}
}

cout<<"addition of matrices: "<<"\n";
for(int i=0;i<r3;i++) {
	for(int j=0;j<c3;j++) {
		cout<<C[i][j]<<"\t";
	}
	cout<<endl;
}


for(int i=0;i<r1;i++) {	
	for(int j=0;j<c2;j++) {
		for(int k=0;k<c1;k++) {
			C[i][j] += A[i][j]*B[i][j];
		}		
	}
}
cout<<"multiplication of matrices: "<<"\n";
for(int i=0;i<r1;i++) {
	for(int j=0;j<c2;j++) {
		cout<<C[i][j]<<"\t";
	}
	cout<<endl;
}

return 0;

}

		
