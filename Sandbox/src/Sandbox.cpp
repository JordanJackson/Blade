#include "Blade.h"

class Sandbox : public Blade::Application
{
public:
	Sandbox() {};
	~Sandbox() {};
};

Blade::Application* Blade::CreateApplication()
{
	return new Sandbox();
}