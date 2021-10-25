#ifndef CREATE_G_B_A_H
#define CREATE_G_B_A_H

#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include "GLmesh.h"

// GLM Math Header inclusions
#include <glm/glm.hpp>
#include <glm/gtx/transform.hpp>
#include <glm/gtc/type_ptr.hpp>

class GBA
{
public:
	GBA(GLMesh& mesh);

	void transformation(GLint modelLoc);
	void destroyMesh(GLMesh& mesh);
	void setShaderInfo(GLuint program, glm::vec3 objectColor, glm::vec3 lightColor, glm::vec3 lightPosition);

private:
	glm::vec3 meshPosition;
	glm::vec3 meshScale;
	glm::vec3 meshRotation;
	float degree;
	float angle;
};


#endif