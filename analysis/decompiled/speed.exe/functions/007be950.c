/* speed.exe 007be950 FUN_007be950; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00572360 FUN_00572360
 * calls 00466440 FUN_00466440
 */

void __fastcall FUN_007be950(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_c = ExceptionList;
  puStack_8 = &LAB_0088387f;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008b7f50;
  piVar4 = param_1 + 0x1a;
  *(undefined1 *)(param_1[0x1d] + 0x194) = 0xff;
  piVar1 = (int *)*piVar4;
  local_4 = 5;
  while (piVar1 != piVar4) {
    iVar2 = *piVar1;
    piVar3 = (int *)piVar1[1];
    *piVar3 = iVar2;
    *(int **)(iVar2 + 4) = piVar3;
    FUN_00466440(piVar1);
    piVar1 = (int *)*piVar4;
  }
  piVar4 = (int *)param_1[0x17];
  while (piVar4 != param_1 + 0x17) {
    iVar2 = *piVar4;
    piVar1 = (int *)piVar4[1];
    *piVar1 = iVar2;
    *(int **)(iVar2 + 4) = piVar1;
    thunk_FUN_007c7250(piVar4);
    piVar4 = (int *)param_1[0x17];
  }
  piVar4 = (int *)param_1[0x14];
  while (piVar4 != param_1 + 0x14) {
    iVar2 = *piVar4;
    piVar1 = (int *)piVar4[1];
    *piVar1 = iVar2;
    *(int **)(iVar2 + 4) = piVar1;
    thunk_FUN_007c7250(piVar4);
    piVar4 = (int *)param_1[0x14];
  }
  piVar4 = (int *)param_1[0x11];
  while (piVar4 != param_1 + 0x11) {
    iVar2 = *piVar4;
    piVar1 = (int *)piVar4[1];
    *piVar1 = iVar2;
    *(int **)(iVar2 + 4) = piVar1;
    thunk_FUN_007c7250(piVar4);
    piVar4 = (int *)param_1[0x11];
  }
  piVar4 = (int *)param_1[0xe];
  while (piVar4 != param_1 + 0xe) {
    iVar2 = *piVar4;
    piVar1 = (int *)piVar4[1];
    *piVar1 = iVar2;
    *(int **)(iVar2 + 4) = piVar1;
    thunk_FUN_007c7250(piVar4);
    piVar4 = (int *)param_1[0xe];
  }
  piVar4 = (int *)param_1[0xb];
  while (piVar4 != param_1 + 0xb) {
    iVar2 = *piVar4;
    piVar1 = (int *)piVar4[1];
    *piVar1 = iVar2;
    *(int **)(iVar2 + 4) = piVar1;
    thunk_FUN_007c7250(piVar4);
    piVar4 = (int *)param_1[0xb];
  }
  local_4 = 0xffffffff;
  FUN_00572360();
  ExceptionList = local_c;
  return;
}

