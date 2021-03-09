#include "ChooseAlgorithmScene.h"

using namespace std;

void ChooseAlgorithmScene::showMenu()
{
	cout << "1. Bubble Sort." << endl;
	cout << "2. Selection Sort." << endl;
	cout << "3. Insertion Sort." << endl;
}

int ChooseAlgorithmScene::execute(int code)
{
	switch (code)
	{
	case 1:
		*mpData = 1;
		break;
	case 2:
		*mpData = 2;
		break;
	case 3:
		*mpData = 3;
		break;
	default:
		return S_ERR_NO_DEFINE;
	}
    return S_EXIT;
}

void ChooseAlgorithmScene::setData(int* pData)
{
	mpData = pData;
}
