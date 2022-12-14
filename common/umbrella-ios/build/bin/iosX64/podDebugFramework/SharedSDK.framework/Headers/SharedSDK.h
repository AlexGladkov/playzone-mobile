#import <Foundation/NSArray.h>
#import <Foundation/NSDictionary.h>
#import <Foundation/NSError.h>
#import <Foundation/NSObject.h>
#import <Foundation/NSSet.h>
#import <Foundation/NSString.h>
#import <Foundation/NSValue.h>

@class SSDKKviewmodelKViewModelCompanion, SSDKKviewmodelKViewModel, SSDKKviewmodelWrappedSharedFlow<T>, SSDKKviewmodelWrappedStateFlow<T>, SSDKKviewmodelBaseSharedViewModel<State, Action, Event>, SSDKLoginEvent, SSDKLoginViewState, SSDKLoginAction, SSDKLoginActionOpenForgotPasswordScreen, SSDKLoginActionOpenMainFlow, SSDKLoginActionOpenRegistrationScreen, SSDKLoginEventEmailChanged, SSDKLoginEventForgotClick, SSDKLoginEventLoginClick, SSDKLoginEventPasswordChanged, SSDKLoginEventPasswordShowClick, SSDKLoginEventRegistrationClick, SSDKSearchEvent, SSDKSearchViewState, SSDKSearchAction, SSDKSearchActionShowGameDetail, SSDKSearchEventGameClicked, SSDKSearchEventQueryChanged, SSDKGame, SSDKHomeEvent, SSDKHomeViewState, SSDKHomeAction, SSDKHomeActionShowUserProfile, SSDKHomeEventUserProfileClicked, SSDKPlatformSDK, SSDKPlatformConfiguration, SSDKInject, SSDKToken, SSDKTokenCompanion, SSDKKodein_diDIModule, SSDKKodein_typeTypeToken<T>, SSDKKodein_diDIContext<C>, SSDKKotlinThrowable, SSDKKotlinArray<T>, SSDKKotlinException, SSDKKotlinRuntimeException, SSDKKotlinIllegalStateException, SSDKKodein_typeTypeTokenCompanion, SSDKKodein_diDIContextCompanion, SSDKKodein_diDIKey<__contravariant C, __contravariant A, __covariant T>, SSDKKotlinUnit, SSDKKodein_diDITrigger, SSDKKotlinx_serialization_coreSerializersModule, SSDKKotlinx_serialization_coreSerialKind, SSDKKotlinNothing, SSDKKodein_diDIDefinition<C, A, T>, SSDKKotlinTriple<__covariant A, __covariant B, __covariant C>, SSDKKodein_diSearchSpecs, SSDKKodein_diScopeRegistry, SSDKKodein_diReferenceLocal<__covariant T, __covariant R>, SSDKKodein_diDIDefining<C, A, T>, SSDKKodein_diReferenceLocalCompanion;

@protocol SSDKKotlinx_coroutines_coreCoroutineScope, SSDKKotlinSuspendFunction1, SSDKKodein_diDirectDI, SSDKKotlinx_serialization_coreKSerializer, SSDKKotlinCoroutineContext, SSDKKotlinx_coroutines_coreFlowCollector, SSDKKotlinx_coroutines_coreFlow, SSDKKotlinx_coroutines_coreSharedFlow, SSDKKviewmodelCloseable, SSDKKotlinx_coroutines_coreStateFlow, SSDKKotlinFunction, SSDKKodein_diDIContainer, SSDKKodein_diDI, SSDKKodein_diDirectDIAware, SSDKKodein_diDirectDIBase, SSDKKotlinx_serialization_coreEncoder, SSDKKotlinx_serialization_coreSerialDescriptor, SSDKKotlinx_serialization_coreSerializationStrategy, SSDKKotlinx_serialization_coreDecoder, SSDKKotlinx_serialization_coreDeserializationStrategy, SSDKKodein_diDIBuilder, SSDKKotlinCoroutineContextElement, SSDKKotlinCoroutineContextKey, SSDKKodein_diReference, SSDKKodein_diDITree, SSDKKodein_diDIAware, SSDKKotlinIterator, SSDKKotlinx_serialization_coreCompositeEncoder, SSDKKotlinAnnotation, SSDKKotlinx_serialization_coreCompositeDecoder, SSDKKodein_diDIBuilderDirectBinder, SSDKKodein_diDIBuilderTypeBinder, SSDKKodein_diContextTranslator, SSDKKodein_diDIBuilderConstantBinder, SSDKKodein_diDIContainerBuilder, SSDKKodein_diDIBindBuilder, SSDKKodein_diDIBindBuilderWithContext, SSDKKodein_diScope, SSDKKodein_diDIBindBuilderWithScope, SSDKKodein_diReferenceMaker, SSDKKodein_diExternalSource, SSDKKotlinLazy, SSDKKotlinx_serialization_coreSerializersModuleCollector, SSDKKotlinKClass, SSDKKodein_diDIBinding, SSDKKodein_diBindingDI, SSDKKotlinKDeclarationContainer, SSDKKotlinKAnnotatedElement, SSDKKotlinKClassifier, SSDKKodein_diDIBindingCopier, SSDKKodein_diBinding, SSDKKodein_diScopeCloseable, SSDKKodein_diWithContext;

NS_ASSUME_NONNULL_BEGIN
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wunknown-warning-option"
#pragma clang diagnostic ignored "-Wincompatible-property-type"
#pragma clang diagnostic ignored "-Wnullability"

#pragma push_macro("_Nullable_result")
#if !__has_feature(nullability_nullable_result)
#undef _Nullable_result
#define _Nullable_result _Nullable
#endif

__attribute__((swift_name("KotlinBase")))
@interface SSDKBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface SSDKBase (SSDKBaseCopying) <NSCopying>
@end;

