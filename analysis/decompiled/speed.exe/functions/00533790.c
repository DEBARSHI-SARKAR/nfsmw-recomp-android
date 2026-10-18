/* speed.exe 00533790 FUN_00533790; analysis pseudocode, not buildable source.
 * calls 00589600 FUN_00589600
 * calls 00652ad0 _malloc
 * calls 00588280 FUN_00588280
 * calls 0056bc10 FUN_0056bc10
 * calls 00593920 FUN_00593920
 * calls 005889f0 FUN_005889f0
 * calls 00574e30 FUN_00574e30
 * calls 005a5ea0 FUN_005a5ea0
 */

undefined4 * __thiscall FUN_00533790(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086f7dc;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00593920(param_2);
  puVar1 = param_1 + 0x4c;
  *param_1 = &PTR_FUN_0089db64;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  *(undefined1 *)((int)param_1 + 0x162) = 0;
  param_1[0x59] = 0;
  puVar2 = puVar1;
  for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  local_4 = 0;
  *(undefined2 *)puVar2 = 0;
  puVar2 = _malloc(400);
  local_4._0_1_ = 1;
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    FUN_00589600(0x32,puVar1,4,1);
    *puVar2 = &PTR_FUN_0089c480;
    puVar2[99] = puVar1;
  }
  local_4 = (uint)local_4._1_3_ << 8;
  uVar3 = FUN_005889f0(puVar2);
  param_1[0x4a] = uVar3;
  uVar3 = FUN_00588280(uVar3);
  param_1[0x4b] = uVar3;
  uVar3 = FUN_0056bc10(0xbedf2b09);
  FUN_00574e30(uVar3);
  FUN_005a5ea0(1);
  ExceptionList = local_c;
  return param_1;
}

