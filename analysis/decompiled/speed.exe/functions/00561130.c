/* speed.exe 00561130 FUN_00561130; analysis pseudocode, not buildable source.
 * calls 0059bc40 FUN_0059bc40
 * calls 00739a70 FUN_00739a70
 * calls 00627400 FUN_00627400
 * calls 007a1fa0 FUN_007a1fa0
 * calls 0055afa0 FUN_0055afa0
 * calls 007a9db0 FUN_007a9db0
 * calls 00551070 FUN_00551070
 * calls 005910e0 FUN_005910e0
 * calls 00621e80 FUN_00621e80
 */

undefined4 * __thiscall FUN_00561130(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined1 local_31c [784];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008710ae;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0059bc40(param_2);
  *param_1 = &PTR_FUN_0089e6fc;
  iVar1 = param_2[2];
  *(bool *)(param_1 + 0x52) = iVar1 != 0;
  *(undefined1 *)((int)param_1 + 0x149) = 0;
  *(undefined1 *)((int)param_1 + 0x14a) = 0;
  param_1[0x55] = 0;
  local_4 = 0;
  FUN_0055afa0(*param_2,iVar1 != 0);
  local_4._0_1_ = 1;
  if (*(char *)(param_1 + 0x52) == '\0') {
    FUN_00739a70(0xffffffff,0,0,0);
    FUN_005910e0(*(undefined4 *)(*(int *)(DAT_0091cf90 + 0x10) + 0xa8),0,local_31c);
    FUN_007a9db0(local_31c,1,0);
    iVar1 = FUN_007a1fa0();
    *(undefined1 *)(iVar1 + 0x58) = 0;
  }
  else {
    param_1[0x48] = 0xffffae40;
    param_1[0x49] = 0xffae40;
    iVar1 = FUN_00627400(0xc);
    local_4._0_1_ = 2;
    if (iVar1 != 0) {
      FUN_00621e80(0x14035fb);
    }
    local_4._0_1_ = 1;
  }
  FUN_00551070();
  ExceptionList = local_c;
  return param_1;
}

