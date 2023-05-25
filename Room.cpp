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
    Plane *floor = new Plane (glm::vec3(MIN_X_VALUE, MIN_Y_VALUE, MAX_Z_VALUE),   // bottom left
                              glm::vec3(MAX_X_VALUE, MIN_Y_VALUE, MAX_Z_VALUE),   // bottom right
                              glm::vec3(MAX_X_VALUE, MIN_Y_VALUE, MIN_Z_VALUE),   // top right
                              glm::vec3(MIN_X_VALUE, MIN_Y_VALUE, MIN_Z_VALUE));  // top left
    floor->setColor(glm::vec3(0.8, 0.8, 0));
    sceneObjects.push_back(floor);

    //initialise the ceiling plane and add to SceneObjects
    Plane *ceiling = new Plane (glm::vec3(MIN_X_VALUE, MAX_Y_VALUE, MAX_Z_VALUE),   // bottom left
                                glm::vec3(MAX_X_VALUE, MAX_Y_VALUE, MAX_Z_VALUE),   // bottom right
                                glm::vec3(MAX_X_VALUE, MAX_Y_VALUE, MIN_Z_VALUE),   // top right
                                glm::vec3(MIN_X_VALUE, MAX_Y_VALUE, MIN_Z_VALUE));  // top left
    ceiling->setColor(glm::vec3(1,0.3,0.5));
    ceiling->setReflectivity(true);
    sceneObjects.push_back(ceiling);

    //initialise the left wall plane and add to SceneObjects
    Plane *leftWall = new Plane (glm::vec3(MIN_X_VALUE, MAX_Y_VALUE, MAX_Z_VALUE),  // top left
                                 glm::vec3(MIN_X_VALUE, MIN_Y_VALUE, MAX_Z_VALUE),  // bottom left
                                 glm::vec3(MIN_X_VALUE, MIN_Y_VALUE, MIN_Z_VALUE),  // bottom right
                                 glm::vec3(MIN_X_VALUE, MAX_Y_VALUE, MIN_Z_VALUE)); // top right
    leftWall->setColor(glm::vec3(0,1,0));
    sceneObjects.push_back(leftWall);

    //initialise the right wall plane and add it to the SceneObjects
    Plane *rightWall = new Plane (glm::vec3(MAX_X_VALUE, MAX_Y_VALUE, MAX_Z_VALUE), //top right
                                  glm::vec3(MAX_X_VALUE, MAX_Y_VALUE, MIN_Z_VALUE), // top left
                                  glm::vec3(MAX_X_VALUE, MIN_Y_VALUE, MIN_Z_VALUE), // bottom left
                                  glm::vec3(MAX_X_VALUE, MIN_Y_VALUE, MAX_Z_VALUE));// bottom right
    rightWall->setColor(glm::vec3(1,0.7,0.));
    sceneObjects.push_back(rightWall);


    //initialise the back wall plane and add it to the SceneObjects
    Plane *backWall = new Plane (glm::vec3(MAX_X_VALUE, MAX_Y_VALUE, MIN_Z_VALUE),  //top right
                                 glm::vec3(MIN_X_VALUE, MAX_Y_VALUE, MIN_Z_VALUE),  // top left
                                 glm::vec3(MIN_X_VALUE, MIN_Y_VALUE, MIN_Z_VALUE),  // bottom left
                                 glm::vec3(MAX_X_VALUE, MIN_Y_VALUE, MIN_Z_VALUE)); // bottom right
    backWall->setColor(glm::vec3(0.5,0,0.5));
    sceneObjects.push_back(backWall);

    //initialise the front wall plane and add it to the SceneObjects
    Plane *frontWall = new Plane (glm::vec3(MAX_X_VALUE, MAX_Y_VALUE, MAX_Z_VALUE + 50),  //top right
                                 glm::vec3(MIN_X_VALUE, MAX_Y_VALUE, MAX_Z_VALUE + 50),  // top left
                                 glm::vec3(MIN_X_VALUE, MIN_Y_VALUE, MAX_Z_VALUE + 50),  // bottom left
                                 glm::vec3(MAX_X_VALUE, MIN_Y_VALUE, MAX_Z_VALUE + 50)); // bottom right
    frontWall->setColor(glm::vec3(0,0,0));
    frontWall->setReflectivity(true);

    sceneObjects.push_back(frontWall);

    //initialise the mirror plane and add it to the SceneObjects
    Plane *mirror = new Plane (glm::vec3(MAX_X_VALUE - 5, MAX_Y_VALUE-5, MIN_Z_VALUE+0.1),  //top right
                                 glm::vec3(MIN_X_VALUE + 5, MAX_Y_VALUE-5, MIN_Z_VALUE+0.1),  // top left
                                 glm::vec3(MIN_X_VALUE + 5, MIN_Y_VALUE+5, MIN_Z_VALUE+0.1),  // bottom left
                                 glm::vec3(MAX_X_VALUE - 5, MIN_Y_VALUE+5, MIN_Z_VALUE+0.1)); // bottom right
    mirror->setColor(glm::vec3(0,0,0));
    mirror->setReflectivity(true);
    sceneObjects.push_back(mirror);


    return sceneObjects;


}
