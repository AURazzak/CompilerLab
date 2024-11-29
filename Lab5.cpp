/*
String to token convert.
input: 2+3*5
output:
2
+
3
*
5

*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,a,b,c;
    cin>>s;

    int n=s.length(),cnt=0;

    char op1,op2;

    for(int i=0;i<n;i++){
        if(s[i] !='+' && s[i] !='-' && s[i] !='/' && s[i] !='*'){
            if (cnt==0){
                a.push_back(s[i]);
            }
            else if(cnt==1){
                b.push_back(s[i]);
            }
        }
            else{
                if(cnt==0){
                    op1=s[i];
                    cnt++;
                }
                else if(cnt==1){
                    op2=s[i];
                    cnt++;
                }
            }
        }
        cout<<a<<endl<<op1<<endl<<b<<endl<<op2<<endl<<c;
    }
