#include<iostream>
using namespace std;
class array{
	private:
		int A[10],B[10],C[10], n,m;
		int count=0;
		int k=0;
	public:
		void read();
		void readb();
		void dis();
		void disb();
		void intersection();
		void intersectionb();
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
	for(int i=0; i<n; i++) {
		cout<<A[i]<<"  ";
		cout<<endl;
	}		
}	
void array :: disb() {
	for(int j=0; j<n; j++) {
		cout<<A[j]<<"  ";
		cout<<endl;
	}		
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

void array :: intersectionb() {
cout<<"intersected array:"<<"[";
	for (int i=0;i<count;i++) {
		cout<<C[i]<<"\t";
	}
	cout<<"]";

}



int main() {
array obj1, obj2, intersection;
obj1.read();
obj1.dis();
obj1.readb();
obj1.disb();
obj1.intersection();
obj1.intersectionb();
}


