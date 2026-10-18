/* speed.exe 004bb480 FUN_004bb480; analysis pseudocode, not buildable source.
 * calls 00467c30 FUN_00467c30
 * calls 0045be30 FUN_0045be30
 * calls 0045a430 FUN_0045a430
 */

void FUN_004bb480(void)

{
  undefined1 local_34 [20];
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0086b910;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00467c30(0,0,0);
  local_4 = 0;
  FUN_0045be30(local_34);
  local_4 = 0xffffffff;
  FUN_0045a430();
  FUN_00467c30(0,0,0);
  local_4 = 1;
  FUN_0045be30(local_34);
  local_4 = 0xffffffff;
  FUN_0045a430();
  FUN_00467c30(0,0,0);
  local_4 = 2;
  FUN_0045be30(local_34);
  local_4 = 0xffffffff;
  FUN_0045a430();
  FUN_00467c30(0,0,0);
  local_4 = 3;
  FUN_0045be30(local_20);
  local_4 = 0xffffffff;
  FUN_0045a430();
  ExceptionList = local_c;
  return;
}

