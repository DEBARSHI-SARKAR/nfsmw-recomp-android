/* speed.exe 007afae0 FUN_007afae0; analysis pseudocode, not buildable source.
 * calls 0045a430 FUN_0045a430
 * calls 004e4ea0 FUN_004e4ea0
 * calls 00678ad0 FUN_00678ad0
 * calls 00672f50 FUN_00672f50
 */

char __fastcall FUN_007afae0(int param_1)

{
  int iVar1;
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00883088;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_004e4ea0(*(undefined4 *)(*(int *)(param_1 + 4) + 8),0,0);
  local_4 = 0;
  FUN_00678ad0(local_20,5,1);
  iVar1 = FUN_00672f50(local_20);
  local_4 = 0xffffffff;
  FUN_0045a430();
  ExceptionList = local_c;
  return '\x01' - (iVar1 != 1);
}

