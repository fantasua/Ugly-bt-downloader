// abstract base class for bencoding
#include <string>
using std::string;
class Object {
 public:
  Object();
  ~Object();

 public:
  virtual bool encoding(const Object &obj, std::string &str) = 0;
  virtual bool decoding(const std::string &str, Object &obj) = 0;
};