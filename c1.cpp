#include<bits/stdc++.h>
using namespace std;

//đỏ: 0, trắng: 1, xanh: 2

int main(){
	int n; cin >> n;
	int cnt[3] = {0, 0, 0};
	for(int i = 0; i < n; i++){
		string s; cin >> s;
		if(s == "Red") cnt[0]++;
		else if(s == "White") cnt[1]++;
		else cnt[2]++;
	}
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < cnt[i]; j++){
			if(i == 0) cout << "Red" << ' ';
			else if(i == 1) cout << "White" << ' ';
			else cout << "Blue" << ' ';
		}
	}
	return 0;
}