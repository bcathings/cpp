#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char s[20];  
    int i,n,c=0;
 
    cout<<"Enter  the string : ";
    cin>>s;
    n= strlen(s);
    for(i=0;i<n/2;i++){
    	if(s[i]==s[n-i-1])
    	c++;
 
 	}
 	if(c==i)
 	    cout<<"string is palindrome";
    else
        cout<<"string is not palindrome";
 
return 0;
}
