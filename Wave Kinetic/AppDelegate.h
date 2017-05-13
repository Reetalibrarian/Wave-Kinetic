//
//  AppDelegate.h
//  Wave Kinetic
//
//  Created by Yi-Ling Wu on 13/05/2017.
//  Copyright © 2017 YILING. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

