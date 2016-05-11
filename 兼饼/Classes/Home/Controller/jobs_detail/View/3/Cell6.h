//
//  Cell6.h
//  兼饼
//
//  Created by kaige on 15/10/18.
//  Copyright © 2015年 kaige. All rights reserved.
//

#import <UIKit/UIKit.h>
@class JBJobDetailModel;
@interface Cell6 : UITableViewCell
@property (weak, nonatomic) IBOutlet UILabel *worktime;
@property (weak, nonatomic) IBOutlet UILabel *address;
@property (weak, nonatomic) IBOutlet UILabel *content;
@property(nonatomic,strong) JBJobDetailModel *model;
@end
