#include<iostream>
using namespace std;
int main(){

    int arr[10] = {};
    int no[5] = {10, 25, 46, 88, 33};
        //For Finding Modulus and Inserting Element
        for (int i = 0; i < 5; i++)
        {
            int remainder = no[i] % 10;
            arr[remainder] = no[i];
        }

        cout << "Index\tNumber" << "\n";
        for (int i = 0; i < 10;i++){
            cout << i<<"\t"<<arr[i]<<"\n";
        }
        return 0;
}


