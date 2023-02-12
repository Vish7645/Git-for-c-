#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string a,b;
        cin>>a>>b;

        int sum = 0;
        for (int i = 0; i < n - 1; i++)
        {
            // cout<<"ok"<<endl;
            if(a[i]=='0' && b[i]=='0'){
                sum+=1;
            }
            else if (a[i] == b[i] && a[i + 1] != b[i + 1])
            {
                
            }
            else if (a[i] == b[i] && a[i + 1] == b[i + 1] && a[i] != a[i + 1])
            {
                if (a[i] == '0' || a[i + 1] == '0')
                {
                    if (a[i] == '2' || a[i + 1] == '2')
                    {
                        sum += 1;
                    }
                    else
                    {
                        sum += 2;
                    }
                }
                cout<<"OK 2 sum --> "<<sum<<" "<<i<<endl;
                i++;
            }
            else if (a[i] != b[i])
            {
                if (a[i] == '0' || b[i] == '0')
                {
                    if (a[i] == '2' || b[i] == '2')
                    {
                        sum += 1;
                    }
                    else
                    {
                        sum += 2;
                    }
                }
                // cout<<"OK  3 sum --> "<<sum<<endl;
                
            }
        }
        if (a[n - 1] == b[n - 1])
        {
            if (a[n - 1] == '0')
            {
                sum += 1;
            }
        }
        else if()
        cout << sum << endl;
    }

    return 0;
}