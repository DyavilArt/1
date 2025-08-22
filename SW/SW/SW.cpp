#include<iostream>
#include<algorithm>
#include<string>
#include<math.h>
#include<vector>

using namespace std;


class ShipCase {

public:
	string ShipName_case;
	int ShipHP_case;
	int ShipDamage_case;
	int ShipSpeed_case;
	void dispal() {
		cout << ShipName_case << " was register" << endl;
		cout << "HP: " << ShipHP_case << " damage: " << ShipDamage_case << " speed: " << ShipSpeed_case << endl;
	}

};

//void Choosen_Func1(int ShipsNumber)
//{
//	string ShipName_func;
//	int ShipHP_func, ShipDamage_func, ShipSpeed_func;
//	cout << "Enter the ship`s name:" << endl;
//	cin >> ShipName_func;
//	cout << "Enter the ship`s characteristics:" << endl;
//	cin >> ShipHP_func >> ShipDamage_func >> ShipSpeed_func;
//	
//
//
//}
void DrawCase(ShipCase Shipcase1, ShipCase Shipcase2)
{
	int FirstAttack;
	if (Speed1 > Speed2)
	{
		cout << "The 1 player moves first" << endl;
		FirstAttack = 1;
		game(1);
	}
	else if (Speed1 == Speed2)
	{
		int b = 2;
		int c;
		c = rand() % (b) + 1;
		cout << "The " << c << " player moves first" << endl;
		game(c)
	}
	else
	{
		cout << "The 2 player moves first" << endl;
		game(2, Shipcase2, Shipcase1);
	}
}

void game(int n, ShipCase, ShipCase)
{
	int RemainsHP1Ship;
	int RemainsHP2Ship;
	RemainsHP1Ship = Shipcase1.ShipHP_case;
	RemainsHP2Ship = Shipcase.ShipHP_case;
	if (n == 1)
	{

	}
}

int main()
{
	srand(time(0));
	cout << "The first characteristic - HP, the second - damage, the third - speed." << endl;
	cout << "The first player chooses:" << endl;


	string ShipName_main1;
	int ShipHP_main1, ShipDamage_main1, ShipSpeed_main1;
	cout << "Enter the ship`s name:" << endl;
	cin >> ShipName_main1;
	cout << "Enter the ship`s characteristics:" << endl;
	cin >> ShipHP_main1 >> ShipDamage_main1 >> ShipSpeed_main1;


	if (ShipHP_main1 <= 0 or ShipDamage_main1 < 0 or ShipSpeed_main1 <= 0)
	{
		while (ShipHP_main1 <= 0 or ShipDamage_main1 < 0 or ShipSpeed_main1 <= 0)
		{
			cout << "Error. Enter positive values" << endl;
			cin >> ShipHP_main1 >> ShipDamage_main1 >> ShipSpeed_main1;
		}
	}


	else 
	{
		ShipCase Shipcase1;
		Shipcase1.ShipName_case = ShipName_main1;
		Shipcase1.ShipHP_case = ShipHP_main1;
		Shipcase1.ShipDamage_case = ShipDamage_main1;
		Shipcase1.ShipSpeed_case = ShipSpeed_main1;
		Shipcase1.dispal();
	}


	cout << "The second player chooses:" << endl;
	

	string ShipName_main2;
	int ShipHP_main2, ShipDamage_main2, ShipSpeed_main2;
	cout << "Enter the ship`s name:" << endl;
	cin >> ShipName_main2;
	cout << "Enter the ship`s characteristics:" << endl;
	cin >> ShipHP_main2 >> ShipDamage_main2 >> ShipSpeed_main2;


	if (ShipHP_main2 <= 0 or ShipDamage_main2 < 0 or ShipSpeed_main2 <= 0)
	{
		while (ShipHP_main2 <= 0 or ShipDamage_main2 < 0 or ShipSpeed_main2 <= 0)
		{
			cout << "Error. Enter positive values" << endl;;
			cin >> ShipHP_main2 >> ShipDamage_main2 >> ShipSpeed_main2;
		}
	}

	else
	{
		ShipCase Shipcase2;
		Shipcase2.ShipName_case = ShipName_main2;
		Shipcase2.ShipHP_case = ShipHP_main2;
		Shipcase2.ShipDamage_case = ShipDamage_main2;
		Shipcase2.ShipSpeed_case = ShipSpeed_main2;
		Shipcase2.dispal();
	}


	DrawCase(ShipCase , ShipCase );
}