#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0);cin.tie(0)
void solve(int array[],int n)
{
    int start=0;
    int end=n-1;
    for (int i = 0; i < n; i++)
    {
        if(array[i]==0)
        {
            swap(array[i],array[start++]);
        }
    }
    
    for (int i=n-1;i>=0;i--)
    {
        if(array[i]==2)
        {
            swap(array[i],array[end--]);
        }
    }
    
    
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
    solve(array,n);
    for (int i = 0; i < n; i++)
    {
        cout<<array[i]<<" ";
    }
    return 0;
}
