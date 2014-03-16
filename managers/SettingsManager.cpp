/*
 *  SettingsManager.cpp
 *  Racing
 *
 *  Created by Simeon Bonev on 3/9/14.
 *  Copyright 2014 __MyCompanyName__. All rights reserved.
 *
 */

#include "SettingsManager.h"

SettingsManager* SettingsManager::_instance = 0;
bool isFullscreen = false;
SettingsManager* SettingsManager::Instance () {
	if (_instance == 0) {
		_instance = new SettingsManager;
	}
	return _instance;
}

SettingsManager::SettingsManager() {

}

void SettingsManager::toggleFullscreen() {
	isFullscreen = isFullscreen ? false : true;
}

bool SettingsManager::isFullscreenOn() {
	return isFullscreen;
}