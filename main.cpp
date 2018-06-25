#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int a,b,c,n,mx=INT_MIN;
    cin>>n>>a>>b>>c;
    for(int i=0;i<=ceil(n/(double)a);i++){
        for(int j=0;j<=ceil(n/(double)b);j++){
                if(a*i+b*j<=n&&(n-a*i-b*j)/(double)c==(n-a*i-b*j)/c){
                    int k=(n-a*i-b*j)/c;
                    mx=max(mx,i+j+k);
                }


        }
    }
    cout<<mx<<endl;
    return 0;
}
