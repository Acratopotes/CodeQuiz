#pragma once

#include <string>
#include "derivable.h"

namespace Function {

  class X : public Derivable {
  public:
    X(std::string const&);
    virtual ~X() = default;

    double eval(double) const override;
    std::string derive() const override;
    std::string print() const override;
    std::string print_debug() const override;
  };
  //typedef std::unique_ptr<(.+)> .+_ptr;
typedef X* X_ptr;
}