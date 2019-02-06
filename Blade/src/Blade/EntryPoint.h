#pragma once

#ifdef BLADE_PLATFORM_WINDOWS

extern Blade::Application* Blade::CreateApplication();

int main(int argc, char** argv)
{
	printf("Blade Engine\n");
	auto app = Blade::CreateApplication();
	app->Run();
	delete app;
}

#endif