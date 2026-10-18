/* speed.exe 00476440 FUN_00476440; analysis pseudocode, not buildable source.
 * calls 00648db0 FUN_00648db0
 * calls 00470890 FUN_00470890
 * calls 005d29d0 FUN_005d29d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall
FUN_00476440(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086a3ca;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00470890(param_2,2);
  param_1[0x27] = param_5;
  *param_1 = &PTR_LAB_00894e00;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined2 *)(param_1 + 0x24) = 0;
  *(undefined2 *)((int)param_1 + 0x92) = 0;
  DAT_00911098 = 0;
  DAT_0091109c = 0;
  _DAT_008ee260 = *param_3;
  DAT_008ee268 = param_3[2];
  DAT_008ee264 = param_3[1];
  DAT_009110e8 = param_4[2];
  _DAT_009110e0 = *param_4;
  _DAT_009110e4 = param_4[1];
  param_1[0x28] = *(undefined4 *)(param_1[7] + 0xbc);
  local_4 = 0;
  *(undefined4 *)(param_1[7] + 0xbc) = DAT_008f86f4;
  iVar1 = FUN_005d29d0(0x28c,0);
  local_4 = CONCAT31(local_4._1_3_,1);
  if (iVar1 != 0) {
    uVar2 = FUN_00648db0(param_1[0x27],0x98c7a2f5,"DebugWorld",0);
    param_1[0x29] = uVar2;
    ExceptionList = local_c;
    return param_1;
  }
  param_1[0x29] = 0;
  ExceptionList = local_c;
  return param_1;
}

