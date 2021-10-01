#include <iostream>
#include <cmath>
using namespace std;
int KTSNT (int n) {
    if (n < 2) return 0;
    int count = 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            count++;
        }
    }
    if(count == 0){
        return 1;
    }else{
        return 0;
    }
}
int tinh(int n,int m)
{
    if(n == 0)return 1;
    int sum = 0;
    for(int i = m+1 ; i <= n ; i++){
        sum += tinh(n%i,i);
    }
        
        return sum;
}
int main()
{
    int n;
    cin >>n;
    if (KTSNT(n)) {
        cout << tinh(n,1); 
    }
    else {
        cout << tinh(n,1)+1;
    }
    system("pause");
}