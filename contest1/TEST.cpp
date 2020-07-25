# include <iostream>
using namespace std;

int main(){

ios_base::sync_with_stdio(false);
cin.tie(NULL);

    int num;
    while(1){
        cin>>num;
        if(num==42){
            break;
        }
        cout<<num<<endl;
    }
    return 0;
}