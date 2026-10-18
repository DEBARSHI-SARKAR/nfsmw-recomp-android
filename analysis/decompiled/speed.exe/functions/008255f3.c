/* speed.exe 008255f3 FUN_008255f3; analysis pseudocode, not buildable source.
 * calls 00819670 FUN_00819670
 */

int FUN_008255f3(int *param_1)

{
  int *unaff_EBX;
  int unaff_ESI;
  int iVar1;
  
  iVar1 = *(int *)(unaff_ESI + 0x38);
  if (*param_1 <= *(int *)(unaff_ESI + 0x38)) {
    iVar1 = *param_1;
  }
  FUN_00819670(*unaff_EBX,unaff_ESI + 0x838 + *(int *)(unaff_ESI + 0x3c) * 4,iVar1 << 2);
  *(int *)(unaff_ESI + 0x3c) = *(int *)(unaff_ESI + 0x3c) + iVar1;
  *(int *)(unaff_ESI + 0x38) = *(int *)(unaff_ESI + 0x38) - iVar1;
  *param_1 = *param_1 - iVar1;
  *unaff_EBX = *unaff_EBX + iVar1 * 4;
  return iVar1;
}

