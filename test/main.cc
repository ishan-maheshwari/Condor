#include <stdio.h>
#include <Cobra.h>
#include <string>

using namespace Cobra;

// #include "tests/simple.h"
// void runTests1();

int main(int argc, const char* argv[]){
	SetCommandLineFlags(argc, argv);
	Context* context = Context::New();
	Isolate* isolate = Isolate::New();
	context->SetIsolate(isolate);

	isolate->Enter();
	Handle* handle = String::NewFromFile(isolate, "test/test.cb");
	Handle* script = Script::Compile(isolate, handle);
	script->Run();

	isolate->Exit();
	isolate->Dispose();
}

// void runFile(){
// 	std::ifstream in("test/test.cb");
// 	std::string fileStr((std::istreambuf_iterator<char>(in)), std::istreambuf_iterator<char>());
// 	Compile(&fileStr);
// }

// void runTests1(){
// 	for (int i = 0; i < goodSimpleSize; i++){
// 		Compile(&goodSimple[i]);
// 		printf("Test %d: Complete\n", i + 1);
// 	}
// }