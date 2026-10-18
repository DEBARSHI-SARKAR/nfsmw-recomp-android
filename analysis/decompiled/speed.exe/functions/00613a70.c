/* speed.exe 00613a70 FUN_00613a70; analysis pseudocode, not buildable source.
 * calls 00606980 FUN_00606980
 */

void FUN_00613a70(void)

{
  int *piVar1;
  int in_EAX;
  int iVar2;
  int unaff_ESI;
  
  iVar2 = (*DAT_0091e0e0)();
  if (iVar2 == 0) {
    if (in_EAX != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00606980();
    }
    iVar2 = 0;
  }
  else if (in_EAX != 0) {
    piVar1 = (int *)(*(int *)(in_EAX + 0x10) + 0x24);
    *piVar1 = *piVar1 + 0x168;
  }
  *(int *)(unaff_ESI + 0x1c) = iVar2;
  *(int *)(unaff_ESI + 8) = iVar2;
  *(undefined4 *)(unaff_ESI + 0x20) = 0x2d;
  *(int *)(unaff_ESI + 0x18) = iVar2 + 0x138;
  iVar2 = (*DAT_0091e0e0)();
  if (iVar2 == 0) {
    if (in_EAX != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00606980();
    }
    iVar2 = 0;
  }
  else if (in_EAX != 0) {
    piVar1 = (int *)(*(int *)(in_EAX + 0x10) + 0x24);
    *piVar1 = *piVar1 + 0xc0;
  }
  *(int *)(unaff_ESI + 0x14) = iVar2;
  *(int *)(unaff_ESI + 0x28) = iVar2;
  *(undefined4 *)(iVar2 + 8) = 1;
  **(undefined4 **)(unaff_ESI + 8) = 0;
  iVar2 = *(int *)(unaff_ESI + 8) + 8;
  *(int *)(unaff_ESI + 8) = iVar2;
  **(int **)(unaff_ESI + 0x14) = iVar2;
  *(undefined4 *)(unaff_ESI + 0xc) = **(undefined4 **)(unaff_ESI + 0x14);
  (*(undefined4 **)(unaff_ESI + 0x14))[1] = *(int *)(unaff_ESI + 8) + 0xa0;
  *(undefined2 *)(unaff_ESI + 0x2c) = 8;
  *(int *)(unaff_ESI + 0x24) = *(int *)(unaff_ESI + 0x28) + 0xc0;
  return;
}

