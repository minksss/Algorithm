#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool visit[500000];

int main(){
    int n, m;
    cin  >> n >> m;
    int sum = n+m;
    int count;

    string allList[sum];
    for(int i=0; i<sum; i++){
        cin >> allList[i];
    }
    
    sort(allList,allList+n);
    sort(allList+n+1,allList+sum);

    
    for(int i=0; i<n; i++){
        for(int j=n+1; j<sum; j++){
            if(allList[i].compare(allList[j]) == 0){
                 visit[i] = true;
                 count++;
            }
        }
    }

    cout << count << endl;

    //sort(allList,allList+sum);
    for(int i=0; i<sum; i++){
        if(visit[i]==true){
            cout << allList[i]<<endl;
        }
    }

    return 0;

}