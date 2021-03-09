#pragma once

#include <iostream>
#include <map>
#include <string>

#define S_OK 1
#define S_EXIT 0
#define S_DELAY_OK 2
#define S_DELAY_EXIT 3
#define S_ERR_NO_DEFINE -1

#define SELECT_NOT_AVAILABLE_MSG "Lua chon khong hop le. Vui long chon lai."

class SceneBase
{
public:
	virtual void showMenu();
	virtual int execute(int code);
	virtual void doShow();
	virtual void onDestroy();

	virtual int getInputInt(std::string msg, bool bClear);
	virtual void getAnyInput(std::string msg, bool bClear);
protected:
	bool bClearScr = true;
	bool bShowMenu = true;
	
};

