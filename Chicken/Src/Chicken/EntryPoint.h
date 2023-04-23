#pragma once

#ifdef PLATFORM_WINDOWS

extern Chicken::Application* createApp();

void main(int argc, char** argv)
{
	auto* app = createApp();
	app->Run();
	delete app;
}
#endif