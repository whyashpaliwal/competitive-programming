/**
 * author: yashp 
 * program to print words in lexographical order if they apperar 
 * in the sentance more than equals to N times
 * 
 * 
 * Input :
 * Line 1 : Space seperated string "str"
 * Line 2 : minimum number of occurences "n" 
 * 
 * Sample:
 * cat batman latt matter cat matter cat cat latt latt
 * 3
 * 
 * Output:
 * cat latt 
 * 
 */
#include <bits/stdc++.h>
using namespace std;


int countOccurrences(vector<string> a,
					string word)
{
	// search for pattern in a
	int c = 0;
	for (int i = 0; i < a.size(); i++){
        if (word == a[i])
            c++;
    }
		
	return c;
}

int main()
{
    string str;
    vector<string> strVect;
    vector<string> finalAns;
    int n;

    getline(cin, str);
    cin>>n;

    istringstream iss(str);
    
    for(string s;iss>>s;)
        strVect.push_back(s);

    int len = strVect.size();





    for(int i =0; i < len; i++){
        
        string temp = strVect[i];
        int countOfTemp = countOccurrences(strVect, temp);

        if(countOfTemp >= n){
            if (std::find(finalAns.begin(), finalAns.end(), temp) != finalAns.end()) {
                continue;
            }
            else {
                //if not in vect then add
                finalAns.push_back(temp); 
            }
           
        }

    }

    //sorting into lexo order
    std::sort(finalAns.begin(), finalAns.end());

    //printing final ans vector
    for (int i = 0; i < finalAns.size(); i++) {
            cout << finalAns[i] << " ";
    }

	return 0;
}

