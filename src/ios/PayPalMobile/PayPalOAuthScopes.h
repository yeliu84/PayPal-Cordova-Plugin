//
//  PayPalOAuthScopes.h
//
//  Version 2.14.0
//
//  Copyright (c) 2014-2016 PayPal, Inc. All rights reserved.
//  All rights reserved.
//

// Currently available scope-values to which the user can be asked to consent.
// @see https://developer.paypal.com/docs/integration/direct/identity/attributes/ for more details

/// Authorize charges for future purchases paid for with PayPal.
extern NSString * __PPM_nonnull const kPayPalOAuth2ScopeFuturePayments;
/// Share basic account information.
extern NSString * __PPM_nonnull const kPayPalOAuth2ScopeProfile;
/// Basic Authentication.
extern NSString * __PPM_nonnull const kPayPalOAuth2ScopeOpenId;
/// Share your personal and account information.
extern NSString * __PPM_nonnull const kPayPalOAuth2ScopePayPalAttributes;
/// Share your email address.
extern NSString * __PPM_nonnull const kPayPalOAuth2ScopeEmail;
/// Share your account address.
extern NSString * __PPM_nonnull const kPayPalOAuth2ScopeAddress;
/// Share your phone number.
extern NSString * __PPM_nonnull const kPayPalOAuth2ScopePhone;

