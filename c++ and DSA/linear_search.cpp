#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0);cin.tie(0)
bool find(int array[],int n,int x)
{
    for (int i = 0; i < n; i++)
    {
        if(array[i]==x)
        {
            return true;
        }
    }
    return false;
}
int32_t main()
{
    fastio;
    int n,x;
    cin >> n;
    int array[n];
    for(int i = 0; i < n; i++){
        cin >> array[i];
    }
    cin>>x;
    cout<<find(array,n,x);
    return 0;
}
