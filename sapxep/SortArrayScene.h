#pragma once
#include "SceneBase.h"
class SortArrayScene :
    public SceneBase
{
public:
    void showMenu() override;
    int execute(int code) override;

    void setData(int** pData,int* pSize);
protected:
    void onShowSort(int nSortType);

    int** mpData;
    int* mpSize;
};

