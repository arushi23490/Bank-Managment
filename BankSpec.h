

#include<iostream>
#include<iomanip>
#include<cstdlib> 
#include<string>

using namespace std;

class account {
protected:
	int acc_no;
	string name;
	int deposit;
	string acc_type;
	static int T_acc; 
public:
	account(int aNo = 0, string n = "Nil", int dep = 0, string Atype = "Nil") {
		acc_no = aNo;
		name = n;
		deposit = dep;
		acc_type = Atype;
		T_acc++;
	}
	void create_account(string);
	void show_account(int) const;
	void modify(string, int);
	void close(int);
	void deposits(int, int);
	virtual void withdraws(int, int);
	void display() const;
	int getA_no() const;
	int getDep() const;
	string getType() const;
	static int getT_acc();
};
class Checking_acc : public account {
	int draft;
public:
	Checking_acc() {
		draft = 100000;
	}
	void withdraws(int, int);
};
class Saving_acc : public account {
public:
	Saving_acc() {}
	void withdraws(int, int);
};
void Main_Menu();