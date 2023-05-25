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
    Plane *floor = new Plane (glm::vec3(MIN_X_VALUE, -15, -40),   // bottom left
                              glm::vec3(50., -15, -40),           // bottom right
                              glm::vec3(50., -15, MIN_Z_VALUE),          // top right
                              glm::vec3(MIN_X_VALUE, -15, MIN_Z_VALUE)); // top left
    floor->setColor(glm::vec3(0.8, 0.8, 0));
    floor->setSpecularity(false);
    sceneObjects.push_back(floor);

    //initialise the ceiling plane and add to SceneObjects
    Plane *ceiling = new Plane (glm::vec3(MIN_X_VALUE, 30, -40),   // bottom left
                                glm::vec3(50., 30, -40),           // bottom right
                                glm::vec3(50., 30, MIN_Z_VALUE),          // top right
                                glm::vec3(MIN_X_VALUE, 30, MIN_Z_VALUE)); // top left
    ceiling->setReflectivity(true);
    ceiling->setSpecularity(false);
    sceneObjects.push_back(ceiling);

    //initialise the left wall plane and add to SceneObjects
    Plane *leftWall = new Plane (glm::vec3(MIN_X_VALUE, 30, -40),   //top right
                                 glm::vec3(MIN_X_VALUE, -15, -40),  //bottom right
                                 glm::vec3(MIN_X_VALUE, -15, MIN_Z_VALUE), //  bottom left
                                 glm::vec3(MIN_X_VALUE, 30, MIN_Z_VALUE)); //  top left
    leftWall->setColor(glm::vec3(1,0,1)); //purple
    sceneObjects.push_back(leftWall);

    //initialise the right wall plane and add it to the SceneObjects
    Plane *rightWall = new Plane (glm::vec3(MAX_X_VALUE, 30, -40),    //top right
                                  glm::vec3(MAX_X_VALUE, 30, MIN_Z_VALUE),   // top left
                                  glm::vec3(MAX_X_VALUE, -15, MIN_Z_VALUE),  // bottom left
                                  glm::vec3(MAX_X_VALUE, -15, -40));  // bottom right
    rightWall->setColor(glm::vec3(1,1,0)); // yellow
    sceneObjects.push_back(rightWall);


    //initialise the back wall plane and add it to the SceneObjects
    Plane *backWall = new Plane (glm::vec3(MAX_X_VALUE, 30, MIN_Z_VALUE),    //top right
                                 glm::vec3(MIN_X_VALUE, 30, MIN_Z_VALUE),   // top left
                                 glm::vec3(MIN_X_VALUE, -15, MIN_Z_VALUE),  // bottom left
                                 glm::vec3(MAX_X_VALUE, -15, MIN_Z_VALUE));  // bottom right
    backWall->setColor(glm::vec3(0,1,1)); //blue
    sceneObjects.push_back(backWall);

    return sceneObjects;


}
