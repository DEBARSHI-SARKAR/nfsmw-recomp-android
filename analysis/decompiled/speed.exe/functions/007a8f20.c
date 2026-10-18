/* speed.exe 007a8f20 FUN_007a8f20; analysis pseudocode, not buildable source.
 * calls 007a1e70 FUN_007a1e70
 * calls 0045a430 FUN_0045a430
 * calls 00460ed0 FUN_00460ed0
 * calls 004549b0 FUN_004549b0
 * calls 00460c70 FUN_00460c70
 * calls 0051e1a0 FUN_0051e1a0
 */

undefined4 FUN_007a8f20(undefined4 param_1)

{
  undefined4 uVar1;
  int local_5c;
  undefined1 local_4c [64];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008829b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00460c70(local_4c,param_1);
  uVar1 = FUN_007a1e70();
  FUN_00460ed0(local_4c,local_4c,uVar1);
  uVar1 = FUN_004549b0(local_4c);
  FUN_0051e1a0(uVar1,0,0);
  local_4 = 0xffffffff;
  if (local_5c != 0) {
    FUN_0045a430();
    ExceptionList = local_c;
    return uVar1;
  }
  FUN_0045a430();
  ExceptionList = local_c;
  return 0xf907e767;
}

