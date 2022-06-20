// abstract base class for bencoding
#include <string>
using std::string;
class Object {
 public:
  Object() = default;
  ~Object(){}

 public:
  virtual bool encoding(std::string &str) = 0;
  // 区间左开右闭
  virtual bool decoding(const std::string &str, std::size_t start_pos,
                        std::size_t end_pos) = 0;
  virtual bool set_content(const void *input) { return true; }
  virtual void *get_content() { return nullptr; }
};