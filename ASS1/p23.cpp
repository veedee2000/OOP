#include<iostream>
#include<stdlib.h>
using namespace std;

class SavingsAccount{

  int ac_no;
  string ac_name;
  float balance;

  public:

  void Savings_set(int ac_no, string ac_name, float balance){
      this -> ac_no = ac_no;
      this -> ac_name = ac_name;
      this -> balance = balance;
  }

  void withdraw(float val){
      if(balance - val < 1000){
          cout<<"Invalid operation"<<endl;
      }
      else{
          balance -= val;
      }
  }

  void deposit(float val){
      balance += val;
  }

  void interest(float val){
      balance += (val * balance) / 100;
  }

  void disp(){
      cout<<"Name - "<<ac_name<<" Account number - "<<ac_no<<" Balance = Rs"<<balance<<endl;
  }

};

int main(){

    string name[900];

    for(int i=0;i<26;i++){
        for(int j=0;j<26;j++){
            string s = "";
            s += char('a' + i);
            s += char('a' + j);
            name[i*26 + j] = s;
        }
    }

    SavingsAccount obj[100];
    for(int i=0;i<100;i++){
        obj[i].Savings_set(i+1010, name[i], 1000 + rand()%10000);
    }

    for(int i=0;i < 100;i++){
        obj[i].withdraw(i + rand()%1000);
    }

    for(int i=0;i < 100; i++){
        obj[i].deposit(i + rand()%900);
    }

    for(int i=0;i < 100;i++){
        obj[i].interest(5.1);
    }

    for(int i=0;i < 100;i++){
        obj[i].disp();
    }

    return 0;
}
