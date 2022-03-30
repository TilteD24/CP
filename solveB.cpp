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
    
    int n;
    cin >> n;
    vector<int> a(n);
    read(a);
    set<int> s; 

    //sort(a.begin(), a.end());
    map<int,int> mp;
    int ans = 0;
    for(int i = 0;i<n;i++){
        s.insert(a[i]);
        if(mp[a[i]] == 0){
            mp[a[i]] = 1;
            continue;
        }
        mp[a[i]]++;
        /*int ct = 1;
        for(int j = i+1;j<n;j++){
            if(a[j] != a[i])
                break;
            ct++;
        }
        ans += (ct/k) + ct%k;*/
    }

    for(int i = 1;i<=n;i++){
        int ans = 0;
        for(int j : s){
            int freq = mp[j];
            //cout << a[j] << " - " << freq << endl;
            ans += fmin(freq,i);
        }
        cout << ans << " ";
    }
    cout << endl;


    
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
    
}
    





    














