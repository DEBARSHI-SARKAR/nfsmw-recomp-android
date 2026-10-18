/* speed.exe 004b0870 FUN_004b0870; analysis pseudocode, not buildable source.
 * calls 0045f340 FUN_0045f340
 * calls 004d9680 FUN_004d9680
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004b0870(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  
  iVar1 = DAT_00911f70;
  iVar3 = 0;
  iVar4 = 0;
  if (0 < *(int *)(DAT_00911f70 + 0x14)) {
    do {
      iVar2 = FUN_004d9680(iVar4);
      if (*(char *)(iVar2 + 0x38) != '\0') {
        iVar2 = *(int *)(iVar2 + 0x34);
        fVar5 = (float10)FUN_0045f340(&DAT_00914560,iVar2 + 0x40);
        if (fVar5 < (float10)_DAT_008969bc) {
          iVar3 = iVar2;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(iVar1 + 0x14));
  }
  return iVar3;
}

