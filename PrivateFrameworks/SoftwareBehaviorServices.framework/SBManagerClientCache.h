/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SoftwareBehaviorServices.framework/SoftwareBehaviorServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSLock, NSMutableDictionary;

@interface SBManagerClientCache : NSObject {
    struct map<std::__1::basic_string<char>, std::__1::set<EventCallbackData *, std::__1::less<EventCallbackData *>, std::__1::allocator<EventCallbackData *> >, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, std::__1::set<EventCallbackData *, std::__1::less<EventCallbackData *>, std::__1::allocator<EventCallbackData *> > > > > { 
        struct __tree<std::__1::pair<std::__1::basic_string<char>, std::__1::set<EventCallbackData *, std::__1::less<EventCallbackData *>, std::__1::allocator<EventCallbackData *> > >, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::set<EventCallbackData *, std::__1::less<EventCallbackData *>, std::__1::allocator<EventCallbackData *> >, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::pair<std::__1::basic_string<char>, std::__1::set<EventCallbackData *, std::__1::less<EventCallbackData *>, std::__1::allocator<EventCallbackData *> > > > > { 
            struct __tree_node<std::__1::pair<std::__1::basic_string<char>, std::__1::set<EventCallbackData *, std::__1::less<EventCallbackData *>, std::__1::allocator<EventCallbackData *> > >, void *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::pair<std::__1::basic_string<char>, std::__1::set<EventCallbackData *, std::__1::less<EventCallbackData *>, std::__1::allocator<EventCallbackData *> > >, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __first_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::set<EventCallbackData *, std::__1::less<EventCallbackData *>, std::__1::allocator<EventCallbackData *> >, std::__1::less<std::__1::basic_string<char> >, true> > { 
                unsigned long __first_; 
            } __pair3_; 
        } __tree_; 
     /* Encoded args for previous method: B12@0:4^{EventCallbackData=^{dispatch_queue_s}@?}8 */
     /* Encoded args for previous method: v16@0:4@8^{EventCallbackData=^{dispatch_queue_s}@?}12 */
    BOOL _behaviorBundleSupport;
    BOOL _behaviorBundleSupportKnown;
    NSLock *_cacheLock;
    NSMutableDictionary *_keyValueCache;
    struct dispatch_queue_s { } *_queue;
    } fCallbacks;
}

@property BOOL behaviorBundleSupport;
@property BOOL behaviorBundleSupportKnown;
@property NSLock * cacheLock;
@property NSMutableDictionary * keyValueCache;
@property struct dispatch_queue_s { }* queue;

+ (id)sharedInstance;

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)behaviorBundleSupport;
- (BOOL)behaviorBundleSupportKnown;
- (id)cacheLock;
- (void)cacheValue:(id)arg1 forKey:(id)arg2;
- (void)callCallbacksForEvent:(id)arg1;
- (id)copyCachedValueFor:(id)arg1;
- (bool)deregisterCallbackForEvent:(struct EventCallbackData { struct dispatch_queue_s {} *x1; id x2; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x3; }*)arg1;
- (id)init;
- (id)keyValueCache;
- (struct dispatch_queue_s { }*)queue;
- (void)registerCallbackForEvent:(id)arg1 with:(struct EventCallbackData { struct dispatch_queue_s {} *x1; id x2; /* Warning: Unrecognized filer type: '?' using 'void*' */ void*x3; }*)arg2;
- (void)resetKeyValueCache;
- (void)saveBehaviorBundleSupport:(BOOL)arg1 withValue:(BOOL)arg2;
- (void)setBehaviorBundleSupport:(BOOL)arg1;
- (void)setBehaviorBundleSupportKnown:(BOOL)arg1;
- (void)setCacheLock:(id)arg1;
- (void)setKeyValueCache:(id)arg1;
- (void)setQueue:(struct dispatch_queue_s { }*)arg1;

@end
