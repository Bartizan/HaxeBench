﻿package hxcpp;

import hxcpp.ScreenPressor;

@:buildXml("
<linker id='exe' exe='emcc'>
    <flag value='--bind' />
    <flag value='-s' />
    <flag value='TOTAL_MEMORY=33554432' />
	<flag value='-s' />
	<flag value='WASM=1' />
</linker>
")
@:cppFileCode('
#include "screencap.h"
#include <emscripten/bind.h>
using namespace emscripten;

EMSCRIPTEN_BINDINGS(my_module) {

  class_<ScreenPressor>("ScreenPressor")
          .constructor<int, int>()
          .function("DecompressFrame", &ScreenPressor::DecompressI)
          ;

}
')
class Main
{
	static inline var X = 960;
	static inline var Y = 540;
	static var SP:ScreenPressor;

	static function main()
	{
		SP = new ScreenPressor(X,Y);
		trace('hello');
	}

}