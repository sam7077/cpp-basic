#include<stdio.h>
using namespace std;
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    long long fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    printf("%lld\n",fact);
}