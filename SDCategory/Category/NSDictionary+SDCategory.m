//
//  NSDictionary+BVJSONString.m
//  fanhuanwang
//
//  Created by julian on 10/12/16.
//  Copyright © 2016 lgfz. All rights reserved.
//

#import "NSDictionary+SDCategory.h"

@implementation NSDictionary (SDCategory)

-(NSString*) sd_dicToJsonString:(BOOL) prettyPrint {
    NSError *error;
    NSData *jsonData = [NSJSONSerialization dataWithJSONObject:self
                                                       options:(NSJSONWritingOptions)    (prettyPrint ? NSJSONWritingPrettyPrinted : 0)
                                                         error:&error];
    
    if (! jsonData) {
        NSLog(@"bv_jsonStringWithPrettyPrint: error: %@", error.localizedDescription);
        return @"{}";
    } else {
        return [[NSString alloc] initWithData:jsonData encoding:NSUTF8StringEncoding];
    }
}

@end
