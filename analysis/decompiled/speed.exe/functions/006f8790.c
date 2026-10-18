/* speed.exe 006f8790 FUN_006f8790; analysis pseudocode, not buildable source.
 * calls 004258d0 FUN_004258d0
 * calls 005d5a50 FUN_005d5a50
 * calls 006f82f0 FUN_006f82f0
 * calls 006466b0 FUN_006466b0
 * calls 005d0370 FUN_005d0370
 */

void __fastcall FUN_006f8790(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0087f084;
  local_c = ExceptionList;
  puVar1 = param_1 + 0x12;
  puVar2 = param_1 + 0x14;
  puVar3 = param_1 + 0x16;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008b09e0;
  param_1[2] = &PTR_LAB_008b09d8;
  param_1[0xb] = &PTR_LAB_008b09c4;
  param_1[0xe] = &PTR_LAB_008b09a8;
  *puVar1 = &PTR_LAB_008b09a0;
  *puVar2 = &PTR_LAB_008b0994;
  *puVar3 = &PTR_LAB_008b0984;
  param_1[0x18] = &PTR_LAB_008b0978;
  local_4 = 4;
  if (param_1[0x1a] != 0) {
    param_1[9] = param_1[9] + -1;
    for (iVar4 = DAT_009885d0; iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x14)) {
      if (*(int *)(iVar4 + 0x20) == param_1[0x1a]) goto LAB_006f881e;
    }
    iVar4 = 0;
LAB_006f881e:
    *(uint *)(iVar4 + 0x18) = *(uint *)(iVar4 + 0x18) | 0x10;
  }
  iVar4 = param_1[0x23];
  if (iVar4 != 0) {
    FUN_006466b0();
    FUN_005d0370(iVar4,0x28c,0);
  }
  DAT_0092c678 = 0;
  param_1[0x18] = &PTR_FUN_00890970;
  local_4._0_1_ = 3;
  FUN_005d5a50(param_1 + 0x18);
  local_4._0_1_ = 2;
  *puVar3 = &PTR_FUN_0089187c;
  FUN_004258d0();
  *puVar3 = &PTR_FUN_00890970;
  FUN_005d5a50(puVar3);
  *puVar2 = &PTR_FUN_00890970;
  local_4._0_1_ = 1;
  FUN_005d5a50(puVar2);
  *puVar1 = &PTR_FUN_00890970;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_005d5a50(puVar1);
  local_4 = 0xffffffff;
  FUN_006f82f0();
  ExceptionList = local_c;
  return;
}

