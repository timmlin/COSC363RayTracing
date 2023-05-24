/*==================================================================================
* COSC363 Assignment 2
*
* Tim Lindbom
* 25/5/23
*
*
* cpp file used to  the generate walls and a  floor of the scene
*===================================================================================
*/

#include "Room.h"


vector<SceneObject*> intialiseRoom(vector<SceneObject*> sceneObjects)
{
    Plane *floor = new Plane (glm::vec3(-50., -15, -40), //Point A
    glm::vec3(50., -15, -40), //Point B
    glm::vec3(50., -15, -200), //Point C
    glm::vec3(-50., -15, -200)); //Point D
    floor->setColor(glm::vec3(0.8, 0.8, 0));
    floor->setSpecularity(false);

    sceneObjects.push_back(floor);

    return sceneObjects;

}
