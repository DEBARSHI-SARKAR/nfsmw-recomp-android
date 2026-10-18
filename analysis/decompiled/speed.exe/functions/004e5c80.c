/* speed.exe 004e5c80 FUN_004e5c80; analysis pseudocode, not buildable source.
 * calls 005dca00 FUN_005dca00
 */

void FUN_004e5c80(void)

{
  uint uVar1;
  int iVar2;
  
  DAT_009142e7 = 0;
  uVar1 = *(uint *)(DAT_0091cf90 + 300);
  if (DAT_0091e000 == 0) {
    iVar2 = FUN_005dca00();
  }
  else {
    iVar2 = *(int *)(DAT_0091e000 + 0x1968);
  }
  if (iVar2 == 0) {
    DAT_00911ed4 = DAT_00911ed4 + 4;
    return;
  }
  iVar2 = (uint)((uVar1 >> 2 & 1) == 0) + DAT_0092cfc4 + DAT_0092ce44;
  if (4 < iVar2) {
    DAT_00911ed4 = DAT_00911ed4 + 4;
    return;
  }
  if (iVar2 < 3) {
    DAT_00911ed8 = DAT_00911ed8 + 1;
    DAT_009142e7 = 1;
  }
  DAT_00911ed4 = DAT_00911ed4 + iVar2;
  return;
}

