#include<iostream>
#include<cstring>
using namespace std;

int main(){
	int i, j, count;
	cout<<"Enter total number of stings : ";
	cin>>count;
	char strs[100], sortedStrs[100], *tempVar[100];
	for(i = 0; i < count; i++){
		cout<<"Enter sting: ";
        cin>>strs[i];
	    strs[i] = coutnk
	}
	for(i = 0; i < count - 1; i++){
		for(j = i+1; j < count; j++){
            str = &sortedStrs[j];
            srtstr = &sortedStrs[i];
			if(strcmp(srtstr, str) > 0){
				strcpy(tempVar, srtstr);
				strcpy(srtstr, str);
				strcpy(str, tempVar);
			}
		}
	}
	cout<<"Sorted strings:";
	for(i = 0; i < count; i++){
		cout<<sortedStrs[i]<<endl;
	}
    return 0;
}
