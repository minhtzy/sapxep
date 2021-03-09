#include "InitArrayScene.h"

using namespace std;

void InitArrayScene::showMenu()
{
}

void InitArrayScene::doShow()
{
	showMenu();
	*mpSize = getInputInt("Nhap vao so phan tu cua mang", true);
	initRandomArray(mpData, *mpSize);
	cout << "Mang da khoi tao la: ";
	for (int i = 0; i < *mpSize; ++i)
		cout << (*mpData)[i] << " ";
	cout << endl;
	getAnyInput("Khoi tao mang thanh cong. Nhan phim bat ki de tiep tuc", true);
}

void InitArrayScene::setData(int** pData, int* pSize)
{
	mpData = pData;
	mpSize = pSize;
}

void InitArrayScene::initRandomArray(int** array, int size)
{
	*array = new int[size];
	for (int i = 0; i < size; ++i) {
		(*array)[i] = rand();
	}
}
