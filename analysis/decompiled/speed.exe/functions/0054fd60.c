/* speed.exe 0054fd60 FUN_0054fd60; analysis pseudocode, not buildable source.
 * calls 00525220 FUN_00525220
 * calls 00545c50 FUN_00545c50
 * calls 00593920 FUN_00593920
 * calls 006e8df0 FUN_006e8df0
 * calls 00516be0 FUN_00516be0
 */

undefined4 * __thiscall FUN_0054fd60(undefined4 *param_1,int param_2)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008707f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00593920(param_2);
  *param_1 = &PTR_FUN_0089cf60;
  *(bool *)(param_1 + 0x49) = *(int *)(param_2 + 8) != 0;
  DAT_0091ca20 = param_1 + 0x51;
  *DAT_0091ca20 = 0;
  *(undefined1 *)((int)param_1 + 0x125) = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  *(undefined1 *)(param_1 + 0x55) = 0;
  param_1[0x53] = 0;
  local_4 = 0;
  param_1[0x43] = (*(char *)(param_1 + 0x49) != '\0') + 9;
  if (*(int *)(*(int *)(DAT_0091cf90 + 0x10) + 0x24) == 4) {
    iVar1 = FUN_006e8df0();
    if (iVar1 == 1) {
      FUN_00516be0(0x7db7b6d7,param_1[4],0xfffffffc,0xff);
      FUN_00525220(param_1[4],0x53bf826d,(DAT_0091ca24 != 0) + 0x7b070984);
    }
  }
  FUN_00545c50();
  ExceptionList = local_c;
  return param_1;
}

