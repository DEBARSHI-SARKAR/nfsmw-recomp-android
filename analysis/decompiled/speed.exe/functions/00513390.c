/* speed.exe 00513390 FUN_00513390; analysis pseudocode, not buildable source.
 * calls 00799fe0 FUN_00799fe0
 * calls 0079dec0 FUN_0079dec0
 * calls 0078bcc0 FUN_0078bcc0
 * calls 0079bac0 FUN_0079bac0
 * calls 00790920 FUN_00790920
 * calls 0079ca30 FUN_0079ca30
 * calls 0078bbe0 FUN_0078bbe0
 */

void FUN_00513390(void)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  FUN_0079ca30();
  piVar2 = (int *)FUN_0078bbe0();
  FUN_0079bac0();
  iVar3 = FUN_0078bcc0();
  if ((((DAT_0091ca7c == '\0') || (iVar3 == 0)) || ((piVar2 != (int *)0x0 && (-1 < *piVar2)))) ||
     (*(int *)(DAT_0091cf90 + 0x13c) != 0)) {
    return;
  }
  bVar1 = false;
  iVar5 = 0;
  if (0 < *(int *)(iVar3 + 0x24)) {
    do {
      iVar4 = FUN_00790920(iVar5);
      if ((iVar4 != 0) && (0 < *(int *)(iVar4 + 0x18))) {
        bVar1 = true;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(iVar3 + 0x24));
    if (bVar1) {
      return;
    }
  }
  DAT_0091ca7c = 0;
  FUN_0079dec0();
  FUN_00799fe0();
  return;
}

