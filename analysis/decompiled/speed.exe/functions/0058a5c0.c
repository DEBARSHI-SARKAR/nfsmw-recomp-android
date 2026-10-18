/* speed.exe 0058a5c0 FUN_0058a5c0; analysis pseudocode, not buildable source.
 * calls 005769c0 FUN_005769c0
 * calls 00576670 FUN_00576670
 */

byte FUN_0058a5c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_005769c0(param_2,param_3,param_4);
  bVar1 = FUN_00576670(param_1,uVar2);
  return bVar1 | DAT_00926124;
}

