#include<bits/stdc++.h>
#define pb push_back
#define mp make_pair
#define pii pair<int, int>

using namespace std;

int main() {
	int n;
	cin >> n;
	int a[n] = {};
	int p[n] = {};
	int used[n] = {};
	vector<pii> sol;
	for (size_t i = 0; i < n; ++i) {
		cin >> a[i];
		used[i] = 0;
	}
	for (size_t i = 0; i < n; ++i) {
		cin >> p[i];
	}
	long long ans = 0;
	for (size_t i = 0; i < n - 2; ++i) {
		if (!(a[i] <= a[i + 1] && a[i + 1] <= a[i + 2]) && !(a[i] >= a[i + 1] && a[i + 1] >= a[i + 2])) {
			ans += !used[i] * p[i];
			ans += !used[i + 1] * p[i + 1];
			ans += !used[i + 2] * p[i + 2];
			used[i] = 1; used[i + 1] = 1; used[i + 2] = 1;
			sol.pb(mp(i, i + 2));
		}
	}

	bool good = 1;
	for (size_t i = 0; i < n - 3; ++i) {
		bool good = 1;
		for (size_t j = i; j <= i + 3 && good; ++j) {
			for (size_t k = j + 1; k <= i + 3 && good; ++k) {
				for (size_t l = k + 1; l <= i + 3 && good; ++l) {
					if ((a[j] <= a[k] && a[k] <= a[l]) || (a[j] >= a[k] && a[k] >= a[l])) {
						good = 0;
					}
				}
			}
		}
		if (!good) continue;
		sol.pb(mp(i, i + 3));
		for (size_t I = i; I <= i + 3; ++I) { ans += !used[I] * p[I]; used[I] = 1; }
	}
	cout << ans << "\n";

	for (size_t i = 0; i < sol.size(); ++i) {
		int l = sol[i].first, r = sol[i].second;
		std::cout << "Subarray [" << l << "; " << r << "] is good.\n";
	}

	return 0;
}
