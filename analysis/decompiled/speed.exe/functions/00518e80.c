/* speed.exe 00518e80 FUN_00518e80; analysis pseudocode, not buildable source.
 * calls 00460c70 FUN_00460c70
 * calls 007c4b80 FUN_007c4b80
 */

undefined * FUN_00518e80(undefined *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_30 [12];
  
  FUN_00460c70(&DAT_0091cc5c);
  if ((&UNK_004f19ff < param_1) && (param_1 < (undefined *)0xbc191381)) {
    uVar1 = FUN_007c4b80();
    iVar2 = FUN_007c4b80();
    iVar2 = ((uint)param_1 / 0x15180 - 1) - iVar2;
    iVar4 = 1;
    if (0 < iVar2) {
      uVar1 = uVar1 & 0x80000003;
      if ((int)uVar1 < 0) {
        uVar1 = (uVar1 - 1 | 0xfffffffc) + 1;
      }
      do {
        if ((uVar1 != 0) || (iVar3 = 0x1d, iVar4 != 2)) {
          iVar3 = local_30[iVar4 + -1];
        }
        iVar2 = iVar2 - iVar3;
        iVar4 = iVar4 + 1;
      } while (0 < iVar2);
    }
    FUN_00460c70(&DAT_0091cc5c,"2000/1/1 00:00:00");
  }
  return &DAT_0091cc5c;
}

