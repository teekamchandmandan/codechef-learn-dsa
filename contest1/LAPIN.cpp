# include <iostream>
# include <unordered_map>
using namespace std;

string isLapin(string testString){
    unordered_map <char,int> freq;
    int size = testString.size();

    for(int i=0; i<size/2 ;i++){
        freq[testString[i]]++;
        freq[testString[size-i-1]]--;
    }
    for(auto elem: freq){
        if(elem.second !=0){
            return "NO";
        }
    }    
    return "YES";
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    string str;
    cin>>T;
    while(T--){
        cin>>str;
        cout<<isLapin(str)<<endl;
    }
return 0;
}


