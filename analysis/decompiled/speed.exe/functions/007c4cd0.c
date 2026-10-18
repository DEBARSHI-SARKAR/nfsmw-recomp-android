/* speed.exe 007c4cd0 ___CxxFrameHandler; analysis pseudocode, not buildable source.
 * calls 007cf6f0 ___InternalCxxFrameHandler
 */

/* Library Function - Single Match
    ___CxxFrameHandler
   
   Libraries: Visual Studio 2003 Debug, Visual Studio 2003 Release */

undefined4
___CxxFrameHandler(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = ___InternalCxxFrameHandler(param_1,param_2,param_3,param_4);
  return uVar1;
}

