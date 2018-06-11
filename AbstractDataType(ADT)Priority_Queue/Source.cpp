/* контейнер priority queue:
используется в аукционе
методы вектора
элементы расположены как в set
*/
#include"Client.h"
int main() {
	int n;
	cout << "num: ";
	cin >> n;
	switch (n) {
	case 1: {
		priority_queue <int> pq1;
		pq1.push(5);
		pq1.push(6);
		pq1.push(2);
		pq1.push(4);

		while (!pq1.empty()) {
			cout << pq1.top() << endl;
			pq1.pop();
		}
	}break;
	case 2: {
		priority_queue <Client> pq1;
		ifstream in_file("Clients.txt");
		Client cl;
		if (!in_file) {
			cerr << "file open error." << endl;
		}
		else {
			while (!in_file.eof()) {
				in_file >> cl;
				pq1.push(cl);
			}
		}

		while (!pq1.empty()) {
			cout << pq1.top() << endl;
			pq1.pop();
		}

	}break;
	}
	system("pause");
	return 0;
}