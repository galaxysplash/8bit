// Entity.h

#pragma once

#include <cstdint>

template <typename Derived> class IEntity {
public:
  explicit inline IEntity<Derived>(const std::uint8_t health) noexcept
      : health_(health) {}

  auto inline get_health() noexcept -> std::uint8_t { return health_; }

  auto inline take_damage(const std::uint8_t amount) noexcept -> void {
    health_ = amount < health_ ? health_ - amount : 0;
  }

  auto update() noexcept -> void { impl().update_impl(); }

private:
  auto impl() noexcept -> Derived & { return static_cast<Derived &>(this); }
  std::uint8_t health_;
};
