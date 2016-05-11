//
//  Cell6.m
//  兼饼
//
//  Created by kaige on 15/10/18.
//  Copyright © 2015年 kaige. All rights reserved.
//

#import "Cell6.h"
#import "JBJobDetailModel.h"

@implementation Cell6

-(void)setModel:(JBJobDetailModel *)model
{
    _model=model;
    //集合时间
    self.worktime.text=model.gathertime;
    //集合地点
    self.address.text=model.gatherplace;
    //工作内容
    self.content.text=model.require;
}
@end
