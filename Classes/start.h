#ifndef __START_H__
#define __START_H__

#include "cocos2d.h";
using namespace cocos2d;

class start : public CCLayer
{
public:
	virtual bool init();
	static CCScene* scene();
	CREATE_FUNC(start);
};
#endif