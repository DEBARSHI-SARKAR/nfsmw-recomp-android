/* speed.exe 00607b60 FUN_00607b60; analysis pseudocode, not buildable source.
 * calls 00613970 FUN_00613970
 */

void FUN_00607b60(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_ESI;
  int unaff_EDI;
  
  uVar1 = FUN_00613970(param_1,*(undefined4 *)(unaff_ESI + 0xc),*(int *)(unaff_ESI + 0x1c) << 3,
                       unaff_EDI * 8,6);
  *(undefined4 *)(unaff_ESI + 0xc) = uVar1;
  for (iVar2 = *(int *)(unaff_ESI + 0x1c); iVar2 < unaff_EDI; iVar2 = iVar2 + 1) {
    *(undefined4 *)(*(int *)(unaff_ESI + 0xc) + iVar2 * 8) = 0;
  }
  *(int *)(unaff_ESI + 0x1c) = unaff_EDI;
  return;
}

