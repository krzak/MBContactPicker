//
//  MBContactModel.h
//  MBContactPicker
//
//  Created by Matt Bowman on 12/13/13.
//  Copyright (c) 2013 Citrrus, LLC. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AddressBook/AddressBook.h>
#import <APAddressBook/APRecord.h>
#import <APAddressBook/APContact.h>

@protocol MBContactPickerModelProtocol <NSObject>

@required
//
// The recommended way to keep a long-term reference to a particular record is to store the first and last name, or a hash of the first and last name,
// in addition to the identifier. When you look up a record by ID, compare the record’s name to your stored name. If they don’t match, use the stored
// name to find the record, and store the new ID for the record
//

@property (nonatomic, assign) ABRecordID recordID;
@property (nonatomic, strong) NSString *firstName;
@property (nonatomic, strong) NSString *lastName;
@property (nonatomic, assign) ABRecordType type;
@property (nonatomic, assign) NSInteger recordValueIdx; // phone or contacts

@property (readonly, nonatomic, copy) NSString *contactTitle;

@optional

@property (readonly, nonatomic, copy) NSString *contactSubtitle;
@property (readonly, nonatomic) UIImage *contactImage;

@end

@interface MBContactModel : NSObject <MBContactPickerModelProtocol>

@property (nonatomic, assign) ABRecordID recordID;
@property (nonatomic, strong) NSString *firstName;
@property (nonatomic, strong) NSString *lastName;
@property (nonatomic, assign) ABRecordType type;
@property (nonatomic, assign) NSInteger recordValueIdx;

@property (nonatomic, copy) NSString *contactTitle;
@property (nonatomic, copy) NSString *contactSubtitle;
@property (nonatomic) UIImage *contactImage;

- (instancetype) initWithAPRecord:(APRecord *)record;
- (instancetype) initWithAPContact:(APContact *)contact;

@end
