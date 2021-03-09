#include "MainScene.h"
#include "InitArrayScene.h"
#include "SortArrayScene.h"

using namespace std;

void MainScene::showMenu()
{
	cout << "1. Khoi tao mang ngau nhien." << endl;
	cout << "2. Sap xep mang" << endl;
	cout << "3. Thoat" << endl;
}

int MainScene::execute(int code)
{
	switch (code)
	{
	case 1:
		onInitArray();
		break;
	case 2:
		onSortArray();
		break;
	case 3:
		return S_EXIT;
	default:
		return S_ERR_NO_DEFINE;
	}
	return S_OK;
}

void MainScene::onInitArray()
{
	InitArrayScene* scene = new InitArrayScene();
	scene->setData(&mAry, &nSize);
	scene->doShow();
	delete scene;
}

void MainScene::onSortArray()
{
	SortArrayScene* scene = new SortArrayScene();
	scene->setData(&mAry, &nSize);
	scene->doShow();
	delete scene;
}
