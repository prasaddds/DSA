#include<bits/stdc++.h>
using namespace std;
struct Point{
    int x;
    int y;
};
bool myCmp(Point p1,Point p2){
    return p1.x<p2.x;
}
int main(){
    Point arr[]={{3,10},{2,1},{3,5},{10,2}};
    int n=4;
    sort(arr,arr+n,myCmp);
    for(auto abc:arr){
        cout<<abc.x<<" "<<abc.y<<endl;
    }
    cout<<endl;
}
