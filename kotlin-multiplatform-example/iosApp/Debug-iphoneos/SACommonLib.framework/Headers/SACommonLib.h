#import <Foundation/Foundation.h>

@class SACLMyPureCommonClass, SACLKotlinUnit, SACLPrefManager, SACLCommonFeatureDecisions, SACLOpsFeatureFlagParser, SACLCommonParser, SACLOpsFeatureFlagParserOpsFeatureFlag, SACLOpsFeatureFlagParserOpsFeatureFlagCompanion, SACLOpsFeatureFlagParserOpsFeatureFlag$serializer, SACLKotlinArray, SACLOpsFeatureFlagProvider, SACLPlatform, SACLReleaseFeatureFlagProvider, SACLKtorConnection, SACLKtor_client_coreHttpRequestBuilder, SACLKtorRequestBuilder, SACLNetworkError, SACLKotlinThrowable, SACLConnectionMethod, SACLKotlinEnum, SACLGlobalScope, SACLMainDispatcher, SACLKotlinx_coroutines_core_nativeCoroutineDispatcher, SACLKotlinAbstractCoroutineContextElement, SACLKotlinx_serialization_runtime_nativeEnumDescriptor, SACLKotlinx_serialization_runtime_nativeSerialKind, SACLKotlinNothing, SACLKotlinx_serialization_runtime_nativeUpdateMode, SACLKtor_client_coreHttpClientEngineConfig, SACLKtor_httpHeadersBuilder, SACLKtor_client_coreHttpRequestData, SACLKtor_httpURLBuilder, SACLKtor_httpHttpMethod, SACLKotlinx_serialization_runtime_nativeSerialClassDescImpl, SACLKtor_client_coreHttpResponseConfig, SACLKtor_utilsStringValuesBuilder, SACLKtor_httpUrl, SACLKtor_utilsAttributeKey, SACLKtor_httpURLProtocol, SACLKtor_httpParametersBuilder, SACLKotlinx_coroutines_core_nativeCancellationException, SACLKotlinx_ioCharset, SACLKotlinIllegalStateException, SACLKotlinRuntimeException, SACLKotlinException, SACLKotlinx_ioCharsetDecoder, SACLKotlinx_ioCharsetEncoder, SACLKotlinx_coroutines_core_nativeAtomicDesc, SACLKotlinx_coroutines_core_nativeAtomicOp, SACLKotlinx_coroutines_core_nativeOpDescriptor;

@protocol SACLMyCommonDelegate, SACLFeatureDecisions, SACLFeatureFlagProvider, SACLConnectionEnvironment, SACLFeatureFlag, SACLParser, SACLKotlinx_serialization_runtime_nativeDeserializationStrategy, SACLKotlinx_serialization_runtime_nativeKSerializer, SACLKotlinx_serialization_runtime_nativeGeneratedSerializer, SACLKotlinx_serialization_runtime_nativeSerializationStrategy, SACLKotlinx_serialization_runtime_nativeEncoder, SACLKotlinx_serialization_runtime_nativeSerialDescriptor, SACLKotlinx_serialization_runtime_nativeDecoder, SACLConnection, SACLKtor_client_coreHttpClientEngine, SACLKtorConnectionBuilderRequest, SACLKtorConnectionBuilder, SACLConnectionRequest, SACLKotlinComparable, SACLKotlinx_coroutines_core_nativeCoroutineScope, SACLKotlinCoroutineContext, SACLKotlinCoroutineContextElement, SACLKotlinCoroutineContextKey, SACLKotlinContinuationInterceptor, SACLKotlinContinuation, SACLKotlinx_coroutines_core_nativeRunnable, SACLKotlinIterator, SACLKotlinx_serialization_runtime_nativeCompositeEncoder, SACLKotlinx_serialization_runtime_nativeSerialContext, SACLKotlinAnnotation, SACLKotlinx_serialization_runtime_nativeCompositeDecoder, SACLKotlinx_ioCloseable, SACLKtor_httpHttpMessageBuilder, SACLKtor_utilsAttributes, SACLKotlinx_coroutines_core_nativeJob, SACLKotlinKClass, SACLKtor_utilsStringValues, SACLKotlinMapEntry, SACLKtor_httpHeaders, SACLKotlinx_coroutines_core_nativeChildHandle, SACLKotlinx_coroutines_core_nativeChildJob, SACLKotlinx_coroutines_core_nativeDisposableHandle, SACLKotlinSequence, SACLKotlinx_coroutines_core_nativeSelectClause0, SACLKotlinKDeclarationContainer, SACLKotlinKAnnotatedElement, SACLKotlinKClassifier, SACLKtor_httpParameters, SACLKotlinx_coroutines_core_nativeParentJob, SACLKotlinx_coroutines_core_nativeSelectInstance, SACLKotlinSuspendFunction0, SACLKotlinSuspendFunction;

NS_ASSUME_NONNULL_BEGIN

@interface KotlinBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface KotlinBase (KotlinBaseCopying) <NSCopying>
@end;

__attribute__((objc_runtime_name("KotlinMutableSet")))
__attribute__((swift_name("KotlinMutableSet")))
@interface SACLMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((objc_runtime_name("KotlinMutableDictionary")))
__attribute__((swift_name("KotlinMutableDictionary")))
@interface SACLMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((objc_runtime_name("KotlinNumber")))
__attribute__((swift_name("KotlinNumber")))
@interface SACLNumber : NSNumber
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

__attribute__((objc_runtime_name("KotlinByte")))
__attribute__((swift_name("KotlinByte")))
@interface SACLByte : SACLNumber
- (instancetype)initWithChar:(char)value;
+ (instancetype)numberWithChar:(char)value;
@end;

__attribute__((objc_runtime_name("KotlinUByte")))
__attribute__((swift_name("KotlinUByte")))
@interface SACLUByte : SACLNumber
- (instancetype)initWithUnsignedChar:(unsigned char)value;
+ (instancetype)numberWithUnsignedChar:(unsigned char)value;
@end;

__attribute__((objc_runtime_name("KotlinShort")))
__attribute__((swift_name("KotlinShort")))
@interface SACLShort : SACLNumber
- (instancetype)initWithShort:(short)value;
+ (instancetype)numberWithShort:(short)value;
@end;

__attribute__((objc_runtime_name("KotlinUShort")))
__attribute__((swift_name("KotlinUShort")))
@interface SACLUShort : SACLNumber
- (instancetype)initWithUnsignedShort:(unsigned short)value;
+ (instancetype)numberWithUnsignedShort:(unsigned short)value;
@end;

__attribute__((objc_runtime_name("KotlinInt")))
__attribute__((swift_name("KotlinInt")))
@interface SACLInt : SACLNumber
- (instancetype)initWithInt:(int)value;
+ (instancetype)numberWithInt:(int)value;
@end;

__attribute__((objc_runtime_name("KotlinUInt")))
__attribute__((swift_name("KotlinUInt")))
@interface SACLUInt : SACLNumber
- (instancetype)initWithUnsignedInt:(unsigned int)value;
+ (instancetype)numberWithUnsignedInt:(unsigned int)value;
@end;

__attribute__((objc_runtime_name("KotlinLong")))
__attribute__((swift_name("KotlinLong")))
@interface SACLLong : SACLNumber
- (instancetype)initWithLongLong:(long long)value;
+ (instancetype)numberWithLongLong:(long long)value;
@end;

__attribute__((objc_runtime_name("KotlinULong")))
__attribute__((swift_name("KotlinULong")))
@interface SACLULong : SACLNumber
- (instancetype)initWithUnsignedLongLong:(unsigned long long)value;
+ (instancetype)numberWithUnsignedLongLong:(unsigned long long)value;
@end;

__attribute__((objc_runtime_name("KotlinFloat")))
__attribute__((swift_name("KotlinFloat")))
@interface SACLFloat : SACLNumber
- (instancetype)initWithFloat:(float)value;
+ (instancetype)numberWithFloat:(float)value;
@end;

