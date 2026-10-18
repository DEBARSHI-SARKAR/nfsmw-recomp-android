/* speed.exe 00576790 FUN_00576790; analysis pseudocode, not buildable source.
 * calls 005dca70 FUN_005dca70
 * calls 00576630 FUN_00576630
 * calls 005765a0 FUN_005765a0
 */

byte FUN_00576790(uint param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  
  if (DAT_00926124 != 0) {
    return 1;
  }
  bVar1 = 0;
  if ((param_1 & 1) != 0) {
    bVar1 = FUN_005765a0(param_1,param_2,param_3);
  }
  bVar3 = DAT_00926124;
  if ((param_1 & 2) != 0) {
    bVar2 = FUN_005dca70(param_2,8);
    bVar1 = bVar1 | bVar2 | bVar3;
  }
  if ((param_1 & 4) != 0) {
    bVar3 = FUN_00576630(param_1,param_2);
    bVar1 = bVar1 | bVar3;
  }
  return bVar1;
}

