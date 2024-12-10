#include<stdio.h>

int factorialusingrecursion(int n){
    if(n == 0 ){
        return 1;
    }
    return n * factorialusingrecursion (n-1);
    
}


int factorialusingIterative(int n){
    int res = 1;
    for(int i =2;i<=n;i++){
        res*= i;
    }

    return res;
}
int main(){
    int num = 6;
    printf("Factorial of %d using Recursion is: %d\n", num, factorialusingrecursion(num));
    printf("Factorial of %d using Iteration is: %d\n", num, factorialusingIterative(num));
    return 0;
}