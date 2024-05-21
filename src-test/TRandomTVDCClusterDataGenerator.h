/**
 * @file   TRandomTVDCClusterDataGenerator.h
 * @date   Created : May 21, 2024 21:28:52 JST
 * @author Fumitaka ENDO <fendo@cns.s.u-tokyo.ac.jp>
 *  
 *  
 *    Copyright (C)2024
 */

#ifndef TRANDOMTVDCCLUSTERDATAGENERATOR_H
#define TRANDOMTVDCCLUSTERDATAGENERATOR_H

#include <TProcessor.h>
#include "TVDCCluster.h"
#include <TClonesArray.h>
#include <TString.h>

using namespace art;
namespace art {
   class TRandomTVDCClusterDataGenerator;
}
class TVDCCluster;
class TClonesArray;

class art::TRandomTVDCClusterDataGenerator : public TProcessor {
public:
   TRandomTVDCClusterDataGenerator();
   virtual ~TRandomTVDCClusterDataGenerator();

   TRandomTVDCClusterDataGenerator(const TRandomTVDCClusterDataGenerator& rhs);
   TRandomTVDCClusterDataGenerator& operator=(const TRandomTVDCClusterDataGenerator& rhs);

   void Init(TEventCollection *col);
   void Process();

protected:

   TString fOutputName; // name of output object name
   TClonesArray *fOutput; //! pointer to output
   int fMode; // mode selection flag;
   int fMultiHit; // mult hit selection flag
   int fMaxID; // maximum id

private:

   ClassDef(TRandomTVDCClusterDataGenerator,1) // update particle momentum using track information
};

#endif