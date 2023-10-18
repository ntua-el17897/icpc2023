#include <iostream>
#include <set>
#include <string>
#include <vector>
#include <tuple>
#include <algorithm>
using namespace std;

bool comperator(tuple<string, float, float> a, tuple<string, float, float> (b)){
	return get<2>(a) > get<2>(b);
}



int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	std::vector<tuple<string, float, float>> input;
	string input_current;
	float x, y;
	tuple<string, float, float> current_tuple;
	vector<string> ans;

	cin >> n;

	for (int i = 0; i < n; ++i) {
		cin >> input_current >> x >> y;
		current_tuple = make_tuple(input_current, x, y);
		input.push_back(current_tuple);
	}

	sort(input.begin(), input.end(), comperator);

	

	for(int i = 0; i < n; ++i){
		cout << get<0>(input[i]) << " " 
		<< get<1>(input[i]) << " "
		<< get<2>(input[i]) 
		<< endl;
	}
	return 0;
}