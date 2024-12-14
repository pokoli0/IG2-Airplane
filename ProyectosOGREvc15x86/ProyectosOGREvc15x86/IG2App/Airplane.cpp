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
	wings->setScale(6, 0.2, 1);

}
