//
//  ViewController.h
//  KMCameraSMS
//
//  Created by Student P_04 on 05/11/16.
//  Copyright © 2016 karishmamahajan. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MessageUI/MessageUI.h>
@interface ViewController : UIViewController<UIImagePickerControllerDelegate,MFMailComposeViewControllerDelegate,MFMessageComposeViewControllerDelegate>

- (IBAction)actionOpenCamera:(id)sender;

- (IBAction)actionOpenGallery:(id)sender;

- (IBAction)actionMail:(id)sender;

- (IBAction)actionSMS:(id)sender;

@property (strong, nonatomic) IBOutlet UIImageView *myImageView;





@end

