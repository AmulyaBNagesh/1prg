#include <bits/stdc++.h>
using namespace std;
string s;
int n;
int counting(int x)
{
   int count=0;
    if(x==n-2)
    {
        if(s[x]==s[x+1])
        return 1;
        else
        return 0;
    }
    else
    {
        if(s[x]==s[x+1])
        count=1+counting(x+1);
        else
        count=counting(x+1);
    }
    return count;
    
}
int main() {
	// your code goes here
		int t;
        cout<<"enter t"<<endl;
	cin>>t;
	while(t--)
	{
        cout<<"enter n and s"<<endl;
	    
	    cin>>n;
	   // string s;
	    cin>>s;
	    int j,i=0;
	    int count=0;
	    count=counting(0);
	    cout<<count<<endl;
	}

}
