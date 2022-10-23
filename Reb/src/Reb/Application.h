#pragma once

#include "Core.h"

namespace Reb
{
	class REB_API Application
	{
	public:
		Application();
		virtual ~Application();
		
		void Run();
	};

	// To be defined in CLIENT
	Application* CreateApplication();
}