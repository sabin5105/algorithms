#include<iostream>

using namespace std;
int main()
{
	int	phour[24], pmin[60], psec[60], lhour[24], lmin[60], lsec[60],hour[24],min[60],sec[60];
	for (int i = 0; i < 3; i++) {
		cin >> phour[i] >> pmin[i] >> psec[i] >> lhour[i] >> lmin[i] >> lsec[i];
		min[i] = lmin[i] - pmin[i];
		sec[i] = lsec[i] - psec[i];
		hour[i] = lhour[i] - phour[i];
		if (sec[i] > 59) {
			min[i] += sec[i]/60;
			sec[i] = sec[i] % 60;
		}
		if (sec[i] < 0) {
			min[i]--;
			sec[i] += 60;
		}
		if (min[i] > 59) {
			hour[i] += min[i] / 60;
			min[i] = min[i] % 60;
		}
		if (min[i] < 0) {
			hour[i]--;
			min[i] += 60;
		}
		cout << hour[i] << " " << min[i] << " " << sec[i] << "\n";
	}
}