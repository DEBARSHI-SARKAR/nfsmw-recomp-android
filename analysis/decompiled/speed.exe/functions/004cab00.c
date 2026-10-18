/* speed.exe 004cab00 FUN_004cab00; analysis pseudocode, not buildable source.
 * calls 004c7a00 FUN_004c7a00
 */

void FUN_004cab00(void)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = &DAT_009123ec;
  do {
    iVar1 = *piVar2;
    while (iVar1 != 0) {
      iVar1 = *(int *)(piVar2[-2] + -4 + iVar1 * 8);
      *piVar2 = *piVar2 + -1;
      FUN_004c7a00(iVar1 + 4);
      iVar1 = *piVar2;
    }
    piVar2 = piVar2 + 0x5a;
  } while ((int)piVar2 < 0x912824);
  return;
}

