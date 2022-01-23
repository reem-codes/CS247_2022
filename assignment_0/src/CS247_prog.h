#ifndef ASSIGNMENT_CS247_PROG_H
#define ASSIGNMENT_CS247_PROG_H

#include <cstdint>
#include <cstdlib>
#include <cstdio>
#include <iostream>
#include <string>
#include <sstream>
#include <cassert>

#include <cmath>

#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <glm/gtc/matrix_transform.hpp>

// framework includes
#include "glslprogram.h"

// window size
const unsigned int gWindowWidth = 512;
const unsigned int gWindowHeight = 512;

// callbacks
// TODO: add callbacks definitions (e.g., framebuffer callback, mouse callback, keyboard callback)


// Checkerboard texture
void makeCheckerBoardImage();
const int checkImageHeight = 64;
const int checkImageWidth = 64;
unsigned char checkImage[checkImageHeight][checkImageWidth][3];

// scene configurations
// TODO: define glsl program, MVP matrices,
//  and any other needed variables and configurations

#endif //ASSIGNMENT_CS247_PROG_H
