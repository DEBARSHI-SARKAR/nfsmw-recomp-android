/* speed.exe 00791a50 FUN_00791a50; analysis pseudocode, not buildable source.
 * calls 00572360 FUN_00572360
 * calls 005758e0 FUN_005758e0
 */

void FUN_00791a50(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00882608;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_005758e0();
  local_4 = 0xffffffff;
  FUN_00572360();
  ExceptionList = local_c;
  return;
}

