#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int w, h;
	cin >> w >> h;

	auto cut1 = w + h;
	auto cut2 = sqrt(w * w + h * h);

	cout << fixed << setprecision(8) << cut1 - cut2;

	return 0;
}