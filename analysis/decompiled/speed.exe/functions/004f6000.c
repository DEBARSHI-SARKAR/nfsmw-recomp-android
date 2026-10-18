/* speed.exe 004f6000 FUN_004f6000; analysis pseudocode, not buildable source.
 * calls 004b0280 FUN_004b0280
 */

undefined4 * __fastcall FUN_004f6000(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0086d738;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined2 *)(param_1 + 7) = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  DAT_009142d8 = 0;
  DAT_009142dc = 0;
  param_1[9] = 0;
  local_4 = 0;
  *param_1 = &PTR_FUN_00899698;
  FUN_004b0280();
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0x10] = 0;
  ExceptionList = local_c;
  return param_1;
}

