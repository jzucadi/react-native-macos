/**
 * Copyright (c) 2015-present, Facebook, Inc.
 * All rights reserved.
 *
 * This source code is licensed under the BSD-style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */

#import <AppKit/AppKit.h>

NS_ASSUME_NONNULL_BEGIN

@class RCTFieldEditor;

@protocol RCTFieldEditorDelegate <NSTextViewDelegate>
@optional
- (void)fieldEditor:(RCTFieldEditor *)editor didPaste:(NSString *)text;
@end

@interface RCTFieldEditor : NSTextView
@property (nullable, weak) id<RCTFieldEditorDelegate> delegate;
@end

NS_ASSUME_NONNULL_END