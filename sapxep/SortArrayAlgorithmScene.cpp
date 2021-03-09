#include "SortArrayAlgorithmScene.h"
#include "ChooseAlgorithmScene.h"
#include "SortAlgorithm.h"
#include <chrono>

using namespace std;

void SortArrayAlgorithmScene::showMenu()
{
	cout << "Sap xep " << (mSortType == 0 ? "tang dan" : "giam dan") << endl;
	cout << "1. Chon thuat toan sap xep" << endl;
	cout << "2. In ra ket qua sap xep" << endl;
	cout << "3. Thoat" << endl;
}

int SortArrayAlgorithmScene::execute(int code)
{
	switch (code)
	{
	case 1:
		onSelectAlgorithm();
		break;
	case 2:
		onSort();
		break;
	case 3:
		return S_EXIT;
	default:
		return S_ERR_NO_DEFINE;
	}
	return S_DELAY_OK;
}

void SortArrayAlgorithmScene::setData(int** pData, int* pSize)
{
	mpData = pData;
	mpSize = pSize;
}

void SortArrayAlgorithmScene::setSortType(int sortType)
{
	mSortType = sortType;
}

void SortArrayAlgorithmScene::onSelectAlgorithm()
{
	ChooseAlgorithmScene* scene = new ChooseAlgorithmScene();
	scene->setData(&mSortAlgorithm);
	scene->doShow();
	delete scene;
}

void SortArrayAlgorithmScene::onSort()
{
	bool (*sortFunc)(int, int);
	if (mSortType == 0) // Sap xep tang dan
		sortFunc = &SortIncrement;
	else // Sap xep giam dan
		sortFunc = &SortDecrement;
	cout << "Thuat toan sap xep: "; 
	switch (mSortAlgorithm)
	{
	case 1:
		cout << "Bubble Sort";
		break;
	case 2:
		cout << "Selection Sort";
		break;
	case 3:
		cout << "Insertion Sort";
		break;
	default:
		break;
	}
	cout << endl;
	cout << "Mang truoc khi sap xep la: " << endl;
	printArray(*mpData, *mpSize);

	int* pCpyData = new int[*mpSize];
	for (int i = 0; i < *mpSize; ++i) {
		pCpyData[i] = (*mpData)[i];
	}
	auto start = chrono::steady_clock::now();
	switch (mSortAlgorithm)
	{
	case 1:
		BubbleSort(pCpyData, *mpSize, sortFunc);
		break;
	case 2:
		SelectionSort(pCpyData, *mpSize, sortFunc);
		break;
	case 3:
		InsertionSort(pCpyData, *mpSize, sortFunc);
		break;
	default:
		break;
	}
	auto end = chrono::steady_clock::now();
	cout << "Mang sau khi sap xep la: " << endl;
	printArray(pCpyData, *mpSize);
	auto time = end - start;
	cout << "Thoi gian hoan thanh sap xep: ";
	cout << chrono::duration <double, milli>(time).count() << " ms" << endl;

	delete[] pCpyData;
}

void SortArrayAlgorithmScene::printArray(int* a, int nSize)
{
	for (int i = 0; i < nSize; ++i) {
		cout << a[i] << " ";
	}
	cout << endl;
}
