/* speed.exe 005765a0 FUN_005765a0; analysis pseudocode, not buildable source.
 * calls 005dca70 FUN_005dca70
 * calls 004519d0 FUN_004519d0
 */

byte FUN_005765a0(undefined4 param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  
  bVar1 = DAT_00926124;
  bVar2 = FUN_005dca70(param_2,4);
  iVar4 = FUN_004519d0("19.8.31");
  bVar3 = 1;
  if (param_2 != iVar4) {
    bVar3 = bVar1 | bVar2;
  }
  return bVar3;
}

