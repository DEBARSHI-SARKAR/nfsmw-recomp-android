/* speed.exe 007bf3c0 FUN_007bf3c0; analysis pseudocode, not buildable source.
 * calls 00652b00 thunk_FUN_007c7250
 * calls 00572360 FUN_00572360
 */

void __fastcall FUN_007bf3c0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  *param_1 = &PTR_FUN_008b7fa0;
  param_1[0x3a] = &PTR_LAB_0089b070;
  param_1[0x29] = &PTR_LAB_0089b070;
  piVar4 = param_1 + 0xe;
  param_1[0x18] = &PTR_LAB_0089b070;
  piVar1 = (int *)*piVar4;
  while (piVar1 != piVar4) {
    iVar2 = *piVar1;
    piVar3 = (int *)piVar1[1];
    *piVar3 = iVar2;
    *(int **)(iVar2 + 4) = piVar3;
    thunk_FUN_007c7250(piVar1);
    piVar1 = (int *)*piVar4;
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
  FUN_00572360();
  return;
}

