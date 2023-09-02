#include <iostream>
#include <map>

using namespace std;

int main()
{
    map<int, string> m; // map<key datatype, value data type> m

    m[1] = "Roronoa";
    m[13] = "Zoro";
    m[2] = "Mosshead";

    m.insert({5, "santoryu"});

    cout<<"Before erase"<<endl;
    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"Finding -13 "<<m.count(-13)<<endl;

   // m.erase(13);
    cout<<"After erase"<<endl;
    for(auto i:m)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }cout<<endl<<endl;

    auto it = m.find(5);

    for(auto i = it; i!=m.end() ; i++)
    {
        cout<<(*i).first<<endl;
    }

    return 0;
}