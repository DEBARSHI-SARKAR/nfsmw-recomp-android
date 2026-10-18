/* speed.exe 005486a0 FUN_005486a0; analysis pseudocode, not buildable source.
 * calls 00573140 FUN_00573140
 * calls 005e4940 FUN_005e4940
 * calls 005315a0 FUN_005315a0
 * calls 00530df0 FUN_00530df0
 */

void FUN_005486a0(uint param_1)

{
  ushort *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 local_320 [200];
  
  if (DAT_0092d884 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *DAT_0092d87c;
  }
  iVar2 = FUN_005e4940(local_320,uVar4);
  iVar5 = 0;
  iVar6 = 0;
  if (0 < iVar2) {
    do {
      puVar1 = (ushort *)local_320[iVar6];
      uVar3 = (uint)*puVar1;
      if (((&DAT_008f3abc)[uVar3 * 5] != 0) && (uVar3 == param_1)) {
        uVar4 = FUN_00573140((&PTR_DAT_008f3ac0)[uVar3 * 5],iVar5);
        FUN_005315a0((&DAT_008f3abc)[uVar3 * 5],uVar4,puVar1);
        iVar5 = iVar5 + 1;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar2);
    if (0 < iVar5) {
      FUN_00530df0((&DAT_008f3ac4)[param_1 * 5],(&DAT_008f3abc)[param_1 * 5]);
    }
  }
  return;
}

