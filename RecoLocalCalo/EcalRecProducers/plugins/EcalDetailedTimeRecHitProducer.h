#ifndef RecoLocalCalo_EcalRecProducers_EcalDetailedTimeRecHitProducer_HH
#define RecoLocalCalo_EcalRecProducers_EcalDetailedTimeRecHitProducer_HH
/** \class  EcalDetailedTimeRecHitProducer
 *   produce ECAL rechits associating them with improved ecalTimeDigis
 *
 *  $Id:  $
 *  $Date:  $
 *  $Revision: $
 *  \author Paolo Meridiani, INFN Roma
 *
 **/

#include "FWCore/Framework/interface/EDProducer.h"
#include "FWCore/ParameterSet/interface/ParameterSet.h"
#include "FWCore/Framework/interface/Event.h"
#include "FWCore/Framework/interface/EventSetup.h"

#include "RecoLocalCalo/EcalRecAlgos/interface/EcalRecHitAbsAlgo.h"

// forward declaration
class  EcalDetailedTimeRecHitProducer : public edm::EDProducer {

        public:
                explicit  EcalDetailedTimeRecHitProducer(const edm::ParameterSet& ps);
                ~ EcalDetailedTimeRecHitProducer();
                virtual void produce(edm::Event& evt, const edm::EventSetup& es);

        private:

                edm::InputTag EBRecHitCollection_; // secondary name given to collection of EBrechits
                edm::InputTag EERecHitCollection_; // secondary name given to collection of EErechits
                edm::InputTag ebTimeDigiCollection_; // secondary name given to collection of EB uncalib rechits
                edm::InputTag eeTimeDigiCollection_; // secondary name given to collection of EE uncalib rechits
                std::string EBDetailedTimeRecHitCollection_; // secondary name to be given to EB collection of hits
                std::string EEDetailedTimeRecHitCollection_; // secondary name to be given to EE collection of hits

};
#endif
