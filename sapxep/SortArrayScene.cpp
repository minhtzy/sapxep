#include "SortArrayScene.h"
#include "SortArrayAlgorithmScene.h"

using namespace std;

void SortArrayScene::showMenu()
{
	cout << "1. Sap xep tang dan" << endl;
	cout << "2. Sap xep giam dan" << endl;
	cout << "3. Thoat" << endl;
}

int SortArrayScene::execute(int code)
{
	switch (code)
	{
	case 1:
		onShowSort(0);
		break;
	case 2:
		onShowSort(1);
		break;
	case 3:
		return S_EXIT;
	default:
		return S_ERR_NO_DEFINE;
	}
	return S_OK;
}

void SortArrayScene::setData(int** pData, int* pSize)
{
	mpData = pData;
	mpSize = pSize;
}

void SortArrayScene::onShowSort(int nSortType)
{
	SortArrayAlgorithmScene* scene = new SortArrayAlgorithmScene();
	scene->setData(mpData, mpSize);
	scene->setSortType(nSortType);
	scene->doShow();
	delete scene;
}
