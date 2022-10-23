#pragma once

#ifdef RE_PLATFORM_WINDOWS

extern Reb::Application* Reb::CreateApplication();

int main(int argc, char** argv) {
	auto app = Reb::CreateApplication();
	app->Run();
	delete app;
}

#endif