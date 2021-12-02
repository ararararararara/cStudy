#pragma once
#include <iostream>
#include <vector>
#include <string>

using namespace std;

enum  WALLET
{
	
};

class tagWalletInfo
{
public:
	COIN coinKind;
	string name;
	string description;
	int price;
	float change;
};

class wallet
{
private:
	vector<tagWalletInfo>				_vCoin;
	vector<tagWalletInfo>::iterator	_viCoin;

public:
	void walletSetup();
	void walletOutput(int coinNum);

	vector<tagWalletInfo> getCoinVector() { return _vCoin; }

	wallet();
	~wallet();

};

