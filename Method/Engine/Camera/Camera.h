#ifndef CAMERA_H
#define CAMERA_H

#include "../include.h"
#include "..\Shader\Shader.h"


using namespace std;
using namespace glm;

class Camera {
public:
	float sensitivity = 0.1f;
	float yaw = -90.0f;
	float pitch = 0.0f;
	float defaultAccel;
	float slowDownRate;
	float speedScalar;
	Shader shader;
	vec3 camPos;
	vec3 camTarget;
	vec3 camDirection;
	vec3 up;
	vec3 camRight;
	vec3 camUp;
	vec3 camFront;
	float zoom;
	vec3 vNormal;
	vec3 velocity;

	void calculateVelocityDefault();
	void changeVelocity(char key);
	Camera();
	Camera(Shader*, vec3);
	mat4 getViewMatrix();
	void processMouseMovement(float yawF, float pitchF);
};

#endif