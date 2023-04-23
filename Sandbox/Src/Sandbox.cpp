#include "Chicken.h"

class SandBox : public Chicken::Application
{
public:
	SandBox()
	{

	}

	~SandBox()
	{

	}
};

Chicken::Application* createApp()
{
	return new SandBox();
}