#include<bits/stdc++.h>
using namespace std;
/*
The famous store "Second Food" sells groceries only two days a month. And the prices in each of days differ. You wanted to buy n
 kilos of potatoes for a month. You know that on the first day of the month 1
 kilo of potatoes costs a
 coins, and on the second day b
 coins. In "Second Food" you can buy any integer kilograms of potatoes.

Fortunately, "Second Food" has announced a promotion for potatoes, which is valid only on the first day of the month — for each m
 kilos of potatoes you buy, you get 1
 kilo as a gift! In other words, you can get m+1
 kilograms by paying for m
 kilograms.

Find the minimum number of coins that you have to spend to buy at least n
 kilos of potatoes.
*/
void solve(){
    int a, b, n, m;
    cin >> a >> b >> n >> m;
    int coin = 0;
    if(a-m >= b){
        while(n > a){
            coin += a;
            n -= 1;
        }
        while(n > 0){
            coin += b;
            n -= 1;
        }
    }
    else{
        while(n > b){
            coin += b;
            n -= 1;
        }
        while(n > 0){
            coin += a;
            n -= 1;
        }
    }
    cout << coin << endl;

}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}