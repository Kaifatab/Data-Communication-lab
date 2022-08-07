#include<bits/stdc++.h>

using namespace std;

int main(){

    string msg,crc,encoded="";
    cout<<"Enter the binary message: ";
    getline(cin,msg);
    cout<<"Enter the divisor: ";
    getline(cin,crc);

    int m = msg.length();
    int n = crc.length();

    encoded += msg;
    for(int i=0;i<n-1;i++){
        encoded += '0';
    }

    //cout<<encoded<<endl;

    for(int i=0;i<=encoded.length()-n;){
        for(int j=0;j<n;j++){
            encoded[i+j] = encoded[i+j]==crc[j]? '0':'1';
        }
        for( ;(i<encoded.length()) && (encoded[i]!='1'); i++);
    }

    cout<<msg+encoded.substr(encoded.length()-n+1)<<endl;

}

/**

Enter the binary message: 101101110
Enter the divisor: 1101
101101110011

*/
