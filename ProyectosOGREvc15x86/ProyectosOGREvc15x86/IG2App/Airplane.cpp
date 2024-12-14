#include "Airplane.h"

Airplane::Airplane(const Vector3 initPos, SceneNode* node, SceneManager* sm)
	: IG2Object(initPos, node, sm)
{
	plane = node->createChildSceneNode();

	body = plane->createChildSceneNode("body");
	Entity* ent = mSM->createEntity("sphere.mesh");
	body->attachObject(ent);
	body->setScale(1, 1, 3);

	wings = plane->createChildSceneNode("wings");
	ent = mSM->createEntity("cube.mesh");
	wings->attachObject(ent);
	wings->setScale(10, 0.2, 1);

	helix1 = plane->createChildSceneNode("H1");
	Helix* h1 = new Helix(Vector3(150, 0, 50), helix1, mSM, 10);

	helix2 = plane->createChildSceneNode("H2");
	Helix* h2 = new Helix(Vector3(-150, 0, 50), helix2, mSM, 10);

	pilot = plane->createChildSceneNode("pilot");
	ent = mSM->createEntity("ninja.mesh");
	pilot->attachObject(ent);
	pilot->setPosition(0, 0, 150);
	pilot->yaw(Degree(180));

	rudder = plane->createChildSceneNode("rudder");
	ent = mSM->createEntity("cube.mesh");
	rudder->attachObject(ent);
	rudder->setScale(0.2, 3, 1);
	rudder->setPosition(0, 50, -150);
	rudder->pitch(Degree(-45));
}
