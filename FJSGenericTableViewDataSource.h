//
//  FJSGenericTableViewDataSource.h
//  FJSCode
//
//  Created by Corey Floyd on 6/5/09.
//  Copyright 2009 Flying Jalapeno Software. All rights reserved.
//

#import <Foundation/Foundation.h>


@protocol FJSGenericTableViewDataSource <NSObject>

@optional

@property(nonatomic,retain)id data;

- (void)updateData;
- (void)loadDataFromCache;

@end


@interface FJSGenericTableViewDataSource : NSObject {

}

@end