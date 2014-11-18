//
//  NodeTableViewCell.h
//  Demo
//
//  Created by Javier Navarro on 17/10/14.
//  Copyright (c) 2014 MEGA. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SWTableViewCell.h"

@interface NodeTableViewCell : SWTableViewCell

@property (weak, nonatomic) IBOutlet UIImageView *thumbnailImageView;
@property (weak, nonatomic) IBOutlet UILabel *nameLabel;
@property (weak, nonatomic) IBOutlet UILabel *modificationLabel;
@property (nonatomic) uint64_t nodeHandle;

@end
