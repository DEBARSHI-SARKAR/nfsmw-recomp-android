/* speed.exe 006ff320 FUN_006ff320; analysis pseudocode, not buildable source.
 */

uint FUN_006ff320(uint param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (((DAT_00992230 != 0) && (uVar1 = 0, *(int *)(DAT_00992230 + 0x88) != 0)) &&
     (uVar1 = *(uint *)(*(int *)(DAT_00992230 + 0x88) + 8), uVar1 == param_1)) {
    return CONCAT31((int3)(uVar1 >> 8),1);
  }
  return uVar1 & 0xffffff00;
}

