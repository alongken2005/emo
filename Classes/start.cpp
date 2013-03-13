#include "start.h"

using namespace cocos2d;

CCScene* start::scene()
{
	CCScene* scene = NULL;
	do 
	{
		scene = CCScene::create();
		CC_BREAK_IF(!scene);

		start* startbg = start::create();
		CC_BREAK_IF(!startbg);

		scene->addChild(startbg);
	} while (0);

	return scene;
}

bool start::init()
{
	bool bRet = false;
	do 
	{
		CC_BREAK_IF(!CCLayer::init());
		CCSize size = CCDirector::sharedDirector()->getWinSize();

		CCSprite* bgSprite = CCSprite::create("MainScreen/cover.jpg");
		bgSprite->setPosition(ccp(size.width/2, size.height/2));
		this->addChild(bgSprite);
		bRet = true;
	} while (0);

	return bRet;
}
