//
//  BlockStep.h
//  CocoaScript
//
//  Created by Matt Gallagher on 2010/11/04.
//  Copyright 2010 Matt Gallagher. All rights reserved.
//
//  Permission is given to use this source code file, free of charge, in any
//  project, commercial or otherwise, entirely at your risk, with the condition
//  that any redistribution (in part or whole) of source code must retain
//  this copyright and permission notice. Attribution in compiled projects is
//  appreciated but not required.
//

#import "ScriptStep.h"

@class BlockStep;

typedef void (^BlockStepBlock)(BlockStep *);

@interface BlockStep : ScriptStep
{
	BlockStepBlock block;
	BOOL runOnMainThread;
}

@property (assign) BlockStepBlock block;
@property (readwrite) BOOL runOnMainThread;

+ (BlockStep *)blockStepWithBlock:(BlockStepBlock)aBlock;

@end
