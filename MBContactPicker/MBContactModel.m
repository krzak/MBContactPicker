//
//  MBContactModel.m
//  MBContactPicker
//
//  Created by Matt Bowman on 12/13/13.
//  Copyright (c) 2013 Citrrus, LLC. All rights reserved.
//

#import "MBContactModel.h"

@interface MBContactModel ()
@end

@implementation MBContactModel

- (instancetype) initWithAPRecord:(APRecord *)record
{
    if (self = [self init]) {
        self.recordID = record.recordID;
        self.type     = record.recordType;
    }
    return self;
}

- (instancetype) initWithAPContact:(APContact *)contact
{
    if (self = [self initWithAPRecord:contact]) {
        self.firstName = contact.firstName;
        self.lastName = contact.lastName;
    }
    return self;
}

@end
