#include<iostream>
#include<thread>
#include<chrono>
using namespace std;
using namespace std::chrono;
typedef unsigned long long ull;

ull OddSum = 0;
ull EvenSum = 0;

void findEven(ull start,ull end){
    for(ull i = start;i <= end;i++){
        if(!(i & 1)){
            EvenSum += i;
        }
    }
}

void findOdd(ull start,ull end){
    for(ull i = start;i <= end;i++){
        if(i & 1){
            OddSum += i;
        }
    }
}

int main(){
    ull start = 0,end = 1900000000;

    auto startTime = high_resolution_clock::now();

    thread t1(findEven, start, end);
    thread t2(findOdd, start, end);

    t1.join();  // Joining the t1 and t2 thread with main thread
    t2.join();
 
    // findOdd(start,end);
    // findEven(start,end);

    auto endTime = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(endTime - startTime);

    cout<<"OddSum = "<<OddSum<<endl;
    cout<<"EvenSum = "<<EvenSum<<endl;

    cout<<"Duration = "<<duration.count() / 1000000<<endl;

    return 0;
}