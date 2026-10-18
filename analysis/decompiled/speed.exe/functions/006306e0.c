/* speed.exe 006306e0 FUN_006306e0; analysis pseudocode, not buildable source.
 * calls 00605a50 FUN_00605a50
 * calls 005cc240 FUN_005cc240
 * calls 00614d10 FUN_00614d10
 */

undefined4 FUN_006306e0(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008781ff;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar3 = FUN_00605a50(param_1);
  puVar2 = DAT_00920390;
  if (iVar3 == 1) {
    puVar4 = DAT_00920390 + 8;
    bVar7 = DAT_00920390 != (undefined4 *)0x0;
    local_4 = 0;
    DAT_00920390 = puVar4;
    if (bVar7) {
      uVar5 = FUN_00614d10(param_1,1);
      uVar6 = FUN_005cc240(uVar5);
      uVar1 = DAT_0091f1cc;
      uVar5 = DAT_0091f1c8;
      puVar2[1] = 0x20;
      *puVar2 = &PTR_FUN_008a7390;
      puVar2[2] = uVar6;
      puVar2[3] = uVar5;
      puVar2[4] = uVar1;
    }
  }
  ExceptionList = local_c;
  return 0;
}

