/* speed.exe 005fa1f0 FUN_005fa1f0; analysis pseudocode, not buildable source.
 * calls 005f9da0 FUN_005f9da0
 * calls 005dae20 FUN_005dae20
 * calls 005daec0 FUN_005daec0
 */

void FUN_005fa1f0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00875f08;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_005dae20();
  local_4 = 0;
  FUN_005f9da0();
  local_4 = 0xffffffff;
  FUN_005daec0();
  ExceptionList = local_c;
  return;
}

