#include <iostream>

using namespace std;

int main(void) {
	int n, result, mid, num;
	bool check=false;
	cin >> n;

	for(int i=1;i<n;i++){
		result =i;
		mid = i;
		num = mid;
		while(1){
			result = result + mid%10;
			mid=mid/10;

			if(mid<=0)
				break;
		}

		if(result == n){
			cout<< num;
			check = true;
			break;
		}
	}
	if(check ==0)
	cout << 0;

	return 0;

}
