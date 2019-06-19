//
//  ZanLikeView.h
//  zanDemo
//
//  Created by 王俊钢 on 2019/6/19.
//  Copyright © 2019 wangjungang. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface ZanLikeView : UIView
@property (nonatomic, strong) UIImageView *likeBefore;
@property (nonatomic, strong) UIImageView *likeAfter;
@property (nonatomic, assign) CGFloat     likeDuration;
@property (nonatomic, strong) UIColor     *zanFillColor;

- (void)resetView;
@end

NS_ASSUME_NONNULL_END
