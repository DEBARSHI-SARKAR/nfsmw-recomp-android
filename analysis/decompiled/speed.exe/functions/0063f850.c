/* speed.exe 0063f850 FUN_0063f850; analysis pseudocode, not buildable source.
 * calls 005cc240 FUN_005cc240
 * calls 00460bc0 FUN_00460bc0
 * calls 0063cd80 FUN_0063cd80
 */

void __fastcall FUN_0063f850(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int local_c;
  undefined4 *local_8;
  int local_4;
  
  if (*(int *)(param_1 + 0x24) != 0) {
    return;
  }
  DAT_0091f1d6 = 0;
  DAT_0091f1d5 = 0;
  DAT_0091f1d4 = 0;
  DAT_0091f1de = 0;
  DAT_0091f1dd = 0;
  DAT_0091f1dc = 0;
  DAT_0091f14e = 0;
  DAT_0091f14d = 0;
  DAT_0091f14c = 0;
  DAT_0091f148 = 0;
  *(undefined4 *)(param_1 + 0x1838) = 0;
  local_4 = 0;
  local_c = 0;
  local_8 = &DAT_0091f418;
  do {
    iVar3 = *(int *)(param_1 + 0x20);
    iVar1 = *(int *)(param_1 + 0x1c);
    uVar2 = *local_8;
    puVar4 = (undefined4 *)(*(int *)(param_1 + 0x18) + local_4);
    *puVar4 = 1;
    uVar2 = FUN_005cc240(uVar2);
    puVar4[1] = uVar2;
    puVar4[3] = iVar3 + local_c;
    puVar4[2] = iVar1 + local_c;
    local_8 = local_8 + 0xd;
    local_c = local_c + 4;
    local_4 = local_4 + 0x10;
    *(int *)(param_1 + 0x1838) = *(int *)(param_1 + 0x1838) + 1;
  } while ((int)local_8 < 0x920388);
  if (DAT_0091f150 == (int *)0x0) {
    puVar4 = &DAT_0091f1e8;
    for (iVar3 = 0x8c; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
  }
  else {
    (**(code **)(*DAT_0091f150 + 0x10))();
    puVar4 = (undefined4 *)(**(code **)(*DAT_0091f150 + 4))();
    puVar5 = &DAT_0091f1e8;
    for (iVar3 = 0x8c; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    iVar3 = FUN_00460bc0(DAT_0091f150 + 0x45);
    if (iVar3 == 0x5fb6ccba) {
      DAT_0091f1ec = 0xffff;
      DAT_0091f3fc = 0xffff;
      FUN_0063cd80();
      return;
    }
  }
  FUN_0063cd80();
  return;
}

