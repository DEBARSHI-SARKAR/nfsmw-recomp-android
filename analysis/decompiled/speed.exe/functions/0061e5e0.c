/* speed.exe 0061e5e0 FUN_0061e5e0; analysis pseudocode, not buildable source.
 * calls 00611190 FUN_00611190
 * calls 00619ef0 FUN_00619ef0
 * calls 00615720 FUN_00615720
 * calls 005d0370 FUN_005d0370
 * calls 004655f0 FUN_004655f0
 * calls 0060c630 FUN_0060c630
 * calls 0060c450 FUN_0060c450
 */

void __fastcall FUN_0061e5e0(int *param_1)

{
  int *local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_008769f6;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  local_10 = param_1;
  if (*param_1 != 0) {
    ExceptionList = &local_c;
    FUN_00615720(*param_1);
  }
  if (param_1[3] != 0) {
    FUN_004655f0(param_1[3]);
  }
  param_1[3] = 0;
  param_1[1] = 0;
  if (param_1[0x1a] != 0) {
    FUN_004655f0(param_1[0x1a]);
  }
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  FUN_00611190();
  FUN_0060c630(*(undefined4 *)(param_1[0x15] + 4));
  *(int *)(param_1[0x15] + 4) = param_1[0x15];
  param_1[0x16] = 0;
  *(int *)param_1[0x15] = param_1[0x15];
  *(int *)(param_1[0x15] + 8) = param_1[0x15];
  local_4 = local_4 & 0xffffff00;
  FUN_0060c450();
  if (param_1[0x18] != 0) {
    FUN_005d0370(param_1[0x18],0xc,0);
  }
  param_1[0x18] = 0;
  local_4 = 0xffffffff;
  FUN_00619ef0(&local_10,*(undefined4 *)param_1[0x15],(undefined4 *)param_1[0x15]);
  if (param_1[0x15] != 0) {
    FUN_005d0370(param_1[0x15],0x18,0);
  }
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  ExceptionList = local_c;
  return;
}

