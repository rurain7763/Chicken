#pragma once

#include "Core.h"

namespace Chicken
{
	class CHICKEN_API Application
	{
	public:
		Application();
		virtual ~Application();

		virtual void Run();
	};

	Application createApp();
}