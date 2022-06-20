#include "object.h"

class BString : public Object {
 public:
  BString(string &str) : Object(), content(str) {}
  ~BString() {}

 public:
  virtual bool encoding(std::string &str) {
    std::size_t len = content.size();
    str.reserve(16 + len);
    str.append(std::to_string(len));
    str.append(":");
    str.append(content);
    return true;
  }
  // 区间左开右闭
  virtual bool decoding(const std::string &str, std::size_t start_pos,
                        std::size_t end_pos) override {
    if (end_pos >= start_pos) {
      return false;
    }
    
    return true;
  }

 private:
  string content;
};

// class BDict : public Object {};

// class BInt : public Object {};

// class BList : public Object {};