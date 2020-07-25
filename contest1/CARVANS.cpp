# include <iostream>
# include <algorithm>
# include <limits.h>
using namespace std;

# define CAPACITY 500005
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T, N, nextCarSpeed, maxAllowedSpeed, result;
    cin>>T;

    while(T--){
        cin>>N;
        maxAllowedSpeed = INT_MAX;
        result = 0;
        for(int i=0; i<N; i++){
            cin>>nextCarSpeed;
            if(nextCarSpeed <= maxAllowedSpeed){
                result++;
            }
            maxAllowedSpeed = min(nextCarSpeed, maxAllowedSpeed);
        }
        cout<<result<<endl;
    }

return 0;

}