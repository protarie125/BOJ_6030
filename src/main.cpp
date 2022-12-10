#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int p, q;
	cin >> p >> q;

	for (auto i = 1; i <= p; ++i) {
		if (0 == p % i) {
			for (auto j = 1; j <= q; ++j) {
				if (0 == q % j) {
					cout << i << ' ' << j << '\n';
				}
			}
		}
	}

	return 0;
}