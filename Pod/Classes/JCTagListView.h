//
//  JCTagListView.h
//  JCTagListView
//
//  Created by 李京城 on 15/7/3.
//  Copyright (c) 2015年 李京城. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void (^JCTagListViewBlock)(NSInteger index);

@interface JCTagListView : UIView

@property (nonatomic, strong) UIColor *tagStrokeColor; // default: lightGrayColor
@property (nonatomic, strong) UIColor *tagTextColor; // default: darkGrayColor
@property (nonatomic, strong) UIColor *tagBackgroundColor; // default: clearColor
@property (nonatomic, strong) UIColor *tagSelectedBackgroundColor; // default: rgb(217,217,217)
@property (nonatomic, strong) UIColor *tagSelectedFontColor; // default: whiteColor
@property (nonatomic, strong) UIFont *tagFont; // default: whiteColor
@property (nonatomic, assign) CGFloat tagPadding; // default: 1.0f
@property (nonatomic, assign) CGFloat fontSize; // default: 10.0f (it would be equal than tagFont fontSize)

@property (nonatomic, assign) CGFloat tagCornerRadius; // default: 10
@property (nonatomic, assign) BOOL canSelectTags; // default: NO

@property (nonatomic, strong) NSMutableArray *tags;
@property (nonatomic, strong, readonly) NSMutableArray *selectedTags;

@property (nonatomic, strong) UICollectionView *collectionView;

- (void)setCompletionBlockWithSelected:(JCTagListViewBlock)completionBlock;

@end