__attribute__((objc_runtime_name("KotlinDouble")))
__attribute__((swift_name("KotlinDouble")))
@interface SACLDouble : SACLNumber
- (instancetype)initWithDouble:(double)value;
+ (instancetype)numberWithDouble:(double)value;
@end;

__attribute__((objc_runtime_name("KotlinBoolean")))
__attribute__((swift_name("KotlinBoolean")))
@interface SACLBoolean : SACLNumber
- (instancetype)initWithBool:(BOOL)value;
+ (instancetype)numberWithBool:(BOOL)value;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MyPureCommonClass")))
@interface SACLMyPureCommonClass : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (NSString *)doThis __attribute__((swift_name("doThis()")));
- (void)doThatCallback:(SACLKotlinUnit *(^)(NSString *))callback __attribute__((swift_name("doThat(callback:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("PrefManager")))
@interface SACLPrefManager : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)saveKey:(NSString *)key value:(int32_t)value __attribute__((swift_name("save(key:value:)")));
@end;

__attribute__((swift_name("MyCommonDelegate")))
@protocol SACLMyCommonDelegate
@required
- (void)didSucceed __attribute__((swift_name("didSucceed()")));
@end;

__attribute__((swift_name("FeatureDecisions")))
@protocol SACLFeatureDecisions
@required
- (BOOL)isRandomUsernameEnabled __attribute__((swift_name("isRandomUsernameEnabled()")));
- (BOOL)isStartupInterstitialEnabled __attribute__((swift_name("isStartupInterstitialEnabled()")));
- (BOOL)isBetaCreationToolEnabled __attribute__((swift_name("isBetaCreationToolEnabled()")));
- (BOOL)isCustomFontsInCommentsEnabled __attribute__((swift_name("isCustomFontsInCommentsEnabled()")));
@property (readonly) id<SACLFeatureFlagProvider> releaseProvider;
@property (readonly) id<SACLFeatureFlagProvider> opsProvider;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("CommonFeatureDecisions")))
@interface SACLCommonFeatureDecisions : KotlinBase <SACLFeatureDecisions>
- (instancetype)initWithEnvironment:(id<SACLConnectionEnvironment>)environment __attribute__((swift_name("init(environment:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithEnvironment:(id<SACLConnectionEnvironment>)environment releaseProvider:(id<SACLFeatureFlagProvider>)releaseProvider opsProvider:(id<SACLFeatureFlagProvider>)opsProvider __attribute__((swift_name("init(environment:releaseProvider:opsProvider:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("FeatureFlag")))
@protocol SACLFeatureFlag
@required
@property (readonly) BOOL randomUsername;
@property (readonly) BOOL startupInterstitial;
@property (readonly) BOOL betaCreationTool;
@property (readonly) BOOL customFontsInComments;
@end;

__attribute__((swift_name("FeatureFlagProvider")))
@protocol SACLFeatureFlagProvider
@required
@end;

__attribute__((swift_name("Parser")))
@protocol SACLParser
@required
- (id _Nullable)parseData:(NSString *)data __attribute__((swift_name("parse(data:)")));
@end;

__attribute__((swift_name("CommonParser")))
@interface SACLCommonParser : KotlinBase <SACLParser>
- (instancetype)initWithStrategy:(id<SACLKotlinx_serialization_runtime_nativeDeserializationStrategy>)strategy __attribute__((swift_name("init(strategy:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OpsFeatureFlagParser")))
@interface SACLOpsFeatureFlagParser : SACLCommonParser
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithStrategy:(id<SACLKotlinx_serialization_runtime_nativeDeserializationStrategy>)strategy __attribute__((swift_name("init(strategy:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (SACLOpsFeatureFlagParserOpsFeatureFlag *)parseData:(NSString *)data __attribute__((swift_name("parse(data:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OpsFeatureFlagParser.OpsFeatureFlag")))
@interface SACLOpsFeatureFlagParserOpsFeatureFlag : KotlinBase <SACLFeatureFlag>
- (instancetype)initWithRandomUsername:(BOOL)randomUsername startupInterstitial:(BOOL)startupInterstitial betaCreationTool:(BOOL)betaCreationTool customFontsInComments:(BOOL)customFontsInComments __attribute__((swift_name("init(randomUsername:startupInterstitial:betaCreationTool:customFontsInComments:)"))) __attribute__((objc_designated_initializer));
- (BOOL)component1 __attribute__((swift_name("component1()")));
- (BOOL)component2 __attribute__((swift_name("component2()")));
- (BOOL)component3 __attribute__((swift_name("component3()")));
- (BOOL)component4 __attribute__((swift_name("component4()")));
- (SACLOpsFeatureFlagParserOpsFeatureFlag *)doCopyRandomUsername:(BOOL)randomUsername startupInterstitial:(BOOL)startupInterstitial betaCreationTool:(BOOL)betaCreationTool customFontsInComments:(BOOL)customFontsInComments __attribute__((swift_name("doCopy(randomUsername:startupInterstitial:betaCreationTool:customFontsInComments:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OpsFeatureFlagParser.OpsFeatureFlag.Companion")))
@interface SACLOpsFeatureFlagParserOpsFeatureFlagCompanion : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)companion __attribute__((swift_name("init()")));
- (id<SACLKotlinx_serialization_runtime_nativeKSerializer>)serializer __attribute__((swift_name("serializer()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeSerializationStrategy")))
@protocol SACLKotlinx_serialization_runtime_nativeSerializationStrategy
@required
- (void)serializeEncoder:(id<SACLKotlinx_serialization_runtime_nativeEncoder>)encoder obj:(id _Nullable)obj __attribute__((swift_name("serialize(encoder:obj:)")));
@property (readonly) id<SACLKotlinx_serialization_runtime_nativeSerialDescriptor> descriptor;
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeDeserializationStrategy")))
@protocol SACLKotlinx_serialization_runtime_nativeDeserializationStrategy
@required
- (id _Nullable)deserializeDecoder:(id<SACLKotlinx_serialization_runtime_nativeDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (id _Nullable)patchDecoder:(id<SACLKotlinx_serialization_runtime_nativeDecoder>)decoder old:(id _Nullable)old __attribute__((swift_name("patch(decoder:old:)")));
@property (readonly) id<SACLKotlinx_serialization_runtime_nativeSerialDescriptor> descriptor;
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeKSerializer")))
@protocol SACLKotlinx_serialization_runtime_nativeKSerializer <SACLKotlinx_serialization_runtime_nativeSerializationStrategy, SACLKotlinx_serialization_runtime_nativeDeserializationStrategy>
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeGeneratedSerializer")))
@protocol SACLKotlinx_serialization_runtime_nativeGeneratedSerializer <SACLKotlinx_serialization_runtime_nativeKSerializer>
@required
- (SACLKotlinArray *)childSerializers __attribute__((swift_name("childSerializers()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OpsFeatureFlagParser.OpsFeatureFlag.$serializer")))
@interface SACLOpsFeatureFlagParserOpsFeatureFlag$serializer : KotlinBase <SACLKotlinx_serialization_runtime_nativeGeneratedSerializer>
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)$serializer __attribute__((swift_name("init()")));
- (SACLOpsFeatureFlagParserOpsFeatureFlag *)deserializeDecoder:(id<SACLKotlinx_serialization_runtime_nativeDecoder>)decoder __attribute__((swift_name("deserialize(decoder:)")));
- (SACLOpsFeatureFlagParserOpsFeatureFlag *)patchDecoder:(id<SACLKotlinx_serialization_runtime_nativeDecoder>)decoder old:(SACLOpsFeatureFlagParserOpsFeatureFlag *)old __attribute__((swift_name("patch(decoder:old:)")));
- (void)serializeEncoder:(id<SACLKotlinx_serialization_runtime_nativeEncoder>)encoder obj:(SACLOpsFeatureFlagParserOpsFeatureFlag *)obj __attribute__((swift_name("serialize(encoder:obj:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("OpsFeatureFlagProvider")))
@interface SACLOpsFeatureFlagProvider : KotlinBase <SACLFeatureFlagProvider>
- (instancetype)initWithEnvironment:(id<SACLConnectionEnvironment>)environment __attribute__((swift_name("init(environment:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithEnvironment:(id<SACLConnectionEnvironment>)environment connection:(id<SACLConnection>)connection parser:(id<SACLParser>)parser platform:(SACLPlatform *)platform __attribute__((swift_name("init(environment:connection:parser:platform:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ReleaseFeatureFlagProvider")))
@interface SACLReleaseFeatureFlagProvider : KotlinBase <SACLFeatureFlagProvider>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((swift_name("Connection")))
@protocol SACLConnection
@required
@property (readonly) id<SACLConnectionEnvironment> environment;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KtorConnection")))
@interface SACLKtorConnection : KotlinBase <SACLConnection>
- (instancetype)initWithEnvironment:(id<SACLConnectionEnvironment>)environment __attribute__((swift_name("init(environment:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithEnvironment:(id<SACLConnectionEnvironment>)environment engine:(id<SACLKtor_client_coreHttpClientEngine> _Nullable)engine requestBuilder:(id<SACLKtorConnectionBuilderRequest>)requestBuilder __attribute__((swift_name("init(environment:engine:requestBuilder:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KtorConnectionBuilder")))
@protocol SACLKtorConnectionBuilder
@required
@end;

__attribute__((swift_name("KtorConnectionBuilderRequest")))
@protocol SACLKtorConnectionBuilderRequest
@required
- (SACLKtor_client_coreHttpRequestBuilder *)buildRequest:(id<SACLConnectionRequest>)request __attribute__((swift_name("build(request:)")));
@property (readonly) id<SACLConnectionEnvironment> environment;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KtorRequestBuilder")))
@interface SACLKtorRequestBuilder : KotlinBase <SACLKtorConnectionBuilderRequest>
- (instancetype)initWithEnvironment:(id<SACLConnectionEnvironment>)environment __attribute__((swift_name("init(environment:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Platform")))
@interface SACLPlatform : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property (readonly) NSString *platform;
@end;

__attribute__((swift_name("KotlinThrowable")))
@interface SACLKotlinThrowable : KotlinBase
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SACLKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SACLKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (SACLKotlinArray *)getStackTrace __attribute__((swift_name("getStackTrace()")));
- (void)printStackTrace __attribute__((swift_name("printStackTrace()")));
@property (readonly) SACLKotlinThrowable * _Nullable cause;
@property (readonly) NSString * _Nullable message;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("NetworkError")))
@interface SACLNetworkError : SACLKotlinThrowable
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SACLKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SACLKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (SACLNetworkError *)doCopyMessage:(NSString * _Nullable)message __attribute__((swift_name("doCopy(message:)")));
@end;

__attribute__((swift_name("ConnectionEnvironment")))
@protocol SACLConnectionEnvironment
@required
@property (readonly) NSString *domain;
@end;

__attribute__((swift_name("ConnectionRequest")))
@protocol SACLConnectionRequest
@required
@property (readonly) NSString *path;
@property (readonly) SACLConnectionMethod *method;
@property (readonly) NSDictionary<NSString *, id> *query;
@property (readonly) NSDictionary<NSString *, NSString *> *headers;
@property (readonly) NSDictionary<NSString *, id> *body;
@property (readonly) BOOL formEncodeUrls;
@end;

__attribute__((swift_name("KotlinComparable")))
@protocol SACLKotlinComparable
@required
- (int32_t)compareToOther:(id _Nullable)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("KotlinEnum")))
@interface SACLKotlinEnum : KotlinBase <SACLKotlinComparable>
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer));
- (int32_t)compareToOther:(SACLKotlinEnum *)other __attribute__((swift_name("compareTo(other:)")));
@property (readonly) NSString *name;
@property (readonly) int32_t ordinal;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("ConnectionMethod")))
@interface SACLConnectionMethod : SACLKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) SACLConnectionMethod *get;
@property (class, readonly) SACLConnectionMethod *put;
@property (class, readonly) SACLConnectionMethod *delete;
@property (class, readonly) SACLConnectionMethod *post;
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(SACLConnectionMethod *)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_core_nativeCoroutineScope")))
@protocol SACLKotlinx_coroutines_core_nativeCoroutineScope
@required
@property (readonly) id<SACLKotlinCoroutineContext> coroutineContext;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("GlobalScope")))
@interface SACLGlobalScope : KotlinBase <SACLKotlinx_coroutines_core_nativeCoroutineScope>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

__attribute__((swift_name("KotlinCoroutineContext")))
@protocol SACLKotlinCoroutineContext
@required
- (id _Nullable)foldInitial:(id _Nullable)initial operation:(id _Nullable (^)(id _Nullable, id<SACLKotlinCoroutineContextElement>))operation __attribute__((swift_name("fold(initial:operation:)")));
- (id<SACLKotlinCoroutineContextElement> _Nullable)getKey:(id<SACLKotlinCoroutineContextKey>)key __attribute__((swift_name("get(key:)")));
- (id<SACLKotlinCoroutineContext>)minusKeyKey:(id<SACLKotlinCoroutineContextKey>)key __attribute__((swift_name("minusKey(key:)")));
- (id<SACLKotlinCoroutineContext>)plusContext:(id<SACLKotlinCoroutineContext>)context __attribute__((swift_name("plus(context:)")));
@end;

__attribute__((swift_name("KotlinCoroutineContextElement")))
@protocol SACLKotlinCoroutineContextElement <SACLKotlinCoroutineContext>
@required
@property (readonly) id<SACLKotlinCoroutineContextKey> key;
@end;

__attribute__((swift_name("KotlinAbstractCoroutineContextElement")))
@interface SACLKotlinAbstractCoroutineContextElement : KotlinBase <SACLKotlinCoroutineContextElement>
- (instancetype)initWithKey:(id<SACLKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinContinuationInterceptor")))
@protocol SACLKotlinContinuationInterceptor <SACLKotlinCoroutineContextElement>
@required
- (id<SACLKotlinContinuation>)interceptContinuationContinuation:(id<SACLKotlinContinuation>)continuation __attribute__((swift_name("interceptContinuation(continuation:)")));
- (void)releaseInterceptedContinuationContinuation:(id<SACLKotlinContinuation>)continuation __attribute__((swift_name("releaseInterceptedContinuation(continuation:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_core_nativeCoroutineDispatcher")))
@interface SACLKotlinx_coroutines_core_nativeCoroutineDispatcher : SACLKotlinAbstractCoroutineContextElement <SACLKotlinContinuationInterceptor>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithKey:(id<SACLKotlinCoroutineContextKey>)key __attribute__((swift_name("init(key:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (void)dispatchContext:(id<SACLKotlinCoroutineContext>)context block:(id<SACLKotlinx_coroutines_core_nativeRunnable>)block __attribute__((swift_name("dispatch(context:block:)")));
- (void)dispatchYieldContext:(id<SACLKotlinCoroutineContext>)context block:(id<SACLKotlinx_coroutines_core_nativeRunnable>)block __attribute__((swift_name("dispatchYield(context:block:)")));
- (BOOL)isDispatchNeededContext:(id<SACLKotlinCoroutineContext>)context __attribute__((swift_name("isDispatchNeeded(context:)")));
- (SACLKotlinx_coroutines_core_nativeCoroutineDispatcher *)plusOther:(SACLKotlinx_coroutines_core_nativeCoroutineDispatcher *)other __attribute__((swift_name("plus(other:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("MainDispatcher")))
@interface SACLMainDispatcher : SACLKotlinx_coroutines_core_nativeCoroutineDispatcher
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@end;

@interface SACLKtorConnection (Extensions)
- (void)connectRequest:(id<SACLConnectionRequest>)request onResult:(SACLKotlinUnit *(^)(NSString *))onResult __attribute__((swift_name("connect(request:onResult:)")));
@end;

@interface SACLCommonFeatureDecisions (Extensions)
- (void)loadFlagsCallback:(SACLKotlinUnit *(^)(void))callback __attribute__((swift_name("loadFlags(callback:)")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinUnit")))
@interface SACLKotlinUnit : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)unit __attribute__((swift_name("init()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinArray")))
@interface SACLKotlinArray : KotlinBase
+ (instancetype)arrayWithSize:(int32_t)size init:(id _Nullable (^)(SACLInt *))init __attribute__((swift_name("init(size:init:)")));
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
- (id _Nullable)getIndex:(int32_t)index __attribute__((swift_name("get(index:)")));
- (id<SACLKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
- (void)setIndex:(int32_t)index value:(id _Nullable)value __attribute__((swift_name("set(index:value:)")));
@property (readonly) int32_t size;
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeEncoder")))
@protocol SACLKotlinx_serialization_runtime_nativeEncoder
@required
- (id<SACLKotlinx_serialization_runtime_nativeCompositeEncoder>)beginCollectionDesc:(id<SACLKotlinx_serialization_runtime_nativeSerialDescriptor>)desc collectionSize:(int32_t)collectionSize typeParams:(SACLKotlinArray *)typeParams __attribute__((swift_name("beginCollection(desc:collectionSize:typeParams:)")));
- (id<SACLKotlinx_serialization_runtime_nativeCompositeEncoder>)beginStructureDesc:(id<SACLKotlinx_serialization_runtime_nativeSerialDescriptor>)desc typeParams:(SACLKotlinArray *)typeParams __attribute__((swift_name("beginStructure(desc:typeParams:)")));
- (void)encodeBooleanValue:(BOOL)value __attribute__((swift_name("encodeBoolean(value:)")));
- (void)encodeByteValue:(int8_t)value __attribute__((swift_name("encodeByte(value:)")));
- (void)encodeCharValue:(unichar)value __attribute__((swift_name("encodeChar(value:)")));
- (void)encodeDoubleValue:(double)value __attribute__((swift_name("encodeDouble(value:)")));
- (void)encodeEnumEnumDescription:(SACLKotlinx_serialization_runtime_nativeEnumDescriptor *)enumDescription ordinal:(int32_t)ordinal __attribute__((swift_name("encodeEnum(enumDescription:ordinal:)")));
- (void)encodeFloatValue:(float)value __attribute__((swift_name("encodeFloat(value:)")));
- (void)encodeIntValue:(int32_t)value __attribute__((swift_name("encodeInt(value:)")));
- (void)encodeLongValue:(int64_t)value __attribute__((swift_name("encodeLong(value:)")));
- (void)encodeNotNullMark __attribute__((swift_name("encodeNotNullMark()")));
- (void)encodeNull __attribute__((swift_name("encodeNull()")));
- (void)encodeNullableSerializableValueSerializer:(id<SACLKotlinx_serialization_runtime_nativeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableValue(serializer:value:)")));
- (void)encodeSerializableValueSerializer:(id<SACLKotlinx_serialization_runtime_nativeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableValue(serializer:value:)")));
- (void)encodeShortValue:(int16_t)value __attribute__((swift_name("encodeShort(value:)")));
- (void)encodeStringValue:(NSString *)value __attribute__((swift_name("encodeString(value:)")));
- (void)encodeUnit __attribute__((swift_name("encodeUnit()")));
@property (readonly) id<SACLKotlinx_serialization_runtime_nativeSerialContext> context;
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeSerialDescriptor")))
@protocol SACLKotlinx_serialization_runtime_nativeSerialDescriptor
@required
- (NSArray<id<SACLKotlinAnnotation>> *)getElementAnnotationsIndex:(int32_t)index __attribute__((swift_name("getElementAnnotations(index:)")));
- (id<SACLKotlinx_serialization_runtime_nativeSerialDescriptor>)getElementDescriptorIndex:(int32_t)index __attribute__((swift_name("getElementDescriptor(index:)")));
- (int32_t)getElementIndexName:(NSString *)name __attribute__((swift_name("getElementIndex(name:)")));
- (NSString *)getElementNameIndex:(int32_t)index __attribute__((swift_name("getElementName(index:)")));
- (NSArray<id<SACLKotlinAnnotation>> *)getEntityAnnotations __attribute__((swift_name("getEntityAnnotations()")));
- (BOOL)isElementOptionalIndex:(int32_t)index __attribute__((swift_name("isElementOptional(index:)")));
@property (readonly) int32_t elementsCount;
@property (readonly) BOOL isNullable;
@property (readonly) SACLKotlinx_serialization_runtime_nativeSerialKind *kind;
@property (readonly) NSString *name;
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeDecoder")))
@protocol SACLKotlinx_serialization_runtime_nativeDecoder
@required
- (id<SACLKotlinx_serialization_runtime_nativeCompositeDecoder>)beginStructureDesc:(id<SACLKotlinx_serialization_runtime_nativeSerialDescriptor>)desc typeParams:(SACLKotlinArray *)typeParams __attribute__((swift_name("beginStructure(desc:typeParams:)")));
- (BOOL)decodeBoolean __attribute__((swift_name("decodeBoolean()")));
- (int8_t)decodeByte __attribute__((swift_name("decodeByte()")));
- (unichar)decodeChar __attribute__((swift_name("decodeChar()")));
- (double)decodeDouble __attribute__((swift_name("decodeDouble()")));
- (int32_t)decodeEnumEnumDescription:(SACLKotlinx_serialization_runtime_nativeEnumDescriptor *)enumDescription __attribute__((swift_name("decodeEnum(enumDescription:)")));
- (float)decodeFloat __attribute__((swift_name("decodeFloat()")));
- (int32_t)decodeInt __attribute__((swift_name("decodeInt()")));
- (int64_t)decodeLong __attribute__((swift_name("decodeLong()")));
- (BOOL)decodeNotNullMark __attribute__((swift_name("decodeNotNullMark()")));
- (SACLKotlinNothing * _Nullable)decodeNull __attribute__((swift_name("decodeNull()")));
- (id _Nullable)decodeNullableSerializableValueDeserializer:(id<SACLKotlinx_serialization_runtime_nativeDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableValue(deserializer:)")));
- (id _Nullable)decodeSerializableValueDeserializer:(id<SACLKotlinx_serialization_runtime_nativeDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableValue(deserializer:)")));
- (int16_t)decodeShort __attribute__((swift_name("decodeShort()")));
- (NSString *)decodeString __attribute__((swift_name("decodeString()")));
- (void)decodeUnit __attribute__((swift_name("decodeUnit()")));
- (id _Nullable)updateNullableSerializableValueDeserializer:(id<SACLKotlinx_serialization_runtime_nativeDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateNullableSerializableValue(deserializer:old:)")));
- (id _Nullable)updateSerializableValueDeserializer:(id<SACLKotlinx_serialization_runtime_nativeDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateSerializableValue(deserializer:old:)")));
@property (readonly) id<SACLKotlinx_serialization_runtime_nativeSerialContext> context;
@property (readonly) SACLKotlinx_serialization_runtime_nativeUpdateMode *updateMode;
@end;

__attribute__((swift_name("Kotlinx_ioCloseable")))
@protocol SACLKotlinx_ioCloseable
@required
- (void)close __attribute__((swift_name("close()")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientEngine")))
@protocol SACLKtor_client_coreHttpClientEngine <SACLKotlinx_coroutines_core_nativeCoroutineScope, SACLKotlinx_ioCloseable>
@required
@property (readonly) SACLKtor_client_coreHttpClientEngineConfig *config;
@property (readonly) SACLKotlinx_coroutines_core_nativeCoroutineDispatcher *dispatcher;
@end;

__attribute__((swift_name("Ktor_httpHttpMessageBuilder")))
@protocol SACLKtor_httpHttpMessageBuilder
@required
@property (readonly) SACLKtor_httpHeadersBuilder *headers;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestBuilder")))
@interface SACLKtor_client_coreHttpRequestBuilder : KotlinBase <SACLKtor_httpHttpMessageBuilder>
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (SACLKtor_client_coreHttpRequestData *)build __attribute__((swift_name("build()")));
- (void)setAttributesBlock:(SACLKotlinUnit *(^)(id<SACLKtor_utilsAttributes>))block __attribute__((swift_name("setAttributes(block:)")));
- (SACLKtor_client_coreHttpRequestBuilder *)takeFromBuilder:(SACLKtor_client_coreHttpRequestBuilder *)builder __attribute__((swift_name("takeFrom(builder:)")));
- (void)urlBlock:(SACLKotlinUnit *(^)(SACLKtor_httpURLBuilder *, SACLKtor_httpURLBuilder *))block __attribute__((swift_name("url(block:)")));
@property id body;
@property (readonly) id<SACLKotlinx_coroutines_core_nativeJob> executionContext;
@property SACLKtor_httpHttpMethod *method;
@property (readonly) SACLKtor_httpURLBuilder *url;
@end;

__attribute__((swift_name("KotlinCoroutineContextKey")))
@protocol SACLKotlinCoroutineContextKey
@required
@end;

__attribute__((swift_name("KotlinContinuation")))
@protocol SACLKotlinContinuation
@required
- (void)resumeWithResult:(id _Nullable)result __attribute__((swift_name("resumeWith(result:)")));
@property (readonly) id<SACLKotlinCoroutineContext> context;
@end;

__attribute__((swift_name("Kotlinx_coroutines_core_nativeRunnable")))
@protocol SACLKotlinx_coroutines_core_nativeRunnable
@required
- (void)run __attribute__((swift_name("run()")));
@end;

__attribute__((swift_name("KotlinIterator")))
@protocol SACLKotlinIterator
@required
- (BOOL)hasNext __attribute__((swift_name("hasNext()")));
- (id _Nullable)next __attribute__((swift_name("next()")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeCompositeEncoder")))
@protocol SACLKotlinx_serialization_runtime_nativeCompositeEncoder
@required
- (void)encodeBooleanElementDesc:(id<SACLKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(BOOL)value __attribute__((swift_name("encodeBooleanElement(desc:index:value:)")));
- (void)encodeByteElementDesc:(id<SACLKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(int8_t)value __attribute__((swift_name("encodeByteElement(desc:index:value:)")));
- (void)encodeCharElementDesc:(id<SACLKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(unichar)value __attribute__((swift_name("encodeCharElement(desc:index:value:)")));
- (void)encodeDoubleElementDesc:(id<SACLKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(double)value __attribute__((swift_name("encodeDoubleElement(desc:index:value:)")));
- (void)encodeFloatElementDesc:(id<SACLKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(float)value __attribute__((swift_name("encodeFloatElement(desc:index:value:)")));
- (void)encodeIntElementDesc:(id<SACLKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(int32_t)value __attribute__((swift_name("encodeIntElement(desc:index:value:)")));
- (void)encodeLongElementDesc:(id<SACLKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(int64_t)value __attribute__((swift_name("encodeLongElement(desc:index:value:)")));
- (void)encodeNonSerializableElementDesc:(id<SACLKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(id)value __attribute__((swift_name("encodeNonSerializableElement(desc:index:value:)")));
- (void)encodeNullableSerializableElementDesc:(id<SACLKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index serializer:(id<SACLKotlinx_serialization_runtime_nativeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeNullableSerializableElement(desc:index:serializer:value:)")));
- (void)encodeSerializableElementDesc:(id<SACLKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index serializer:(id<SACLKotlinx_serialization_runtime_nativeSerializationStrategy>)serializer value:(id _Nullable)value __attribute__((swift_name("encodeSerializableElement(desc:index:serializer:value:)")));
- (void)encodeShortElementDesc:(id<SACLKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(int16_t)value __attribute__((swift_name("encodeShortElement(desc:index:value:)")));
- (void)encodeStringElementDesc:(id<SACLKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index value:(NSString *)value __attribute__((swift_name("encodeStringElement(desc:index:value:)")));
- (void)encodeUnitElementDesc:(id<SACLKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("encodeUnitElement(desc:index:)")));
- (void)endStructureDesc:(id<SACLKotlinx_serialization_runtime_nativeSerialDescriptor>)desc __attribute__((swift_name("endStructure(desc:)")));
- (BOOL)shouldEncodeElementDefaultDesc:(id<SACLKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("shouldEncodeElementDefault(desc:index:)")));
@property (readonly) id<SACLKotlinx_serialization_runtime_nativeSerialContext> context;
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeSerialClassDescImpl")))
@interface SACLKotlinx_serialization_runtime_nativeSerialClassDescImpl : KotlinBase <SACLKotlinx_serialization_runtime_nativeSerialDescriptor>
- (instancetype)initWithName:(NSString *)name generatedSerializer:(id<SACLKotlinx_serialization_runtime_nativeGeneratedSerializer> _Nullable)generatedSerializer __attribute__((swift_name("init(name:generatedSerializer:)"))) __attribute__((objc_designated_initializer));
- (void)addElementName:(NSString *)name isOptional:(BOOL)isOptional __attribute__((swift_name("addElement(name:isOptional:)")));
- (void)pushAnnotationA:(id<SACLKotlinAnnotation>)a __attribute__((swift_name("pushAnnotation(a:)")));
- (void)pushClassAnnotationA:(id<SACLKotlinAnnotation>)a __attribute__((swift_name("pushClassAnnotation(a:)")));
- (void)pushDescriptorDesc:(id<SACLKotlinx_serialization_runtime_nativeSerialDescriptor>)desc __attribute__((swift_name("pushDescriptor(desc:)")));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeEnumDescriptor")))
@interface SACLKotlinx_serialization_runtime_nativeEnumDescriptor : SACLKotlinx_serialization_runtime_nativeSerialClassDescImpl
- (instancetype)initWithName:(NSString *)name choices:(SACLKotlinArray *)choices __attribute__((swift_name("init(name:choices:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithName:(NSString *)name generatedSerializer:(id<SACLKotlinx_serialization_runtime_nativeGeneratedSerializer> _Nullable)generatedSerializer __attribute__((swift_name("init(name:generatedSerializer:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeSerialContext")))
@protocol SACLKotlinx_serialization_runtime_nativeSerialContext
@required
- (id<SACLKotlinx_serialization_runtime_nativeKSerializer> _Nullable)getKclass:(id<SACLKotlinKClass>)kclass __attribute__((swift_name("get(kclass:)")));
- (id<SACLKotlinx_serialization_runtime_nativeKSerializer> _Nullable)getByValueValue:(id)value __attribute__((swift_name("getByValue(value:)")));
@end;

__attribute__((swift_name("KotlinAnnotation")))
@protocol SACLKotlinAnnotation
@required
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeSerialKind")))
@interface SACLKotlinx_serialization_runtime_nativeSerialKind : KotlinBase
@end;

__attribute__((swift_name("Kotlinx_serialization_runtime_nativeCompositeDecoder")))
@protocol SACLKotlinx_serialization_runtime_nativeCompositeDecoder
@required
- (BOOL)decodeBooleanElementDesc:(id<SACLKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeBooleanElement(desc:index:)")));
- (int8_t)decodeByteElementDesc:(id<SACLKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeByteElement(desc:index:)")));
- (unichar)decodeCharElementDesc:(id<SACLKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeCharElement(desc:index:)")));
- (int32_t)decodeCollectionSizeDesc:(id<SACLKotlinx_serialization_runtime_nativeSerialDescriptor>)desc __attribute__((swift_name("decodeCollectionSize(desc:)")));
- (double)decodeDoubleElementDesc:(id<SACLKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeDoubleElement(desc:index:)")));
- (int32_t)decodeElementIndexDesc:(id<SACLKotlinx_serialization_runtime_nativeSerialDescriptor>)desc __attribute__((swift_name("decodeElementIndex(desc:)")));
- (float)decodeFloatElementDesc:(id<SACLKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeFloatElement(desc:index:)")));
- (int32_t)decodeIntElementDesc:(id<SACLKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeIntElement(desc:index:)")));
- (int64_t)decodeLongElementDesc:(id<SACLKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeLongElement(desc:index:)")));
- (id _Nullable)decodeNullableSerializableElementDesc:(id<SACLKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index deserializer:(id<SACLKotlinx_serialization_runtime_nativeDeserializationStrategy>)deserializer __attribute__((swift_name("decodeNullableSerializableElement(desc:index:deserializer:)")));
- (id _Nullable)decodeSerializableElementDesc:(id<SACLKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index deserializer:(id<SACLKotlinx_serialization_runtime_nativeDeserializationStrategy>)deserializer __attribute__((swift_name("decodeSerializableElement(desc:index:deserializer:)")));
- (int16_t)decodeShortElementDesc:(id<SACLKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeShortElement(desc:index:)")));
- (NSString *)decodeStringElementDesc:(id<SACLKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeStringElement(desc:index:)")));
- (void)decodeUnitElementDesc:(id<SACLKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index __attribute__((swift_name("decodeUnitElement(desc:index:)")));
- (void)endStructureDesc:(id<SACLKotlinx_serialization_runtime_nativeSerialDescriptor>)desc __attribute__((swift_name("endStructure(desc:)")));
- (id _Nullable)updateNullableSerializableElementDesc:(id<SACLKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index deserializer:(id<SACLKotlinx_serialization_runtime_nativeDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateNullableSerializableElement(desc:index:deserializer:old:)")));
- (id _Nullable)updateSerializableElementDesc:(id<SACLKotlinx_serialization_runtime_nativeSerialDescriptor>)desc index:(int32_t)index deserializer:(id<SACLKotlinx_serialization_runtime_nativeDeserializationStrategy>)deserializer old:(id _Nullable)old __attribute__((swift_name("updateSerializableElement(desc:index:deserializer:old:)")));
@property (readonly) id<SACLKotlinx_serialization_runtime_nativeSerialContext> context;
@property (readonly) SACLKotlinx_serialization_runtime_nativeUpdateMode *updateMode;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("KotlinNothing")))
@interface SACLKotlinNothing : KotlinBase
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Kotlinx_serialization_runtime_nativeUpdateMode")))
@interface SACLKotlinx_serialization_runtime_nativeUpdateMode : SACLKotlinEnum
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
@property (class, readonly) SACLKotlinx_serialization_runtime_nativeUpdateMode *banned;
@property (class, readonly) SACLKotlinx_serialization_runtime_nativeUpdateMode *overwrite;
@property (class, readonly) SACLKotlinx_serialization_runtime_nativeUpdateMode *update;
- (instancetype)initWithName:(NSString *)name ordinal:(int32_t)ordinal __attribute__((swift_name("init(name:ordinal:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (int32_t)compareToOther:(SACLKotlinx_serialization_runtime_nativeUpdateMode *)other __attribute__((swift_name("compareTo(other:)")));
@end;

__attribute__((swift_name("Ktor_client_coreHttpClientEngineConfig")))
@interface SACLKtor_client_coreHttpClientEngineConfig : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property SACLKotlinx_coroutines_core_nativeCoroutineDispatcher * _Nullable dispatcher;
@property BOOL pipelining;
@property (readonly) SACLKtor_client_coreHttpResponseConfig *response;
@property int32_t threadsCount;
@end;

__attribute__((swift_name("Ktor_utilsStringValuesBuilder")))
@interface SACLKtor_utilsStringValuesBuilder : KotlinBase
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer));
- (void)appendName:(NSString *)name value:(NSString *)value __attribute__((swift_name("append(name:value:)")));
- (void)appendAllStringValues:(id<SACLKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendAll(stringValues:)")));
- (void)appendAllName:(NSString *)name values:(id)values __attribute__((swift_name("appendAll(name:values:)")));
- (void)appendMissingStringValues:(id<SACLKtor_utilsStringValues>)stringValues __attribute__((swift_name("appendMissing(stringValues:)")));
- (void)appendMissingName:(NSString *)name values:(id)values __attribute__((swift_name("appendMissing(name:values:)")));
- (id<SACLKtor_utilsStringValues>)build __attribute__((swift_name("build()")));
- (void)clear __attribute__((swift_name("clear()")));
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<SACLKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (SACLMutableSet<NSString *> *)names __attribute__((swift_name("names()")));
- (void)removeName:(NSString *)name __attribute__((swift_name("remove(name:)")));
- (BOOL)removeName:(NSString *)name value:(NSString *)value __attribute__((swift_name("remove(name:value:)")));
- (void)removeKeysWithNoEntries __attribute__((swift_name("removeKeysWithNoEntries()")));
- (void)setName:(NSString *)name value:(NSString *)value __attribute__((swift_name("set(name:value:)")));
@property BOOL built;
@property (readonly) BOOL caseInsensitiveName;
@property (readonly) SACLMutableDictionary<NSString *, NSMutableArray<NSString *> *> *values;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHeadersBuilder")))
@interface SACLKtor_httpHeadersBuilder : SACLKtor_utilsStringValuesBuilder
- (instancetype)initWithSize:(int32_t)size __attribute__((swift_name("init(size:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<SACLKtor_httpHeaders>)build __attribute__((swift_name("build()")));
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_client_coreHttpRequestData")))
@interface SACLKtor_client_coreHttpRequestData : KotlinBase
@property (readonly) id<SACLKtor_utilsAttributes> attributes;
@property (readonly) id body;
@property (readonly) id<SACLKotlinx_coroutines_core_nativeJob> executionContext;
@property (readonly) id<SACLKtor_httpHeaders> headers;
@property (readonly) SACLKtor_httpHttpMethod *method;
@property (readonly) SACLKtor_httpUrl *url;
@end;

__attribute__((swift_name("Ktor_utilsAttributes")))
@protocol SACLKtor_utilsAttributes
@required
- (id)computeIfAbsentKey:(SACLKtor_utilsAttributeKey *)key block:(id (^)(void))block __attribute__((swift_name("computeIfAbsent(key:block:)")));
- (BOOL)containsKey:(SACLKtor_utilsAttributeKey *)key __attribute__((swift_name("contains(key:)")));
- (id)getKey_:(SACLKtor_utilsAttributeKey *)key __attribute__((swift_name("get(key_:)")));
- (id _Nullable)getOrNullKey:(SACLKtor_utilsAttributeKey *)key __attribute__((swift_name("getOrNull(key:)")));
- (void)putKey:(SACLKtor_utilsAttributeKey *)key value:(id)value __attribute__((swift_name("put(key:value:)")));
- (void)removeKey:(SACLKtor_utilsAttributeKey *)key __attribute__((swift_name("remove(key:)")));
- (id)takeKey:(SACLKtor_utilsAttributeKey *)key __attribute__((swift_name("take(key:)")));
- (id _Nullable)takeOrNullKey:(SACLKtor_utilsAttributeKey *)key __attribute__((swift_name("takeOrNull(key:)")));
@property (readonly) NSArray<SACLKtor_utilsAttributeKey *> *allKeys;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLBuilder")))
@interface SACLKtor_httpURLBuilder : KotlinBase
- (instancetype)initWithProtocol:(SACLKtor_httpURLProtocol *)protocol host:(NSString *)host port:(int32_t)port user:(NSString * _Nullable)user password:(NSString * _Nullable)password encodedPath:(NSString *)encodedPath parameters:(SACLKtor_httpParametersBuilder *)parameters fragment:(NSString *)fragment trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("init(protocol:host:port:user:password:encodedPath:parameters:fragment:trailingQuery:)"))) __attribute__((objc_designated_initializer));
- (SACLKtor_httpUrl *)build __attribute__((swift_name("build()")));
- (NSString *)buildString __attribute__((swift_name("buildString()")));
- (SACLKtor_httpURLBuilder *)pathComponents:(SACLKotlinArray *)components __attribute__((swift_name("path(components:)")));
- (SACLKtor_httpURLBuilder *)pathComponents_:(NSArray<NSString *> *)components __attribute__((swift_name("path(components_:)")));
@property NSString *encodedPath;
@property NSString *fragment;
@property NSString *host;
@property (readonly) SACLKtor_httpParametersBuilder *parameters;
@property NSString * _Nullable password;
@property int32_t port;
@property SACLKtor_httpURLProtocol *protocol;
@property BOOL trailingQuery;
@property NSString * _Nullable user;
@end;

__attribute__((swift_name("Kotlinx_coroutines_core_nativeJob")))
@protocol SACLKotlinx_coroutines_core_nativeJob <SACLKotlinCoroutineContextElement>
@required
- (id<SACLKotlinx_coroutines_core_nativeChildHandle>)attachChildChild:(id<SACLKotlinx_coroutines_core_nativeChildJob>)child __attribute__((swift_name("attachChild(child:)")));
- (void)cancel __attribute__((swift_name("cancel()")));
- (BOOL)cancelCause:(SACLKotlinThrowable * _Nullable)cause __attribute__((swift_name("cancel(cause:)")));
- (BOOL)cancel0 __attribute__((swift_name("cancel0()")));
- (SACLKotlinx_coroutines_core_nativeCancellationException *)getCancellationException __attribute__((swift_name("getCancellationException()")));
- (id<SACLKotlinx_coroutines_core_nativeDisposableHandle>)invokeOnCompletionOnCancelling:(BOOL)onCancelling invokeImmediately:(BOOL)invokeImmediately handler:(SACLKotlinUnit *(^)(SACLKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(onCancelling:invokeImmediately:handler:)")));
- (id<SACLKotlinx_coroutines_core_nativeDisposableHandle>)invokeOnCompletionHandler:(SACLKotlinUnit *(^)(SACLKotlinThrowable * _Nullable))handler __attribute__((swift_name("invokeOnCompletion(handler:)")));
- (id<SACLKotlinx_coroutines_core_nativeJob>)plusOther_:(id<SACLKotlinx_coroutines_core_nativeJob>)other __attribute__((swift_name("plus(other_:)")));
- (BOOL)start __attribute__((swift_name("start()")));
@property (readonly) id<SACLKotlinSequence> children;
@property (readonly) BOOL isActive;
@property (readonly) BOOL isCancelled;
@property (readonly) BOOL isCompleted;
@property (readonly) id<SACLKotlinx_coroutines_core_nativeSelectClause0> onJoin;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpHttpMethod")))
@interface SACLKtor_httpHttpMethod : KotlinBase
- (instancetype)initWithValue:(NSString *)value __attribute__((swift_name("init(value:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (SACLKtor_httpHttpMethod *)doCopyValue:(NSString *)value __attribute__((swift_name("doCopy(value:)")));
@property (readonly) NSString *value;
@end;

__attribute__((swift_name("KotlinKDeclarationContainer")))
@protocol SACLKotlinKDeclarationContainer
@required
@end;

__attribute__((swift_name("KotlinKAnnotatedElement")))
@protocol SACLKotlinKAnnotatedElement
@required
@end;

__attribute__((swift_name("KotlinKClassifier")))
@protocol SACLKotlinKClassifier
@required
@end;

__attribute__((swift_name("KotlinKClass")))
@protocol SACLKotlinKClass <SACLKotlinKDeclarationContainer, SACLKotlinKAnnotatedElement, SACLKotlinKClassifier>
@required
- (BOOL)isInstanceValue:(id _Nullable)value __attribute__((swift_name("isInstance(value:)")));
@property (readonly) NSString * _Nullable qualifiedName;
@property (readonly) NSString * _Nullable simpleName;
@end;

__attribute__((swift_name("Ktor_client_coreHttpResponseConfig")))
@interface SACLKtor_client_coreHttpResponseConfig : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
@property SACLKotlinx_ioCharset *defaultCharset;
@end;

__attribute__((swift_name("Ktor_utilsStringValues")))
@protocol SACLKtor_utilsStringValues
@required
- (BOOL)containsName:(NSString *)name __attribute__((swift_name("contains(name:)")));
- (BOOL)containsName:(NSString *)name value:(NSString *)value __attribute__((swift_name("contains(name:value:)")));
- (NSSet<id<SACLKotlinMapEntry>> *)entries __attribute__((swift_name("entries()")));
- (void)forEachBody:(SACLKotlinUnit *(^)(NSString *, NSArray<NSString *> *))body __attribute__((swift_name("forEach(body:)")));
- (NSString * _Nullable)getName:(NSString *)name __attribute__((swift_name("get(name:)")));
- (NSArray<NSString *> * _Nullable)getAllName:(NSString *)name __attribute__((swift_name("getAll(name:)")));
- (BOOL)isEmpty __attribute__((swift_name("isEmpty()")));
- (NSSet<NSString *> *)names __attribute__((swift_name("names()")));
@property (readonly) BOOL caseInsensitiveName;
@end;

__attribute__((swift_name("KotlinMapEntry")))
@protocol SACLKotlinMapEntry
@required
@property (readonly) id _Nullable key;
@property (readonly) id _Nullable value;
@end;

__attribute__((swift_name("Ktor_httpHeaders")))
@protocol SACLKtor_httpHeaders <SACLKtor_utilsStringValues>
@required
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpUrl")))
@interface SACLKtor_httpUrl : KotlinBase
- (instancetype)initWithProtocol:(SACLKtor_httpURLProtocol *)protocol host:(NSString *)host specifiedPort:(int32_t)specifiedPort encodedPath:(NSString *)encodedPath parameters:(id<SACLKtor_httpParameters>)parameters fragment:(NSString *)fragment user:(NSString * _Nullable)user password:(NSString * _Nullable)password trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("init(protocol:host:specifiedPort:encodedPath:parameters:fragment:user:password:trailingQuery:)"))) __attribute__((objc_designated_initializer));
- (SACLKtor_httpURLProtocol *)component1 __attribute__((swift_name("component1()")));
- (NSString *)component2 __attribute__((swift_name("component2()")));
- (int32_t)component3 __attribute__((swift_name("component3()")));
- (NSString *)component4 __attribute__((swift_name("component4()")));
- (id<SACLKtor_httpParameters>)component5 __attribute__((swift_name("component5()")));
- (NSString *)component6 __attribute__((swift_name("component6()")));
- (NSString * _Nullable)component7 __attribute__((swift_name("component7()")));
- (NSString * _Nullable)component8 __attribute__((swift_name("component8()")));
- (BOOL)component9 __attribute__((swift_name("component9()")));
- (SACLKtor_httpUrl *)doCopyProtocol:(SACLKtor_httpURLProtocol *)protocol host:(NSString *)host specifiedPort:(int32_t)specifiedPort encodedPath:(NSString *)encodedPath parameters:(id<SACLKtor_httpParameters>)parameters fragment:(NSString *)fragment user:(NSString * _Nullable)user password:(NSString * _Nullable)password trailingQuery:(BOOL)trailingQuery __attribute__((swift_name("doCopy(protocol:host:specifiedPort:encodedPath:parameters:fragment:user:password:trailingQuery:)")));
@property (readonly) NSString *encodedPath;
@property (readonly) NSString *fragment;
@property (readonly) NSString *host;
@property (readonly) id<SACLKtor_httpParameters> parameters;
@property (readonly) NSString * _Nullable password;
@property (readonly) int32_t port;
@property (readonly) SACLKtor_httpURLProtocol *protocol;
@property (readonly) int32_t specifiedPort;
@property (readonly) BOOL trailingQuery;
@property (readonly) NSString * _Nullable user;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_utilsAttributeKey")))
@interface SACLKtor_utilsAttributeKey : KotlinBase
- (instancetype)initWithName:(NSString *)name __attribute__((swift_name("init(name:)"))) __attribute__((objc_designated_initializer));
@property (readonly) NSString *name;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpURLProtocol")))
@interface SACLKtor_httpURLProtocol : KotlinBase
- (instancetype)initWithName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("init(name:defaultPort:)"))) __attribute__((objc_designated_initializer));
- (NSString *)component1 __attribute__((swift_name("component1()")));
- (int32_t)component2 __attribute__((swift_name("component2()")));
- (SACLKtor_httpURLProtocol *)doCopyName:(NSString *)name defaultPort:(int32_t)defaultPort __attribute__((swift_name("doCopy(name:defaultPort:)")));
@property (readonly) int32_t defaultPort;
@property (readonly) NSString *name;
@end;

__attribute__((objc_subclassing_restricted))
__attribute__((swift_name("Ktor_httpParametersBuilder")))
@interface SACLKtor_httpParametersBuilder : SACLKtor_utilsStringValuesBuilder
- (instancetype)initWithSize:(int32_t)size __attribute__((swift_name("init(size:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCaseInsensitiveName:(BOOL)caseInsensitiveName size:(int32_t)size __attribute__((swift_name("init(caseInsensitiveName:size:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (id<SACLKtor_httpParameters>)build __attribute__((swift_name("build()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_core_nativeDisposableHandle")))
@protocol SACLKotlinx_coroutines_core_nativeDisposableHandle
@required
- (void)dispose __attribute__((swift_name("dispose()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_core_nativeChildHandle")))
@protocol SACLKotlinx_coroutines_core_nativeChildHandle <SACLKotlinx_coroutines_core_nativeDisposableHandle>
@required
- (BOOL)childCancelledCause:(SACLKotlinThrowable *)cause __attribute__((swift_name("childCancelled(cause:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_core_nativeChildJob")))
@protocol SACLKotlinx_coroutines_core_nativeChildJob <SACLKotlinx_coroutines_core_nativeJob>
@required
- (void)parentCancelledParentJob:(id<SACLKotlinx_coroutines_core_nativeParentJob>)parentJob __attribute__((swift_name("parentCancelled(parentJob:)")));
@end;

__attribute__((swift_name("KotlinException")))
@interface SACLKotlinException : SACLKotlinThrowable
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SACLKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SACLKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinRuntimeException")))
@interface SACLKotlinRuntimeException : SACLKotlinException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SACLKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SACLKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("KotlinIllegalStateException")))
@interface SACLKotlinIllegalStateException : SACLKotlinRuntimeException
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SACLKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer));
- (instancetype)initWithCause:(SACLKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("Kotlinx_coroutines_core_nativeCancellationException")))
@interface SACLKotlinx_coroutines_core_nativeCancellationException : SACLKotlinIllegalStateException
- (instancetype)initWithMessage:(NSString * _Nullable)message __attribute__((swift_name("init(message:)"))) __attribute__((objc_designated_initializer));
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
- (instancetype)initWithMessage:(NSString * _Nullable)message cause:(SACLKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(message:cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
- (instancetype)initWithCause:(SACLKotlinThrowable * _Nullable)cause __attribute__((swift_name("init(cause:)"))) __attribute__((objc_designated_initializer)) __attribute__((unavailable));
@end;

__attribute__((swift_name("KotlinSequence")))
@protocol SACLKotlinSequence
@required
- (id<SACLKotlinIterator>)iterator __attribute__((swift_name("iterator()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_core_nativeSelectClause0")))
@protocol SACLKotlinx_coroutines_core_nativeSelectClause0
@required
- (void)registerSelectClause0Select:(id<SACLKotlinx_coroutines_core_nativeSelectInstance>)select block:(id<SACLKotlinSuspendFunction0>)block __attribute__((swift_name("registerSelectClause0(select:block:)")));
@end;

__attribute__((swift_name("Kotlinx_ioCharset")))
@interface SACLKotlinx_ioCharset : KotlinBase
- (instancetype)initWith_name:(NSString *)_name __attribute__((swift_name("init(_name:)"))) __attribute__((objc_designated_initializer));
- (SACLKotlinx_ioCharsetDecoder *)doNewDecoder __attribute__((swift_name("doNewDecoder()")));
- (SACLKotlinx_ioCharsetEncoder *)doNewEncoder __attribute__((swift_name("doNewEncoder()")));
@end;

__attribute__((swift_name("Ktor_httpParameters")))
@protocol SACLKtor_httpParameters <SACLKtor_utilsStringValues>
@required
@end;

__attribute__((swift_name("Kotlinx_coroutines_core_nativeParentJob")))
@protocol SACLKotlinx_coroutines_core_nativeParentJob <SACLKotlinx_coroutines_core_nativeJob>
@required
- (SACLKotlinThrowable *)getChildJobCancellationCause __attribute__((swift_name("getChildJobCancellationCause()")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_core_nativeSelectInstance")))
@protocol SACLKotlinx_coroutines_core_nativeSelectInstance
@required
- (void)disposeOnSelectHandle:(id<SACLKotlinx_coroutines_core_nativeDisposableHandle>)handle __attribute__((swift_name("disposeOnSelect(handle:)")));
- (id _Nullable)performAtomicIfNotSelectedDesc:(SACLKotlinx_coroutines_core_nativeAtomicDesc *)desc __attribute__((swift_name("performAtomicIfNotSelected(desc:)")));
- (id _Nullable)performAtomicTrySelectDesc:(SACLKotlinx_coroutines_core_nativeAtomicDesc *)desc __attribute__((swift_name("performAtomicTrySelect(desc:)")));
- (void)resumeSelectCancellableWithExceptionException:(SACLKotlinThrowable *)exception __attribute__((swift_name("resumeSelectCancellableWithException(exception:)")));
- (BOOL)trySelectIdempotent:(id _Nullable)idempotent __attribute__((swift_name("trySelect(idempotent:)")));
@property (readonly) id<SACLKotlinContinuation> completion;
@property (readonly) BOOL isSelected;
@end;

__attribute__((swift_name("KotlinSuspendFunction")))
@protocol SACLKotlinSuspendFunction
@required
@end;

__attribute__((swift_name("KotlinSuspendFunction0")))
@protocol SACLKotlinSuspendFunction0 <SACLKotlinSuspendFunction>
@required
@end;

__attribute__((swift_name("Kotlinx_ioCharsetDecoder")))
@interface SACLKotlinx_ioCharsetDecoder : KotlinBase
- (instancetype)initWith_charset:(SACLKotlinx_ioCharset *)_charset __attribute__((swift_name("init(_charset:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("Kotlinx_ioCharsetEncoder")))
@interface SACLKotlinx_ioCharsetEncoder : KotlinBase
- (instancetype)initWith_charset:(SACLKotlinx_ioCharset *)_charset __attribute__((swift_name("init(_charset:)"))) __attribute__((objc_designated_initializer));
@end;

__attribute__((swift_name("Kotlinx_coroutines_core_nativeAtomicDesc")))
@interface SACLKotlinx_coroutines_core_nativeAtomicDesc : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeOp:(SACLKotlinx_coroutines_core_nativeAtomicOp *)op failure:(id _Nullable)failure __attribute__((swift_name("complete(op:failure:)")));
- (id _Nullable)prepareOp:(SACLKotlinx_coroutines_core_nativeAtomicOp *)op __attribute__((swift_name("prepare(op:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_core_nativeOpDescriptor")))
@interface SACLKotlinx_coroutines_core_nativeOpDescriptor : KotlinBase
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (id _Nullable)performAffected:(id _Nullable)affected __attribute__((swift_name("perform(affected:)")));
@end;

__attribute__((swift_name("Kotlinx_coroutines_core_nativeAtomicOp")))
@interface SACLKotlinx_coroutines_core_nativeAtomicOp : SACLKotlinx_coroutines_core_nativeOpDescriptor
- (instancetype)init __attribute__((swift_name("init()"))) __attribute__((objc_designated_initializer));
+ (instancetype)new __attribute__((availability(swift, unavailable, message="use object initializers instead")));
- (void)completeAffected:(id _Nullable)affected failure:(id _Nullable)failure __attribute__((swift_name("complete(affected:failure:)")));
- (id _Nullable)prepareAffected:(id _Nullable)affected __attribute__((swift_name("prepare(affected:)")));
- (BOOL)tryDecideDecision:(id _Nullable)decision __attribute__((swift_name("tryDecide(decision:)")));
@property (readonly) BOOL isDecided;
@end;

NS_ASSUME_NONNULL_END
