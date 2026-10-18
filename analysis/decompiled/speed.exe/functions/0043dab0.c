/* speed.exe 0043dab0 FUN_0043dab0; analysis pseudocode, not buildable source.
 * calls 0042e290 FUN_0042e290
 * calls 006f94d0 FUN_006f94d0
 */

undefined4 * __fastcall FUN_0043dab0(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008694ce;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_006f94d0(1);
  local_4 = 0;
  if (param_1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = param_1 + 4;
  }
  FUN_0042e290(puVar1);
  *param_1 = &PTR_FUN_008921c4;
  param_1[2] = &PTR_LAB_008921bc;
  param_1[0xb] = &PTR_LAB_008921a8;
  param_1[0xe] = &PTR_LAB_0089218c;
  param_1[0x12] = &PTR_LAB_00892130;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  *(undefined2 *)((int)param_1 + 0x76) = 0;
  *(undefined2 *)(param_1 + 0x1e) = 0;
  *(undefined2 *)((int)param_1 + 0x7a) = 0;
  param_1[0x28] = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  param_1[0x25] = DAT_008a2fb4;
  param_1[0x26] = DAT_008a2fb8;
  param_1[0x27] = DAT_008a2fbc;
  ExceptionList = local_c;
  return param_1;
}

