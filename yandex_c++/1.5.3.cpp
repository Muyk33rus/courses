#include <iostream>

using namespace std;

int main() {
    int n=0,i=1,sq=0;
    cin>>n;
    while(sq<=n){
        if(sq)
            cout<<sq<<endl;
        sq=i*i;
        i++;
    }
    
    return 0;
}
