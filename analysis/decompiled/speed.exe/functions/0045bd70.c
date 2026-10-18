/* speed.exe 0045bd70 FUN_0045bd70; analysis pseudocode, not buildable source.
 * calls 0045b1b0 FUN_0045b1b0
 * calls 0045b2b0 FUN_0045b2b0
 * calls 0045b8c0 FUN_0045b8c0
 * calls 0045b9f0 FUN_0045b9f0
 * calls 0045b040 FUN_0045b040
 * calls 0045b230 FUN_0045b230
 */

void __fastcall FUN_0045bd70(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_00869fbf;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_00893ce8;
  local_4 = 5;
  FUN_0045b9f0(*(undefined4 *)(param_1[0xc] + 4));
  *(undefined4 *)(param_1[0xc] + 4) = param_1[0xc];
  param_1[0xd] = 0;
  *(undefined4 *)param_1[0xc] = param_1[0xc];
  *(undefined4 *)(param_1[0xc] + 8) = param_1[0xc];
  FUN_0045b040();
  local_4._0_1_ = 4;
  FUN_0045b230();
  local_4._0_1_ = 3;
  FUN_0045b1b0();
  local_4._0_1_ = 2;
  FUN_0045b8c0();
  local_4._0_1_ = 1;
  FUN_0045b040();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_0045b2b0();
  *param_1 = &PTR_LAB_00893c3c;
  ExceptionList = local_c;
  return;
}

