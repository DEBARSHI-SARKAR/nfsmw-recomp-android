/* speed.exe 007ed83c FUN_007ed83c; analysis pseudocode, not buildable source.
 * calls 007ed713 FUN_007ed713
 */

void FUN_007ed83c(int param_1)

{
  int iVar1;
  undefined4 *unaff_EBX;
  int unaff_ESI;
  
  *unaff_EBX = 0;
  if (*(int *)(unaff_ESI + 4) != 0) {
    if ((*(int *)(unaff_ESI + 0xc) != 0) && (*(int *)(*(int *)(unaff_ESI + 0xc) + 0xc) == param_1))
    {
      *unaff_EBX = 0xffffffff;
      return;
    }
    iVar1 = FUN_007ed713(param_1,0);
    if (iVar1 != 0) {
      *unaff_EBX = 1;
      return;
    }
    FUN_007ed713(param_1,0);
  }
  return;
}

