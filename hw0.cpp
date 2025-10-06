#include <iostream>

using namespace std;

void put(double *p_array, int inx, double value, int &n, int size){
    if(inx > n || inx >= size){
        cout<<"Out of bound!"<<endl;
        return;
    }
    for (int i = n; i > inx; i--){
            p_array[i]= p_array[i-1];
    }
    p_array[inx] = value;
    n++;
}

void deleteValue (double *p_array, int inx, int &n, int size){
    if(inx >= n || inx < 0){
        cout<<"Out of bound!"<<endl;
        return;
    }
    for (int i = inx; i < n-1; i++){
        p_array[i]= p_array[i+1];
    }
    n--;
}

int main(){

    double array[100] = {5,4,3,2,1};
    int n = 5;
    double *p_array = array;
    
    put (array, 2, 10, n, 100);
    cout << "Value After inserting : " << endl;
    for (int i = 0; i< n; i++){
        cout << "Value: " << *(p_array+i) << endl;
    }
    deleteValue (array, 1, n, 100);
    cout << "Value after deleting : " << endl;
    for (int i = 0; i< n; i++){
        cout << "Value: " << *(p_array+i) << endl;
    }
    return 0;
}
