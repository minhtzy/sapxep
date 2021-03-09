#pragma once
#include "SceneBase.h"

class SortArrayAlgorithmScene :
    public SceneBase
{
public:
    void showMenu() override;
    int execute(int code) override;

    void setData(int** pData, int* pSize);
    void setSortType(int sortType);
protected:
    void onSelectAlgorithm();
    void onSort();

    int** mpData;
    int* mpSize;
    int mSortType = 0; // 0 tang dan, 1 giam dan
    int mSortAlgorithm = 1;

    void printArray(int* a, int nSize);
};

