/* speed.exe 00580600 FUN_00580600; analysis pseudocode, not buildable source.
 * calls 00455fd0 FUN_00455fd0
 * calls 00452380 FUN_00452380
 */

undefined4 __thiscall
FUN_00580600(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00455fd0(0x27e73952,param_2,param_3,param_4);
  FUN_00452380(uVar1,param_3,param_4);
  return param_1;
}

