// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__test
#define R__NO_DEPRECATION

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "ROOT/RConfig.hxx"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Header files passed as explicit arguments
#include "TRandomTVDCClusterDataGenerator.h"
#include "TOtukaresamaProcessor.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_artcLcLTRandomTVDCClusterDataGenerator(void *p = nullptr);
   static void *newArray_artcLcLTRandomTVDCClusterDataGenerator(Long_t size, void *p);
   static void delete_artcLcLTRandomTVDCClusterDataGenerator(void *p);
   static void deleteArray_artcLcLTRandomTVDCClusterDataGenerator(void *p);
   static void destruct_artcLcLTRandomTVDCClusterDataGenerator(void *p);
   static void streamer_artcLcLTRandomTVDCClusterDataGenerator(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::TRandomTVDCClusterDataGenerator*)
   {
      ::art::TRandomTVDCClusterDataGenerator *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::art::TRandomTVDCClusterDataGenerator >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("art::TRandomTVDCClusterDataGenerator", ::art::TRandomTVDCClusterDataGenerator::Class_Version(), "TRandomTVDCClusterDataGenerator.h", 25,
                  typeid(::art::TRandomTVDCClusterDataGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::art::TRandomTVDCClusterDataGenerator::Dictionary, isa_proxy, 16,
                  sizeof(::art::TRandomTVDCClusterDataGenerator) );
      instance.SetNew(&new_artcLcLTRandomTVDCClusterDataGenerator);
      instance.SetNewArray(&newArray_artcLcLTRandomTVDCClusterDataGenerator);
      instance.SetDelete(&delete_artcLcLTRandomTVDCClusterDataGenerator);
      instance.SetDeleteArray(&deleteArray_artcLcLTRandomTVDCClusterDataGenerator);
      instance.SetDestructor(&destruct_artcLcLTRandomTVDCClusterDataGenerator);
      instance.SetStreamerFunc(&streamer_artcLcLTRandomTVDCClusterDataGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::TRandomTVDCClusterDataGenerator*)
   {
      return GenerateInitInstanceLocal(static_cast<::art::TRandomTVDCClusterDataGenerator*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::art::TRandomTVDCClusterDataGenerator*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_artcLcLTOtukaresamaProcessor(void *p = nullptr);
   static void *newArray_artcLcLTOtukaresamaProcessor(Long_t size, void *p);
   static void delete_artcLcLTOtukaresamaProcessor(void *p);
   static void deleteArray_artcLcLTOtukaresamaProcessor(void *p);
   static void destruct_artcLcLTOtukaresamaProcessor(void *p);
   static void streamer_artcLcLTOtukaresamaProcessor(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::art::TOtukaresamaProcessor*)
   {
      ::art::TOtukaresamaProcessor *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::art::TOtukaresamaProcessor >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("art::TOtukaresamaProcessor", ::art::TOtukaresamaProcessor::Class_Version(), "TOtukaresamaProcessor.h", 21,
                  typeid(::art::TOtukaresamaProcessor), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::art::TOtukaresamaProcessor::Dictionary, isa_proxy, 16,
                  sizeof(::art::TOtukaresamaProcessor) );
      instance.SetNew(&new_artcLcLTOtukaresamaProcessor);
      instance.SetNewArray(&newArray_artcLcLTOtukaresamaProcessor);
      instance.SetDelete(&delete_artcLcLTOtukaresamaProcessor);
      instance.SetDeleteArray(&deleteArray_artcLcLTOtukaresamaProcessor);
      instance.SetDestructor(&destruct_artcLcLTOtukaresamaProcessor);
      instance.SetStreamerFunc(&streamer_artcLcLTOtukaresamaProcessor);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::art::TOtukaresamaProcessor*)
   {
      return GenerateInitInstanceLocal(static_cast<::art::TOtukaresamaProcessor*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::art::TOtukaresamaProcessor*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace art {
//______________________________________________________________________________
atomic_TClass_ptr TRandomTVDCClusterDataGenerator::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TRandomTVDCClusterDataGenerator::Class_Name()
{
   return "art::TRandomTVDCClusterDataGenerator";
}

//______________________________________________________________________________
const char *TRandomTVDCClusterDataGenerator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::art::TRandomTVDCClusterDataGenerator*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TRandomTVDCClusterDataGenerator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::art::TRandomTVDCClusterDataGenerator*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TRandomTVDCClusterDataGenerator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::art::TRandomTVDCClusterDataGenerator*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TRandomTVDCClusterDataGenerator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::art::TRandomTVDCClusterDataGenerator*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace art
namespace art {
//______________________________________________________________________________
atomic_TClass_ptr TOtukaresamaProcessor::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TOtukaresamaProcessor::Class_Name()
{
   return "art::TOtukaresamaProcessor";
}

//______________________________________________________________________________
const char *TOtukaresamaProcessor::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::art::TOtukaresamaProcessor*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TOtukaresamaProcessor::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::art::TOtukaresamaProcessor*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TOtukaresamaProcessor::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::art::TOtukaresamaProcessor*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TOtukaresamaProcessor::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::art::TOtukaresamaProcessor*)nullptr)->GetClass(); }
   return fgIsA;
}

} // namespace art
namespace art {
//______________________________________________________________________________
void TRandomTVDCClusterDataGenerator::Streamer(TBuffer &R__b)
{
   // Stream an object of class art::TRandomTVDCClusterDataGenerator.

   //This works around a msvc bug and should be harmless on other platforms
   typedef ::art::TRandomTVDCClusterDataGenerator thisClass;
   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      //This works around a msvc bug and should be harmless on other platforms
      typedef art::TProcessor baseClass0;
      baseClass0::Streamer(R__b);
      fOutputName.Streamer(R__b);
      R__b >> fMode;
      R__b >> fMultiHit;
      R__b >> fMaxID;
      R__b.CheckByteCount(R__s, R__c, thisClass::IsA());
   } else {
      R__c = R__b.WriteVersion(thisClass::IsA(), kTRUE);
      //This works around a msvc bug and should be harmless on other platforms
      typedef art::TProcessor baseClass0;
      baseClass0::Streamer(R__b);
      fOutputName.Streamer(R__b);
      R__b << fMode;
      R__b << fMultiHit;
      R__b << fMaxID;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

} // namespace art
namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLTRandomTVDCClusterDataGenerator(void *p) {
      return  p ? new(p) ::art::TRandomTVDCClusterDataGenerator : new ::art::TRandomTVDCClusterDataGenerator;
   }
   static void *newArray_artcLcLTRandomTVDCClusterDataGenerator(Long_t nElements, void *p) {
      return p ? new(p) ::art::TRandomTVDCClusterDataGenerator[nElements] : new ::art::TRandomTVDCClusterDataGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLTRandomTVDCClusterDataGenerator(void *p) {
      delete (static_cast<::art::TRandomTVDCClusterDataGenerator*>(p));
   }
   static void deleteArray_artcLcLTRandomTVDCClusterDataGenerator(void *p) {
      delete [] (static_cast<::art::TRandomTVDCClusterDataGenerator*>(p));
   }
   static void destruct_artcLcLTRandomTVDCClusterDataGenerator(void *p) {
      typedef ::art::TRandomTVDCClusterDataGenerator current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_artcLcLTRandomTVDCClusterDataGenerator(TBuffer &buf, void *obj) {
      ((::art::TRandomTVDCClusterDataGenerator*)obj)->::art::TRandomTVDCClusterDataGenerator::Streamer(buf);
   }
} // end of namespace ROOT for class ::art::TRandomTVDCClusterDataGenerator

namespace art {
//______________________________________________________________________________
void TOtukaresamaProcessor::Streamer(TBuffer &R__b)
{
   // Stream an object of class art::TOtukaresamaProcessor.

   //This works around a msvc bug and should be harmless on other platforms
   typedef ::art::TOtukaresamaProcessor thisClass;
   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      //This works around a msvc bug and should be harmless on other platforms
      typedef art::TProcessor baseClass0;
      baseClass0::Streamer(R__b);
      fOutputName.Streamer(R__b);
      R__b >> fNum;
      R__b >> fScale;
      R__b.CheckByteCount(R__s, R__c, thisClass::IsA());
   } else {
      R__c = R__b.WriteVersion(thisClass::IsA(), kTRUE);
      //This works around a msvc bug and should be harmless on other platforms
      typedef art::TProcessor baseClass0;
      baseClass0::Streamer(R__b);
      fOutputName.Streamer(R__b);
      R__b << fNum;
      R__b << fScale;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

} // namespace art
namespace ROOT {
   // Wrappers around operator new
   static void *new_artcLcLTOtukaresamaProcessor(void *p) {
      return  p ? new(p) ::art::TOtukaresamaProcessor : new ::art::TOtukaresamaProcessor;
   }
   static void *newArray_artcLcLTOtukaresamaProcessor(Long_t nElements, void *p) {
      return p ? new(p) ::art::TOtukaresamaProcessor[nElements] : new ::art::TOtukaresamaProcessor[nElements];
   }
   // Wrapper around operator delete
   static void delete_artcLcLTOtukaresamaProcessor(void *p) {
      delete (static_cast<::art::TOtukaresamaProcessor*>(p));
   }
   static void deleteArray_artcLcLTOtukaresamaProcessor(void *p) {
      delete [] (static_cast<::art::TOtukaresamaProcessor*>(p));
   }
   static void destruct_artcLcLTOtukaresamaProcessor(void *p) {
      typedef ::art::TOtukaresamaProcessor current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_artcLcLTOtukaresamaProcessor(TBuffer &buf, void *obj) {
      ((::art::TOtukaresamaProcessor*)obj)->::art::TOtukaresamaProcessor::Streamer(buf);
   }
} // end of namespace ROOT for class ::art::TOtukaresamaProcessor

namespace {
  void TriggerDictionaryInitialization_libtest_Impl() {
    static const char* headers[] = {
"TRandomTVDCClusterDataGenerator.h",
"TOtukaresamaProcessor.h",
nullptr
    };
    static const char* includePaths[] = {
"/home/fumintu/work/install/root_install/include",
"/home/fumintu/work/github/artemis-ota-gr/src-test",
"/home/fumintu/work/install/root_install/include",
"/home/fumintu/work/github/artemis-ota-gr/src-test",
"/home/fumintu/work/install/artemis_install/include/.",
"/home/fumintu/work/install/artemis_install/include",
"/usr/include",
"/home/fumintu/work/install/root_install/include/",
"/home/fumintu/work/github/artemis-ota-gr/build/src-test/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libtest dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
namespace art{class __attribute__((annotate("$clingAutoload$TRandomTVDCClusterDataGenerator.h")))  TRandomTVDCClusterDataGenerator;}
namespace art{class __attribute__((annotate("$clingAutoload$TOtukaresamaProcessor.h")))  TOtukaresamaProcessor;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libtest dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "TRandomTVDCClusterDataGenerator.h"
#include "TOtukaresamaProcessor.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"art::TOtukaresamaProcessor", payloadCode, "@",
"art::TRandomTVDCClusterDataGenerator", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libtest",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libtest_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libtest_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libtest() {
  TriggerDictionaryInitialization_libtest_Impl();
}
