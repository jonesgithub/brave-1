#include "GameBg.h"

bool GameBg::init()
{
	bool bRet = false;
	do
	{
		if (!Sprite::init())
			return false;
		log("GameBg::init");

		Size visibleSize = Director::getInstance()->getVisibleSize();
		Point origin = Director::getInstance()->getVisibleOrigin();

		Sprite* map1 = Sprite::create("image/bg1.png");
		Sprite* map2 = Sprite::create("image/bg2.png");
		Sprite* map3 = Sprite::create("image/bg3.png");
		this->setContentSize(Size(map1->getContentSize().width + map2->getContentSize().width + map3->getContentSize().width, map1->getContentSize().height));
		map1->setAnchorPoint(Vec2(0, 0));
		map2->setAnchorPoint(Vec2(0, 0));
		map3->setAnchorPoint(Vec2(0, 0));
		map1->setPosition(Vec2(0, 0));
		map2->setPosition(Vec2(map1->getContentSize().width,0));
		map3->setPosition(Vec2(map1->getContentSize().width + map2->getContentSize().width, 0));
		this->addChild(map1, 0, "map1");
		this->addChild(map2, 0, "map2");
		this->addChild(map3, 0, "map3");
		

		bRet = true;
	} while (0);

	return bRet;
}