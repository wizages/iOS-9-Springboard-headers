//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

@class NSString, SBNotificationControlColorSettings;

@interface SBNewWidgetsButton : UIButton
{
    UIButton *_vibrantButton;
    UIButton *_overlayButton;
    SBNotificationControlColorSettings *_colorSettings;
    unsigned long long _badgeNumber;
    NSString *_text;
    NSString *_numberText;
}

@property(retain, nonatomic) NSString *numberText; // @synthesize numberText=_numberText;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) unsigned long long badgeNumber; // @synthesize badgeNumber=_badgeNumber;
- (struct CGSize)_numberLabelSizeForText:(id)arg1;
- (id)_numberImageForNumberText:(id)arg1 withAttributes:(id)arg2;
- (id)_numberAttributedStringWithNumberText:(id)arg1 attributes:(id)arg2;
- (id)_attributedStringWithColor:(id)arg1;
- (id)_numberTextAttributesWithColor:(id)arg1;
- (id)_textAttributesWithColor:(id)arg1;
- (id)_numberFont;
- (id)_textFont;
- (void)_setAttributeTitleForButton:(id)arg1 withSettings:(id)arg2;
- (void)_updateButtons;
- (void)_buttonStateChanged:(id)arg1;
- (void)_buttonPushed:(id)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(_Bool)arg1;
- (void)updateForContentCategorySizeChange;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)dealloc;
- (id)initWithColorSettings:(id)arg1;

@end

