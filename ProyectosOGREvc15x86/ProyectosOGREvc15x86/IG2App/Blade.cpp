#include "Blade.h"

Blade::Blade(const Ogre::Vector3 initPos, SceneNode* node, SceneManager* sm)
	: IG2Object(initPos, node, sm)
{
	blade = mNode->createChildSceneNode();

	// crear ala
	ala = blade->createChildSceneNode();
	Ogre::Entity* ent = mSM->createEntity("cube.mesh");
	ala->attachObject(ent);
	ala->setScale(1, 0.1, 0.25);

	// ogrehead
	ogrehead = blade->createChildSceneNode();
	ent = mSM->createEntity("ogrehead.mesh");
	ogrehead->attachObject(ent);
	ogrehead->setScale(0.25, 0.25, 0.05);
	ogrehead->setPosition(30, 5, 0);
	ogrehead->yaw(Degree(-90));
	ogrehead->pitch(Degree(-90));

};