/* speed.exe 0062fd80 FUN_0062fd80; analysis pseudocode, not buildable source.
 * calls 00605a50 FUN_00605a50
 * calls 005cc240 FUN_005cc240
 * calls 00614d10 FUN_00614d10
 */

undefined4 FUN_0062fd80(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087810f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar3 = FUN_00605a50(param_1);
  puVar2 = DAT_00920390;
  if (iVar3 == 3) {
    puVar4 = DAT_00920390 + 8;
    bVar9 = DAT_00920390 != (undefined4 *)0x0;
    local_4 = 0;
    DAT_00920390 = puVar4;
    if (bVar9) {
      uVar5 = FUN_00614d10(param_1,3);
      uVar6 = FUN_005cc240(uVar5);
      uVar5 = FUN_00614d10(param_1,2);
      uVar7 = FUN_005cc240(uVar5);
      uVar5 = FUN_00614d10(param_1,1);
      uVar8 = FUN_005cc240(uVar5);
      uVar1 = DAT_0091f1cc;
      uVar5 = DAT_0091f1c8;
      puVar2[1] = 0x20;
      *puVar2 = &PTR_FUN_008a7204;
      puVar2[2] = uVar8;
      puVar2[3] = uVar7;
      puVar2[4] = uVar6;
      puVar2[5] = uVar5;
      puVar2[6] = uVar1;
    }
  }
  ExceptionList = local_c;
  return 0;
}

