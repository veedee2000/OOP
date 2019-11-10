#include<iostream>
using namespace std;

class Table{
    int x,y;
    int **a;
    public:
        Table(int x,int y){
            this -> x = x;
            this -> y = y;
            a = new int[x][y];
        }

        friend istream& operator >> (istream&,Table&);

        int& operator [](int i,int j){
            return a[i][j];
        }

        
        operator int(){
            return a;
        }
};

istream& operator >> (istream& input,Table& t){
    for(int i = 0;i < t.x;i++){
        for(int j = 0;j <t.y;j++){
            input >> a[i][j];
        }
    }
    return input;
}



int main(){

    Table t(4, 5), t1(4, 5);
    cin >> t;
    t[0][0] = 5;
    int x = t[2][3];
    t1 = t;
    cout << t << “\n” << t1;

    return 0;
}