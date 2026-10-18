/* speed.exe 00837220 FUN_00837220; analysis pseudocode, not buildable source.
 */

undefined4 FUN_00837220(int param_1,ushort param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((param_1 != 0) && ((param_2 & *(ushort *)(param_1 + 10)) != 0)) {
    uVar1 = 1;
  }
  return uVar1;
}

