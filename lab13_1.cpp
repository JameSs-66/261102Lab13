#include<iostream>
using namespace std;

int fibonacci(int num); 


int main(){
    int x;
    cin >> x;
    cout << fibonacci(x);
    return 0; 
}

int fibonacci(int num){
    int result = 0;
    if(num == 0) return 0;
    else if(num == 1) return 1;
    else{
        result = fibonacci(num - 1) +  fibonacci(num - 2);
        return result;
}
}
