/* speed.exe 0054d270 FUN_0054d270; analysis pseudocode, not buildable source.
 * calls 00585b50 FUN_00585b50
 * calls 00839770 FUN_00839770
 * calls 00516af0 FUN_00516af0
 * calls 00540d60 FUN_00540d60
 * calls 00837530 FUN_00837530
 * calls 005865e0 FUN_005865e0
 * calls 005b8550 FUN_005b8550
 * calls 00513bc0 FUN_00513bc0
 * calls 0078c790 FUN_0078c790
 * calls 00540e30 FUN_00540e30
 * calls 0056bc10 FUN_0056bc10
 * calls 00586290 FUN_00586290
 * calls 005750d0 FUN_005750d0
 * calls 00592170 FUN_00592170
 * calls 0078c730 FUN_0078c730
 */

undefined4 * __thiscall FUN_0054d270(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined1 local_288 [636];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00870619;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00586290(param_2);
  local_4 = 0;
  *param_1 = &PTR_FUN_0089e2b8;
  param_1[0xb] = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)((int)param_1 + 0x31) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  FUN_00592170(param_1[4],"scroll_area",&DAT_0089e978,1,1,0,1);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_005750d0(param_1[4],"scrollbar",1,0,0);
  if ((((param_1[4] == 0) || (iVar1 = FUN_00516af0(param_1[4]), iVar1 == 0)) ||
      (iVar1 = FUN_005b8550(0x6d851451), iVar1 == 0)) || (*(int *)(iVar1 + 0x18) != 2)) {
    iVar1 = 0;
  }
  param_1[0x455] = iVar1;
  uVar2 = FUN_00585b50(*(undefined4 *)(iVar1 + 0x24));
  param_1[0x456] = uVar2;
  param_1[0x457] = *(undefined4 *)(param_1[0x455] + 0x74);
  param_1[0x458] = *(undefined4 *)(param_1[0x455] + 0x1c);
  param_1[0x459] = 0xc;
  param_1[0x45a] = 0;
  *(undefined1 *)(param_1 + 0x4db) = 0;
  puVar3 = param_1 + 0x55;
  for (iVar1 = 0x400; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  FUN_00540d60();
  puVar5 = &DAT_0091c39c;
  FUN_0078c730(&DAT_0091c39c);
  iVar1 = FUN_0078c790(puVar5);
  if (iVar1 == 0) {
    iVar1 = FUN_0078c730();
    FUN_00839770(*(undefined4 *)(iVar1 + 0xf8),&DAT_0091c39c,1);
    puVar5 = &DAT_0091c39c;
    FUN_0078c730(&DAT_0091c39c);
    iVar1 = FUN_0078c790(puVar5);
  }
  puVar3 = (undefined4 *)FUN_00513bc0(local_288,iVar1);
  puVar4 = &DAT_0091c340;
  for (iVar1 = 0x9f; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  iVar1 = FUN_00837530(DAT_0091c398);
  if (iVar1 == 0) {
    uVar6 = 0x74;
    uVar2 = FUN_0056bc10(0x9a2e5f7b,0x74);
    FUN_005865e0(0x6d851451,0,&DAT_00890978,uVar2,uVar6);
  }
  else {
    FUN_00540e30();
  }
  iVar1 = 0;
  puVar3 = param_1 + 0x45b;
  do {
    *(short *)puVar3 = (short)iVar1;
    iVar1 = iVar1 + 1;
    puVar3 = (undefined4 *)((int)puVar3 + 2);
  } while (iVar1 < 0x100);
  ExceptionList = local_c;
  return param_1;
}

