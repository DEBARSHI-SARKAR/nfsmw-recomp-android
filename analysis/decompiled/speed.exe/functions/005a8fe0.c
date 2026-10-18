/* speed.exe 005a8fe0 FUN_005a8fe0; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 * calls 005750d0 FUN_005750d0
 * calls 005a6060 FUN_005a6060
 * calls 00593920 FUN_00593920
 * calls 00581c20 FUN_00581c20
 */

undefined4 * __thiscall FUN_005a8fe0(undefined4 *param_1,undefined4 param_2)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00873bec;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00593920(param_2);
  local_4 = 0;
  *param_1 = &PTR_FUN_008a2a74;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  FUN_00581c20();
  param_1[0xb2] = 0;
  *(undefined1 *)(param_1 + 0xb3) = 0;
  *(undefined1 *)((int)param_1 + 0x2cd) = 0;
  pvVar1 = _malloc(0x5c);
  local_4._0_1_ = 1;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_005750d0(param_1[4],"Scrollbar",1,1,0);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  param_1[0x4a] = uVar2;
  *(undefined1 *)((int)param_1 + 0x11e) = 0;
  param_1[0x43] = 8;
  FUN_005a6060();
  ExceptionList = local_c;
  return param_1;
}

