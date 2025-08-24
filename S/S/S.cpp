#include<iostream>
#include<algorithm>
#include<string>
#include<math.h>
#include<vector>

using namespace std;


class ShipCase {

public:
	string Name;
	int HP;
	int Damage;
	int Speed;
	ShipCase(string name, int HP, int dmg, int sp) : Name(name), HP(HP), Damage(dmg), Speed(sp) {}
	void dispal() {
		cout << Name << " was register" << endl;
		cout << "HP: " << HP << " damage: " << Damage << " speed: " << Speed << endl;
	}

};


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
		c = rand() % (b)+1;
		cout << "The " << c << " player moves first" << endl;
		return c;
	}
	else
	{
		cout << "The 2 player moves first" << endl;
		return 2;
	}
}

void game(int n, ShipCase Gamer1, ShipCase Gamer2)
{
	int RemainsHP1;
	int RemainsHP2;
	RemainsHP1 = Gamer1.HP;
	RemainsHP2 = Gamer2.HP;
	if (n == 1)
	{
		while (RemainsHP1 > 0 and RemainsHP2 > 0)
		{
			RemainsHP2 = RemainsHP2 - Gamer1.Damage;
			if (RemainsHP2 <= 0)
			{
				cout << "The first Player Win!" << endl;
				break;
			}
			RemainsHP1 = RemainsHP1 - Gamer2.Damage;
			if (RemainsHP1 <= 0)
			{
				cout << "The second Player Win!" << endl;
				break;
			}
		}
	}
	if (n == 2)
	{
		while (RemainsHP1 > 0 and RemainsHP2 > 0)
		{
			RemainsHP1 = RemainsHP1 - Gamer2.Damage;
			if (RemainsHP1 <= 0)
			{
				cout << "The second Player Win!" << endl;
				break;
			}
			RemainsHP2 = RemainsHP2 - Gamer1.Damage;
			if (RemainsHP2 <= 0)
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


		string Name;
		int HP, Damage, Speed;
		cout << "Enter the ship`s name:" << endl;
		cin >> Name;
		cout << "Enter the ship`s characteristics:" << endl;
		cin >> HP >> Damage >> Speed;


		if (HP <= 0 or Damage < 0 or Speed <= 0)
		{
			while (HP <= 0 or Damage < 0 or Speed <= 0)
			{
				cout << "Error. Enter positive values" << endl;
				cin >> HP >> Damage >> Speed;
			}
		}


		ShipCase Shipcase1(Name, HP, Damage, Speed);
		Shipcase1.dispal();



		cout << "The second player chooses:" << endl;


		string Name2;
		int HP2, Damage2, Speed2;
		cout << "Enter the ship`s name:" << endl;
		cin >> Name2;
		cout << "Enter the ship`s characteristics:" << endl;
		cin >> HP2 >> Damage2 >> Speed2;


		if (HP2 <= 0 or Damage2 < 0 or Speed2 <= 0)
		{
			while (HP2 <= 0 or Damage2 < 0 or Speed2 <= 0)
			{
				cout << "Error. Enter positive values" << endl;;
				cin >> HP2 >> Damage2 >> Speed2;
			}
		}

		ShipCase Shipcase2(Name2, HP2, Damage2, Speed2);
		Shipcase2.dispal();



		game(DrawCase(Shipcase1.Speed, Shipcase2.Speed), Shipcase1, Shipcase2);
		cout << "Do you want to play again?" << endl;
		cout << "Write 'Yes' if you want to continue, or something else to finish the game" << endl;
		cin >> Restart;
	} while (Restart == "Yes");

}