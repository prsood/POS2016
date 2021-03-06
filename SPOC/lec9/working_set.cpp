#include <iostream>

#define T_MAX 10
#define PAGE_MAX 26

using namespace std;

int access_page[T_MAX];
int refer[PAGE_MAX];

int main() {
	char page;
	int t;

	cout << "Window size = ";
	cin >> t;
	for (int i = 0; i < t; ++i) {
		access_page[i] = -1;
	}

	int ptr = 0;
	int step = 0;
	int hit = 0;
	while (1) {

		// access a page
		cout << endl << "Time " << step << " Access page: ";
		page = 0;
		while (page <= ' ') {
			cin >> page;
		}
		if ((page >= 'A') && (page <= 'Z')) {
			page += 'a' - 'A';
		}
		if ((page < 'a') || (page > 'z')) {
			break;
		}
		page -= 'a';
		step++;

		// swap in
		if (refer[page] <= 0) {
			cout << "Page Fault!" << endl;
			cout << "Swap in page " << (char) (page + 'a') << endl;
		}
		else {
			hit++;
		}
		refer[page]++;

		// swap out
		int page_out = access_page[ptr];
		if (page_out >= 0) {
			refer[page_out]--;
			if (refer[page_out] <= 0) {
				cout << "Swap out page " << (char) (page + 'a') << endl;
			}
		}

		// print the state of resident set
		access_page[ptr] = page;
		ptr = (ptr + 1) % t;
		cout << "Resident set =";
		for (int i = 0; i < PAGE_MAX; ++i) {
			if (refer[i]) {
				cout << ' ' << (char) (i + 'a');
			}
		}
		cout << endl;
	}
	cout << endl << "Hits = " << hit << endl << "Misses = " << step - hit << endl << "Hit rate = " << (double) hit / step << endl;
	return 0;
}
