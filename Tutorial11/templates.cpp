#include "templates.h"
#include <iostream>

using namespace std;


int main() {

	Matrix<int> m_int;
	m_int.set_element(1, 1, 4);
	cout << "elemnt at 1,1 is " << m_int.get_element(1, 1) << endl;

	Matrix<double> m_doub;
	m_doub.set_element(2, 2, 8.421);
	cout << "elemnt at 2, 2 is " << m_int.get_element(2, 2) << endl;

	return 0;
}