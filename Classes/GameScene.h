#ifndef __GameScene__
#define __GameScene__
#include "cocos2d.h"
#include "GameBg.h"

USING_NS_CC;

class GameScene : public Layer
{
private:
	void update(float time);
	virtual void onExit();
	GameBg* _background;
	Sprite* _role;
	bool _flip;
	Vec2 _position;
	float _speed;
	EventListenerTouchOneByOne* _listener_touch;
public:
	bool init();
	static Scene* createScene();
	CREATE_FUNC(GameScene);
	bool onTouchBegan(Touch* touch, Event* event);
	void onMove(Ref* obj);
};

#endif