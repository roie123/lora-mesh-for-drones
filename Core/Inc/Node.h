//
// Created by royivri on 11/8/25.
//

#ifndef NODE_H
#define NODE_H
#include <stdint.h>
#include "../LoRa.h"

typedef struct  {
    uint8_t id;
    uint8_t type;
    uint8_t signal_strength;


} Node;

uint8_t connect_to_node_by_id(uint8_t node_id, uint8_t node_type);
uint8_t connect_to_mesh(LoRa lora, uint8_t msg_id, uint8_t);


#endif //NODE_H
