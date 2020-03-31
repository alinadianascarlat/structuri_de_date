
#include<iostream>
using namespace std;

class Spectacol {

private:
	int ora_inceput;
	int ora_terminare;
	int nr_spectacole;

public:
	Spectacol(int ora_inceput, int ora_terminare, int nr_spectacole) {
		this->ora_inceput = ora_inceput;
		this->ora_terminare = ora_terminare;
		this->nr_spectacole = nr_spectacole;

		void citire()
			cin >> nr_spectacole;

	}

};