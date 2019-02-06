#pragma once

#include "Core.h"

namespace Blade {

	class BLADE_API Application
	{
	public:
		Application();
		virtual ~Application();

		void Run();
	};

	// To be defined in Client
	Application* CreateApplication();

}