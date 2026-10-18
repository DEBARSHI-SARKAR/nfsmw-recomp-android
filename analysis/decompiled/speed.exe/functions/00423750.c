/* speed.exe 00423750 FUN_00423750; analysis pseudocode, not buildable source.
 * calls 0041bc70 FUN_0041bc70
 */

void FUN_00423750(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (DAT_0090d668 <= DAT_0090d66c) {
    uVar2 = (**(code **)(DAT_0090d660 + 0xc))(DAT_0090d66c + 1);
    FUN_0041bc70(uVar2);
  }
  puVar1 = (undefined4 *)(DAT_0090d664 + DAT_0090d66c * 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    DAT_0090d66c = DAT_0090d66c + 1;
    return;
  }
  DAT_0090d66c = DAT_0090d66c + 1;
  return;
}

