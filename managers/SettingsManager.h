/*
 *  SettingsManager.h
 *  Racing
 *
 *  Created by Simeon Bonev on 3/9/14.
 *  Copyright 2014 __MyCompanyName__. All rights reserved.
 *
 */

class SettingsManager {
public:
	static SettingsManager* Instance();
	void toggleFullscreen();
	bool isFullscreenOn();
protected:
	SettingsManager();
private:
	static SettingsManager* _instance;
	bool isFullscreen;
};