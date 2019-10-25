#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

struct store { int year; string title; };

store album[26] = { 1967, "DavidBowie", 1969, "SpaceOddity", 1970, "TheManWhoSoldTheWorld", 1971, "HunkyDory",
1972, "TheRiseAndFallOfZiggyStardustAndTheSpidersFromMars", 1973, "AladdinSane",
1973, "PinUps", 1974, "DiamondDogs", 1975, "YoungAmericans", 1976, "StationToStation",
1977, "Low", 1977, "Heroes", 1979, "Lodger", 1980, "ScaryMonstersAndSuperCreeps",
1983, "LetsDance", 1984, "Tonight", 1987, "NeverLetMeDown", 1993, "BlackTieWhiteNoise",
1995, "1.Outside", 1997, "Earthling", 1999, "Hours", 2002, "Heathen", 2003, "Reality",
2013, "TheNextDay", 2016, "BlackStar" };
int main() {
	int n;
	cin >> n;
	while (n--) {
		int a, b, cnt = 0;
		cin >> a >> b;
		for (int i = 0; i < 25; i++) { if (album[i].year >= a && album[i].year <= b) { cnt++; } }
		cout << cnt << '\n';
		for (int i = 0; i < 25; i++)
			if (album[i].year >= a && album[i].year <= b)
				cout << album[i].year << " " << album[i].title << '\n';
	}
	return 0;
}