//
// Created by christian on 04.12.19.
//

#include "Interact.h"

void Interact::write_out(std::ostream &out) const {
    out << "Interacting...";
}

void Interact::execute(const TickContext &ctx, Actor *executor) {

}

Interact::Interact(Direction direction) : Action(direction) {

}