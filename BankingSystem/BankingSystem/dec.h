#pragma once
#include <iostream>
enum { CREATE = 1, DEPOSIT, WITHDRAW, DISPLAY, EXIT };
const int LEN_NAME = 20;
class Account {
private:
	int number;
	char *name;
	double balance;
public :
	Account() {
		name = new char[20];//문제요구사항 : 멤버변수로 문자열 포인터를 지니고, 동적 할당의 형태로 구현해야 한다.
	}
	~Account() {
		delete[]name;
	}
	bool InitAccount(int number, char *name, double balance);
	bool SetBalance(int COMMAND, double amount);
	int GetNumber();
	char* GetName();
	double GetBalance();
};
void ShowMenu();      //메뉴 출력
void CreateAccount(); //계좌 개설
void DepositAccount();//입     금
void WithdrawMoney(); //출     금
void Display();		  //잔액 조회

