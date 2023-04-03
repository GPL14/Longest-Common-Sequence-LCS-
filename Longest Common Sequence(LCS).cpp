#include <iostream>
#include <fstream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int maxLength = 0;
string maxs = "";

void lcs(string S1, string S2) {

  int n = S1.size();
  int m = S2.size();

  vector < vector < int >> dp(n + 1, vector < int > (m + 1, 0));


  for (int ind1 = 1; ind1 <= n; ind1++) {
    for (int ind2 = 1; ind2 <= m; ind2++) {
      if (S1[ind1 - 1] == S2[ind2 - 1])
        dp[ind1][ind2] = 1 + dp[ind1 - 1][ind2 - 1];
      else
        dp[ind1][ind2] = max(dp[ind1 - 1][ind2], dp[ind1][ind2 - 1]);
    }
  }

  int len = dp[n][m];
  int i = n;
  int j = m;

  int index = len - 1;
  string str = "";
  for (int k = 1; k <= len; k++) {
    str += "$"; // dummy string
  }

  while (i > 0 && j > 0) {
    if (S1[i - 1] == S2[j - 1]) {
      str[index] = S1[i - 1];
      index--;
      i--;
      j--;
    } else if (dp[i - 1][j] > dp[i][j - 1]) {
      i--;
    } else{ j--; }
  }

  if(maxLength < dp[n][m]){
  	maxLength = dp[n][m];
  	maxs = str;
  }

  cout << "Subsequence : " << str;
  cout << " Length : " << dp[n][m];
  cout << endl;
}


int main(){
	ifstream text_file("dna.txt");

	if(!text_file){
		cout << "File not created";
	}
	else{
		vector<string> data;

		string row_data;

		while(getline(text_file, row_data)){
			data.push_back(row_data);
		}

	    for(int i=0;i<data.size()-1;i++){
	    	for(int j=i+1;j<data.size();j++){

	    		cout << "For string " << i+1 << " and " << j+1 << " lcs :" << endl;
	    		cout << endl;
	    		lcs(data[i], data[j]);
	    		cout << endl;
			}
		}

		cout << "The longest subsequence of these pair is :" << maxs << endl;
		cout << "Length :" << maxLength << endl;
		text_file.close();

		return 0;
    }

}
