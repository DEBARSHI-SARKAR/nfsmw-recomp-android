/* speed.exe 005a9430 FUN_005a9430; analysis pseudocode, not buildable source.
 * calls 005938a0 FUN_005938a0
 * calls 005251e0 FUN_005251e0
 * calls 00652ad0 _malloc
 * calls 005af1c0 FUN_005af1c0
 * calls 00515e20 FUN_00515e20
 * calls 005251a0 FUN_005251a0
 * calls 00524850 FUN_00524850
 * calls 005a7910 FUN_005a7910
 */

undefined4 * __thiscall FUN_005a9430(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int *piVar10;
  int iVar11;
  undefined1 local_2c [32];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00873c08;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005938a0(param_2,1,9,0);
  local_4 = 0;
  *param_1 = &PTR_FUN_008a1730;
  param_1[0xb] = &PTR_LAB_008a1724;
  param_1[0x38] = 0;
  param_1[0x39] = 0xc6be1c1f;
  if (0 < (int)param_1[0x14]) {
    iVar11 = 1;
    do {
      FUN_00515e20(local_2c,0x20,"LINE%d_GROUP",iVar11);
      uVar8 = param_1[4];
      uVar3 = FUN_005af1c0(local_2c);
      uVar3 = FUN_00524850(uVar8,uVar3);
      FUN_00515e20(local_2c,0x20,"COLUMN1_DATA%d",iVar11);
      uVar8 = param_1[4];
      uVar4 = FUN_005af1c0(local_2c);
      uVar4 = FUN_005251e0(uVar8,uVar4);
      FUN_00515e20(local_2c,0x20,"COLUMN2_DATA%d",iVar11);
      uVar8 = param_1[4];
      uVar5 = FUN_005af1c0(local_2c);
      uVar5 = FUN_005251e0(uVar8,uVar5);
      FUN_00515e20(local_2c,0x20,"CHECK%d",iVar11);
      uVar8 = param_1[4];
      uVar6 = FUN_005af1c0(local_2c);
      uVar6 = FUN_005251a0(uVar8,uVar6);
      FUN_00515e20(local_2c,0x20,"EMPTY%d",iVar11);
      uVar8 = param_1[4];
      uVar7 = FUN_005af1c0(local_2c);
      uVar8 = FUN_005251a0(uVar8,uVar7);
      puVar9 = _malloc(0x28);
      if (puVar9 == (undefined4 *)0x0) {
        puVar9 = (undefined4 *)0x0;
      }
      else {
        puVar9[6] = uVar4;
        puVar9[3] = uVar3;
        puVar9[4] = 0;
        *puVar9 = &PTR_FUN_008a171c;
        puVar9[5] = uVar3;
        puVar9[7] = uVar5;
        puVar9[8] = uVar6;
        puVar9[9] = uVar8;
      }
      puVar9[4] = param_1 + 0x31;
      puVar1 = (undefined4 *)param_1[0xe];
      piVar10 = puVar9 + 1;
      *puVar1 = piVar10;
      param_1[0xe] = piVar10;
      puVar9[2] = puVar1;
      *piVar10 = (int)(param_1 + 0xd);
      bVar2 = iVar11 < (int)param_1[0x14];
      iVar11 = iVar11 + 1;
    } while (bVar2);
  }
  FUN_005a7910();
  ExceptionList = local_c;
  return param_1;
}

