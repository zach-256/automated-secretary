//
//  MailController.h
//  Automated Secretary
//
//  Created by Zachary Whitten on 7/27/15.
//  Copyright (c) 2015 WCNURadio. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Mailcore/Mailcore.h>

@interface MailController : NSObject

-(id)initMailController:(NSString*)anAccessToken aUserEmail:(NSString*)aUserEmail;

-(Boolean)SendEmail:(NSArray*)ToAddresses :(NSArray*)CCs :(NSArray*)BCCs :(NSString*)Subject :(NSString*)Message;
-(NSArray*)GetAllSendersFromInbox;
-(Boolean)IsInboundAccountValid;
-(Boolean)IsOutboundAccountValid;
-(Boolean)EmptyInbox;

@property MCOIMAPSession *IMAPSession;
@property MCOSMTPSession *SMTPSession;
@property bool didWork;


@end
