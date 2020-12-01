//
//  AppDelegate.h
//  gitTestDemo
//
//  Created by GZYS on 2020/12/1.
//  Copyright © 2020 GZYS. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

