//
// Created by christian on 04.12.19.
//

#include "Interact.h"
#include "Actor.h"

void Interact::write_out(std::ostream &out) const {
    out << "Interacting...";
}

void Interact::execute(TickContext &ctx, Actor *executor) {
    std::cout << executor->name << " reaching " << direction << std::endl;
}

Interact::Interact(Direction direction) : Action(direction) {

}
