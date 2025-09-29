// PacMan.h

#pragma once

#include "Entity.h"

#include <cstdint>

class PacMan final : public IEntity<PacMan> {
public:
  explicit inline PacMan(const std::uint8_t health) noexcept
      : IEntity<PacMan>(health) {}
};
