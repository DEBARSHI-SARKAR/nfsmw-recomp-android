/* speed.exe 006155f0 FUN_006155f0; analysis pseudocode, not buildable source.
 * calls 0060b9d0 FUN_0060b9d0
 * calls 00613b50 FUN_00613b50
 */

void FUN_006155f0(void)

{
  int *piVar1;
  int iVar2;
  int unaff_ESI;
  
  FUN_0060b9d0();
  piVar1 = *(int **)(unaff_ESI + 0x10);
  if (piVar1 != (int *)0x0) {
    iVar2 = piVar1[2];
    if (*piVar1 != 0) {
      (*DAT_0091e0e4)();
      *(int *)(*(int *)(unaff_ESI + 0x10) + 0x24) =
           *(int *)(*(int *)(unaff_ESI + 0x10) + 0x24) + iVar2 * -4;
    }
    iVar2 = *(int *)(*(int *)(unaff_ESI + 0x10) + 0x1c);
    if (*(int *)(*(int *)(unaff_ESI + 0x10) + 0x18) != 0) {
      (*DAT_0091e0e4)();
      *(int *)(*(int *)(unaff_ESI + 0x10) + 0x24) =
           *(int *)(*(int *)(unaff_ESI + 0x10) + 0x24) - iVar2;
    }
    *(undefined4 *)(*(int *)(unaff_ESI + 0x10) + 0x18) = 0;
    *(undefined4 *)(*(int *)(unaff_ESI + 0x10) + 0x1c) = 0;
  }
  FUN_00613b50();
  if (*(int *)(unaff_ESI + 0x10) != 0) {
    (*DAT_0091e0e4)(0,*(int *)(unaff_ESI + 0x10),0x90,4);
  }
  (*DAT_0091e0e4)(0);
  return;
}

