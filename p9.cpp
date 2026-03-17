#include<iostream>
using namespace std;
class array{
	private:
		int A[10],B[10],C[10],D[20], n,m;
		int count=0;
		int k=0;
	public:
		void read();
		void readb();
		void dis();
		void disb();
		void intersection();
		void Union();
};

void array :: read() {
	cout<<"enter the value of n: ";
	cin>>n;
	for(int i=0; i<n; i++) {
		cout<<"enter the elements of array: ";
		cin>>A[i];
	}	
}
void array :: readb() {
	cout<<"enter the value of m: ";
	cin>>m;
	for(int j=0; j<m; j++) {
		cout<<"enter the elements of array: ";
		cin>>B[j];
	}	
}

void array :: dis() {
cout<<"[  ";
	for(int i=0; i<n; i++) {
		cout<<A[i]<<"  ";
		
	}
	cout<<"]";
	cout<<endl;	
}	
void array :: disb() {
cout<<"[  ";
	for(int j=0; j<m; j++) {
		cout<<B[j]<<"  ";
	}	
	cout<<"]";
	cout<<endl;		
}

void array :: intersection() {
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(A[i]==B[j]){
				C[k]=A[i];
				k=k+1;
				count++;
			
			}
		}		
}
}

void array :: Union() {
	int j;
	for(int i=0;i<n;i++) {
		D[i]=A[i];
	}
	for(int i=n;i<m+n;i++) {
		for(int j=0; j<m; j++) {
		D[i]=B[j];
		i=i+1;
	}
		cout<<"[  ";	
		for(int i=0;i<m+n;i++) {
			cout<<D[i]<<"  ";
			
	}
	cout<<"]";
}	
for(int i=0;i<(m+n)-count; i++) {
	for(int j=0; j<m+n; j++) {
		if(C[i]==D[j]) {
				D[j]=-999;
				break;
			}
		}					
}
cout<<"Union  is: [  ";
for(int i=0;i<m+n;i++) {
	if(D[i]==-999) {
	}
	else{
	cout<<D[i]<<"  ";
	}
}
cout<<"]";
}

int main() {
array obj1, intersection;
obj1.read();
obj1.dis();
obj1.readb();
obj1.disb();
obj1.intersection();
obj1.Union();
}



/*
pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B1.20$ ./a.out
enter the value of n: 5
enter the elements of array: 1
enter the elements of array: 2
enter the elements of array: 3
enter the elements of array: 4
enter the elements of array: 5
[  1  2  3  4  5  ]
enter the value of m: 4
enter the elements of array: 3
enter the elements of array: 4
enter the elements of array: 5
enter the elements of array: 6
[  3  4  5  6  ]
[  1  2  3  4  5  3  4  5  6  ]Union  is: [  1  2  3  4  5  6  ]pl-ii@plii-HP-Pro-Tower-280-G9-PCI-Desktop-PC:~/B1.20$ 


*/








		
