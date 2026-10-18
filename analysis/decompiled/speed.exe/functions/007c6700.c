/* speed.exe 007c6700 __malloc_dbg; analysis pseudocode, not buildable source.
 * calls 007c6750 FUN_007c6750
 */

/* Library Function - Single Match
    __malloc_dbg
   
   Library: Visual Studio */

undefined4 __thiscall
__malloc_dbg(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  
  uVar1 = FUN_007c6750(param_2,DAT_009bad8c,param_3,param_4,param_5,param_1);
  return uVar1;
}

