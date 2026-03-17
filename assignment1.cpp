#include<iostream>
using namespace std;

class array{

private:
		int A[10],B[10],C[10],D[10],E[10],U[10], n,m,r,s,k;	
		int count=0;
public:
		void read();
		void dis1();
		void dis2();
		void dis3();
		void dis4();
		void intersection1();
		void Union();
		void difference();
};

void array :: read() {
    cout << "Enter the number of students in Coding Contest: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "Enter Roll no of participants: ";
        cin >> A[i];
    }

    cout << "Enter the number of students in Project Competition: ";
    cin >> m;
    for (int j = 0; j < m; j++) {
        cout << "Enter Roll no of participants: ";
        cin >> B[j];
    }
    
    cout << "Enter the number of students in Paper Presentation: ";
    cin >> r;
    for (int i = 0; i < r; i++) {
        cout << "Enter Roll no of participants: ";
        cin >> C[i];
    }

    cout << "Enter the number of students in Mastermind: ";
    cin >> s;
    for (int j = 0; j < s; j++) {
        cout << "Enter Roll no of participants: ";
        cin >> D[j];
    }
}

void array ::dis1() {
    cout << "students in Coding Contest: ";
    cout<<"[ ";
    for (int i = 0; i < n; i++) {
        cout << A[i] << " ";
    }
    cout<<"]";
    cout << endl;
}
void array :: dis2() {
    cout << "students in Project Competition:";
     cout<<"[ ";
    for (int j = 0; j < m; j++) {
        cout << B[j] << " ";
    }
     cout<<"]";
    cout << endl;
    }
void array :: dis3() {
    cout << "students in Paper Presentation: ";
    cout<<"[ ";
    for (int i = 0; i < r; i++) {
        cout << C[i] << " ";
    }
    cout<<"]";
    cout << endl;
}
void array :: dis4() {
    cout << "students in Mastermind: ";
    cout<<"[ ";
    for (int j = 0; j < s; j++) {
        cout << D[j] << " ";
    }
    cout<<"]";
    cout << endl;
}

void array :: intersection1() {
	for(int i=0; i<n; i++){
		for(int j=0; j<m; j++){
			if(A[i]==B[j]){
				E[k]=A[i];
				k=k+1;
				count++;
			
			}
		}		
}
cout << "Intersection array: ";
cout<<"[ ";
        for (int k = 0; k < count; k++) {
            cout << E[k] << " ";
        }
        cout<<"]";
        cout << endl;
}

void array :: Union() {
	int j;
	for(int i=0;i<n;i++) {
		U[i]=A[i];
	}
	for(int i=n;i<m+n;i++) {
		for(int j=0; j<m; j++) {
		U[i]=B[j];
		i=i+1;
	}
	for(int i=n;i<m+n+s;i++) {
		for(int j=0; j<s; j++) {
		U[i]=D[j];
		i=i+1;
	}
		
}	


cout<<"Union  is: [  ";
for(int i=0;i<m+n;i++) {
	if(U[i]==-999) {
	}
	else{
	cout<<U[i]<<"  ";
	}
}
cout<<"]";
}
}

void difference() {}









int main() {
array obj1;
obj1.read();
int choice;

 
while(true) {
        cout <<"\nMenu:\n";
        cout<<"1.Participants in Coding Contest.\n";
        cout<<"2.Participants in Project Compition.\n";
        cout<<"3.Participants in Paper Presentation.\n";
        cout<<"4.Participants in Mastermind.\n";
        cout <<"5. Participants who have participated in Coding and Project both.\n"; 
        cout <<"6. Participants who have participated in Coding, Mastemind and Project.\n"; 
        cout <<"7. Participated in Coding but not in Mastermind.\n";
        cout<<"8. Exit";
        cout << "Enter your choice: ";
        cin >> choice;
        
  switch (choice) {
  	case 1:	   
                obj1.dis1();
                break;    
         case 2:	   
                 obj1.dis2();
                break;    
	case 3:	   
                 obj1.dis3();
                break;
         case 4:	   
                 obj1.dis4();
                break;                     
	case 5:	   
                obj1.intersection1();
                break;        
	case 6:
		obj1.Union();
		break;
	case 7:
		obj1.difference();	
	case 8:		
                return 0;
                
}

}
}                




