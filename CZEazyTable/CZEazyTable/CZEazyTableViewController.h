//
//  CZEazyTableViewController.h
//  CZEazyTable
//
//  Created by PaulChou on 2015/11/26.
//  Copyright © 2015年 CzarsStudio. All rights reserved.
//

#import <UIKit/UIKit.h>


//UITableView proper blocks for all Delegate function
typedef void (^CZEazyTableViewDisplayCellBlock)(UITableView *tableView, UITableViewCell *cell, NSIndexPath *indexPath);
typedef CGFloat (^CZEazyTableViewReturnFloatBlock)(UITableView *tableView, NSIndexPath *indexPath);
typedef CGFloat (^CZEazyTableViewSectionReturnFloatBlock)(UITableView *tableView, NSInteger section);
typedef id (^CZEazyTableViewSectionReturnBlock)(UITableView *tableView, NSInteger section);
typedef NSInteger (^CZEazyTableViewSectionReturnIntegerBlock)(UITableView *tableView, NSInteger section);
typedef NSInteger (^CZEazyTableViewReturnIntegerBlock)(UITableView *tableView);
typedef id (^CZEazyTableViewTableReturnBlock)(UITableView *tableView);
typedef NSInteger (^CZEazyTableViewIndexTitleReturnIntegerBlock)(UITableView *tableView, NSString *title, NSInteger index);
typedef void (^CZEazyTableViewStyleBlock)(UITableView *tableView, UITableViewCellEditingStyle style, NSIndexPath *indexPath);
typedef void (^CZEazyTableViewMoveBlock)(UITableView *tableView, NSIndexPath *sourceIndexPath, NSIndexPath *destinationIndexPath);
typedef id (^CZEazyTableViewMoveReturnBlock)(UITableView *tableView, NSIndexPath *sourceIndexPath, NSIndexPath *destinationIndexPath);
typedef NSInteger (^CZEazyTableViewIndexPathReturnIntegerBlock)(UITableView *tableView, NSIndexPath *indexPath);

typedef void (^CZEazyTableViewBlock)(UITableView *tableView, NSIndexPath *indexPath);
typedef id (^CZEazyTableViewReturnBlock)(UITableView *tableView, NSIndexPath *indexPath);
typedef UITableViewCellEditingStyle (^BKTableViewReturnEditingStyleBlock)(UITableView *tableView, NSIndexPath *indexPath);
typedef BOOL (^CZEazyTableViewReturnBoolBlock)(UITableView *tableView, NSIndexPath *indexPath);
typedef BOOL (^CZEazyTableViewActionReturnBoolBlock)(UITableView *tableView, SEL action, NSIndexPath *indexPath, id sender);
typedef void (^CZEazyTableViewActionBlock)(UITableView *tableView, SEL action, NSIndexPath *indexPath, id sender);


//UITabelViewDelegate const NSString ID
NSString * const kViewForHeaderInSection = @"ViewForHeaderInSection";
NSString * const kViewForFooterInSection = @"ViewForFooterInSection";
NSString * const kAccessoryButtonTappedForRowWithIndexPath = @"AccessoryButtonTappedForRowWithIndexPath";
NSString * const kWillSelectRowAtIndexPath = @"WillSelectRowAtIndexPath";
NSString * const kWillDeselectRowAtIndexPath = @"WillDeselectRowAtIndexPath";
NSString * const kDidSelectRowAtIndexPath = @"DidSelectRowAtIndexPath";
NSString * const kDidDeselectRowAtIndexPath = @"DidDeselectRowAtIndexPath";
NSString * const kEditingStyleForRowAtIndexPath = @"EditingStyleForRowAtIndexPath";
NSString * const kTitleForDeleteConfirmationButtonForRowAtIndexPath = @"TitleForDeleteConfirmationButtonForRowAtIndexPath";
NSString * const kShouldIndentWhileEditingRowAtIndexPath = @"ShouldIndentWhileEditingRowAtIndexPath";
NSString * const kWillBeginEditingRowAtIndexPath = @"WillBeginEditingRowAtIndexPath";
NSString * const kDidEndEditingRowAtIndexPath = @"DidEndEditingRowAtIndexPath";
NSString * const kTargetIndexPathForMoveFromRowAtIndexPath = @"TargetIndexPathForMoveFromRowAtIndexPath";
NSString * const kIndentationLevelForRowAtIndexPath = @"IndentationLevelForRowAtIndexPath";
NSString * const kWillDisplayCellForRowAtIndexPath = @"WillDisplayCellForRowAtIndexPath";


//UITableViewDataSource const NSString ID
NSString * const kNumberOfRowsInSection  = @"NumberOfRowsInSection";
NSString * const kNumberOfSectionInTableView = @"NumberOfSectionInTableView";
NSString * const kCellForRowAtIndexPath  = @"CellForRowAtIndex";
NSString * const kTitleForHeaderInSection = @"TitleForHeaderInSection";
NSString * const kTitleForFooterInSection = @"TitleForFooterInSection";
NSString * const kCanEditRowAtIndexPath = @"CanEditRowAtIndexPath";
NSString * const kCanMoveRowAtIndexPath = @"CanMoveRowAtIndexPath";
NSString * const kSectionIndexTitleForTableView = @"SectionIndexTitleForTableView";
NSString * const kSectionForSectionIndexTitle = @"SectionForSectionIndexTitle";
NSString * const kCommitEditingStyle = @"CommitEditingStyle";
NSString * const kMoveRowAtIndexPath = @"MoveRowAtIndexPath";



@interface CZEazyTableViewController : UITableViewController

@end
