#include "start.h"

using namespace cocos2d;

CCScene* start::scene()
{
	CCScene* scene = NULL;
	do 
	{
		scene = CCScene::create();
		CC_BREAK_IF(!scene);

		CCSize size = CCDirector::sharedDirector()->getWinSize();

		start* startbg = start::create();
		CCSprite* bgSprite = CCSprite::create("MainScreen/cover.jpg");
		bgSprite->setPosition(ccp(size.width/2, size.height/2));
		startbg->addChild(bgSprite);

		CCSprite* logo = CCSprite::create("MainScreen/cn_logo.png");
		logo->setPosition(ccp(size.width/2, size.height/2));

		CCSize shsize;
		shsize.width = 5;
		shsize.height = 6;
		CCActionInterval* actionMoveTo = CCMoveTo::create(1, ccp(size.width/2 - 300, size.height/2 + 200));
		CCActionInterval* actionScaleTo1 = CCScaleTo::create(0, 0.6f);
		CCActionInterval* actionScaleTo2 = CCScaleTo::create(0.5, 1.0f);
		
		logo->runAction(actionMoveTo);
		logo->runAction(CCSequence::create(actionScaleTo1, actionScaleTo2, NULL));

		startbg->addChild(logo);


		CCSprite* enter1 = CCSprite::create("MainScreen/button_disabled.png");
		enter1->setPosition(ccp(size.width/2, 80));
		CCSprite* enter2 = CCSprite::create("cn_/ButtonWord/cn_buttonword_10.png");
		enter2->setPosition(ccp(size.width/2, 80));
		enter2->setScale(0.4f);
		startbg->addChild(enter1);
		startbg->addChild(enter2);
		//CCActionInterval* shaky = CCShaky3D::create(1, shsize, 8, 0);
		//CCFiniteTimeAction*  action = CCSequence::create(CCDelayTime::create(0.5), shaky, NULL);
		//startbg->runAction(action);
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

		bRet = true;
	} while (0);

	return bRet;
}
