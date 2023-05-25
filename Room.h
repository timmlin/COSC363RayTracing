#ifndef ROOM_H
#define ROOM_H


#include <iostream>
#include <cmath>
#include <vector>
#include <glm/glm.hpp>
#include "SceneObject.h"
#include "Ray.h"
#include "Plane.h"
#include <GL/freeglut.h>
#include "TextureBMP.h"

#define MIN_X_VALUE  -30.0
#define MAX_X_VALUE   30.0

#define MIN_Y_VALUE  -15.0
#define MAX_Y_VALUE   20.0

#define MIN_Z_VALUE  -150.0
#define MAX_Z_VALUE  -40.0

/**
 * @brief adds planes that make up the walls and floor of the room to the SceneObjects array
 * @param sceneObjects the array of objects in the room
 * @return the array of room objects will the wall and floor planes added
 */
vector<SceneObject*> intialiseRoom(vector<SceneObject*> sceneObjects);


#endif // ROOM_H
