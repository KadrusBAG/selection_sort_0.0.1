#include <iostream>
#include <sstream>
#include <string>

using namespace std;

void read(double *array, unsigned int size){
    string stroka;
    getline(cin, stroka);
    istringstream stream(stroka);
    for(unsigned int i=0; i<size; ++i){
        stream>>array[i];
    }
}

void selection_sort(double *array, unsigned int size){
    for(unsigned int i=0; i<size-1; ++i){
        double min=array[i+1];
        unsigned int k=i+1;
        for(unsigned int j=i+1; j<size; ++j){
            if(array[j]<min){
                min=array[j];
                k=j;
            }
            if(min<array[i]){
                swap(array[i], array[k]);
            }
        }
    }
}

int main(){
    unsigned int size;
    cin>>size;
    cin.get();
    double *array=new double[size];
    read(array, size);
    selection_sort(array, size);
    for(unsigned int i=0; i<size; ++i){
        cout<<array[i]<<" ";
    }
    return 0;
}
