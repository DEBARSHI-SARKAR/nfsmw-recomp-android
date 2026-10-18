/* speed.exe 00866e20 FUN_00866e20; analysis pseudocode, not buildable source.
 * calls 007c5f30 __allmul
 */

void FUN_00866e20(int param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  undefined2 extraout_DX;
  int iVar3;
  int unaff_EDI;
  
  iVar3 = 0;
  iVar1 = (int)(0x7fffffff / (ulonglong)param_3) * 0x7fff;
  if (0 < unaff_EDI) {
    do {
      iVar2 = *(int *)(param_2 + iVar3 * 4) << 1;
      __allmul(iVar2,iVar2 >> 0x1f,iVar1,iVar1 >> 0x1f);
      *(undefined2 *)(param_1 + iVar3 * 2) = extraout_DX;
      iVar3 = iVar3 + 1;
    } while (iVar3 < unaff_EDI);
  }
  return;
}

