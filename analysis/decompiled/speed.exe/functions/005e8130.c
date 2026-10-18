/* speed.exe 005e8130 FUN_005e8130; analysis pseudocode, not buildable source.
 * calls 005e2580 FUN_005e2580
 * calls 005e41a0 FUN_005e41a0
 */

undefined4 * __thiscall FUN_005e8130(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087541b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005e2580(*param_2,0,0);
  *param_1 = &PTR_FUN_008a39a8;
  *(undefined2 *)(param_1 + 6) = 0;
  *(undefined2 *)((int)param_1 + 0x1a) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  local_4 = 0;
  if ((&DAT_0091dfe4)[param_3] == 0) {
    param_1[9] = param_1;
    param_1[8] = param_1;
    (&DAT_0091dfe4)[param_3] = param_1;
  }
  else {
    param_1[9] = (&DAT_0091dfe4)[param_3];
    iVar1 = *(int *)((&DAT_0091dfe4)[param_3] + 0x20);
    param_1[8] = iVar1;
    *(undefined4 **)(iVar1 + 0x24) = param_1;
    *(undefined4 **)(param_1[9] + 0x20) = param_1;
  }
  FUN_005e41a0(param_1);
  *(byte *)(param_1 + 6) = *(byte *)(param_1 + 6) | 1;
  ExceptionList = local_c;
  return param_1;
}

