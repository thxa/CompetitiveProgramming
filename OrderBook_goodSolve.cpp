#include<bits/stdc++.h>
#define pp pair<int,int>
using namespace std;
int main()
{
    int n,s,p,q,size;
    char d;
    cin>>n>>s;

    map<int,int> buy;
    map<int,int> sell;

    while(n--) {
        cin >> d >> p >> q;
        if(d=='B') buy[p]+=q;
        else        sell[p]+=q;
    }

    vector<pp> vb;
    vector<pp> vs;

    map<int,int>:: iterator it1=buy.begin();
    while(it1!=buy.end())
    {
        vb.push_back({it1->first,it1->second});
        it1++;
    }

    it1=sell.begin();
    while(it1!=sell.end())
    {
        vs.push_back({it1->first,it1->second});
        it1++;
    }

    sort(vs.begin(),vs.end());
    sort(vb.begin(),vb.end(),greater<pp>());

    while(vs.size()>s) vs.pop_back();
    while(vb.size()>s) vb.pop_back();

    sort(vs.begin(),vs.end(),greater<pp>());

    size=(vs.size()<s)?vs.size():s;
    for(int i=0; i< size; i++)
    {
        cout<<"S "<<vs[i].first<<" "<<vs[i].second<<endl;
    }

    size=(vb.size()<s)?vb.size():s;
    for(int i=0; i<size; i++)
        cout<<"B "<<vb[i].first<<" "<<vb[i].second<<endl;

    return 0;
}