__attribute__((swift_name("KotlinMutableSet")))
@interface SSDKMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((swift_name("KotlinMutableDictionary")))
@interface SSDKMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorSSDKKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((swift_name("KotlinNumber")))
@interface SSDKNumber : NSNumber
- (instancetype)initWithChar:(char)value __attribute__((unavailable));
- (instancetype)initWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
- (instancetype)initWithShort:(short)value __attribute__((unavailable));
- (instancetype)initWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
- (instancetype)initWithInt:(int)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
- (instancetype)initWithLong:(long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
- (instancetype)initWithLongLong:(long long)value __attribute__((unavailable));
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
- (instancetype)initWithFloat:(float)value __attribute__((unavailable));
- (instancetype)initWithDouble:(double)value __attribute__((unavailable));
- (instancetype)initWithBool:(BOOL)value __attribute__((unavailable));
- (instancetype)initWithInteger:(NSInteger)value __attribute__((unavailable));
- (instancetype)initWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
+ (instancetype)numberWithChar:(char)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedChar:(unsigned char)value __attribute__((unavailable));
+ (instancetype)numberWithShort:(short)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedShort:(unsigned short)value __attribute__((unavailable));
+ (instancetype)numberWithInt:(int)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInt:(unsigned int)value __attribute__((unavailable));
+ (instancetype)numberWithLong:(long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLong:(unsigned long)value __attribute__((unavailable));
+ (instancetype)numberWithLongLong:(long long)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value __attribute__((unavailable));
+ (instancetype)numberWithFloat:(float)value __attribute__((unavailable));
+ (instancetype)numberWithDouble:(double)value __attribute__((unavailable));
+ (instancetype)numberWithBool:(BOOL)value __attribute__((unavailable));
+ (instancetype)numberWithInteger:(NSInteger)value __attribute__((unavailable));
+ (instancetype)numberWithUnsignedInteger:(NSUInteger)value __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinByte")))
@interface SSDKByte : SSDKNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((swift_name("KotlinUByte")))
@interface SSDKUByte : SSDKNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((swift_name("KotlinShort")))
@interface SSDKShort : SSDKNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((swift_name("KotlinUShort")))
@interface SSDKUShort : SSDKNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((swift_name("KotlinInt")))
@interface SSDKInt : SSDKNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((swift_name("KotlinUInt")))
@interface SSDKUInt : SSDKNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((swift_name("KotlinLong")))
@interface SSDKLong : SSDKNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((swift_name("KotlinULong")))
@interface SSDKULong : SSDKNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((swift_name("KotlinFloat")))
@interface SSDKFloat : SSDKNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((swift_name("KotlinDouble")))
@interface SSDKDouble : SSDKNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((swift_name("KotlinBoolean")))
@interface SSDKBoolean : SSDKNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((swift_name("KviewmodelKViewModel")))
@interface SSDKKviewmodelKViewModel : SSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) SSDKKviewmodelKViewModelCompanion *companion __attribute__((swift_name("companion")));
- (void)clear __attribute__((swift_name("clear()")));
- (id<SSDKKotlinx_coroutines_coreCoroutineScope>)launchNewScopeKey:(NSString *)key __attribute__((swift_name("launchNewScope(key:)")));
- (void)onCleared __attribute__((swift_name("onCleared()")));
@property (readonly) id<SSDKKotlinx_coroutines_coreCoroutineScope> viewModelScope __attribute__((swift_name("viewModelScope")));
@end;

__attribute__((swift_name("KviewmodelBaseSharedViewModel")))
@interface SSDKKviewmodelBaseSharedViewModel<State, Action, Event> : SSDKKviewmodelKViewModel
- (instancetype)initWithInitialState:(State)initialState __attribute__((swift_name("init(initialState:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (void)obtainEventViewEvent:(Event _Nullable)viewEvent __attribute__((swift_name("obtainEvent(viewEvent:)")));
- (SSDKKviewmodelWrappedSharedFlow<Action> *)viewActions __attribute__((swift_name("viewActions()")));
- (SSDKKviewmodelWrappedStateFlow<State> *)viewStates __attribute__((swift_name("viewStates()")));
- (void)withViewModelScopeBlock:(id<SSDKKotlinSuspendFunction1>)block __attribute__((swift_name("withViewModelScope(block:)")));
@property Action _Nullable viewAction __attribute__((swift_name("viewAction")));
@property State viewState __attribute__((swift_name("viewState")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoginViewModel")))
@interface SSDKLoginViewModel : SSDKKviewmodelBaseSharedViewModel<SSDKLoginViewState *, SSDKLoginAction *, SSDKLoginEvent *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithInitialState:(id)initialState __attribute__((swift_name("init(initialState:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (void)obtainEventViewEvent:(SSDKLoginEvent *)viewEvent __attribute__((swift_name("obtainEvent(viewEvent:)")));
@end;

__attribute__((swift_name("LoginAction")))
@interface SSDKLoginAction : SSDKBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoginAction.OpenForgotPasswordScreen")))
@interface SSDKLoginActionOpenForgotPasswordScreen : SSDKLoginAction
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)openForgotPasswordScreen __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SSDKLoginActionOpenForgotPasswordScreen *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoginAction.OpenMainFlow")))
@interface SSDKLoginActionOpenMainFlow : SSDKLoginAction
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)openMainFlow __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SSDKLoginActionOpenMainFlow *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoginAction.OpenRegistrationScreen")))
@interface SSDKLoginActionOpenRegistrationScreen : SSDKLoginAction
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)openRegistrationScreen __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SSDKLoginActionOpenRegistrationScreen *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("LoginEvent")))
@interface SSDKLoginEvent : SSDKBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoginEvent.EmailChanged")))
@interface SSDKLoginEventEmailChanged : SSDKLoginEvent
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (SSDKLoginEventEmailChanged *)doCopyValue:(NSString *)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoginEvent.ForgotClick")))
@interface SSDKLoginEventForgotClick : SSDKLoginEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)forgotClick __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SSDKLoginEventForgotClick *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoginEvent.LoginClick")))
@interface SSDKLoginEventLoginClick : SSDKLoginEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)loginClick __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SSDKLoginEventLoginClick *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoginEvent.PasswordChanged")))
@interface SSDKLoginEventPasswordChanged : SSDKLoginEvent
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (SSDKLoginEventPasswordChanged *)doCopyValue:(NSString *)value __attribute__((swift_name("doCopy(value:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoginEvent.PasswordShowClick")))
@interface SSDKLoginEventPasswordShowClick : SSDKLoginEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)passwordShowClick __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SSDKLoginEventPasswordShowClick *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoginEvent.RegistrationClick")))
@interface SSDKLoginEventRegistrationClick : SSDKLoginEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)registrationClick __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SSDKLoginEventRegistrationClick *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("LoginViewState")))
@interface SSDKLoginViewState : SSDKBase
- (instancetype)initWithEmail:(NSString *)email password:(NSString *)password isSending:(BOOL)isSending passwordHidden:(BOOL)passwordHidden __attribute__((swift_name("init(email:password:isSending:passwordHidden:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (SSDKLoginViewState *)doCopyEmail:(NSString *)email password:(NSString *)password isSending:(BOOL)isSending passwordHidden:(BOOL)passwordHidden __attribute__((swift_name("doCopy(email:password:isSending:passwordHidden:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *email __attribute__((swift_name("email")));
@property (readonly) BOOL isSending __attribute__((swift_name("isSending")));
@property (readonly) NSString *password __attribute__((swift_name("password")));
@property (readonly) BOOL passwordHidden __attribute__((swift_name("passwordHidden")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchViewModel")))
@interface SSDKSearchViewModel : SSDKKviewmodelBaseSharedViewModel<SSDKSearchViewState *, SSDKSearchAction *, SSDKSearchEvent *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithInitialState:(id)initialState __attribute__((swift_name("init(initialState:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (void)obtainEventViewEvent:(SSDKSearchEvent *)viewEvent __attribute__((swift_name("obtainEvent(viewEvent:)")));
@end;

__attribute__((swift_name("SearchAction")))
@interface SSDKSearchAction : SSDKBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchAction.ShowGameDetail")))
@interface SSDKSearchActionShowGameDetail : SSDKSearchAction
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)showGameDetail __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SSDKSearchActionShowGameDetail *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("SearchEvent")))
@interface SSDKSearchEvent : SSDKBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchEvent.GameClicked")))
@interface SSDKSearchEventGameClicked : SSDKSearchEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)gameClicked __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SSDKSearchEventGameClicked *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchEvent.QueryChanged")))
@interface SSDKSearchEventQueryChanged : SSDKSearchEvent
- (instancetype)initWithQuery:(NSString *)query __attribute__((swift_name("init(query:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (SSDKSearchEventQueryChanged *)doCopyQuery:(NSString *)query __attribute__((swift_name("doCopy(query:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *query __attribute__((swift_name("query")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("SearchViewState")))
@interface SSDKSearchViewState : SSDKBase
- (instancetype)initWithQuery:(NSString *)query games:(NSArray<SSDKGame *> *)games __attribute__((swift_name("init(query:games:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSArray<SSDKGame *> *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (SSDKSearchViewState *)doCopyQuery:(NSString *)query games:(NSArray<SSDKGame *> *)games __attribute__((swift_name("doCopy(query:games:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSArray<SSDKGame *> *games __attribute__((swift_name("games")));
@property (readonly) NSString *query __attribute__((swift_name("query")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HomeViewModel")))
@interface SSDKHomeViewModel : SSDKKviewmodelBaseSharedViewModel<SSDKHomeViewState *, SSDKHomeAction *, SSDKHomeEvent *>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithInitialState:(id)initialState __attribute__((swift_name("init(initialState:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (void)obtainEventViewEvent:(SSDKHomeEvent *)viewEvent __attribute__((swift_name("obtainEvent(viewEvent:)")));
@end;

__attribute__((swift_name("HomeAction")))
@interface SSDKHomeAction : SSDKBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HomeAction.ShowUserProfile")))
@interface SSDKHomeActionShowUserProfile : SSDKHomeAction
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)showUserProfile __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SSDKHomeActionShowUserProfile *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("HomeEvent")))
@interface SSDKHomeEvent : SSDKBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HomeEvent.UserProfileClicked")))
@interface SSDKHomeEventUserProfileClicked : SSDKHomeEvent
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)userProfileClicked __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SSDKHomeEventUserProfileClicked *shared __attribute__((swift_name("shared")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("HomeViewState")))
@interface SSDKHomeViewState : SSDKBase
- (instancetype)initWithUsername:(NSString *)username avatarUrl:(NSString *)avatarUrl status:(NSString *)status __attribute__((swift_name("init(username:avatarUrl:status:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (SSDKHomeViewState *)doCopyUsername:(NSString *)username avatarUrl:(NSString *)avatarUrl status:(NSString *)status __attribute__((swift_name("doCopy(username:avatarUrl:status:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *avatarUrl __attribute__((swift_name("avatarUrl")));
@property (readonly) NSString *status __attribute__((swift_name("status")));
@property (readonly) NSString *username __attribute__((swift_name("username")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlatformSDK")))
@interface SSDKPlatformSDK : SSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)platformSDK __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SSDKPlatformSDK *shared __attribute__((swift_name("shared")));
- (void)doInitConfiguration:(SSDKPlatformConfiguration *)configuration __attribute__((swift_name("doInit(configuration:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PlatformConfiguration")))
@interface SSDKPlatformConfiguration : SSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Inject")))
@interface SSDKInject : SSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)inject __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SSDKInject *shared __attribute__((swift_name("shared")));
- (void)createDependenciesTree:(id<SSDKKodein_diDirectDI>)tree __attribute__((swift_name("createDependencies(tree:)")));
- (id _Nullable)instance __attribute__((swift_name("instance()")));
@property (readonly) id<SSDKKodein_diDirectDI> di __attribute__((swift_name("di")));
@end;

__attribute__((swift_name("AuthRepository")))
@protocol SSDKAuthRepository
@required
- (BOOL)isUserLoggedIn __attribute__((swift_name("isUserLoggedIn()")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)loginLogin:(NSString *)login password:(NSString *)password completionHandler:(void (^)(SSDKToken * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("login(login:password:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Token")))
@interface SSDKToken : SSDKBase
- (instancetype)initWithToken:(NSString *)token __attribute__((swift_name("init(token:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SSDKTokenCompanion *companion __attribute__((swift_name("companion")));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (SSDKToken *)doCopyToken:(NSString *)token __attribute__((swift_name("doCopy(token:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *token __attribute__((swift_name("token")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Token.Companion")))
@interface SSDKTokenCompanion : SSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SSDKTokenCompanion *shared __attribute__((swift_name("shared")));
- (id<SSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("GamesRepository")))
@protocol SSDKGamesRepository
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)fetchAllGamesWithCompletionHandler:(void (^)(NSArray<SSDKGame *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("fetchAllGames(completionHandler:)")));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)searchGameQuery:(NSString *)query completionHandler:(void (^)(NSArray<SSDKGame *> * _Nullable, NSError * _Nullable))completionHandler __attribute__((swift_name("searchGame(query:completionHandler:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Game")))
@interface SSDKGame : SSDKBase
- (instancetype)initWithGameId:(NSString *)gameId title:(NSString *)title __attribute__((swift_name("init(gameId:title:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (SSDKGame *)doCopyGameId:(NSString *)gameId title:(NSString *)title __attribute__((swift_name("doCopy(gameId:title:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) NSString *gameId __attribute__((swift_name("gameId")));
@property (readonly) NSString *title __attribute__((swift_name("title")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Root")))
@interface SSDKRoot : SSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CoreModuleKt")))
@interface SSDKCoreModuleKt : SSDKBase
@property (class, readonly) SSDKKodein_diDIModule *coreModule __attribute__((swift_name("coreModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KviewmodelKViewModel.Companion")))
@interface SSDKKviewmodelKViewModelCompanion : SSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SSDKKviewmodelKViewModelCompanion *shared __attribute__((swift_name("shared")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreCoroutineScope")))
@protocol SSDKKotlinx_coroutines_coreCoroutineScope
@required
@property (readonly) id<SSDKKotlinCoroutineContext> coroutineContext __attribute__((swift_name("coroutineContext")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreFlow")))
@protocol SSDKKotlinx_coroutines_coreFlow
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<SSDKKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreSharedFlow")))
@protocol SSDKKotlinx_coroutines_coreSharedFlow <SSDKKotlinx_coroutines_coreFlow>
@required
@property (readonly) NSArray<id> *replayCache __attribute__((swift_name("replayCache")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KviewmodelWrappedSharedFlow")))
@interface SSDKKviewmodelWrappedSharedFlow<T> : SSDKBase <SSDKKotlinx_coroutines_coreSharedFlow>
- (instancetype)initWithOrigin:(id<SSDKKotlinx_coroutines_coreSharedFlow>)origin onComplete:(void (^)(void))onComplete __attribute__((swift_name("init(origin:onComplete:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<SSDKKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
- (id<SSDKKviewmodelCloseable>)watchBlock:(void (^)(T _Nullable))block __attribute__((swift_name("watch(block:)")));
@property (readonly) NSArray<id> *replayCache __attribute__((swift_name("replayCache")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreStateFlow")))
@protocol SSDKKotlinx_coroutines_coreStateFlow <SSDKKotlinx_coroutines_coreSharedFlow>
@required
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KviewmodelWrappedStateFlow")))
@interface SSDKKviewmodelWrappedStateFlow<T> : SSDKBase <SSDKKotlinx_coroutines_coreStateFlow>
- (instancetype)initWithOrigin:(id<SSDKKotlinx_coroutines_coreStateFlow>)origin __attribute__((swift_name("init(origin:)"))) __attribute__((objc_designated_initializer));

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)collectCollector:(id<SSDKKotlinx_coroutines_coreFlowCollector>)collector completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("collect(collector:completionHandler:)")));
- (id<SSDKKviewmodelCloseable>)watchBlock:(void (^)(T))block __attribute__((swift_name("watch(block:)")));
@property (readonly) NSArray<T> *replayCache __attribute__((swift_name("replayCache")));
@property (readonly) T value __attribute__((swift_name("value")));
@end;

__attribute__((swift_name("KotlinFunction")))
@protocol SSDKKotlinFunction
@required
@end;

__attribute__((swift_name("KotlinSuspendFunction1")))
@protocol SSDKKotlinSuspendFunction1 <SSDKKotlinFunction>
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)invokeP1:(id _Nullable)p1 completionHandler:(void (^)(id _Nullable_result, NSError * _Nullable))completionHandler __attribute__((swift_name("invoke(p1:completionHandler:)")));
@end;

__attribute__((swift_name("Kodein_diDirectDIAware")))
@protocol SSDKKodein_diDirectDIAware
@required
@property (readonly) id<SSDKKodein_diDirectDI> directDI __attribute__((swift_name("directDI")));
@end;

__attribute__((swift_name("Kodein_diDirectDIBase")))
@protocol SSDKKodein_diDirectDIBase <SSDKKodein_diDirectDIAware>
@required
- (id (^)(id _Nullable))FactoryArgType:(SSDKKodein_typeTypeToken<id> *)argType type:(SSDKKodein_typeTypeToken<id> *)type tag:(id _Nullable)tag __attribute__((swift_name("Factory(argType:type:tag:)")));
- (id (^ _Nullable)(id _Nullable))FactoryOrNullArgType:(SSDKKodein_typeTypeToken<id> *)argType type:(SSDKKodein_typeTypeToken<id> *)type tag:(id _Nullable)tag __attribute__((swift_name("FactoryOrNull(argType:type:tag:)")));
- (id)InstanceType:(SSDKKodein_typeTypeToken<id> *)type tag:(id _Nullable)tag __attribute__((swift_name("Instance(type:tag:)")));
- (id)InstanceArgType:(SSDKKodein_typeTypeToken<id> *)argType type:(SSDKKodein_typeTypeToken<id> *)type tag:(id _Nullable)tag arg:(id _Nullable)arg __attribute__((swift_name("Instance(argType:type:tag:arg:)")));
- (id _Nullable)InstanceOrNullType:(SSDKKodein_typeTypeToken<id> *)type tag:(id _Nullable)tag __attribute__((swift_name("InstanceOrNull(type:tag:)")));
- (id _Nullable)InstanceOrNullArgType:(SSDKKodein_typeTypeToken<id> *)argType type:(SSDKKodein_typeTypeToken<id> *)type tag:(id _Nullable)tag arg:(id _Nullable)arg __attribute__((swift_name("InstanceOrNull(argType:type:tag:arg:)")));
- (id<SSDKKodein_diDirectDI>)OnContext:(SSDKKodein_diDIContext<id> *)context __attribute__((swift_name("On(context:)")));
- (id (^)(void))ProviderType:(SSDKKodein_typeTypeToken<id> *)type tag:(id _Nullable)tag __attribute__((swift_name("Provider(type:tag:)")));
- (id (^)(void))ProviderArgType:(SSDKKodein_typeTypeToken<id> *)argType type:(SSDKKodein_typeTypeToken<id> *)type tag:(id _Nullable)tag arg:(id _Nullable (^)(void))arg __attribute__((swift_name("Provider(argType:type:tag:arg:)")));
- (id (^ _Nullable)(void))ProviderOrNullType:(SSDKKodein_typeTypeToken<id> *)type tag:(id _Nullable)tag __attribute__((swift_name("ProviderOrNull(type:tag:)")));
- (id (^ _Nullable)(void))ProviderOrNullArgType:(SSDKKodein_typeTypeToken<id> *)argType type:(SSDKKodein_typeTypeToken<id> *)type tag:(id _Nullable)tag arg:(id _Nullable (^)(void))arg __attribute__((swift_name("ProviderOrNull(argType:type:tag:arg:)")));
@property (readonly) id<SSDKKodein_diDIContainer> container __attribute__((swift_name("container")));
@property (readonly) id<SSDKKodein_diDI> di __attribute__((swift_name("di")));
@property (readonly) id<SSDKKodein_diDI> lazy __attribute__((swift_name("lazy")));
@end;

__attribute__((swift_name("Kodein_diDirectDI")))
@protocol SSDKKodein_diDirectDI <SSDKKodein_diDirectDIBase>
@required
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface SSDKKotlinThrowable : SSDKBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (SSDKKotlinArray<NSString *> *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SSDKKotlinThrowable * _Nullable cause __attribute__((swift_name("cause")));
@property (readonly) NSString * _Nullable message __attribute__((swift_name("message")));
- (NSError *)asError __attribute__((swift_name("asError()")));
@end;

__attribute__((swift_name("KotlinException")))
@interface SSDKKotlinException : SSDKKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinRuntimeException")))
@interface SSDKKotlinRuntimeException : SSDKKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinIllegalStateException")))
@interface SSDKKotlinIllegalStateException : SSDKKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinCancellationException")))
@interface SSDKKotlinCancellationException : SSDKKotlinIllegalStateException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SSDKKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializationStrategy")))
@protocol SSDKKotlinx_serialization_coreSerializationStrategy
@required
- (void)serializeEncoder:(id<SSDKKotlinx_serialization_coreEncoder>)encoder value:(id _Nullable)value __attribute__((swift_name("serialize(encoder:value:)")));
@property (readonly) id<SSDKKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDeserializationStrategy")))
@protocol SSDKKotlinx_serialization_coreDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<SSDKKotlinx_serialization_coreDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
@property (readonly) id<SSDKKotlinx_serialization_coreSerialDescriptor> descriptor __attribute__((swift_name("descriptor")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreKSerializer")))
@protocol SSDKKotlinx_serialization_coreKSerializer <SSDKKotlinx_serialization_coreSerializationStrategy, SSDKKotlinx_serialization_coreDeserializationStrategy>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kodein_diDIModule")))
@interface SSDKKodein_diDIModule : SSDKBase
- (instancetype)initWithAllowSilentOverride:(BOOL)allowSilentOverride init:(void (^)(id<SSDKKodein_diDIBuilder>))init __attribute__((swift_name("init(allowSilentOverride:init:)"))) __attribute__((objc_designated_initializer)) __attribute__((deprecated("You should name your modules, for debug purposes.")));
- (instancetype)initWithName:(NSString *)name allowSilentOverride:(BOOL)allowSilentOverride prefix:(NSString *)prefix init:(void (^)(id<SSDKKodein_diDIBuilder>))init __attribute__((swift_name("init(name:allowSilentOverride:prefix:init:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (BOOL)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (NSString *)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (void (^)(id<SSDKKodein_diDIBuilder>))component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (SSDKKodein_diDIModule *)doCopyName:(NSString *)name allowSilentOverride:(BOOL)allowSilentOverride prefix:(NSString *)prefix init:(void (^)(id<SSDKKodein_diDIBuilder>))init __attribute__((swift_name("doCopy(name:allowSilentOverride:prefix:init:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) BOOL allowSilentOverride __attribute__((swift_name("allowSilentOverride")));
@property (readonly, getter=doInit) void (^init)(id<SSDKKodein_diDIBuilder>) __attribute__((swift_name("init")));
@property (readonly) NSString *name __attribute__((swift_name("name")));
@property (readonly) NSString *prefix __attribute__((swift_name("prefix")));
@end;

__attribute__((swift_name("KotlinCoroutineContext")))
@protocol SSDKKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<SSDKKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<SSDKKotlinCoroutineContextElement> _Nullable)getKey:(id<SSDKKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<SSDKKotlinCoroutineContext>)minusKeyKey:(id<SSDKKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<SSDKKotlinCoroutineContext>)plusContext:(id<SSDKKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_coreFlowCollector")))
@protocol SSDKKotlinx_coroutines_coreFlowCollector
@required

/**
 @note This method converts instances of CancellationException to errors.
 Other uncaught Kotlin exceptions are fatal.
*/
- (void)emitValue:(id _Nullable)value completionHandler:(void (^)(NSError * _Nullable))completionHandler __attribute__((swift_name("emit(value:completionHandler:)")));
@end;

__attribute__((swift_name("KviewmodelCloseable")))
@protocol SSDKKviewmodelCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end;

__attribute__((swift_name("Kodein_typeTypeToken")))
@interface SSDKKodein_typeTypeToken<T> : SSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (class, readonly, getter=companion) SSDKKodein_typeTypeTokenCompanion *companion __attribute__((swift_name("companion")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (SSDKKotlinArray<SSDKKodein_typeTypeToken<id> *> *)getGenericParameters __attribute__((swift_name("getGenericParameters()")));
- (SSDKKodein_typeTypeToken<T> * _Nullable)getRaw __attribute__((swift_name("getRaw()")));
- (NSArray<SSDKKodein_typeTypeToken<id> *> *)getSuper __attribute__((swift_name("getSuper()")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (BOOL)isAssignableFromTypeToken:(SSDKKodein_typeTypeToken<id> *)typeToken __attribute__((swift_name("isAssignableFrom(typeToken:)")));
- (BOOL)isGeneric __attribute__((swift_name("isGeneric()")));
- (BOOL)isWildcard __attribute__((swift_name("isWildcard()")));
- (NSString *)qualifiedDispString __attribute__((swift_name("qualifiedDispString()")));
- (NSString *)qualifiedErasedDispString __attribute__((swift_name("qualifiedErasedDispString()")));
- (NSString *)simpleDispString __attribute__((swift_name("simpleDispString()")));
- (NSString *)simpleErasedDispString __attribute__((swift_name("simpleErasedDispString()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kodein_diDIContext")))
@interface SSDKKodein_diDIContext<C> : SSDKBase
@property (class, readonly, getter=companion) SSDKKodein_diDIContextCompanion *companion __attribute__((swift_name("companion")));
@property (readonly) id<SSDKKodein_diReference> reference __attribute__((swift_name("reference")));
@property (readonly) SSDKKodein_typeTypeToken<C> *type __attribute__((swift_name("type")));
@end;

__attribute__((swift_name("Kodein_diDIContainer")))
@protocol SSDKKodein_diDIContainer
@required
- (NSArray<id (^)(id _Nullable)> *)allFactoriesKey:(SSDKKodein_diDIKey<id, id, id> *)key context:(SSDKKodein_diDIContext<id> *)context overrideLevel:(int32_t)overrideLevel __attribute__((swift_name("allFactories(key:context:overrideLevel:)")));
- (NSArray<id (^)(void)> *)allProvidersKey:(SSDKKodein_diDIKey<id, SSDKKotlinUnit *, id> *)key context:(SSDKKodein_diDIContext<id> *)context overrideLevel:(int32_t)overrideLevel __attribute__((swift_name("allProviders(key:context:overrideLevel:)")));
- (id (^)(id _Nullable))factoryKey:(SSDKKodein_diDIKey<id, id, id> *)key context:(SSDKKodein_diDIContext<id> *)context overrideLevel:(int32_t)overrideLevel __attribute__((swift_name("factory(key:context:overrideLevel:)")));
- (id (^ _Nullable)(id _Nullable))factoryOrNullKey:(SSDKKodein_diDIKey<id, id, id> *)key context:(SSDKKodein_diDIContext<id> *)context overrideLevel:(int32_t)overrideLevel __attribute__((swift_name("factoryOrNull(key:context:overrideLevel:)")));
- (id (^)(void))providerKey:(SSDKKodein_diDIKey<id, SSDKKotlinUnit *, id> *)key context:(SSDKKodein_diDIContext<id> *)context overrideLevel:(int32_t)overrideLevel __attribute__((swift_name("provider(key:context:overrideLevel:)")));
- (id (^ _Nullable)(void))providerOrNullKey:(SSDKKodein_diDIKey<id, SSDKKotlinUnit *, id> *)key context:(SSDKKodein_diDIContext<id> *)context overrideLevel:(int32_t)overrideLevel __attribute__((swift_name("providerOrNull(key:context:overrideLevel:)")));
@property (readonly) id<SSDKKodein_diDITree> tree __attribute__((swift_name("tree")));
@end;

__attribute__((swift_name("Kodein_diDIAware")))
@protocol SSDKKodein_diDIAware
@required
@property (readonly) id<SSDKKodein_diDI> di __attribute__((swift_name("di")));
@property (readonly) SSDKKodein_diDIContext<id> *diContext __attribute__((swift_name("diContext")));
@property (readonly) SSDKKodein_diDITrigger * _Nullable diTrigger __attribute__((swift_name("diTrigger")));
@end;

__attribute__((swift_name("Kodein_diDI")))
@protocol SSDKKodein_diDI <SSDKKodein_diDIAware>
@required
@property (readonly) id<SSDKKodein_diDIContainer> container __attribute__((swift_name("container")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface SSDKKotlinArray<T> : SSDKBase
+ (instancetype)arrayWithSize:(int32_t)size init:(T _Nullable (^)(SSDKInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (T _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<SSDKKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(T _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size __attribute__((swift_name("size")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreEncoder")))
@protocol SSDKKotlinx_serialization_coreEncoder
@required
- (id<SSDKKotlinx_serialization_coreCompositeEncoder>)beginCollectionDescriptor:(id<SSDKKotlinx_serialization_coreSerialDescriptor>)descriptor collectionSize:(int32_t)collectionSize __attribute__((swift_name("beginCollection(descriptor:collectionSize:)")));
- (id<SSDKKotlinx_serialization_coreCompositeEncoder>)beginStructureDescriptor:(id<SSDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescriptor:(id<SSDKKotlinx_serialization_coreSerialDescriptor>)enumDescriptor index:(int32_t)index __attribute__((swift_name("encodeEnum(enumDescriptor:index:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (id<SSDKKotlinx_serialization_coreEncoder>)encodeInlineInlineDescriptor:(id<SSDKKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("encodeInline(inlineDescriptor:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableValueSerializer:(id<SSDKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<SSDKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
@property (readonly) SSDKKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialDescriptor")))
@protocol SSDKKotlinx_serialization_coreSerialDescriptor
@required
- (NSArray<id<SSDKKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<SSDKKotlinx_serialization_coreSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) NSArray<id<SSDKKotlinAnnotation>> *annotations __attribute__((swift_name("annotations")));
@property (readonly) int32_t elementsCount __attribute__((swift_name("elementsCount")));
@property (readonly) BOOL isInline __attribute__((swift_name("isInline")));
@property (readonly) BOOL isNullable __attribute__((swift_name("isNullable")));
@property (readonly) SSDKKotlinx_serialization_coreSerialKind *kind __attribute__((swift_name("kind")));
@property (readonly) NSString *serialName __attribute__((swift_name("serialName")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreDecoder")))
@protocol SSDKKotlinx_serialization_coreDecoder
@required
- (id<SSDKKotlinx_serialization_coreCompositeDecoder>)beginStructureDescriptor:(id<SSDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("beginStructure(descriptor:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescriptor:(id<SSDKKotlinx_serialization_coreSerialDescriptor>)enumDescriptor __attribute__((swift_name("decodeEnum(enumDescriptor:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (id<SSDKKotlinx_serialization_coreDecoder>)decodeInlineInlineDescriptor:(id<SSDKKotlinx_serialization_coreSerialDescriptor>)inlineDescriptor __attribute__((swift_name("decodeInline(inlineDescriptor:)")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (SSDKKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<SSDKKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<SSDKKotlinx_serialization_coreDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
@property (readonly) SSDKKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kodein_diDIBindBuilder")))
@protocol SSDKKodein_diDIBindBuilder
@required
@property (readonly) SSDKKodein_typeTypeToken<id> *contextType __attribute__((swift_name("contextType")));
@end;

__attribute__((swift_name("Kodein_diDIBindBuilderWithContext")))
@protocol SSDKKodein_diDIBindBuilderWithContext <SSDKKodein_diDIBindBuilder>
@required
@end;

__attribute__((swift_name("Kodein_diDIBindBuilderWithScope")))
@protocol SSDKKodein_diDIBindBuilderWithScope <SSDKKodein_diDIBindBuilder>
@required
@property (readonly) id<SSDKKodein_diScope> scope __attribute__((swift_name("scope")));
@end;

__attribute__((swift_name("Kodein_diDIBuilder")))
@protocol SSDKKodein_diDIBuilder <SSDKKodein_diDIBindBuilderWithContext, SSDKKodein_diDIBindBuilderWithScope>
@required
- (id<SSDKKodein_diDIBuilderDirectBinder>)BindTag:(id _Nullable)tag overrides:(SSDKBoolean * _Nullable)overrides __attribute__((swift_name("Bind(tag:overrides:)")));
- (id<SSDKKodein_diDIBuilderTypeBinder>)BindType:(SSDKKodein_typeTypeToken<id> *)type tag:(id _Nullable)tag overrides:(SSDKBoolean * _Nullable)overrides __attribute__((swift_name("Bind(type:tag:overrides:)")));
- (void)RegisterContextTranslatorTranslator:(id<SSDKKodein_diContextTranslator>)translator __attribute__((swift_name("RegisterContextTranslator(translator:)")));
- (id<SSDKKodein_diDIBuilderConstantBinder>)constantTag:(id)tag overrides:(SSDKBoolean * _Nullable)overrides __attribute__((swift_name("constant(tag:overrides:)")));
- (void)importModule:(SSDKKodein_diDIModule *)module allowOverride:(BOOL)allowOverride __attribute__((swift_name("import(module:allowOverride:)")));
- (void)importAllModules:(SSDKKotlinArray<SSDKKodein_diDIModule *> *)modules allowOverride:(BOOL)allowOverride __attribute__((swift_name("importAll(modules:allowOverride:)")));
- (void)importAllModules:(id)modules allowOverride_:(BOOL)allowOverride __attribute__((swift_name("importAll(modules:allowOverride_:)")));
- (void)importOnceModule:(SSDKKodein_diDIModule *)module allowOverride:(BOOL)allowOverride __attribute__((swift_name("importOnce(module:allowOverride:)")));
- (void)onReadyCb:(void (^)(id<SSDKKodein_diDirectDI>))cb __attribute__((swift_name("onReady(cb:)")));
@property (readonly) id<SSDKKodein_diDIContainerBuilder> containerBuilder __attribute__((swift_name("containerBuilder")));
@end;

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol SSDKKotlinCoroutineContextElement <SSDKKotlinCoroutineContext>
@required
@property (readonly) id<SSDKKotlinCoroutineContextKey> key __attribute__((swift_name("key")));
@end;

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol SSDKKotlinCoroutineContextKey
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kodein_typeTypeTokenCompanion")))
@interface SSDKKodein_typeTypeTokenCompanion : SSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SSDKKodein_typeTypeTokenCompanion *shared __attribute__((swift_name("shared")));
@property (readonly) SSDKKodein_typeTypeToken<id> *Any __attribute__((swift_name("Any")));
@property (readonly) SSDKKodein_typeTypeToken<SSDKKotlinUnit *> *Unit __attribute__((swift_name("Unit")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kodein_diDIContextCompanion")))
@interface SSDKKodein_diDIContextCompanion : SSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SSDKKodein_diDIContextCompanion *shared __attribute__((swift_name("shared")));
- (SSDKKodein_diDIContext<id> *)invokeType:(SSDKKodein_typeTypeToken<id> *)type getContext:(id (^)(void))getContext refMaker:(id<SSDKKodein_diReferenceMaker>)refMaker __attribute__((swift_name("invoke(type:getContext:refMaker:)")));
- (SSDKKodein_diDIContext<id> *)invokeType:(SSDKKodein_typeTypeToken<id> *)type getReference:(id<SSDKKodein_diReference> (^)(void))getReference __attribute__((swift_name("invoke(type:getReference:)")));
- (SSDKKodein_diDIContext<id> *)invokeType:(SSDKKodein_typeTypeToken<id> *)type context:(id)context refMaker:(id<SSDKKodein_diReferenceMaker>)refMaker __attribute__((swift_name("invoke(type:context:refMaker:)")));
- (SSDKKodein_diDIContext<id> *)invokeType:(SSDKKodein_typeTypeToken<id> *)type reference:(id<SSDKKodein_diReference>)reference __attribute__((swift_name("invoke(type:reference:)")));
@property (readonly) SSDKKodein_diDIContext<id> *Any __attribute__((swift_name("Any")));
@end;

__attribute__((swift_name("Kodein_diReference")))
@protocol SSDKKodein_diReference
@required
- (id _Nullable)get __attribute__((swift_name("get()")));
@property (readonly) id<SSDKKodein_diReferenceMaker> maker __attribute__((swift_name("maker")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kodein_diDIKey")))
@interface SSDKKodein_diDIKey<__contravariant C, __contravariant A, __covariant T> : SSDKBase
- (instancetype)initWithContextType:(SSDKKodein_typeTypeToken<C> *)contextType argType:(SSDKKodein_typeTypeToken<A> *)argType type:(SSDKKodein_typeTypeToken<T> *)type tag:(id _Nullable)tag __attribute__((swift_name("init(contextType:argType:type:tag:)"))) __attribute__((objc_designated_initializer));
- (SSDKKodein_typeTypeToken<C> *)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (SSDKKodein_typeTypeToken<A> *)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (SSDKKodein_typeTypeToken<T> *)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (id _Nullable)component4 __attribute__((swift_name("component4()"))) __attribute__((deprecated("use corresponding property instead")));
- (SSDKKodein_diDIKey<C, A, T> *)doCopyContextType:(SSDKKodein_typeTypeToken<C> *)contextType argType:(SSDKKodein_typeTypeToken<A> *)argType type:(SSDKKodein_typeTypeToken<T> *)type tag:(id _Nullable)tag __attribute__((swift_name("doCopy(contextType:argType:type:tag:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) SSDKKodein_typeTypeToken<A> *argType __attribute__((swift_name("argType")));
@property (readonly) NSString *bindDescription __attribute__((swift_name("bindDescription")));
@property (readonly) NSString *bindFullDescription __attribute__((swift_name("bindFullDescription")));
@property (readonly) SSDKKodein_typeTypeToken<C> *contextType __attribute__((swift_name("contextType")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) NSString *fullDescription __attribute__((swift_name("fullDescription")));
@property (readonly) NSString *internalDescription __attribute__((swift_name("internalDescription")));
@property (readonly) id _Nullable tag __attribute__((swift_name("tag")));
@property (readonly) SSDKKodein_typeTypeToken<T> *type __attribute__((swift_name("type")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface SSDKKotlinUnit : SSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SSDKKotlinUnit *shared __attribute__((swift_name("shared")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kodein_diDITree")))
@protocol SSDKKodein_diDITree
@required
- (NSArray<SSDKKotlinTriple<SSDKKodein_diDIKey<id, id, id> *, SSDKKodein_diDIDefinition<id, id, id> *, id<SSDKKodein_diContextTranslator>> *> *)findKey:(SSDKKodein_diDIKey<id, id, id> *)key overrideLevel:(int32_t)overrideLevel all:(BOOL)all __attribute__((swift_name("find(key:overrideLevel:all:)")));
- (NSArray<SSDKKotlinTriple<SSDKKodein_diDIKey<id, id, id> *, NSArray<SSDKKodein_diDIDefinition<id, id, id> *> *, id<SSDKKodein_diContextTranslator>> *> *)findSearch:(SSDKKodein_diSearchSpecs *)search __attribute__((swift_name("find(search:)")));
- (SSDKKotlinTriple<SSDKKodein_diDIKey<id, id, id> *, NSArray<SSDKKodein_diDIDefinition<id, id, id> *> *, id<SSDKKodein_diContextTranslator>> * _Nullable)getKey_:(SSDKKodein_diDIKey<id, id, id> *)key __attribute__((swift_name("get(key_:)")));
@property (readonly) NSDictionary<SSDKKodein_diDIKey<id, id, id> *, NSArray<SSDKKodein_diDIDefinition<id, id, id> *> *> *bindings __attribute__((swift_name("bindings")));
@property (readonly) NSArray<id<SSDKKodein_diExternalSource>> *externalSources __attribute__((swift_name("externalSources")));
@property (readonly) NSArray<id<SSDKKodein_diContextTranslator>> *registeredTranslators __attribute__((swift_name("registeredTranslators")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kodein_diDITrigger")))
@interface SSDKKodein_diDITrigger : SSDKBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)trigger __attribute__((swift_name("trigger()")));
@property (readonly) NSMutableArray<id<SSDKKotlinLazy>> *properties __attribute__((swift_name("properties")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol SSDKKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeEncoder")))
@protocol SSDKKotlinx_serialization_coreCompositeEncoder
@required
- (void)encodeBooleanElementDescriptor:(id<SSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(descriptor:index:value:)")));
- (void)encodeByteElementDescriptor:(id<SSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(descriptor:index:value:)")));
- (void)encodeCharElementDescriptor:(id<SSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(descriptor:index:value:)")));
- (void)encodeDoubleElementDescriptor:(id<SSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(descriptor:index:value:)")));
- (void)encodeFloatElementDescriptor:(id<SSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(descriptor:index:value:)")));
- (id<SSDKKotlinx_serialization_coreEncoder>)encodeInlineElementDescriptor:(id<SSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("encodeInlineElement(descriptor:index:)")));
- (void)encodeIntElementDescriptor:(id<SSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(descriptor:index:value:)")));
- (void)encodeLongElementDescriptor:(id<SSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(descriptor:index:value:)")));
- (void)encodeNullableSerializableElementDescriptor:(id<SSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<SSDKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeSerializableElementDescriptor:(id<SSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index serializer:(id<SSDKKotlinx_serialization_coreSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(descriptor:index:serializer:value:)")));
- (void)encodeShortElementDescriptor:(id<SSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(descriptor:index:value:)")));
- (void)encodeStringElementDescriptor:(id<SSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(descriptor:index:value:)")));
- (void)endStructureDescriptor:(id<SSDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
- (BOOL)shouldEncodeElementDefaultDescriptor:(id<SSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(descriptor:index:)")));
@property (readonly) SSDKKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModule")))
@interface SSDKKotlinx_serialization_coreSerializersModule : SSDKBase
- (void)dumpToCollector:(id<SSDKKotlinx_serialization_coreSerializersModuleCollector>)collector __attribute__((swift_name("dumpTo(collector:)")));
- (id<SSDKKotlinx_serialization_coreKSerializer> _Nullable)getContextualKClass:(id<SSDKKotlinKClass>)kClass typeArgumentsSerializers:(NSArray<id<SSDKKotlinx_serialization_coreKSerializer>> *)typeArgumentsSerializers __attribute__((swift_name("getContextual(kClass:typeArgumentsSerializers:)")));
- (id<SSDKKotlinx_serialization_coreSerializationStrategy> _Nullable)getPolymorphicBaseClass:(id<SSDKKotlinKClass>)baseClass value:(id)value __attribute__((swift_name("getPolymorphic(baseClass:value:)")));
- (id<SSDKKotlinx_serialization_coreDeserializationStrategy> _Nullable)getPolymorphicBaseClass:(id<SSDKKotlinKClass>)baseClass serializedClassName:(NSString * _Nullable)serializedClassName __attribute__((swift_name("getPolymorphic(baseClass:serializedClassName:)")));
@end;

__attribute__((swift_name("KotlinAnnotation")))
@protocol SSDKKotlinAnnotation
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerialKind")))
@interface SSDKKotlinx_serialization_coreSerialKind : SSDKBase
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreCompositeDecoder")))
@protocol SSDKKotlinx_serialization_coreCompositeDecoder
@required
- (BOOL)decodeBooleanElementDescriptor:(id<SSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(descriptor:index:)")));
- (int8_t)decodeByteElementDescriptor:(id<SSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeByteElement(descriptor:index:)")));
- (unichar)decodeCharElementDescriptor:(id<SSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeCharElement(descriptor:index:)")));
- (int32_t)decodeCollectionSizeDescriptor:(id<SSDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeCollectionSize(descriptor:)")));
- (double)decodeDoubleElementDescriptor:(id<SSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(descriptor:index:)")));
- (int32_t)decodeElementIndexDescriptor:(id<SSDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("decodeElementIndex(descriptor:)")));
- (float)decodeFloatElementDescriptor:(id<SSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeFloatElement(descriptor:index:)")));
- (id<SSDKKotlinx_serialization_coreDecoder>)decodeInlineElementDescriptor:(id<SSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeInlineElement(descriptor:index:)")));
- (int32_t)decodeIntElementDescriptor:(id<SSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeIntElement(descriptor:index:)")));
- (int64_t)decodeLongElementDescriptor:(id<SSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeLongElement(descriptor:index:)")));
- (id _Nullable)decodeNullableSerializableElementDescriptor:(id<SSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<SSDKKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeNullableSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (BOOL)decodeSequentially __attribute__((swift_name("decodeSequentially()")));
- (id _Nullable)decodeSerializableElementDescriptor:(id<SSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index deserializer:(id<SSDKKotlinx_serialization_coreDeserializationStrategy>)deserializer previousValue:(id _Nullable)previousValue __attribute__((swift_name("decodeSerializableElement(descriptor:index:deserializer:previousValue:)")));
- (int16_t)decodeShortElementDescriptor:(id<SSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeShortElement(descriptor:index:)")));
- (NSString *)decodeStringElementDescriptor:(id<SSDKKotlinx_serialization_coreSerialDescriptor>)descriptor index:(int32_t)index __attribute__((swift_name("decodeStringElement(descriptor:index:)")));
- (void)endStructureDescriptor:(id<SSDKKotlinx_serialization_coreSerialDescriptor>)descriptor __attribute__((swift_name("endStructure(descriptor:)")));
@property (readonly) SSDKKotlinx_serialization_coreSerializersModule *serializersModule __attribute__((swift_name("serializersModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface SSDKKotlinNothing : SSDKBase
@end;

__attribute__((swift_name("Kodein_diDIBuilderDirectBinder")))
@protocol SSDKKodein_diDIBuilderDirectBinder
@required
- (void)fromBinding:(id<SSDKKodein_diDIBinding>)binding __attribute__((swift_name("from(binding:)")));
@end;

__attribute__((swift_name("Kodein_diDIBuilderTypeBinder")))
@protocol SSDKKodein_diDIBuilderTypeBinder
@required
- (void)withBinding:(id<SSDKKodein_diDIBinding>)binding __attribute__((swift_name("with(binding:)")));
@end;

__attribute__((swift_name("Kodein_diContextTranslator")))
@protocol SSDKKodein_diContextTranslator
@required
- (id _Nullable)translateCtx:(id)ctx __attribute__((swift_name("translate(ctx:)")));
@property (readonly) SSDKKodein_typeTypeToken<id> *contextType __attribute__((swift_name("contextType")));
@property (readonly) SSDKKodein_typeTypeToken<id> *scopeType __attribute__((swift_name("scopeType")));
@end;

__attribute__((swift_name("Kodein_diDIBuilderConstantBinder")))
@protocol SSDKKodein_diDIBuilderConstantBinder
@required
- (void)WithValueType:(SSDKKodein_typeTypeToken<id> *)valueType value:(id)value __attribute__((swift_name("With(valueType:value:)")));
@end;

__attribute__((swift_name("Kodein_diDIContainerBuilder")))
@protocol SSDKKodein_diDIContainerBuilder
@required
- (void)bindKey:(SSDKKodein_diDIKey<id, id, id> *)key binding:(id<SSDKKodein_diDIBinding>)binding fromModule:(NSString * _Nullable)fromModule overrides:(SSDKBoolean * _Nullable)overrides __attribute__((swift_name("bind(key:binding:fromModule:overrides:)")));
- (void)extendContainer:(id<SSDKKodein_diDIContainer>)container allowOverride:(BOOL)allowOverride copy:(NSSet<SSDKKodein_diDIKey<id, id, id> *> *)copy __attribute__((swift_name("extend(container:allowOverride:copy:)")));
- (void)onReadyCb:(void (^)(id<SSDKKodein_diDirectDI>))cb __attribute__((swift_name("onReady(cb:)")));
- (void)registerContextTranslatorTranslator:(id<SSDKKodein_diContextTranslator>)translator __attribute__((swift_name("registerContextTranslator(translator:)")));
- (id<SSDKKodein_diDIContainerBuilder>)subBuilderAllowOverride:(BOOL)allowOverride silentOverride:(BOOL)silentOverride __attribute__((swift_name("subBuilder(allowOverride:silentOverride:)")));
@end;

__attribute__((swift_name("Kodein_diScope")))
@protocol SSDKKodein_diScope
@required
- (SSDKKodein_diScopeRegistry *)getRegistryContext:(id _Nullable)context __attribute__((swift_name("getRegistry(context:)")));
@end;

__attribute__((swift_name("Kodein_diReferenceMaker")))
@protocol SSDKKodein_diReferenceMaker
@required
- (SSDKKodein_diReferenceLocal<id, id<SSDKKodein_diReference>> *)makeCreator:(id (^)(void))creator __attribute__((swift_name("make(creator:)")));
@end;

__attribute__((swift_name("Kodein_diDIDefining")))
@interface SSDKKodein_diDIDefining<C, A, T> : SSDKBase
- (instancetype)initWithBinding:(id<SSDKKodein_diDIBinding>)binding fromModule:(NSString * _Nullable)fromModule __attribute__((swift_name("init(binding:fromModule:)"))) __attribute__((objc_designated_initializer));
@property (readonly) id<SSDKKodein_diDIBinding> binding __attribute__((swift_name("binding")));
@property (readonly) NSString * _Nullable fromModule __attribute__((swift_name("fromModule")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kodein_diDIDefinition")))
@interface SSDKKodein_diDIDefinition<C, A, T> : SSDKKodein_diDIDefining<C, A, T>
- (instancetype)initWithBinding:(id<SSDKKodein_diDIBinding>)binding fromModule:(NSString * _Nullable)fromModule tree:(id<SSDKKodein_diDITree>)tree __attribute__((swift_name("init(binding:fromModule:tree:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithBinding:(id<SSDKKodein_diDIBinding>)binding fromModule:(NSString * _Nullable)fromModule __attribute__((swift_name("init(binding:fromModule:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@property (readonly) id<SSDKKodein_diDITree> tree __attribute__((swift_name("tree")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinTriple")))
@interface SSDKKotlinTriple<__covariant A, __covariant B, __covariant C> : SSDKBase
- (instancetype)initWithFirst:(A _Nullable)first second:(B _Nullable)second third:(C _Nullable)third __attribute__((swift_name("init(first:second:third:)"))) __attribute__((objc_designated_initializer));
- (A _Nullable)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (B _Nullable)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (C _Nullable)component3 __attribute__((swift_name("component3()"))) __attribute__((deprecated("use corresponding property instead")));
- (SSDKKotlinTriple<A, B, C> *)doCopyFirst:(A _Nullable)first second:(B _Nullable)second third:(C _Nullable)third __attribute__((swift_name("doCopy(first:second:third:)")));
- (BOOL)equalsOther:(id _Nullable)other __attribute__((swift_name("equals(other:)")));
- (int32_t)hashCode __attribute__((swift_name("hashCode()")));
- (NSString *)toString __attribute__((swift_name("toString()")));
@property (readonly) A _Nullable first __attribute__((swift_name("first")));
@property (readonly) B _Nullable second __attribute__((swift_name("second")));
@property (readonly) C _Nullable third __attribute__((swift_name("third")));
@end;

__attribute__((swift_name("Kodein_diSearchSpecs")))
@interface SSDKKodein_diSearchSpecs : SSDKBase
- (instancetype)initWithContextType:(SSDKKodein_typeTypeToken<id> * _Nullable)contextType argType:(SSDKKodein_typeTypeToken<id> * _Nullable)argType type:(SSDKKodein_typeTypeToken<id> * _Nullable)type tag:(id _Nullable)tag __attribute__((swift_name("init(contextType:argType:type:tag:)"))) __attribute__((objc_designated_initializer));
- (NSString *)description __attribute__((swift_name("description()")));
@property SSDKKodein_typeTypeToken<id> * _Nullable argType __attribute__((swift_name("argType")));
@property SSDKKodein_typeTypeToken<id> * _Nullable contextType __attribute__((swift_name("contextType")));
@property id _Nullable tag __attribute__((swift_name("tag")));
@property SSDKKodein_typeTypeToken<id> * _Nullable type __attribute__((swift_name("type")));
@end;

__attribute__((swift_name("Kodein_diExternalSource")))
@protocol SSDKKodein_diExternalSource
@required
- (id (^ _Nullable)(id _Nullable))getFactoryDi:(id<SSDKKodein_diBindingDI>)di key:(SSDKKodein_diDIKey<id, id, id> *)key __attribute__((swift_name("getFactory(di:key:)")));
@end;

__attribute__((swift_name("KotlinLazy")))
@protocol SSDKKotlinLazy
@required
- (BOOL)isInitialized __attribute__((swift_name("isInitialized()")));
@property (readonly) id _Nullable value __attribute__((swift_name("value")));
@end;

__attribute__((swift_name("Kotlinx_serialization_coreSerializersModuleCollector")))
@protocol SSDKKotlinx_serialization_coreSerializersModuleCollector
@required
- (void)contextualKClass:(id<SSDKKotlinKClass>)kClass provider:(id<SSDKKotlinx_serialization_coreKSerializer> (^)(NSArray<id<SSDKKotlinx_serialization_coreKSerializer>> *))provider __attribute__((swift_name("contextual(kClass:provider:)")));
- (void)contextualKClass:(id<SSDKKotlinKClass>)kClass serializer:(id<SSDKKotlinx_serialization_coreKSerializer>)serializer __attribute__((swift_name("contextual(kClass:serializer:)")));
- (void)polymorphicBaseClass:(id<SSDKKotlinKClass>)baseClass actualClass:(id<SSDKKotlinKClass>)actualClass actualSerializer:(id<SSDKKotlinx_serialization_coreKSerializer>)actualSerializer __attribute__((swift_name("polymorphic(baseClass:actualClass:actualSerializer:)")));
- (void)polymorphicDefaultBaseClass:(id<SSDKKotlinKClass>)baseClass defaultDeserializerProvider:(id<SSDKKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefault(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultDeserializerBaseClass:(id<SSDKKotlinKClass>)baseClass defaultDeserializerProvider:(id<SSDKKotlinx_serialization_coreDeserializationStrategy> _Nullable (^)(NSString * _Nullable))defaultDeserializerProvider __attribute__((swift_name("polymorphicDefaultDeserializer(baseClass:defaultDeserializerProvider:)")));
- (void)polymorphicDefaultSerializerBaseClass:(id<SSDKKotlinKClass>)baseClass defaultSerializerProvider:(id<SSDKKotlinx_serialization_coreSerializationStrategy> _Nullable (^)(id))defaultSerializerProvider __attribute__((swift_name("polymorphicDefaultSerializer(baseClass:defaultSerializerProvider:)")));
@end;

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol SSDKKotlinKDeclarationContainer
@required
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol SSDKKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol SSDKKotlinKClassifier
@required
@end;

__attribute__((swift_name("KotlinKClass")))
@protocol SSDKKotlinKClass <SSDKKotlinKDeclarationContainer, SSDKKotlinKAnnotatedElement, SSDKKotlinKClassifier>
@required
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName __attribute__((swift_name("qualifiedName")));
@property (readonly) NSString * _Nullable simpleName __attribute__((swift_name("simpleName")));
@end;

__attribute__((swift_name("Kodein_diBinding")))
@protocol SSDKKodein_diBinding
@required
- (id (^)(id _Nullable))getFactoryDi:(id<SSDKKodein_diBindingDI>)di key_:(SSDKKodein_diDIKey<id, id, id> *)key __attribute__((swift_name("getFactory(di:key_:)")));
@end;

__attribute__((swift_name("Kodein_diDIBinding")))
@protocol SSDKKodein_diDIBinding <SSDKKodein_diBinding>
@required
- (NSString *)factoryFullName __attribute__((swift_name("factoryFullName()")));
- (NSString *)factoryName __attribute__((swift_name("factoryName()")));
@property (readonly) SSDKKodein_typeTypeToken<id> *argType __attribute__((swift_name("argType")));
@property (readonly) SSDKKodein_typeTypeToken<id> *contextType __attribute__((swift_name("contextType")));
@property (readonly) id<SSDKKodein_diDIBindingCopier> _Nullable copier __attribute__((swift_name("copier")));
@property (readonly) SSDKKodein_typeTypeToken<id> *createdType __attribute__((swift_name("createdType")));
@property (readonly) NSString *description_ __attribute__((swift_name("description_")));
@property (readonly) NSString *fullDescription __attribute__((swift_name("fullDescription")));
@property (readonly) id<SSDKKodein_diScope> _Nullable scope __attribute__((swift_name("scope")));
@property (readonly) BOOL supportSubTypes __attribute__((swift_name("supportSubTypes")));
@end;

__attribute__((swift_name("Kodein_diScopeCloseable")))
@protocol SSDKKodein_diScopeCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end;

__attribute__((swift_name("Kodein_diScopeRegistry")))
@interface SSDKKodein_diScopeRegistry : SSDKBase <SSDKKodein_diScopeCloseable>
- (void)clear __attribute__((swift_name("clear()")));
- (void)close __attribute__((swift_name("close()")));
- (id)getOrCreateKey:(id)key sync:(BOOL)sync creator:(SSDKKodein_diReferenceLocal<id, id<SSDKKodein_diReference>> *(^)(void))creator __attribute__((swift_name("getOrCreate(key:sync:creator:)")));
- (id<SSDKKodein_diReference> _Nullable)getOrNullKey:(id)key __attribute__((swift_name("getOrNull(key:)")));
- (void)removeKey:(id)key __attribute__((swift_name("remove(key:)")));
- (id)values __attribute__((swift_name("values()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kodein_diReferenceLocal")))
@interface SSDKKodein_diReferenceLocal<__covariant T, __covariant R> : SSDKBase
- (instancetype)initWithValue:(T)value reference:(R)reference __attribute__((swift_name("init(value:reference:)"))) __attribute__((objc_designated_initializer));
@property (class, readonly, getter=companion) SSDKKodein_diReferenceLocalCompanion *companion __attribute__((swift_name("companion")));
- (T)component1 __attribute__((swift_name("component1()"))) __attribute__((deprecated("use corresponding property instead")));
- (R)component2 __attribute__((swift_name("component2()"))) __attribute__((deprecated("use corresponding property instead")));
- (SSDKKodein_diReferenceLocal<T, R> *)doCopyValue:(T)value reference:(R)reference __attribute__((swift_name("doCopy(value:reference:)")));
- (BOOL)isEqual:(id _Nullable)other __attribute__((swift_name("isEqual(_:)")));
- (NSUInteger)hash __attribute__((swift_name("hash()")));
- (NSString *)description __attribute__((swift_name("description()")));
@property (readonly) R reference __attribute__((swift_name("reference")));
@property (readonly) T value __attribute__((swift_name("value")));
@end;

__attribute__((swift_name("Kodein_diWithContext")))
@protocol SSDKKodein_diWithContext
@required
@property (readonly) id context __attribute__((swift_name("context")));
@end;

__attribute__((swift_name("Kodein_diBindingDI")))
@protocol SSDKKodein_diBindingDI <SSDKKodein_diDirectDI, SSDKKodein_diWithContext>
@required
- (id<SSDKKodein_diBindingDI>)noGlobalContext __attribute__((swift_name("noGlobalContext()")));
- (id (^)(id _Nullable))overriddenFactory __attribute__((swift_name("overriddenFactory()")));
- (id (^ _Nullable)(id _Nullable))overriddenFactoryOrNull __attribute__((swift_name("overriddenFactoryOrNull()")));
@end;

__attribute__((swift_name("Kodein_diDIBindingCopier")))
@protocol SSDKKodein_diDIBindingCopier
@required
- (id<SSDKKodein_diDIBinding>)doCopyBuilder:(id<SSDKKodein_diDIContainerBuilder>)builder __attribute__((swift_name("doCopy(builder:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kodein_diReferenceLocalCompanion")))
@interface SSDKKodein_diReferenceLocalCompanion : SSDKBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
@property (class, readonly, getter=shared) SSDKKodein_diReferenceLocalCompanion *shared __attribute__((swift_name("shared")));
@end;

#pragma pop_macro("_Nullable_result")
#pragma clang diagnostic pop
NS_ASSUME_NONNULL_END
