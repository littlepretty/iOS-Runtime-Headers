/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class NSHashTable, NSMutableArray, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, NSURL, TSPArchiverManager, TSPComponentExternalReferenceMap, TSPObjectContainer, TSPObjectContext, TSPPackageMetadata, TSUPathSet;

@interface TSPPackageWriteCoordinator : NSObject <TSPArchiverManagerDelegate, TSPComponentWriterDelegate, TSPDataArchiver, TSPExternalReferenceDelegate, TSPObjectModifyDelegate> {
    struct hash_map<const long long, TSP::ComponentPropertiesSnapshot, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, TSP::ComponentPropertiesSnapshot> > > { 
        struct __hash_table<std::__1::pair<const long long, TSP::ComponentPropertiesSnapshot>, __gnu_cxx::__hash_map_hasher<std::__1::pair<const long long, TSP::ComponentPropertiesSnapshot>, TSP::IdentifierHash, true>, __gnu_cxx::__hash_map_equal<std::__1::pair<const long long, TSP::ComponentPropertiesSnapshot>, std::__1::equal_to<const long long>, true>, std::__1::allocator<std::__1::pair<const long long, TSP::ComponentPropertiesSnapshot> > > { 
            struct unique_ptr<std::__1::__hash_node<std::__1::pair<const long long, TSP::ComponentPropertiesSnapshot>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::pair<const long long, TSP::ComponentPropertiesSnapshot>, void *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node<std::__1::pair<const long long, TSP::ComponentPropertiesSnapshot>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::pair<const long long, TSP::ComponentPropertiesSnapshot>, void *> *> > > { 
                    struct __hash_node<std::__1::pair<const long long, TSP::ComponentPropertiesSnapshot>, void *> {} **__first_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::pair<const long long, TSP::ComponentPropertiesSnapshot>, void *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::pair<const long long, TSP::ComponentPropertiesSnapshot>, void *> *> > { 
                            unsigned long __first_; 
                        } __data_; 
                    } __second_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::pair<const long long, TSP::ComponentPropertiesSnapshot>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::pair<const long long, TSP::ComponentPropertiesSnapshot>, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::pair<const long long, TSP::ComponentPropertiesSnapshot>, void *> *> { 
                    struct __hash_node<std::__1::pair<const long long, TSP::ComponentPropertiesSnapshot>, void *> {} *__next_; 
                } __first_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, __gnu_cxx::__hash_map_hasher<std::__1::pair<const long long, TSP::ComponentPropertiesSnapshot>, TSP::IdentifierHash, true> > { 
                unsigned long __first_; 
            } __p2_; 
            struct __compressed_pair<float, __gnu_cxx::__hash_map_equal<std::__1::pair<const long long, TSP::ComponentPropertiesSnapshot>, std::__1::equal_to<const long long>, true> > { 
                float __first_; 
            } __p3_; 
        } __table_; 
    struct hash_map<const long long, TSP::WrittenComponentInfo, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, TSP::WrittenComponentInfo> > > { 
        struct __hash_table<std::__1::pair<const long long, TSP::WrittenComponentInfo>, __gnu_cxx::__hash_map_hasher<std::__1::pair<const long long, TSP::WrittenComponentInfo>, TSP::IdentifierHash, true>, __gnu_cxx::__hash_map_equal<std::__1::pair<const long long, TSP::WrittenComponentInfo>, std::__1::equal_to<const long long>, true>, std::__1::allocator<std::__1::pair<const long long, TSP::WrittenComponentInfo> > > { 
            struct unique_ptr<std::__1::__hash_node<std::__1::pair<const long long, TSP::WrittenComponentInfo>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::pair<const long long, TSP::WrittenComponentInfo>, void *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node<std::__1::pair<const long long, TSP::WrittenComponentInfo>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::pair<const long long, TSP::WrittenComponentInfo>, void *> *> > > { 
                    struct __hash_node<std::__1::pair<const long long, TSP::WrittenComponentInfo>, void *> {} **__first_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::pair<const long long, TSP::WrittenComponentInfo>, void *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::pair<const long long, TSP::WrittenComponentInfo>, void *> *> > { 
                            unsigned long __first_; 
                        } __data_; 
                    } __second_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::pair<const long long, TSP::WrittenComponentInfo>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::pair<const long long, TSP::WrittenComponentInfo>, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::pair<const long long, TSP::WrittenComponentInfo>, void *> *> { 
                    struct __hash_node<std::__1::pair<const long long, TSP::WrittenComponentInfo>, void *> {} *__next_; 
                } __first_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, __gnu_cxx::__hash_map_hasher<std::__1::pair<const long long, TSP::WrittenComponentInfo>, TSP::IdentifierHash, true> > { 
                unsigned long __first_; 
            } __p2_; 
            struct __compressed_pair<float, __gnu_cxx::__hash_map_equal<std::__1::pair<const long long, TSP::WrittenComponentInfo>, std::__1::equal_to<const long long>, true> > { 
                float __first_; 
            } __p3_; 
        } __table_; 
    struct hash_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > > { 
        struct __hash_table<std::__1::pair<const long long, bool>, __gnu_cxx::__hash_map_hasher<std::__1::pair<const long long, bool>, TSP::IdentifierHash, true>, __gnu_cxx::__hash_map_equal<std::__1::pair<const long long, bool>, std::__1::equal_to<const long long>, true>, std::__1::allocator<std::__1::pair<const long long, bool> > > { 
            struct unique_ptr<std::__1::__hash_node<std::__1::pair<const long long, bool>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::pair<const long long, bool>, void *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node<std::__1::pair<const long long, bool>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::pair<const long long, bool>, void *> *> > > { 
                    struct __hash_node<std::__1::pair<const long long, bool>, void *> {} **__first_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::pair<const long long, bool>, void *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::pair<const long long, bool>, void *> *> > { 
                            unsigned long __first_; 
                        } __data_; 
                    } __second_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::pair<const long long, bool>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::pair<const long long, bool>, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::pair<const long long, bool>, void *> *> { 
                    struct __hash_node<std::__1::pair<const long long, bool>, void *> {} *__next_; 
                } __first_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, __gnu_cxx::__hash_map_hasher<std::__1::pair<const long long, bool>, TSP::IdentifierHash, true> > { 
                unsigned long __first_; 
            } __p2_; 
            struct __compressed_pair<float, __gnu_cxx::__hash_map_equal<std::__1::pair<const long long, bool>, std::__1::equal_to<const long long>, true> > { 
                float __first_; 
            } __p3_; 
        } __table_; 
    struct map<unsigned int, std::__1::queue<TSPComponent *, std::__1::deque<TSPComponent *, std::__1::allocator<TSPComponent *> > >, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, std::__1::queue<TSPComponent *, std::__1::deque<TSPComponent *, std::__1::allocator<TSPComponent *> > > > > > { 
        struct __tree<std::__1::pair<unsigned int, std::__1::queue<TSPComponent *, std::__1::deque<TSPComponent *, std::__1::allocator<TSPComponent *> > > >, std::__1::__map_value_compare<unsigned int, std::__1::queue<TSPComponent *, std::__1::deque<TSPComponent *, std::__1::allocator<TSPComponent *> > >, std::__1::less<unsigned int>, true>, std::__1::allocator<std::__1::pair<unsigned int, std::__1::queue<TSPComponent *, std::__1::deque<TSPComponent *, std::__1::allocator<TSPComponent *> > > > > > { 
            struct __tree_node<std::__1::pair<unsigned int, std::__1::queue<TSPComponent *, std::__1::deque<TSPComponent *, std::__1::allocator<TSPComponent *> > > >, void *> {} *__begin_node_; 
            struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::pair<unsigned int, std::__1::queue<TSPComponent *, std::__1::deque<TSPComponent *, std::__1::allocator<TSPComponent *> > > >, void *> > > { 
                struct __tree_end_node<std::__1::__tree_node_base<void *> *> { 
                    struct __tree_node_base<void *> {} *__left_; 
                } __first_; 
            } __pair1_; 
            struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned int, std::__1::queue<TSPComponent *, std::__1::deque<TSPComponent *, std::__1::allocator<TSPComponent *> > >, std::__1::less<unsigned int>, true> > { 
                unsigned long __first_; 
            } __pair3_; 
        } __tree_; 
    struct hash_map<const long long, TSP::WrittenObjectInfo, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, TSP::WrittenObjectInfo> > > { 
        struct __hash_table<std::__1::pair<const long long, TSP::WrittenObjectInfo>, __gnu_cxx::__hash_map_hasher<std::__1::pair<const long long, TSP::WrittenObjectInfo>, TSP::IdentifierHash, true>, __gnu_cxx::__hash_map_equal<std::__1::pair<const long long, TSP::WrittenObjectInfo>, std::__1::equal_to<const long long>, true>, std::__1::allocator<std::__1::pair<const long long, TSP::WrittenObjectInfo> > > { 
            struct unique_ptr<std::__1::__hash_node<std::__1::pair<const long long, TSP::WrittenObjectInfo>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::pair<const long long, TSP::WrittenObjectInfo>, void *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node<std::__1::pair<const long long, TSP::WrittenObjectInfo>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::pair<const long long, TSP::WrittenObjectInfo>, void *> *> > > { 
                    struct __hash_node<std::__1::pair<const long long, TSP::WrittenObjectInfo>, void *> {} **__first_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::pair<const long long, TSP::WrittenObjectInfo>, void *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::pair<const long long, TSP::WrittenObjectInfo>, void *> *> > { 
                            unsigned long __first_; 
                        } __data_; 
                    } __second_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::pair<const long long, TSP::WrittenObjectInfo>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::pair<const long long, TSP::WrittenObjectInfo>, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::pair<const long long, TSP::WrittenObjectInfo>, void *> *> { 
                    struct __hash_node<std::__1::pair<const long long, TSP::WrittenObjectInfo>, void *> {} *__next_; 
                } __first_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, __gnu_cxx::__hash_map_hasher<std::__1::pair<const long long, TSP::WrittenObjectInfo>, TSP::IdentifierHash, true> > { 
                unsigned long __first_; 
            } __p2_; 
            struct __compressed_pair<float, __gnu_cxx::__hash_map_equal<std::__1::pair<const long long, TSP::WrittenObjectInfo>, std::__1::equal_to<const long long>, true> > { 
                float __first_; 
            } __p3_; 
        } __table_; 
    struct hash_map<const long long, TSP::WrittenObjectInfo, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, TSP::WrittenObjectInfo> > > { 
        struct __hash_table<std::__1::pair<const long long, TSP::WrittenObjectInfo>, __gnu_cxx::__hash_map_hasher<std::__1::pair<const long long, TSP::WrittenObjectInfo>, TSP::IdentifierHash, true>, __gnu_cxx::__hash_map_equal<std::__1::pair<const long long, TSP::WrittenObjectInfo>, std::__1::equal_to<const long long>, true>, std::__1::allocator<std::__1::pair<const long long, TSP::WrittenObjectInfo> > > { 
            struct unique_ptr<std::__1::__hash_node<std::__1::pair<const long long, TSP::WrittenObjectInfo>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::pair<const long long, TSP::WrittenObjectInfo>, void *> *> > > { 
                struct __compressed_pair<std::__1::__hash_node<std::__1::pair<const long long, TSP::WrittenObjectInfo>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::pair<const long long, TSP::WrittenObjectInfo>, void *> *> > > { 
                    struct __hash_node<std::__1::pair<const long long, TSP::WrittenObjectInfo>, void *> {} **__first_; 
                    struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::pair<const long long, TSP::WrittenObjectInfo>, void *> *> > { 
                        struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::pair<const long long, TSP::WrittenObjectInfo>, void *> *> > { 
                            unsigned long __first_; 
                        } __data_; 
                    } __second_; 
                } __ptr_; 
            } __bucket_list_; 
            struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::pair<const long long, TSP::WrittenObjectInfo>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::pair<const long long, TSP::WrittenObjectInfo>, void *> > > { 
                struct __hash_node_base<std::__1::__hash_node<std::__1::pair<const long long, TSP::WrittenObjectInfo>, void *> *> { 
                    struct __hash_node<std::__1::pair<const long long, TSP::WrittenObjectInfo>, void *> {} *__next_; 
                } __first_; 
            } __p1_; 
            struct __compressed_pair<unsigned long, __gnu_cxx::__hash_map_hasher<std::__1::pair<const long long, TSP::WrittenObjectInfo>, TSP::IdentifierHash, true> > { 
                unsigned long __first_; 
            } __p2_; 
            struct __compressed_pair<float, __gnu_cxx::__hash_map_equal<std::__1::pair<const long long, TSP::WrittenObjectInfo>, std::__1::equal_to<const long long>, true> > { 
                float __first_; 
            } __p3_; 
        } __table_; 
    TSPArchiverManager *_archiverManager;
    BOOL _captureSnapshots;
    NSObject<OS_dispatch_group> *_completionGroup;
    } _componentPropertiesSnapshot;
    NSObject<OS_dispatch_queue> *_componentQueue;
    TSPObjectContext *_context;
    NSMutableArray *_dataFinalizeHandlers;
    BOOL _didWriteMetadata;
    BOOL _didWriteObjectContainer;
    BOOL _didWriteRootObject;
    TSPComponentExternalReferenceMap *_externalLazyReferencesMap;
    NSObject<OS_dispatch_queue> *_externalLazyReferencesQueue;
    NSMutableArray *_externalReferenceBlocks;
    NSObject<OS_dispatch_queue> *_externalReferenceQueue;
    NSObject<OS_dispatch_queue> *_metadataQueue;
    NSHashTable *_modifiedObjectsDuringWrite;
    NSObject<OS_dispatch_queue> *_modifyObjectQueue;
    TSPObjectContainer *_objectContainer;
    NSObject<OS_dispatch_queue> *_objectsQueue;
    unsigned char _packageIdentifier;
    TSUPathSet *_packageLocatorPathSet;
    TSPPackageMetadata *_packageMetadata;
    unsigned long long _readVersion;
    NSHashTable *_referencedDatas;
    } _remainingComponentsQueue;
    } _skippedComponents;
    BOOL _writeSuccess;
    NSURL *_writeURL;
    unsigned long long _writeVersion;
    } _writtenComponents;
    } _writtenLazyReferences;
    } _writtenObjects;
}

