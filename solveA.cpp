#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
#define pb push_back

ll mod = 1e9+7;

bool isVowel(char a){
    if(a == 'a' || a == 'e' || a == 'i' ||a == 'o' || a == 'u')
    return 1;
    else return 0;
}

int countDigits(int n){
    int ct = 0;
    while(n){
        n = n/10;
        ct++;
    }
    return ct;
}

bool isSubsetSum(int *arr,int n,int sum){

        if(n != 0 && sum == 0) // base case #1
        return 1;
        
        if(n<=0 && sum != 0)   // base case #2
        return 0;

        return isSubsetSum(arr,n-1,sum-arr[n-1]) || isSubsetSum(arr,n-1,sum); 
                                // included           // excluded

}

template<typename S> 
void read(S &arr){
    for(typename S::iterator i = arr.begin();i != arr.end(); ++i)
        cin >> *i;
}
template<typename T>
void write(T &arr){
    for(typename T::iterator i = arr.begin();i != arr.end(); ++i)
        cout << *i << " ";
    cout << endl;
}

void solve(){
    
    

}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long int a = 100000;
    long int b = 100000;
    long int c = a*b;
    //cout << c << endl;
    cout << sizeof(a) << endl;
    return 0;
    
}
    





    














