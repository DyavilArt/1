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
	ShipCase(string name, int HP, int dmg, int sp) : ShipName_case(name), ShipHP_case(HP), ShipDamage_case(dmg), ShipSpeed_case(sp) {}
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
int DrawCase(int Speed1, int Speed2)
{
	int FirstAttack;
	if (Speed1 > Speed2)
	{
		cout << "The 1 player moves first" << endl;
		FirstAttack = 1;
		return 1;
	}
	else if (Speed1 == Speed2)
	{
		int b = 2;
		int c;
		c = rand() % (b) + 1;
		cout << "The " << c << " player moves first" << endl;
		return c;
	}
	else
	{
		cout << "The 2 player moves first" << endl;
		return 2;
	}
}

void game(int n, int Hp1, int Hp2, int dmg1, int dmg2)
{
int RemainsHP1Ship;
int RemainsHP2Ship;
RemainsHP1Ship = Hp1;
RemainsHP2Ship = Hp2;
if (n == 1)
	{
	while (RemainsHP1Ship > 0 and RemainsHP2Ship > 0)
	{
		RemainsHP2Ship = RemainsHP2Ship - dmg1;
		if (RemainsHP2Ship <= 0)
		{
			cout << "The first Player Win!" << endl;
			break;
		}
		RemainsHP1Ship = RemainsHP1Ship - dmg2;
		if (RemainsHP1Ship <= 0)
		{
			cout << "The second Player Win!" << endl;
			break;
		}
	}
	}
if (n == 2)
{
	while (RemainsHP1Ship > 0 and RemainsHP2Ship > 0)
	{
		RemainsHP1Ship = RemainsHP1Ship - dmg2;
		if (RemainsHP1Ship <= 0)
		{
			cout << "The second Player Win!" << endl;
			break;
		}
		RemainsHP2Ship = RemainsHP2Ship - dmg1;
		if (RemainsHP2Ship <= 0)
		{
			cout << "The first Player Win!" << endl;
			break;
		}
	}
}
}

int main()
{
	string Restart;
	Restart = "Yes";
	do
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


ShipCase Shipcase1(ShipName_main1, ShipHP_main1, ShipDamage_main1, ShipSpeed_main1);
Shipcase1.dispal();



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

	ShipCase Shipcase2(ShipName_main2, ShipHP_main2, ShipDamage_main2, ShipSpeed_main2);
	Shipcase2.dispal();



		game(DrawCase(Shipcase1.ShipSpeed_case, Shipcase2.ShipSpeed_case), Shipcase1.ShipHP_case, Shipcase2.ShipHP_case, Shipcase1.ShipDamage_case, Shipcase2.ShipDamage_case);
		cout << "Do you want to play again?" << endl;
		cout << "Write 'Yes' if you want to continue, or something else to finish the game" << endl;
		cin >> Restart;
	} while (Restart == "Yes");
		
}