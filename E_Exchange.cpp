#include <bits/stdc++.h>
using namespace std;

int minQuest(float n,float a,float b){
    if(a>b){
        return 1;
    }
    else{
        return ceil(n/a);
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        float n, a, b; 
        cin >> n >> a >> b;

        cout << minQuest(n, a, b) << endl;
    }

return 0;
}
 