#include<iostream>
using namespace std;

template <class t>

void selsort( t arr[]) {

    int n;

    cout <<"Enter the no. of element you want to insert:";
    cin >> n;
    cout << "Enter the array elements : ";
    for(int i =0 ; i< n; i++) {
        cin >> arr[i];
    }

    for(int i = 0;i < n; i++) {

        for(int j = i+1 ; j < n ; j++){
            
            if(arr[i] > arr[j] ) {
            
            t temp;
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;

            }

        }
    }

    for(int i =0 ; i < n ; i++ ) {

        cout << arr[i]   << "  ";


    }



}

int main() {

    int arr[10] = { 0};
    double arr1[10] = {0.0};
    char arr2[10] = {'a'};

    int ch = 1 ,choice;

    while(ch != 0) {
        cout << "\nEnter the number for which you want to perform an operation " << endl;
        cout << "0.  EXIt" << endl;
        cout << "1. Sort an Interger array" << endl;
        cout << "2. Sort an float array" << endl;
        cout << "3. Sort an character array" << endl;
        cin >> choice;


        switch(choice) {
            case 0: 
                    ch = 0;
                    break;
            case 1 :

                    selsort(arr);
                    break;
            case 2:
                    selsort(arr1);
                    break;
            case 3:
                    selsort(arr2);
                    break;
            default: 
                    cout <<"wrong choice !!" << endl;
                    break;
        }

    }




    return 0;
}
