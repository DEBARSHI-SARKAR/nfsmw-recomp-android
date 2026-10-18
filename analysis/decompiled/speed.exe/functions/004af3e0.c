/* speed.exe 004af3e0 FUN_004af3e0; analysis pseudocode, not buildable source.
 * calls 007283d0 FUN_007283d0
 * calls 004655f0 FUN_004655f0
 */

void FUN_004af3e0(void)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_0091236c + 0x20);
  if (iVar1 == 1) {
    iVar1 = *(int *)(DAT_0091236c + 0x28);
  }
  else {
    if (iVar1 == 2) {
      FUN_007283d0(*(undefined4 *)(DAT_0091236c + 0x28));
      *(undefined4 *)(DAT_0091236c + 0x28) = 0;
      return;
    }
    if (iVar1 != 3) {
      return;
    }
    if ((*(int *)(DAT_0091236c + 0x2c) == 0) && (*(int *)(DAT_0091236c + 0x24) == 0)) {
      return;
    }
    iVar1 = *(int *)(DAT_0091236c + 0x28);
    if (iVar1 == 0) goto LAB_004af436;
  }
  FUN_004655f0(iVar1);
LAB_004af436:
  *(undefined4 *)(DAT_0091236c + 0x28) = 0;
  return;
}

