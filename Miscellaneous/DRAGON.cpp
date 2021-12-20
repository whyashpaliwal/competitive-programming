/*
*author: yashpaliwal
*questions: 
While playing an RPG game, you were assigned to complete one of the hardest quests in this game.
There are n monsters you'll need to defeat in this quest. Each monster i is described with two integer
numbers - poweri and bonusi. To defeat this monster, you'll need at least poweri experience points. If
you try fighting this monster without having enough experience points, you lose immediately. You will
also gain bonusi experience points if you defeat this monster. You can defeat monsters in any order.
The quest turned out to be very hard - you try to defeat the monsters but keep losing repeatedly. Your
friend told you that this quest is impossible to complete. Knowing that, you're interested, what is the
maximum possible number of monsters you can defeat? (Question difficulty level: Hardest)
Input:
The first line contains an integer, n, denoting the number of monsters.
The next line contains an integer, e, denoting your initial experience.
Each line i of the n subsequent lines (where 0 ≤ i < n) contains an integer, poweri, which represents
power of the corresponding monster.
Each line i of the n subsequent lines (where 0 ≤ i < n) contains an integer, bonusi, which represents
bonus for defeating the corresponding monster.
Sample cases:
Input Output Output description
2
123
78
130
10
0
2 Initial experience level is 123 points.
Defeat the first monster having power of 78 and bonus of 10.
Experience level is now 123+10=133.
Defeat the second monster.
3
100
101
100
304
100
1
524
2 Initial experience level is 100 points.
Defeat the second monster having power of 100 and bonus of 1.
Experience level is now 100+1=101.
Defeat the first monster having power of 101 and bonus of 100.
Experience level is now 101+100=201.
The third monster can't be defeated.
*/

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);


struct comp {
    template <typename T>
  
    // Comparator function
    bool operator()(const T& l,
                    const T& r) const
    {
        if (l.second != r.second) {
            return l.second < r.second;
        }
        return l.first < r.first;
    }
};

void sort(map<int, int>& M)
{
  
    // Declare set of pairs and insert
    // pairs according to the comparator
    // function comp()
    set<pair<int, int>, comp> S(M.begin(),
                                   M.end());
  

}

int main()
{
    fast; //fast execution for cp

    int n, e;
    cin>>n>>e;

    int drag[n], bonus[n];

    for (int i = 0; i < n; i++)
    {
        //taking dragon power
        cin>>drag[i];
    }

    for (int i = 0; i < n; i++)
    {
        //taking bonus
        cin>>bonus[i];
    }

    map <int, int> dragBonus;
    
    for (int i = 0; i < n; i++)
    {
        //creating map
        //cout<<"key: "<<drag[i] <<" value: " <<bonus[i]<<endl;
        dragBonus[drag[i]] = bonus[i];   
    }

    //sorting
    sort(dragBonus);

    int count = 0;

    for (auto& it : dragBonus) {  

        if (it.first <= e) {
            e += it.second;
            count++;
        }else{
            //end the loop as we have sorted the map by monster power so no need to move forward. 
            break;
        }
        
    }

    cout<<count<<endl;
         
    return 0;
}