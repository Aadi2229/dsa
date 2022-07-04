#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0);cin.tie(0)
int unique(int array[],int n)
{
    int ans=0;
    for(int i = 0; i < n; i++)
    {
        ans^=array[i];
    }
    return ans;
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

    cout<<unique(array,n);
    return 0;
}
