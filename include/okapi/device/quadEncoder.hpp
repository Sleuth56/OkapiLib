/* This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/. */
#ifndef _OKAPI_QUADENCODER_HPP_
#define _OKAPI_QUADENCODER_HPP_

#include "okapi/device/rotarySensor.hpp"

namespace okapi {
class QuadEncoder : public RotarySensor {
  public:
  QuadEncoder(const uint8_t iportTop, const uint8_t iportBottom, const bool ireversed = false);

  /**
   * Get the current sensor value.
   *
   * @return current value, PROS_ERR on fail
   */
  int32_t get() const override;

  /**
   * Reset the sensor to zero.
   *
   * @return 1 on suceess, PROS_ERR on fail
   */
  int32_t reset() const override;

  private:
  pros::ADIEncoder enc;
};
} // namespace okapi

#endif
