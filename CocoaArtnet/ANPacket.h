//
//  ANPacket.h
//  CocoaArtnet
//
//  Created by Phil Christensen on 2/14/13.
//  Copyright (c) 2013 Phil Christensen. All rights reserved.
//

#import <inttypes.h>

#import <Foundation/Foundation.h>

@interface ANPacket : NSObject
    @property NSString* opcode;
    @property uint16_t sequence;
    @property uint8_t physical;
    @property uint8_t universe;

    -(ANPacket*) initWithUniverse: (uint8_t) u physical: (uint8_t) p;
@end
