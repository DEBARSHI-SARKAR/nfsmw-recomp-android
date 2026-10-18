/* speed.exe 007ba530 FUN_007ba530; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00572360 FUN_00572360
 * calls 00510a40 FUN_00510a40
 */

void __fastcall FUN_007ba530(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_c = ExceptionList;
  puStack_8 = &LAB_008835e8;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008b7e2c;
  piVar1 = (int *)param_1[0x3f];
  local_4 = 0;
  while (piVar1 != param_1 + 0x3f) {
    iVar2 = *piVar1;
    piVar3 = (int *)piVar1[1];
    *piVar3 = iVar2;
    *(int **)(iVar2 + 4) = piVar3;
    thunk_FUN_007c7250(piVar1);
    piVar1 = (int *)param_1[0x3f];
  }
  FUN_00510a40();
  local_4 = 0xffffffff;
  FUN_00572360();
  ExceptionList = local_c;
  return;
}

