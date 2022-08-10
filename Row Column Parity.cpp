#include<bits/stdc++.h>

using namespace std;


int main(){

    string s1,s2,s3,s4;
    int a[8], sum=0;
    cout<<"Enter four eight bit binary sequence: "<<endl;
    cin>>s1>>s2>>s3>>s4;
    cout<< "" <<endl;

    int i, c1=0, c2=0, c3=0, c4=0, cnt;

    for(i=0; i<8; i++){
        if(s1[i]=='1')
            c1++;
    }

    cout<< s1 << "  "<< c1%2 <<endl;

    for(i=0; i<8; i++){
        if(s2[i]=='1')
            c2++;
    }

    cout<< s2 << "  "<< c2%2 <<endl;

    for(i=0; i<8; i++){
        if(s3[i]=='1')
            c3++;
    }

    cout<< s3 << "  "<< c3%2 <<endl;

    for(i=0; i<8; i++){
        if(s4[i]=='1')
            c4++;
    }

    cout<< s4 << "  "<< c4%2 <<endl;

    cout<< "" <<endl;
    for(i=0;i<8;i++){
        cnt = 0;
        if(s1[i]=='1')
            cnt++;
        if(s2[i]=='1')
            cnt++;
        if(s3[i]=='1')
            cnt++;
        if(s4[i]=='1')
            cnt++;

        cout<<cnt%2;
        a[i] = cnt%2;
    }

    for(int i=0;i<8;i++){
        sum = sum + a[i];
    }

    cout<<"  "<< sum%2 <<endl;

}
