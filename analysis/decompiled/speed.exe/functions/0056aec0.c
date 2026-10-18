/* speed.exe 0056aec0 FUN_0056aec0; analysis pseudocode, not buildable source.
 * calls 005dca00 FUN_005dca00
 */

uint FUN_0056aec0(int param_1)

{
  int iVar1;
  uint in_EAX;
  uint uVar2;
  
  if (DAT_0091e004 != 0) {
    in_EAX = FUN_005dca00();
    if (in_EAX == 0) {
      uVar2 = 1;
      goto LAB_0056aed9;
    }
  }
  uVar2 = in_EAX & 0xffffff00;
LAB_0056aed9:
  if (((((*(byte *)(DAT_0091cf90 + 300) & 1) != 0) && ((char)uVar2 != '\0')) && (param_1 == 1)) &&
     (((iVar1 = *(int *)(DAT_0091cf90 + 0x10), iVar1 != -0xa8 &&
       (uVar2 = *(uint *)(iVar1 + 0xac), (uVar2 >> 5 & 1) != 0)) && ((uVar2 >> 0x13 & 1) == 0)))) {
    *(uint *)(iVar1 + 0xac) = uVar2 | 0x80000;
    return CONCAT31((int3)((uVar2 | 0x80000) >> 8),1);
  }
  return uVar2 & 0xffffff00;
}

