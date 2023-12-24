#pragma once

#include <GLFW/glfw3.h>

#include <cstdint>

class HelloTriangleApplication
{
public:
	void run();

private:
	void initWindow();
	void initVulkan();
	void mainLoop();
	void cleanup();

private:
	const uint32_t WIDTH = 800;
	const uint32_t HEIGHT = 600;

	GLFWwindow* window = nullptr;
};

