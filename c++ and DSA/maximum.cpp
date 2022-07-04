#include<bits/stdc++.h>
using namespace std;

#define fastio ios_base::sync_with_stdio(0);cin.tie(0)
int maxi1(int array[],int n)
{
    int maximum =INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(array[i]>maximum)
        {
            maximum=array[i];
        }
    }
    return maximum;
}
int maxi2(int array[],int n)
{
    int maximum =INT_MIN;
    int first=maxi1(array,n);
    for(int i=0;i<n;i++)
    {
        if(array[i]>maximum && array[i]!=first)
        {
            maximum=array[i];
        }
    }
    return maximum;
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
    cout<<maxi1(array,n);
    cout<<endl;
    cout<<maxi2(array,n);
    return 0;
}
