#pragma once
#include "SceneBase.h"

class InitArrayScene
	: public SceneBase
{
public:
	void showMenu() override;
	void doShow() override;
	void setData(int** pData, int *pSize);
protected:
	void initRandomArray(int** array, int size);

	int** mpData;
	int* mpSize;
};

