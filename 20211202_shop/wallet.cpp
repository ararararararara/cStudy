#include "wallet.h"

void wallet::walletSetup()
{
	tagWalletInfo coin1;
	coin1.coinKind = COIN_BIT;
	coin1.name = "비트코인";
	coin1.description = "온라인 금이라 불린다 최초의 가상화폐";
	coin1.price = 70000000;
	coin1.change = -1.0f;

	_vCoin.push_back(coin1);

	tagWalletInfo coin2;
	coin2.coinKind = COIN_BIT;
	coin2.name = "비트코인골드";
	coin2.description = "2017년 비트코인을 하드포크한 코인";
	coin2.price = 68250;
	coin2.change = -1.68f;

	_vCoin.push_back(coin2);
}

void wallet::walletOutput(int coinNum)
{
	for (_viCoin = _vCoin.begin(); _viCoin != _vCoin.end(); ++_viCoin)
	{
		if (_viCoin->coinKind != coinNum) continue;

		cout << "================== 지  갑 ===================" << endl;
		cout << "이  름 : " << _viCoin->name << endl;
		cout << "가  격 : " << _viCoin->price << endl;
		cout << "변동률 : " << _viCoin->change << endl;
		cout << "설  명 : " << _viCoin->description << endl;
		cout << "==============================================" << endl;
	}
}

wallet::wallet()
{
}

wallet::~wallet()
{
}
