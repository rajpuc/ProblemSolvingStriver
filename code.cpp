//Problem Link: https://www.naukri.com/code360/problems/sum-of-all-divisors_8360720?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=SOLUTION

#include<bits/stdc++.h>
using namespace std;


int sumOfDivisors(int n){
	int sum = 0;
	int temp=n;
	while(n>0){
		sum += n*(temp/n) ;
		n--;
	}
	return sum;
}


int main(){

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

// start writing code here:
int n;
cin>>n;

cout<< sumOfDivisors(n)<<endl;

}



                            


                            
                        