#include<iostream>
using namespace std;
int main(){
    float a,b;
    cout<<"Enter a and b:=";
    cin>>a>>b;
    bool areequal =(a==b);
    bool isagreater= (a>b);
    bool isbgreater = (a<b);
    cout<<"are they equal"<<areequal<<endl;
    cout<<"is a is greater"<<isagreater<<endl;
    cout<<"is b is greater"<<isbgreater<<endl;
    cout<<"Not equal"<<!areequal<<endl;

    bool third=areequal || isagreater;
    bool fourth =areequal && isagreater;

}