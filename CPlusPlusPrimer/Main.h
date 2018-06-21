#pragma once
#ifndef MAIN_H
#define MAIN_H
#include <string>
#include <vector>

//istream &read(istream &, Sales_data &);
//ostream &print(ostream &, const Sales_data &);

class Account {
public:
	void calculate() { amount += amount * interestRate; }
	static double rate() {
		return interestRate;
	}

		static void rate(double);
private:
	std::string owner;
	double amount;
	static double interestRate;
	static double initRate();
	}
};


class Screen;

class Window_mgr {
public:
	using ScreenIndex = std::vector<Screen>::size_type;
	void clear(ScreenIndex);
	Window_mgr();
private:
	std::vector<Screen> screens; // { Screen(24, 80, ' ') };
};

class Screen {
	friend void Window_mgr::clear(ScreenIndex);

public:
	void some_member() const;
	typedef std::string::size_type pos;
	Screen &set(char);
	Screen &set(pos, pos, char);
	Screen &display(std::ostream &os) {
		do_display(os); return *this;
	}
	Screen() = default;
	Screen(pos ht, pos wd): height(ht), width(wd){}
	Screen(pos ht, pos wd, char c): height(ht), width (wd), contents(ht*wd, c){}
	char get() const {
		return contents[cursor];
	}
	inline char get(pos ht, pos wd) const;
	Screen &move(pos r, pos c);

private:
	mutable size_t access_ctr;
	pos cursor = 0;
	pos height = 0, width = 0;
	std::string contents;
	void do_display(std::ostream &os) const { os << contents; }
};



struct Sales_data;
std::istream &read(std::istream &is, Sales_data &item);

struct Sales_data {
	friend Sales_data add(const Sales_data &, const Sales_data &);
	friend std::istream & read(std::istream &, Sales_data &);
	friend std::ostream &print(std::ostream &, const Sales_data &);


public:
	Sales_data(std::string s, unsigned cnt, double price) : bookNo(s), units_sold(cnt), revenue(cnt*price) {}
	//Sales_data() : bookNo(""), units_sold(0), revenue(0.0) {}
	Sales_data():Sales_data ("", 0 , 0) {}
	Sales_data(std::string s): Sales_data (s, 0, 0){}
	Sales_data(std::istream &is) :Sales_data() { read(is, *this); }

	/*Sales_data(const std::string &s) : bookNo(s){}
	Sales_data(const std::string &s, unsigned n, double p) : bookNo(s), units_sold(n), revenue(p*n){}*/
	//Sales_data(std::istream &is) {
	//	read(is, *this);
	//}

	std::string isbn() const { return bookNo; }
	Sales_data& combine(const Sales_data&);
	
private:
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

Window_mgr::Window_mgr() : screens{ Screen(24, 80) } {}

Sales_data add(const Sales_data &, const Sales_data &);
std::istream & read(std::istream &, Sales_data &);
std::ostream &print(std::ostream &, const Sales_data &);
#endif
