/* speed.exe 00537640 FUN_00537640; analysis pseudocode, not buildable source.
 * calls 00589600 FUN_00589600
 * calls 00652ad0 _malloc
 * calls 00588280 FUN_00588280
 * calls 0056bc10 FUN_0056bc10
 * calls 00593920 FUN_00593920
 * calls 005889f0 FUN_005889f0
 * calls 00574e30 FUN_00574e30
 * calls 005a5ea0 FUN_005a5ea0
 */

undefined4 * __thiscall FUN_00537640(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086fa0c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00593920(param_2);
  local_4 = 0;
  *param_1 = &PTR_FUN_0089dd1c;
  *(undefined1 *)(param_1 + 0x4b) = 0;
  puVar1 = _malloc(0x18c);
  local_4._0_1_ = 1;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    FUN_00589600(0xc,&DAT_00890978,5,1);
    *puVar1 = &PTR_FUN_0089ca38;
  }
  local_4 = (uint)local_4._1_3_ << 8;
  uVar2 = FUN_005889f0(puVar1);
  param_1[0x49] = uVar2;
  uVar2 = FUN_00588280(uVar2);
  param_1[0x4a] = uVar2;
  uVar2 = FUN_0056bc10(0x332c0b6f);
  FUN_00574e30(uVar2);
  FUN_005a5ea0(param_1[0x49]);
  ExceptionList = local_c;
  return param_1;
}

