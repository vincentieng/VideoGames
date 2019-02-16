#include <iostream>
#include <sstream>

#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>

Particles::Particles(glm::vec3 myPosition, float mass, float velocity, float radius, float acceleration)
{
	this.myPosition = myPosition;
	this.mass = mass;
	this.velocity = velocity;
	this.radius = radius;
	this.acceleration = acceleration;
};

Particles particles;	
void Initiation(int number_particles) {
	for (int i = 0; i < number_particles; ++i) {
		particles[i].position = (myPosition) { RAND_MAX(50), RAND_MAX(50), RAND_MAX(50)};
		particles[i].velocity = (myPosition) { 0, 0 };
		particles[i].mass = 1;
		test;
	}
}