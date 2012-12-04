//
//  TCViewController.h
//  TestChat
//
//  Created by Mike Lewis on 1/28/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "WebSocket.h"
@interface TCViewController : UITableViewController<WebSocketDelegate>{
@private
    WebSocket* ws;
}
@property (nonatomic, readonly) WebSocket* ws;
@property (nonatomic, retain) IBOutlet UITextView *inputView;

- (IBAction)reconnect:(id)sender;

@end
