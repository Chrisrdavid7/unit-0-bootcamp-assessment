//
//  ViewController.h
//  TestAssessment
//
//  Created by Michael Kavouras on 6/27/15.
//  Copyright (c) 2015 Mike Kavouras. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Person.h"

@interface ViewController : UIViewController

//Changed Positive to Negative
- (NSInteger)shouldReturnANegativeNSInteger;
//Changed Negative to Positive
- (CGFloat)shouldReturnAPositiveCGFloat;
//Changed Falsey to Positive
- (BOOL)shouldReturnAPositiveBool;
//Changed A to Z to 0 to 9
- (char)ShouldReturnAChar0to9;

- (NSInteger)shouldReturnSumOfArrayValues:(int *)arr withSize:(int)arrSize;
//Changed 100 to 1000
- (NSInteger)shouldReturnSumOf0To1000;
- (char)shouldReturnCharAfterQ:(char *)str;
- (NSInteger)sumOfAnInteger:(NSInteger)aNumber andAnotherInteger:(NSInteger)bNumber;
- (BOOL)isOdd:(NSInteger)number;
- (BOOL)isMultipleOfFive:(NSInteger)number;
- (BOOL)returnYesIfThisNumberIsOdd:(NSInteger)aNumber andThisNumberIsEven:(NSInteger)bNumber;
- (NSString *)shouldReturnPersonsName:(Person *)person;
- (void)changePersonsNameToAdaLovelace:(Person *)person;
- (Person *)createAndReturnPersonWithSomeProperties;
- (void)makePersonSitInChair:(Chair *)chair;
- (void)makePersonStandUp:(Person *)person;
- (NSArray *)createAndReturnNSArray;
- (void)changeValueOfIndexFourInArray:(NSMutableArray *)arr toPersonsName:(Person *)person;
- (NSString *)repeatString:(NSString *)str numberOfTimes:(NSInteger)numberOfTimes;
- (int)returnSumWhileSumIsLessThan1050:(int *)arr;

@end

