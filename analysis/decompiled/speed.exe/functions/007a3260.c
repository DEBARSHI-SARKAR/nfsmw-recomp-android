/* speed.exe 007a3260 FUN_007a3260; analysis pseudocode, not buildable source.
 * calls 00588280 FUN_00588280
 */

void FUN_007a3260(void)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = *(uint *)(DAT_0091cf90 + 300) >> 3;
  if (((uVar1 & 1) != 0) || ((*(uint *)(DAT_0091cf90 + 300) >> 6 & 1) != 0)) {
    iVar3 = -(uint)(*(int *)(DAT_0091cf90 + 0x168) != 1);
    iVar4 = iVar3 + 6;
    if (*(char *)(DAT_0091cf90 + 0x141) == '\0') {
      if ((uVar1 & 1) != 0) {
        iVar4 = iVar3 + 8;
      }
      iVar3 = 2;
      if (1 < iVar4) {
        do {
          piVar2 = (int *)FUN_00588280(iVar3);
          if (piVar2 != (int *)0x0) {
            (**(code **)(*piVar2 + 0x1c))();
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 <= iVar4);
      }
    }
    else {
      *(undefined1 *)(DAT_0091cf90 + 0x191) = 0;
      *(undefined1 *)(DAT_0091cf90 + 0x142) = 1;
      *(undefined1 *)(DAT_0091cf90 + 0x143) = 1;
      *(undefined1 *)(DAT_0091cf90 + 0x15f) = 1;
      if (*(int *)(DAT_0091cf90 + 0x168) == 1) {
        *(undefined1 *)(DAT_0091cf90 + 400) = 3;
      }
      iVar3 = 2;
      *(undefined1 *)(DAT_0091cf90 + 0x138) = 2;
      if (1 < iVar4) {
        do {
          piVar2 = (int *)FUN_00588280(iVar3);
          if (piVar2 != (int *)0x0) {
            (**(code **)(*piVar2 + 0xc))();
            (**(code **)(*piVar2 + 0x20))();
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 <= iVar4);
        return;
      }
    }
  }
  return;
}

