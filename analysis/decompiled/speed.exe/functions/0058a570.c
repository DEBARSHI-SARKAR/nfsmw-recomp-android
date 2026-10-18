/* speed.exe 0058a570 FUN_0058a570; analysis pseudocode, not buildable source.
 * calls 005768a0 FUN_005768a0
 * calls 00576670 FUN_00576670
 */

byte FUN_0058a570(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  
  bVar1 = *(byte *)(param_3 + 5);
  uVar3 = FUN_005768a0(param_2,param_3,bVar1 >> 5,param_4);
  bVar2 = FUN_00576670(param_1,uVar3);
  return bVar2 | bVar1 >> 5 == 0 | DAT_00926124;
}

