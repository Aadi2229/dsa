#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0);cin.tie(0)
void reverse(int array[],int n)
{
    int start=0;
    int end=n-1;
    while(start<end)
    {
        swap(array[start++],array[end--]);
    }
    for(int i=0;i<n;i++)
    {
        cout<<array[i]<<" ";
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

    reverse(array,n);
    return 0;
}
