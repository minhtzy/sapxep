#pragma once
#include "SceneBase.h"
class MainScene :
    public SceneBase
{
public:
    void showMenu() override;
    int execute(int code) override;

protected:
    void onInitArray();
    void onSortArray();

    int* mAry = nullptr;
    int nSize = 0;
};

