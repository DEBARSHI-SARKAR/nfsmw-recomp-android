/* speed.exe 00700ad0 FUN_00700ad0; analysis pseudocode, not buildable source.
 * calls 00664cc0 FUN_00664cc0
 */

void __fastcall FUN_00700ad0(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_0087f948;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008b1f28;
  local_4 = 0;
  if (param_1[0xd] != 0) {
    FUN_00664cc0(param_1[0xd]);
  }
  if (param_1[0xe] != 0) {
    FUN_00664cc0(param_1[0xe]);
  }
  if (param_1[0xf] != 0) {
    FUN_00664cc0(param_1[0xf]);
  }
  *param_1 = &PTR_LAB_008b1e98;
  ExceptionList = local_c;
  return;
}

