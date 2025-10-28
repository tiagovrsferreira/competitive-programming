#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main() {
    int t;

    cin >> t;
    for(int i = 0; i < t; i++) {
        int n;

        cin >> n;

        vector<int> a;
        int odd = 0;
        int sum = 0;
        int less = INT_MAX;

        for(int j = 0; j < n; j++) {
            int temp;
            cin >> temp;
            a.push_back(temp);
            

            if(temp < less) less = a[n];
            if(temp%2 != 0) odd++;
        }

        if(!odd) {
            cout << 0 << "\n";
        }else{
            int remove;
            remove = odd / 2;

            for(int j = 0; j < remove; j++) {
                auto less = min_element(a.begin(), a.end());
                a.erase(less);
            }

            for(int j = 0; j < a.size(); j++) {
                sum += a[j];
            }
            cout << sum << "\n";
            sum = 0, odd = 0;
            a.clear();
        }
    }
}