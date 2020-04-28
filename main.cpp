#include<iostream>

using namespace std;

int main(){

		int eingabe;	
		char conf;
		cout << "---------------------------------" << endl;		
		cout << "Was möchtest du tun?" << endl;		
		cout << "---------------------------------" << endl;		
		cout << "1.)Apache neustarten" << endl;
		cout << "2.)Seite deaktiveren" << endl;
		cout << "3.)Rebooten" << endl;

		cin >> eingabe;


		switch(eingabe)
		{
				case 1:
						system("systemctl restart apache2");
						break;
				case 2:
						cout << "Bitte Config angeben" << endl;
						cin >> conf;
						system("a2dissite" + conf);
						break;
				case 3:
						cout << "Sicher neustarten?" << endl;
						system("sudo reboot");
						break;
				default:
						break;
		}


		//only for debug
		cout << "Eingabe war: " << eingabe << endl;
		cout << "Verlasse..." << endl;
}
