#include "Header.h"
#import <XCTest/XCTest.h>

@interface teest : XCTestCase

@end

@implementation teest

- (void)testLab {
    srand((unsigned)time(NULL));
    int a[] = { 23, 21, 6, 12, -3};
    
    int res = Min(a, 5, 0, 0);
    
    XCTAssertEqual(res, -3);
    
}

@end
