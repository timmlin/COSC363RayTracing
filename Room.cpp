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
    //initialise the floor plane and add to SceneObjects
    Plane *floor = new Plane (glm::vec3(MIN_X_VALUE, -15, -40), //Point A
    glm::vec3(50., -15, -40), //Point B
    glm::vec3(50., -15, -200), //Point C
    glm::vec3(MIN_X_VALUE, -15, -200)); //Point D
    floor->setColor(glm::vec3(0.8, 0.8, 0));
    floor->setSpecularity(false);
    sceneObjects.push_back(floor);

    //initialise the left wall plane and add to SceneObjects
    Plane *leftWall = new Plane (glm::vec3(MIN_X_VALUE, 30, -40), //point A: top right
    glm::vec3(MIN_X_VALUE, -15, -40), //point B: bottom right
    glm::vec3(MIN_X_VALUE, -15, -200), // point C: bottom left
    glm::vec3(MIN_X_VALUE, 30, -200));// point D: top left
    leftWall->setColor(glm::vec3(1,1,1));
    sceneObjects.push_back(leftWall);

    //initialise the right wall plane and add it to the SceneObjects
    Plane *rightWall = new Plane (glm::vec3(MAX_X_VALUE, 30, -40), //point A: top right
    glm::vec3(MAX_X_VALUE, -15, -40), //point B: bottom right
    glm::vec3(MAX_X_VALUE, -15, -200), // point C: bottom left
    glm::vec3(MAX_X_VALUE, 30, -200));// point D: top left
    rightWall->setColor(glm::vec3(1,0,1));
    sceneObjects.push_back(rightWall);
    return sceneObjects;

}
