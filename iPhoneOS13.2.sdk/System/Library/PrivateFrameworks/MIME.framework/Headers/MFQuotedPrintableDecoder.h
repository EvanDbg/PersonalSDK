//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MIME/MFBaseFilterDataConsumer.h>

@interface MFQuotedPrintableDecoder : MFBaseFilterDataConsumer
{
    unsigned char _lastEncoded;
    NSUInteger _required;
    BOOL _forTextPart;
    BOOL _badlyEncoded;
}

@property(nonatomic) BOOL forTextPart; // @synthesize forTextPart=_forTextPart;
- (void)done;
- (long long)appendData:(id)arg1;

@end

