#include <cxxtest/ErrorPrinter.h>
#include <io/humble/ferry/JNIHelper.h>
#include <io/humble/video/Global.h>

int main() {
 int retval = CxxTest::ErrorPrinter().run();
 // This method is used to clean up static memory
 // to that Valgrind doesn't think I'm a sloppy leaker.
 io::humble::ferry::JNIHelper::shutdownHelper();
 io::humble::video::Global::deinit();
 return retval;
}
