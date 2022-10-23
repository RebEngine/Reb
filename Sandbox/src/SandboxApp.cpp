#include <Reb.h>

class Sandbox : public Reb::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}
};

Reb::Application* Reb::CreateApplication()
{
	return new Sandbox();
}