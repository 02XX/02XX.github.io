#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n, k, d;
    cin >> n >> k >> d;
    vector<int> favor_value(n);
    vector<int> adopt_value(n);
    vector<int> feed_value(n);
    for(int j = 0; j < n; j++)
    {
        cin >> favor_value[j];
    }
    for(int j = 0; j < n; j++)
    {
        cin >> adopt_value[j];
    }
    for(int j = 0; j < n; j++)
    {
        cin >> feed_value[j];
    }

    //找出领养
    vector<int> adopt_best;
    for(int i = 0; i < n; i++)
    {
        if(k >= adopt_value[i])
        {
            adopt_best.push_back(favor_value[i]);
        }
    }
    //找出喂养
    vector<int> feed_best;
    for(int i = 0; i < n; i++)
    {
        if((d / n) * (i + 1) >= feed_value[i])
        {
            feed_best.push_back(favor_value[i]);
        }
    }
    return 0;
}