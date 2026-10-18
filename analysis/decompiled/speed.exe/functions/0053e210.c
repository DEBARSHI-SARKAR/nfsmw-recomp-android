/* speed.exe 0053e210 FUN_0053e210; analysis pseudocode, not buildable source.
 * calls 00572360 FUN_00572360
 * calls 00516af0 FUN_00516af0
 * calls 0056c6e0 FUN_0056c6e0
 * calls 0079bac0 FUN_0079bac0
 * calls 00838640 FUN_00838640
 * calls 0050d7f0 FUN_0050d7f0
 * calls 0079a0b0 FUN_0079a0b0
 * calls 0078c730 FUN_0078c730
 * calls 0052c450 FUN_0052c450
 */

void __fastcall FUN_0053e210(undefined4 *param_1)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0086fc11;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_0089e14c;
  local_4 = 2;
  iVar1 = FUN_0078c730();
  if (*(int *)(iVar1 + 0xfc) == 1) {
    iVar1 = FUN_0078c730();
    FUN_00838640(*(undefined4 *)(iVar1 + 0xf8));
  }
  if (param_1[0xb] != 0) {
    FUN_0056c6e0(param_1[0xb]);
    param_1[0xb] = 0;
  }
  DAT_0091d260 = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  DAT_0091ca90 = 1;
  iVar1 = FUN_00516af0(PTR_s_OL_GameRoom_fng_008f32b0);
  if (iVar1 != 0) {
    FUN_0079bac0();
    FUN_0079a0b0();
  }
  local_4._0_1_ = 1;
  FUN_0050d7f0();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_0052c450();
  local_4 = 0xffffffff;
  FUN_00572360();
  ExceptionList = local_c;
  return;
}

