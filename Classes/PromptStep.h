//
//  PromptStep.h
//  CocoaScript
//
//  Created by Matt Gallagher on 2010/11/03.
//  Copyright 2010 Matt Gallagher. All rights reserved.
//
//  Permission is given to use this source code file, free of charge, in any
//  project, commercial or otherwise, entirely at your risk, with the condition
//  that any redistribution (in part or whole) of source code must retain
//  this copyright and permission notice. Attribution in compiled projects is
//  appreciated but not required.
//

#import "ScriptStep.h"

@interface PromptStep : ScriptStep
{
	id initialValue;
	NSString *outputStateKey;
	NSTextField *textField;
}

@property (retain) id initialValue;
@property (retain) NSTextField *textField;
@property (copy) NSString *outputStateKey;

+ (PromptStep *)promptStepWithTitle:(NSString *)aTitle
	initialValue:(id)initial
	outputStateKey:(NSString *)key;

@end
