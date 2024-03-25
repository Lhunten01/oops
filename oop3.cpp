#include<bits/stdc++.h>
using namespace std;
class B{
    public:
    int a;
    double b;
    char c;
};
class A{
    int a;
    char b;
};
int main(){
    cout<<"class size of B"<<sizeof(B)<<endl;
    cout<<"class size of A"<<sizeof(A)<<endl;
    return 0;
}