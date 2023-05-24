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

#define MIN_X_VALUE -30.0
#define MAX_X_VALUE 30.0

/**
 * @brief adds planes that make up the walls and floor of the room to the SceneObjects array
 * @param sceneObjects the array of objects in the room
 * @return the array of room objects will the wall and floor planes added
 */
vector<SceneObject*> intialiseRoom(vector<SceneObject*> sceneObjects);


#endif // ROOM_H
