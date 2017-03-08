//
//  AppDelegate.h
//  LiberySelectSeat
//
//  Created by Tommy on 2017/2/22.
//  Copyright © 2017年 Tommy. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

@property (nonatomic, assign)NSString* username;

- (void)saveContext;


@end

