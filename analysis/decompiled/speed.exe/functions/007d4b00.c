/* speed.exe 007d4b00 __malloc_base; analysis pseudocode, not buildable source.
 * calls 007d4b20 __nh_malloc_base
 */

/* Library Function - Single Match
    __malloc_base
   
   Library: Visual Studio 2003 Debug */

undefined4 __thiscall __malloc_base(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = __nh_malloc_base(param_2,DAT_009bad8c,param_1);
  return uVar1;
}

