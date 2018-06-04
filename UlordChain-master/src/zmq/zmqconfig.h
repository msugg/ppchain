// Copyright (c) 2017-2018 The Popchain Core Developers

#ifndef ULORD_ZMQ_ZMQCONFIG_H
#define ULORD_ZMQ_ZMQCONFIG_H

#if defined(HAVE_CONFIG_H)
#include "config/ulord-config.h"
#endif

#include <stdarg.h>
#include <string>

#if ENABLE_ZMQ
#include <zmq.h>
#endif

#include "primitives/block.h"
#include "primitives/transaction.h"

void zmqError(const char *str);

#endif // ULORD_ZMQ_ZMQCONFIG_H
