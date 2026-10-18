/* speed.exe 00621880 FUN_00621880; analysis pseudocode, not buildable source.
 * calls 005d0df0 FUN_005d0df0
 */

void FUN_00621880(int param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00876db4;
  local_c = ExceptionList;
  local_4 = 0;
  if (param_1 != -8) {
    ExceptionList = &local_c;
    FUN_005d0df0(param_2);
  }
  ExceptionList = local_c;
  return;
}

