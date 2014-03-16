#include <iostream>
#include "SettingsManager.h"
using namespace std;

int main (int argc, char * const argv[]) {
    
	SettingsManager *sm = SettingsManager::Instance();
	cout <<std::boolalpha<< sm->isFullscreenOn()<<endl;
	(*sm).toggleFullscreen();
	cout << sm->isFullscreenOn();
	
    return 0;
}
