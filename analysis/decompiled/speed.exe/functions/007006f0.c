/* speed.exe 007006f0 FUN_007006f0; analysis pseudocode, not buildable source.
 * calls 00664cc0 FUN_00664cc0
 */

void __fastcall FUN_007006f0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0087f908;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008b1ebc;
  local_4 = 0;
  if (param_1[7] != 0) {
    FUN_00664cc0(param_1[7]);
  }
  *param_1 = &PTR_LAB_008b1e98;
  ExceptionList = local_c;
  return;
}

