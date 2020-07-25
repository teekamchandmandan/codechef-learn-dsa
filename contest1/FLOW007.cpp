# include <iostream>
# include <string>
using namespace std;

int rev(string num){
    int reverseNum = 0, powerOfTen = 1;
    for(int i=0; i<num.size(); i++){
        reverseNum += ( (int)(num[i]-'0') * powerOfTen);
        powerOfTen *= 10;
    }
    return reverseNum;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    string N;
    cin>>T;
    while(T--){
        cin>>N;
        cout<<rev(N)<<endl;
    }


return 0;
}