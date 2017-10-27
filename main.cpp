#include <iostream>
#include <sstream>
#include <string>

using namespace std;

bool read(double *array, unsigned int size){
    string stroka;
    getline(cin, stroka);
    istringstream stream(stroka);
    for(unsigned int i=0; i<size; ++i){
        if(!(stream>>array[i])){
            cout<<"error"<<endl;
            return false;
        }
    }
    return true;
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
    if(read(array, size)){
        selection_sort(array, size);
        for(unsigned int i=0; i<size; ++i){
            cout<<array[i]<<" ";
        }
    }
    delete[]array;
    return 0;
}
