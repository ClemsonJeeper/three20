//
// Copyright 2009-2010 Facebook
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//    http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class TTLauncherView;

@interface TTLauncherItem : NSObject <NSCoding> {
  TTLauncherView* _launcher;
<<<<<<< HEAD
  NSString* _title;
  NSString* _image;
	UIImage *_rawImage;
  NSString* _URL;
  NSString* _style;
  NSInteger _badgeNumber;
	NSDictionary *_rawData;
  BOOL _canDelete;
}

@property(nonatomic,assign) TTLauncherView* launcher;
@property(nonatomic,copy) NSString* title;
@property(nonatomic,copy) NSString* image;
@property(nonatomic,retain) UIImage* rawImage;
@property(nonatomic,copy) NSDictionary* rawData;
@property(nonatomic,copy) NSString* URL;
@property(nonatomic,copy) NSString* style;
@property(nonatomic) NSInteger badgeNumber;
@property(nonatomic) BOOL canDelete;
=======

  NSString*       _title;
  NSString*       _image;
  NSString*       _URL;

  NSString*       _style;
  NSInteger       _badgeNumber;

  BOOL            _canDelete;
}

@property (nonatomic, assign) TTLauncherView* launcher;
@property (nonatomic, copy)   NSString*       title;
@property (nonatomic, copy)   NSString*       image;
@property (nonatomic, copy)   NSString*       URL;
@property (nonatomic, copy)   NSString*       style;
@property (nonatomic)         NSInteger       badgeNumber;
@property (nonatomic)         BOOL            canDelete;
>>>>>>> 06cd0abe33ac39d1f509e278e286c6bf1e45e821

- (id)initWithTitle:(NSString*)title image:(NSString*)image URL:(NSString*)URL;
- (id)initWithTitle:(NSString*)title image:(NSString*)image URL:(NSString*)URL
      canDelete:(BOOL)canDelete;

@end
