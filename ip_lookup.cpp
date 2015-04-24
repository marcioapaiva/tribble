#include <iostream>
#include "tribble.h"

using namespace std;
using namespace tribble;

int main()
{
	string hostname;
	vector<string> ip;

	cout << "hostname: ";
	cin >> hostname;

	cout << "IPV4: \n";

	ip = dns_lookup(hostname, 4);

	for(int i = 0; i < ip.size(); i++){
		cout << " " << ip[i] << endl;
	}

	cout << "IPV6: \n";

	ip = dns_lookup(hostname, 6);
	
	for(int i = 0; i < ip.size(); i++){
		cout << " " << ip[i] << endl;
	}

}