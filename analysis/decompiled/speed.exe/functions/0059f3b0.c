/* speed.exe 0059f3b0 FUN_0059f3b0; analysis pseudocode, not buildable source.
 * calls 005d5a50 FUN_005d5a50
 * calls 00466440 FUN_00466440
 */

void __fastcall FUN_0059f3b0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_008732c8;
  local_c = ExceptionList;
  puVar1 = param_1 + 0xc;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a237c;
  *puVar1 = &PTR_LAB_008a234c;
  local_4 = 0;
  *puVar1 = &PTR_FUN_00890970;
  FUN_005d5a50(puVar1);
  *param_1 = &PTR_FUN_008a1e80;
  piVar2 = (int *)param_1[2];
  local_4 = 0xffffffff;
  while (piVar2 != param_1 + 2) {
    iVar3 = *piVar2;
    piVar4 = (int *)piVar2[1];
    *piVar4 = iVar3;
    *(int **)(iVar3 + 4) = piVar4;
    FUN_00466440(piVar2);
    piVar2 = (int *)param_1[2];
  }
  ExceptionList = local_c;
  return;
}

