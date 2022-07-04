#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0);cin.tie(0)
void alternate(int array[],int n)
{
    for(int i=0;i<n-1;i+=2)
    {
        swap(array[i],array[i+1]);
    }
    for(int i = 0; i < n; i++){
        cout<< array[i]<<" ";
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
    alternate(array,n); 
    
    return 0;
}
