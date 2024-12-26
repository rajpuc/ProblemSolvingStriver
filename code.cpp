//Problem Link: https://www.naukri.com/code360/problems/sum-of-all-divisors_8360720?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=SOLUTION

#include<bits/stdc++.h>
using namespace std;


int calculate(int n){
	// cout<<"Running for: "<<n<<endl;
	// if(n<3) return n;

	int sum = 0;
	// cout<<"temp: "<<sqrt(n)<<endl;
	for(int i=1; i <= sqrt(n); i++){
		if(n%i == 0){
			if(i==n/i) sum += i;
			else sum+=i+(n/i);
			// cout<<i<<'-'<<n/i<<'-'<<sum<<endl;
		}
	}

	return sum;
}



int sumOfDivisors(int n){
	int sum = 0;
	while(n>0){
		sum += calculate(n);
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



                            


                            
                        