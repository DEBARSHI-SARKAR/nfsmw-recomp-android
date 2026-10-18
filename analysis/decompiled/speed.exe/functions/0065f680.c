/* speed.exe 0065f680 FUN_0065f680; analysis pseudocode, not buildable source.
 * calls 0065ad80 FUN_0065ad80
 * calls 004662e0 FUN_004662e0
 * calls 0065f510 FUN_0065f510
 * calls 00463ca0 FUN_00463ca0
 * calls 007ec1a7 FUN_007ec1a7
 * calls 00466340 FUN_00466340
 */

int __thiscall FUN_0065f680(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087a13b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (DAT_00925914 == 0) {
    ExceptionList = &local_c;
    FUN_007ec1a7(param_1);
    DAT_00925914 = FUN_004662e0(0x40,0x44,"bFile System",0);
  }
  iVar1 = FUN_00466340(DAT_00925914);
  local_4 = 0;
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_0065f510(param_2,param_3);
  }
  local_4 = 0xffffffff;
  if (*(int *)(iVar1 + 0xc) < 0) {
    FUN_0065ad80();
    FUN_00463ca0(DAT_00925914,iVar1);
    ExceptionList = local_c;
    return 0;
  }
  ExceptionList = local_c;
  return iVar1;
}

