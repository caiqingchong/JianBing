//
//  JBOwnInfoCell.h
//  兼饼
//
//  Created by 键盘上的舞者 on 15/10/11.
//  Copyright © 2015年 键盘上的舞者. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface JBOwnInfoCell : UITableViewCell

@property(nonatomic,strong) NSArray *dataArray;

//类方法
+(instancetype)initWithTableView:(UITableView *)tableview;
@end
