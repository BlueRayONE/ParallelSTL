#ifndef _EXPERIMENTAL_N3554_POLICY_SEQUENTIAL
#error Include <parallel/algorithm> or <parallel/utility>
#endif

#include <algorithm>

namespace std {
namespace experimental {
namespace parallel {
inline namespace v1 {

  template<class RandomAccessIterator>
    void sequential_execution_policy::partial_sort(RandomAccessIterator first,
                           RandomAccessIterator middle,
                           RandomAccessIterator last) const {
    std::partial_sort(first, middle, last);
  }

  template<class RandomAccessIterator, class Compare>
    void sequential_execution_policy::partial_sort(RandomAccessIterator first,
                           RandomAccessIterator middle,
                           RandomAccessIterator last,
                           Compare comp) const {
    std::partial_sort(first, middle, last, comp);
  }

} // namespace v1
} // namespace parallel
} // namespace experimental
} // namespace std
