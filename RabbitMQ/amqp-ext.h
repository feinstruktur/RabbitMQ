//
//  amqp-ext.h
//  HastyHare
//
//  Created by Sven A. Schmidt on 28/09/2015.
//  Copyright © 2015 feinstruktur. All rights reserved.
//

#ifndef HastyHare_amqp_ext_h
#define HastyHare_amqp_ext_h

#include "amqp_tcp_socket.h"
#include "amqp.h"
#include "amqp_framing.h"

amqp_rpc_reply_t amqp_login_with_credentials(amqp_connection_state_t state, char const *vhost,
                                             int channel_max, int frame_max, int heartbeat,
                                             amqp_sasl_method_enum sasl_method, const char * user, const char * password);

#endif /* HastyHare_amqp_ext_h */
