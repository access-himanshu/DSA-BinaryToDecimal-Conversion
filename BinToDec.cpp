#include <iostream>
using namespace std;

int BinToDec(int n){
    int ans=0;
    int pow=1;

    while(n>0){
        int rem=n%10;
        ans+=rem*pow;

        n=n/10;
        pow=pow*2;
    }
    return ans;
}
int main(){
    cout<<BinToDec(10111)<<endl;

    return 0;

}