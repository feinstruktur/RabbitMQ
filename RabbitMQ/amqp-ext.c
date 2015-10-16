//
//  amqp-ext.c
//  HastyHare
//
//  Created by Sven A. Schmidt on 28/09/2015.
//  Copyright © 2015 feinstruktur. All rights reserved.
//

#include "amqp-ext.h"

amqp_rpc_reply_t amqp_login_with_credentials(amqp_connection_state_t state, char const *vhost,
                                             int channel_max, int frame_max, int heartbeat,
                                             amqp_sasl_method_enum sasl_method, const char * user, const char * password) {
    return amqp_login(state, vhost, channel_max, frame_max, heartbeat, sasl_method, user, password);
}


amqp_method_t payload_method(amqp_frame_t *frame) {
    return frame->payload.method;
}


amqp_basic_deliver_t *method_decoded(amqp_frame_t * frame) {
    return frame->payload.method.decoded;
}
