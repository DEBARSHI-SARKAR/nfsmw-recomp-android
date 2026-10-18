/* speed.exe 0070d880 FUN_0070d880; analysis pseudocode, not buildable source.
 * calls 007064e0 FUN_007064e0
 * calls 005cc240 FUN_005cc240
 */

undefined4 * __fastcall FUN_0070d880(undefined4 *param_1)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0087fbf8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_008b1f4c;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  local_4 = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x10) = 1;
  param_1[0x11] = 0;
  *(undefined1 *)((int)param_1 + 0x4d) = 0;
  FUN_005cc240("PartUpdate");
  uVar1 = FUN_007064e0(param_1,&LAB_00704a20);
  param_1[0x14] = uVar1;
  FUN_005cc240(&DAT_0089885c);
  uVar1 = FUN_007064e0(param_1,FUN_0070aca0);
  param_1[0x15] = uVar1;
  FUN_005cc240("Terminate");
  uVar1 = FUN_007064e0(param_1,&LAB_00700d70);
  param_1[0x16] = uVar1;
  FUN_005cc240("InteractiveDone");
  uVar1 = FUN_007064e0(param_1,&LAB_00700d80);
  param_1[0x17] = uVar1;
  FUN_005cc240("X360UserTunes");
  uVar1 = FUN_007064e0(param_1,&LAB_00700d90);
  param_1[0x18] = uVar1;
  param_1[3] = 0;
  param_1[1] = 0xffffffff;
  ExceptionList = local_c;
  return param_1;
}

