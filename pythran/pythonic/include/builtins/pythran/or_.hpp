#ifndef PYTHONIC_INCLUDE_BUILTIN_PYTHRAN_OR_HPP
#define PYTHONIC_INCLUDE_BUILTIN_PYTHRAN_OR_HPP

#include "pythonic/include/utils/functor.hpp"
#include "pythonic/include/types/combined.hpp"
#include "pythonic/include/types/lazy.hpp"

PYTHONIC_NS_BEGIN

namespace builtins
{

  namespace pythran
  {

    template <class T0, class T1>
    types::lazy_combined_t<T0, T1> or_(T0 &&, T1 &&);

    DEFINE_FUNCTOR(pythonic::builtins::pythran, or_);
  }
}
PYTHONIC_NS_END

#endif