@property(readonly) unsigned char packageIdentifier;
@property(readonly) TSPPackageMetadata * packageMetadata;
@property(readonly) NSURL * writeURL;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addDataFinalizeHandlerForSuccessfulSave:(id)arg1;
- (void)addDelayedObject:(id)arg1 forComponentRootObject:(id)arg2 completion:(id)arg3;
- (void)archiveComponent:(id)arg1 locator:(id)arg2 storeOutsideObjectArchive:(BOOL)arg3 rootObject:(id)arg4 withPackageWriter:(id)arg5;
- (void)calculateExternalReferences;
- (id)componentForObjectIdentifier:(long long)arg1 objectOrNil:(id)arg2;
- (long long)componentIdentifierForObjectIdentifier:(long long)arg1 objectOrNil:(id)arg2;
- (BOOL)componentWriter:(id)arg1 canSkipArchivingStronglyReferencedObject:(id)arg2 fromComponentRootObject:(id)arg3;
- (void)componentWriter:(id)arg1 locatorForClaimingComponent:(id)arg2 queue:(id)arg3 completion:(id)arg4;
- (BOOL)componentWriter:(id)arg1 object:(id)arg2 belongsToLinkedComponent:(id)arg3;
- (void)componentWriter:(id)arg1 wantsComponentOfObject:(id)arg2 queue:(id)arg3 completion:(id)arg4;
- (id)componentWriter:(id)arg1 wantsExplicitComponentRootObjectForObject:(id)arg2 claimingComponent:(id)arg3;
- (void)componentWriterWantsDelayedObjects:(id)arg1 queue:(id)arg2 completion:(id)arg3;
- (void)copyComponent:(id)arg1 locator:(id)arg2 packageWriter:(id)arg3;
- (id)createPackageMetadataWritingDatasWithPackageWriter:(id)arg1 saveOperationState:(id)arg2;
- (void)didReferenceData:(id)arg1;
- (BOOL)didWriteComponent:(id)arg1 wasCopied:(BOOL*)arg2;
- (BOOL)didWriteData:(id)arg1;
- (BOOL)didWriteObject:(id)arg1 claimingComponent:(id*)arg2;
- (void)enqueueComponent:(id)arg1 rootObjectOrNil:(id)arg2 forceArchive:(BOOL)arg3;
- (void)enqueueRootObject:(id)arg1 forceArchive:(BOOL)arg2 completion:(id)arg3;
- (void)enqueueRootObjectImpl:(id)arg1 forceArchive:(BOOL)arg2 completion:(id)arg3;
- (void)enumerateWrittenObjectsWithBlock:(id)arg1;
- (id)explicitComponentRootObjectForObject:(id)arg1 claimingComponent:(id)arg2 isInComponentQueue:(BOOL)arg3;
- (id)init;
- (id)initWithContext:(id)arg1 packageIdentifier:(unsigned char)arg2;
- (BOOL)isComponentExternal:(id)arg1 wasWritten:(BOOL*)arg2 wasCopied:(BOOL*)arg3;
- (BOOL)isComponentPersisted:(id)arg1;
- (BOOL)isObjectInExternalPackage:(id)arg1 claimingComponent:(id*)arg2;
- (void)nextComponentAndRootObjectForComponentWriteWithCompletion:(id)arg1;
- (id)objectContainer;
- (id)objectContainerImpl;
- (id)objectForIdentifier:(long long)arg1;
- (unsigned char)packageIdentifier;
- (id)packageMetadata;
- (void)setExternalStrongReferences:(id)arg1 externalWeakReferences:(id)arg2 readVersion:(unsigned long long)arg3 writeVersion:(unsigned long long)arg4 dataReferences:(id)arg5 forComponent:(id)arg6;
- (BOOL)shouldArchiveComponent:(id)arg1 checkForceArchive:(BOOL)arg2;
- (BOOL)shouldArchiveComponent:(id)arg1;
- (BOOL)shouldEnqueueComponent:(id)arg1;
- (BOOL)shouldLinkComponentOfObject:(id)arg1;
- (void)stopCapturingSnapshots;
- (void)updateExternalReferencesForLinkedComponent:(id)arg1;
- (void)updateObjectContextForSuccessfulSave;
- (void)willModifyObject:(id)arg1 duringReadOperation:(BOOL)arg2;
- (void)writeComponent:(id)arg1 rootObjectOrNil:(id)arg2 forceArchive:(BOOL)arg3 withPackageWriter:(id)arg4;
- (void)writeExternalReferences:(id)arg1 andUpdateLazyReferences:(id)arg2 withPackageWriter:(id)arg3 forComponent:(id)arg4 locator:(id)arg5;
- (void)writeRemainingComponentsWithPackageWriter:(id)arg1 completionQueue:(id)arg2 completion:(id)arg3;
- (void)writeRootObject:(id)arg1 withPackageWriter:(id)arg2 saveOperationState:(id)arg3 completionQueue:(id)arg4 completion:(id)arg5;
- (BOOL)writeRootObject:(id)arg1 withPackageWriter:(id)arg2 saveOperationState:(id)arg3 error:(id*)arg4;
- (void)writeRootObjectAndRelatedComponents:(id)arg1 withPackageWriter:(id)arg2 completionQueue:(id)arg3 completion:(id)arg4;
- (id)writeURL;

@end