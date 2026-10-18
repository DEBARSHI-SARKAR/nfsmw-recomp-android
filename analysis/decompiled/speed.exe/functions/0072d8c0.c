/* speed.exe 0072d8c0 FUN_0072d8c0; analysis pseudocode, not buildable source.
 * calls 004624a0 FUN_004624a0
 * calls 00652b00 thunk_FUN_007c7250
 * calls 007c8f50 `eh_vector_destructor_iterator'
 * calls 00460a50 FUN_00460a50
 */

void __fastcall FUN_0072d8c0(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *local_14;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_008805df;
  local_c = ExceptionList;
  piVar5 = param_1 + 10;
  ExceptionList = &local_c;
  *piVar5 = (int)piVar5;
  param_1[0xb] = piVar5;
  piVar1 = param_1 + 8;
  *piVar1 = (int)piVar1;
  param_1[9] = piVar1;
  local_4 = 2;
  local_10 = param_1;
  if ((*(char *)(param_1 + 3) != '\0') && (DAT_0090e674 != 0)) {
    local_14 = param_1;
    FUN_004624a0("CODEINE",0x1a,&local_14,4);
  }
  FUN_00460a50(*param_1,0);
  local_4 = CONCAT31(local_4._1_3_,1);
  _eh_vector_destructor_iterator_(param_1 + 0xc,0x34,0xc0,(_func_void_void_ptr *)&DAT_00727690);
  piVar2 = (int *)*piVar5;
  while (piVar2 != piVar5) {
    iVar3 = *piVar2;
    piVar4 = (int *)piVar2[1];
    *piVar4 = iVar3;
    *(int **)(iVar3 + 4) = piVar4;
    thunk_FUN_007c7250(piVar2);
    piVar2 = (int *)*piVar5;
  }
  piVar5 = (int *)*piVar1;
  while (piVar5 != piVar1) {
    iVar3 = *piVar5;
    piVar2 = (int *)piVar5[1];
    *piVar2 = iVar3;
    *(int **)(iVar3 + 4) = piVar2;
    thunk_FUN_007c7250(piVar5);
    piVar5 = (int *)*piVar1;
  }
  ExceptionList = local_c;
  return;
}

