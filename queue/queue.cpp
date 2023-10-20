#include<iostream>
#include<string>
#include<fstream>
#include<queue>

using namespace std;

void print_queue(queue<int> q); {
	for (int i = 0; i < q.size(); i++)
		cout << q.front() << endl;
	q.push(q.front());
	q.pop();
}