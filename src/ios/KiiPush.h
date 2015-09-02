//
//  KiiPush.h
//  HelloCordova
//
//  Created by fkm on 2015/08/05.
//
//

#import <Foundation/Foundation.h>
#import <Cordova/CDV.h>
#import <Cordova/CDVPlugin.h>

@interface KiiPush : CDVPlugin

@property (nonatomic, copy) NSString *callbackId;
@property (nonatomic, copy) NSString *notificationCallbackId;
@property (nonatomic, copy) NSString *callback;

@property (nonatomic, strong) NSDictionary *notificationMessage;
@property BOOL                          isInline;

@property (nonatomic, copy) NSString* appId;
@property (nonatomic, copy) NSString* appKey;
@property (nonatomic, copy) NSString* accessToken;


- (void)register:(CDVInvokedUrlCommand*)command;

- (void)didRegisterForRemoteNotificationsWithDeviceToken:(NSData *)deviceToken;
- (void)didFailToRegisterForRemoteNotificationsWithError:(NSError *)error;

- (void)setNotificationMessage:(NSDictionary *)notification;
- (void)notificationReceived;

@end
