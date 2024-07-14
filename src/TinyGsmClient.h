/**
 * @file       TinyGsmClient.h
 * @author     Volodymyr Shymanskyy
 * @license    LGPL-3.0
 * @copyright  Copyright (c) 2016 Volodymyr Shymanskyy
 * @date       Nov 2016
 */

#ifndef SRC_TINYGSMCLIENT_H_
#define SRC_TINYGSMCLIENT_H_

#if defined(TINY_GSM_MODEM_SIM800)
#include "TinyGsmClientSIM800.h"
typedef TinyGsmSim800                        TinyGsm;
typedef TinyGsmSim800::GsmClientSim800       TinyGsmClient;
typedef TinyGsmSim800::GsmClientSecureSim800 TinyGsmClientSecure;

#elif defined(TINY_GSM_MODEM_SIM808) || defined(TINY_GSM_MODEM_SIM868)
#include "TinyGsmClientSIM808.h"
typedef TinyGsmSim808                        TinyGsm;
typedef TinyGsmSim808::GsmClientSim800       TinyGsmClient;
typedef TinyGsmSim808::GsmClientSecureSim800 TinyGsmClientSecure;

#elif defined(TINY_GSM_MODEM_SIM900)
#include "TinyGsmClientSIM800.h"
typedef TinyGsmSim800                  TinyGsm;
typedef TinyGsmSim800::GsmClientSim800 TinyGsmClient;


#elif defined(TINY_GSM_MODEM_MC60) || defined(TINY_GSM_MODEM_MC60E)
#include "TinyGsmClientMC60.h"
typedef TinyGsmMC60                TinyGsm;
typedef TinyGsmMC60::GsmClientMC60 TinyGsmClient;

#else
#error "Please define GSM modem model"
#endif

#endif  // SRC_TINYGSMCLIENT_H_
