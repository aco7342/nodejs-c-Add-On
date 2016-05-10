// hello.cc
//https://nodejs.org/api/addons.html
//https://github.com/nodejs/node-gyp#installation
//https://github.com/nwjs/nw.js/wiki/using-node-modules
//https://nodejs.org/docs/latest/api/addons.html
//https://nodejs.org/docs/latest/api/addons.html#addons_addon_examples
#include <node.h>

namespace demo {

using v8::FunctionCallbackInfo;
using v8::Isolate;
using v8::Local;
using v8::Object;
using v8::String;
using v8::Value;

void Method(const FunctionCallbackInfo<Value>& args) {
  Isolate* isolate = args.GetIsolate();
  args.GetReturnValue().Set(String::NewFromUtf8(isolate, "world"));
}

void init(Local<Object> exports) {
  NODE_SET_METHOD(exports, "hello", Method);
}

NODE_MODULE(addon, init)

}  // namespace demo