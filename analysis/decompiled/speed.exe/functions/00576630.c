/* speed.exe 00576630 FUN_00576630; analysis pseudocode, not buildable source.
 * calls 005dca70 FUN_005dca70
 */

byte FUN_00576630(undefined4 param_1,undefined4 param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  
  bVar1 = DAT_00926124;
  bVar2 = FUN_005dca70(param_2,4);
  bVar3 = FUN_005dca70(param_2,0x10);
  return bVar3 | bVar1 | bVar2;
}

