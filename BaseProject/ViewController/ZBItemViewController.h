//
//  ZBItemViewController.h
//  BaseProject
//
//  Created by apple-jd26 on 15/11/16.
//  Copyright © 2015年 Tarena. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ZBItemViewController : UIViewController

- (id)initWithTag:(NSString *)tag name:(NSString *)name;
@property(nonatomic,strong) NSString *tag;
@end
