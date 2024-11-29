/*input:
    S->aBDh|xN|h
output:
    First(S)={a,x,h}
    */

#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;

    getline(cin,s);

    int siz=s.size();
    string res;

    int j=0;
     cout<<"First("<<s[0]<<")={";
    for(int i=0;i<siz;i++){
        if (s[i]=='>'){
                res+=s[i+1];
                j++;

        }
        else if(s[i]=='|'){
            res+=s[i+1];
            j++;
        }
    }
    for(int j=0;j<res.size();j++){
        cout<<res[j];
        if(j<res.size()-1){
            cout<<",";
        }
    }


    cout<<"}";

}
