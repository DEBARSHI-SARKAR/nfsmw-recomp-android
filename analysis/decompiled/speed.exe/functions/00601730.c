/* speed.exe 00601730 FUN_00601730; analysis pseudocode, not buildable source.
 * calls 006010e0 FUN_006010e0
 * calls 005e3980 FUN_005e3980
 * calls 005e9de0 FUN_005e9de0
 */

void __thiscall FUN_00601730(ushort *param_1,undefined4 param_2)

{
  int iVar1;
  
  if (((~(byte)*param_1 & 1) == 0) && ((~((byte)*param_1 >> 1) & 1) == 0)) {
    *param_1 = *param_1 & 0xfffd | 4;
    *(undefined4 *)(param_1 + 8) = param_2;
    iVar1 = FUN_005e3980(param_1[1]);
    if (iVar1 != 0) {
      FUN_006010e0();
    }
    FUN_005e9de0();
  }
  return;
}

