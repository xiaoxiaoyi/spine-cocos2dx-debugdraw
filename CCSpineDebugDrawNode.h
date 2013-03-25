/****************************************************************************
Copyright (c) 2013 Vinova Pte Ltd

http://www.vinova.sg

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
THE SOFTWARE.
****************************************************************************/

#ifndef SPINE_DEBUG_DRAW_H_
#define SPINE_DEBUG_DRAW_H_

#include "cocos2d.h"

class CCSpineDebugDrawNode: public cocos2d::CCNode {
  CC_SYNTHESIZE(cocos2d::CCArray*, mSkeletons, Skeletons)
  CC_SYNTHESIZE(bool, mIsDrawingBones, IsDrawingBones);
  CC_SYNTHESIZE(bool, mIsDrawingSlotBoundingBoxes, IsDrawingSlotBoundingBoxes);
public:
  CREATE_FUNC(CCSpineDebugDrawNode);
  virtual bool init();
  virtual ~CCSpineDebugDrawNode(void);

	virtual void draw ();
};

#endif
