#include<stdio.h>
#include<iostream>
//sirve para encontrar numeros primos en un rango dado

using namespace std;

int main(){

    int n;//indicates how many prime numbers we are going to look for
    n=20;
    int criba[n];

    for(int i=0;i<n;i++)criba[i]=0;

    for(int i=2;i<n;i++)
    {
        for(int j=2;i*j<n;j++)
        {
            criba[i*j]=1;
        }
    }


    for(int i=2;i<n;i++)
    {
        if(criba[i]==0)
        {
            cout<<i<<endl;
        }
    }

    return 0;
}




















