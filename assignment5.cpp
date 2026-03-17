//QUICK SORT//


#include <iostream>
using namespace std;

class QuickSort {
private:
    int* A;  
    int size; 

    void swap(int &x, int &y) {
        int temp = x;
        x = y;
        y = temp;
    }

    int partition(int low, int high) {
        int pivot = A[low];
        int i = low + 1;
        int j = high;

        while (true) {
            while (i <= high && A[i] < pivot)
                i++;
            
            while (j > low && A[j] > pivot)
                j--;

            if (i >= j)
                break;
            
            swap(A[i], A[j]);
        }

        swap(A[low], A[j]);
        return j;
    }

    void qsort(int low, int high) {
        if (low < high) {
            int j = partition(low, high);
            qsort(low, j - 1);
            qsort(j + 1, high);
        }
    }

public:
    QuickSort() : A(nullptr), size(0) {} 

    ~QuickSort() {
        delete[] A; 
    }

    void read() {
        cout << "Enter the number of elements: ";
        cin >> size;

        
        A = new int[size];

        cout << "Enter elements: ";
        for (int i = 0; i < size; i++)
            cin >> A[i];
    }

    void sort() {
        if (size > 0) {
            qsort(0, size - 1);
        }
    }

    void display() {
        if (size > 0) {
            cout << "Sorted array is: ";
            for (int i = 0; i < size; i++)
                cout << A[i] << " ";
            cout << endl;
        } else {
            cout << "No elements to display." << endl;
        }
    }
};

int main() {
    QuickSort qs;

    qs.read();
    qs.sort();
    qs.display();

    return 0;
}

/*hp@hp:~/B3_56$ g++ qs.cpp
hp@hp:~/B3_56$ ./a.out
Enter the number of elements: 7
Enter elements: 12
50
100
4
96
10
1
Sorted array is: 1 4 10 12 50 96 100 
hp@hp:~/B3_56$*/






