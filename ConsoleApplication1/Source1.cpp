#include <iostream>

using namespace std;

class A {
public:
	static int cnt;
	A() {
		cout << "A counstrc" << " ";
		cnt++;
	}
	~A() {
		cout << "A destruct" << " ";
		cnt++;
   }
};

struct String {
public:
	String() {
		cout << "A constructor" << " ";
		
 }
	~String() {
		cout << "A destructor" << " ";
	}

};
class autocar {

};

int main() {
	
	
	system("pause");
	return 0;
}