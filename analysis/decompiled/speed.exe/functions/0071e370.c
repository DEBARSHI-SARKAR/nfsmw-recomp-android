/* speed.exe 0071e370 FUN_0071e370; analysis pseudocode, not buildable source.
 * calls 007060b0 FUN_007060b0
 */

undefined4 * __fastcall FUN_0071e370(undefined4 *param_1)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00880338;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0;
  param_1[2] = 0xffffffff;
  param_1[3] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)((int)param_1 + 0x19) = 0;
  *(undefined2 *)((int)param_1 + 0x1a) = 0;
  local_4 = 0;
  *param_1 = &PTR_FUN_008b1ebc;
  param_1[4] = 6;
  uVar1 = FUN_007060b0(param_1,&LAB_0071a420);
  param_1[7] = uVar1;
  ExceptionList = local_c;
  return param_1;
}

