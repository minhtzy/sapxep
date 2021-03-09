#include "SceneBase.h"
#include <iostream>

using namespace std;


void SceneBase::showMenu()
{
}

int SceneBase::execute(int code)
{
    return 0;
}

void SceneBase::onDestroy()
{

}

int SceneBase::getInputInt(std::string msg, bool bClear)
{
    int select = 0;
    if (!msg.empty())
        cout << msg << endl;
    if (bClear) {
        cin.clear();
        //cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discards the input buffer
    }
    cin >> select;
    return select;
}

void SceneBase::getAnyInput(std::string msg, bool bClear)
{
    if (!msg.empty())
        cout << msg << endl;
    if (bClear)
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discards the input buffer
    cin.get();
}

void SceneBase::doShow()
{
    while (true)
    {
        if (bClearScr)
            system("cls");
        if (bShowMenu)
            showMenu();
        bClearScr = true;
        bShowMenu = true;
        int selected = getInputInt("",true);;
        int hr = execute(selected);
        if (hr == S_ERR_NO_DEFINE) {
            cout << SELECT_NOT_AVAILABLE_MSG << endl;
            bClearScr = false;
            bShowMenu = false;
            continue;
        }
        if (hr == S_EXIT) {
            onDestroy();
            break;
        }
        if (hr == S_DELAY_OK || hr == S_DELAY_EXIT) {
            getAnyInput("Nhan phim bat ki de tiep tuc.", true);
            if (hr == S_DELAY_EXIT) {
                onDestroy();
                break;
            }
        }
    }
}
