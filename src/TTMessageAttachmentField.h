//
//  TTMessageAttachmentField.h
//  Three20
//
//  Created by hitman on 4/21/10.
//  Copyright 2010 __MyCompanyName__. All rights reserved.
//

#import "Three20/TTMessageField.h"

@interface FRAttachmentField : TTMessageField
{
	BOOL _uploading;
}

@property (nonatomic, assign) BOOL uploading;

@end
