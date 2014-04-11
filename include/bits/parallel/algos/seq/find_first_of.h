#ifndef _EXPERIMENTAL_N3554_POLICY_SEQUENTIAL
#error Include <parallel/algorithm> or <parallel/utility>
#endif

#include <algorithm>

namespace std {
namespace parallel {
namespace policy {

  template<class InputIterator, class ForwardIterator>
    InputIterator
      seq::find_first_of(InputIterator first1, InputIterator last1,
                         ForwardIterator first2, ForwardIterator last2){
    return std::find_first_of(first1, last1, first2, last2);
  }


  template<class InputIterator, class ForwardIterator,
           class BinaryPredicate>
    InputIterator
      seq::find_first_of(InputIterator first1, InputIterator last1,
                         ForwardIterator first2, ForwardIterator last2,
                         BinaryPredicate pred){
    return std::find_first_of(first1, last1, first2, last2, pred);
  }

} // namespace policy
} // namespace parallel
} // namespace std