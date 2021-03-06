#ifndef _WINDOW_H_
#define _WINDOW_H_

#include <iostream>

#define GLFW_INCLUDE_GLEXT
#ifdef __APPLE__
#define GLFW_INCLUDE_GLCOREARB
#else
#include <GL/glew.h>
#endif
#include <GLFW/glfw3.h>
#include "Cube.h"
#include "shader.h"
#include "OBJObject.h"
#include "Geometry.hpp"
#include "Transform.hpp"

class Window
{
public:
    static double xoffset;
    static double yoffset;
//    static glm::mat4 modelview;
    static glm::vec3 cam_pos;
    static glm::vec3 cam_look_at;
    static glm::vec3 cam_up;
	static int width;
	static int height;
    static double oldX;
    static double oldY;
	static glm::mat4 P; // P for projection
	static glm::mat4 V; // V for view
	static void initialize_objects();
	static void clean_up();
	static GLFWwindow* create_window(int width, int height);
	static void resize_callback(GLFWwindow* window, int width, int height);
	static void idle_callback();
	static void display_callback(GLFWwindow*);
	static void key_callback(GLFWwindow* window, int key, int scancode, int action, int mods);
    static void mouseButtonCallback(GLFWwindow* window, int button, int action, int mods);
    static void scroll_callback(GLFWwindow*  window, double xoffset, double yoffset);
    //static void MyKeyboardFunc(unsigned char Key, int x, int y);
    static glm::vec3 trackBallMapping(double xoffset, double yoffset);
    static void onMoveMouse(GLuint nFlags, double xoffset, double yoffset, glm::vec3 lastPoint);
    static void cursorPositionCallback (GLFWwindow* window, double x, double y);
};

#endif
