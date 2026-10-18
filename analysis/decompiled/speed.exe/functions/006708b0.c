/* speed.exe 006708b0 FUN_006708b0; analysis pseudocode, not buildable source.
 * calls 00452380 FUN_00452380
 * calls 00455fd0 FUN_00455fd0
 * calls 006269b0 FUN_006269b0
 */

int __thiscall FUN_006708b0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087a7a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar1 = FUN_00455fd0(0xce70d7db,param_2,param_3,param_4);
  FUN_00452380(uVar1,param_3,param_4);
  local_4 = 0;
  if (*(int *)(param_1 + 8) == 0) {
    uVar1 = FUN_006269b0(0x20);
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
  ExceptionList = local_c;
  return param_1;
}

