#ifndef _EXPERIMENTAL_N3554_POLICY_SEQUENTIAL
#error Include <parallel/algorithm> or <parallel/utility>
#endif

#include <algorithm>

namespace std {
namespace experimental {
namespace parallel {

  template<class InputIterator, class OutputIterator>
    OutputIterator
      sequential_execution_policy::move(InputIterator first, InputIterator last,
                OutputIterator result) const {
    return std::move(first, last, result);
  }

} // namespace parallel
} // namespace experimental
} // namespace std
