#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<string,int> m;
    m.insert({"abc",2});
    m.insert({"def",3});
    for(auto it=m.begin();it!=m.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
    cout<<"Using second method"<<endl;
    for(auto x:m){
        cout<<x.first<<" "<<x.second<<endl;
    }
    if(m.find("abc")!=m.end()){
        cout<<"key found"<<endl;
    }
    else{
        cout<<"key not found"<<endl;
    }
    auto it=m.find("abc");
    if(it!=m.end()){
        cout<<it->second<<endl;
    }
    else{
        cout<<"Key not found"<<endl;
    }
    cout<<m.count("abc")<<endl;
    cout<<m.size()<<endl;
    m.erase(m.begin());
    m.erase(m.begin(),m.end());
}
