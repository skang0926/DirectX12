#pragma once
#include "Component.h"

class MonoBehaviour : public Component
{
public:
	MonoBehaviour();
	virtual ~MonoBehaviour();
	virtual void FinalUpdate() sealed { }

public:

};
