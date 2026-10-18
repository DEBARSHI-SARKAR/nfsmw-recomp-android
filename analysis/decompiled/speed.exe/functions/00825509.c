/* speed.exe 00825509 FUN_00825509; analysis pseudocode, not buildable source.
 * calls 00825382 FUN_00825382
 * calls 00819670 FUN_00819670
 */

void FUN_00825509(int *param_1)

{
  int iVar1;
  int iVar2;
  int unaff_ESI;
  int unaff_EDI;
  undefined4 local_8;
  
  if (*(int *)(unaff_ESI + 0x34) < 1) {
    local_8 = *param_1;
    iVar2 = local_8 + *(int *)(unaff_ESI + 0x2c) * 4;
  }
  else {
    local_8 = unaff_ESI + 0x40;
    iVar2 = *param_1;
  }
  if (unaff_EDI == 0) {
    FUN_00819670(unaff_ESI + 0x838,local_8,*(int *)(unaff_ESI + 0x2c) << 2);
    iVar1 = *(int *)(unaff_ESI + 0x2c);
    *(int *)(unaff_ESI + 0x30) = *(int *)(unaff_ESI + 0x30) - iVar1;
  }
  else {
    if (unaff_EDI < 1) {
      FUN_00825382(local_8,iVar2,unaff_ESI + 0x838,*(undefined4 *)(unaff_ESI + 0x2c));
      FUN_00819670(unaff_ESI + 0x838 + *(int *)(unaff_ESI + 0x2c) * 4,iVar2 + unaff_EDI * -4,
                   (*(int *)(unaff_ESI + 0x2c) + unaff_EDI) * 4);
      iVar1 = *(int *)(unaff_ESI + 0x2c);
      *(int *)(unaff_ESI + 0x30) = *(int *)(unaff_ESI + 0x30) + iVar1 * -2;
      *(int *)(unaff_ESI + 0x38) = iVar1 * 2 + unaff_EDI;
      *param_1 = iVar2 + iVar1 * 4;
      goto LAB_008255e8;
    }
    FUN_00819670(unaff_ESI + 0x838,local_8,unaff_EDI << 2);
    FUN_00825382(local_8,iVar2,unaff_ESI + 0x838 + unaff_EDI * 4,*(undefined4 *)(unaff_ESI + 0x2c));
    *(int *)(unaff_ESI + 0x30) = *(int *)(unaff_ESI + 0x30) - *(int *)(unaff_ESI + 0x2c);
    iVar1 = *(int *)(unaff_ESI + 0x2c) + unaff_EDI;
  }
  *(int *)(unaff_ESI + 0x38) = iVar1;
  *param_1 = iVar2;
LAB_008255e8:
  *(undefined4 *)(unaff_ESI + 0x34) = 0;
  *(undefined4 *)(unaff_ESI + 0x3c) = 0;
  return;
}

