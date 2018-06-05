//
//  NewWalletRouterInput.h
//  MyEtherWallet-iOS
//
//  Created by Mikhail Nikanorov on 28/04/2018.
//  Copyright © 2018 MyEtherWallet, Inc. All rights reserved.
//

@import Foundation;

@protocol NewWalletRouterInput <NSObject>
- (void) unwindToWalletWithAddress:(NSString *)address;
- (void) unwindToStartWithAddress:(NSString *)address;
@end
