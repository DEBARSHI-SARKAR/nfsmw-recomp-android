/* speed.exe 0062cfd0 FUN_0062cfd0; analysis pseudocode, not buildable source.
 * calls 00605a50 FUN_00605a50
 * calls 005cc240 FUN_005cc240
 * calls 00614d10 FUN_00614d10
 */

undefined4 FUN_0062cfd0(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00877b4f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  iVar2 = FUN_00605a50(param_1);
  puVar1 = DAT_00920390;
  if (iVar2 == 1) {
    puVar3 = DAT_00920390 + 4;
    bVar6 = DAT_00920390 != (undefined4 *)0x0;
    local_4 = 0;
    DAT_00920390 = puVar3;
    if (bVar6) {
      uVar4 = FUN_00614d10(param_1,1);
      uVar5 = FUN_005cc240(uVar4);
      uVar4 = DAT_0091f1c4;
      puVar1[1] = 0x10;
      *puVar1 = &PTR_FUN_008a6d18;
      puVar1[2] = uVar5;
      puVar1[3] = uVar4;
    }
  }
  ExceptionList = local_c;
  return 0;
}

