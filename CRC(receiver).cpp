#include<bits/stdc++.h>

using namespace std;

int main(){

    string crc, encoded;
    cout<<"Enter the message: ";
    getline(cin,encoded);
    cout<<"Enter the divisor: ";
    getline(cin,crc);
    int n = crc.length();


    for(int i=0; i<=encoded.length()-n; ){
        for(int j=0; j<n; j++)
            encoded[i+j] = encoded[i+j]==crc[j]?'0':'1';
        for( ;i<encoded.length() && encoded[i]!='1' ; i++);
    }

    for(char i:encoded.substr(encoded.length()-n)){
        if(i!='0'){
            cout<<"Error in message..."<<endl;
            return 0;
        }
    }

    cout<<"No error!"<<endl;

}

/**

Enter the message: 101101110011
Enter the divisor: 1101
No error!

*/
