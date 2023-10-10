#include <iostream>
using namespace std;

int main(){

    int sum =0;
    for (int i=1; i<10001;i++){
        if(i%2==1){
            sum += i;
        }
    }
    cout << sum << endl;
}