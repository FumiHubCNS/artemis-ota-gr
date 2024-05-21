/* $Id:$ */
/**
 * @file   TRandomTVDCClusterDataGenerator.cc
 * @date   Created : May 21, 2024 21:28:52 JST
 * @author Fumitaka ENDO <fendo@cns.s.u-tokyo.ac.jp>
 *  
 *  
 *    Copyright (C)2024
 */
#include "TRandomTVDCClusterDataGenerator.h"
#include "TVDCCluster.h"
#include <TRandom.h>
#include <vector>

ClassImp(art::TRandomTVDCClusterDataGenerator);

TRandomTVDCClusterDataGenerator::TRandomTVDCClusterDataGenerator()
   :fOutputName("output"),fOutput(NULL),fMode(0),fMultiHit(0),fMaxID(0)
{
    RegisterOutputCollection("OutputCollection","output collection",fOutputName,"output", &fOutput, TClonesArray::Class_Name(),art::TVDCCluster::Class_Name());
    RegisterProcessorParameter("Mode","select mode. 0 -> random, 1 -> integers (default: 0)",fMode,0);
    RegisterProcessorParameter("MultiHit","select multi hit 0 -> False, 1 -> True (default: 0)",fMultiHit,0);
    RegisterProcessorParameter("MaxID","set maximum wire id (default: 25)",fMaxID,25);
}

art::TRandomTVDCClusterDataGenerator::~TRandomTVDCClusterDataGenerator()
{
    delete fOutput;

}

TRandomTVDCClusterDataGenerator::TRandomTVDCClusterDataGenerator(const TRandomTVDCClusterDataGenerator& rhs)
{
}

TRandomTVDCClusterDataGenerator& TRandomTVDCClusterDataGenerator::operator=(const TRandomTVDCClusterDataGenerator& rhs)
{
   if (this != &rhs) {

   }
   return *this;
}

void TRandomTVDCClusterDataGenerator::Init(TEventCollection *col)
{
}

void TRandomTVDCClusterDataGenerator::Process()
{
   TVDCCluster *out = static_cast<TVDCCluster*>(fOutput->ConstructedAt(0));
   out->Init2(3);

   std::vector<double> vals_vec;

   for(int i=0;i<6;i++){
      if( fMode == 0 ){
         vals_vec.push_back(gRandom->Uniform(0,1));

      }else if( fMode == 1 ){
         vals_vec.push_back(i);

      }else{
         vals_vec.push_back(0.);
      }
   
   }

   out->SetHitPos(vals_vec.at(0)); //double
   out->SetClustID(vals_vec.at(1)); //double
   out->SetClustnum(vals_vec.at(2)); //double
   out->SetClustnum2(vals_vec.at(3)); //double
   out->SetClustSize(vals_vec.at(4)); //double
   out->SetHitAngle(vals_vec.at(5)); //double

   std::vector<int> vals_id;
   std::vector<double> vals_dl;
   std::vector<double> vals_timing;
   std::vector<double> vals_lr;

   int dum = 3;

   int center_id = int((gRandom->Uniform(1,fMaxID-2)));

   vals_id.push_back( center_id - 1 );
   vals_id.push_back( center_id     );
   vals_id.push_back( center_id + 1 );

   for(int i=0;i<3;i++){

      if( fMode == 0 ){
         vals_dl.push_back(gRandom->Uniform(0,1));
         vals_timing.push_back(gRandom->Uniform(0,1));
         vals_lr.push_back(gRandom->Uniform(0,1));

      }else if( fMode == 1 ){
         vals_dl.push_back(dum);
         dum += 1;
         vals_timing.push_back(dum);
         dum += 1;
         vals_lr.push_back(dum);
         dum += 1;

      }else{
         vals_dl.push_back(0);
         vals_timing.push_back(0);
         vals_lr.push_back(0);

      }
   
   }

   for(int i=0;i<3;i++){
      out->SetHitID(i,vals_id.at(i)); //vector<int>
      out->SetHitDL(i,vals_dl.at(i)); //vector<double>
      out->SetHitTiming(i,vals_timing.at(i)); //vector<double>
      out->SetHitLR(i,vals_lr.at(i)); //vector<double>
   }


}
