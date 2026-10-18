/* speed.exe 007d897b __ctrandisp2; analysis pseudocode, not buildable source.
 * calls 007d89c3 FUN_007d89c3
 * calls 007ce1f7 __trandisp2
 * calls 007d8b44 __fload
 */

/* Library Function - Single Match
    __ctrandisp2
   
   Libraries: Visual Studio 1998, Visual Studio 2003, Visual Studio 2005, Visual Studio 2008 */

void __ctrandisp2(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  __fload(param_1,param_2);
  __fload(param_3,param_4);
  __trandisp2();
  FUN_007d89c3();
  return;
}

