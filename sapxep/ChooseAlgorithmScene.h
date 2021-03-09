#pragma once
#include "SceneBase.h"
class ChooseAlgorithmScene :
    public SceneBase
{
public:
    void showMenu() override;
    int execute(int code) override;
    void setData(int* pData);
protected:
    int* mpData;
};

