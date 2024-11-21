#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Input Row : "; cin>>n; // អ្នកប្រើបញ្ចូលចំនួនជួរដេកសម្រាប់លំនាំ
    for(int i = 1; i<=n; i++){ // Loop ដើម្បីបង្កើតជួរដេកនីមួយៗ
        for(int k=n-i; k>0; k--){ // Loop ដើម្បីបោះពុម្ពសន្លឹក (spaces) 
            cout<<" "; 
        }
        for(int j=1; j<=i; j++){ // Loop ដើម្បីបោះពុម្ពសញ្ញាថ្មីស្ទើ (*)
            cout<<"*";
        }
        cout<<endl; // ផ្លាស់ទៅជួរដេកបន្ទាប់
    }
    return 0;
}
