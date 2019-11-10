#include<iostream>
using namespace std;


class IntArray{
    int size;
    int *array;
    public:
        IntArray(size_t size){
            array = new int[size];
            this -> size = size;
        }

        int& operator [](int i){
            return array[i];
        }

        friend ostream& operator <<(ostream&,IntArray&);

};

ostream& operator <<(ostream& output,IntArray& c){
    for(int i = 0;i < c.size;i++) output<<c.array[i]<<" ";
    return output;
}

int main() {
    IntArray i(10); 
    for(int k = 0; k < 10; k++) 
        i[k] = k;
    cout << i; 
    return 0;
}
