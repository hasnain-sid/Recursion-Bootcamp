#include"bits/stdc++.h"
using namespace std;

vector<string> ans;
void subsequence(string str,string &x,int i)
{
    // base condition

    if (i == str.size())
    {
        /* code */ans.push_back(x);
        return;
    }
   


   

    subsequence(str, x,i+1);
    x.push_back(str[i]);
    subsequence(str, x,i+1);
    x.pop_back();


}

int main()
{

    
    string str = "abc";
    string output;

    subsequence(str,output,0);

    for(auto it:ans)
        cout << it << endl;


    return 0;
}


// OUTPUT:
// c
// b
// bc
// a
// ac
// ab
// abc