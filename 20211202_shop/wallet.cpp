#include "wallet.h"

void wallet::walletSetup()
{
	tagWalletInfo coin1;
	coin1.coinKind = COIN_BIT;
	coin1.name = "��Ʈ����";
	coin1.description = "�¶��� ���̶� �Ҹ��� ������ ����ȭ��";
	coin1.price = 70000000;
	coin1.change = -1.0f;

	_vCoin.push_back(coin1);

	tagWalletInfo coin2;
	coin2.coinKind = COIN_BIT;
	coin2.name = "��Ʈ���ΰ��";
	coin2.description = "2017�� ��Ʈ������ �ϵ���ũ�� ����";
	coin2.price = 68250;
	coin2.change = -1.68f;

	_vCoin.push_back(coin2);
}

void wallet::walletOutput(int coinNum)
{
	for (_viCoin = _vCoin.begin(); _viCoin != _vCoin.end(); ++_viCoin)
	{
		if (_viCoin->coinKind != coinNum) continue;

		cout << "================== ��  �� ===================" << endl;
		cout << "��  �� : " << _viCoin->name << endl;
		cout << "��  �� : " << _viCoin->price << endl;
		cout << "������ : " << _viCoin->change << endl;
		cout << "��  �� : " << _viCoin->description << endl;
		cout << "==============================================" << endl;
	}
}

wallet::wallet()
{
}

wallet::~wallet()
{
}
