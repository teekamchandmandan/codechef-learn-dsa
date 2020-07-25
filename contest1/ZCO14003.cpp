# include <iostream>
# include <algorithm>
using namespace std;

# define CAPACITY 500005
int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, budget[CAPACITY];
    long long int maxProfit=0;

    cin>>N;
    for(int i=0; i<N; i++){
        cin>>budget[i];
    }
    sort(budget,budget+N);

    for(int i=0; i<N; i++){
        maxProfit = max(maxProfit, ((long long int)(N-i)) *budget[i]);
    }
    cout<<maxProfit<<endl;

return 0;
}