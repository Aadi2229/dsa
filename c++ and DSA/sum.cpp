#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0);cin.tie(0)
int add(int array[],int n)
{
    int total=0;
    for(int i = 0; i < n; i++){
        total+=array[i];
    }
    return total;
}
int32_t main()
{
    fastio;
    int n;
    cin >> n;
    int array[n];
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }
    cout<<add(array,n);
    return 0;
}
