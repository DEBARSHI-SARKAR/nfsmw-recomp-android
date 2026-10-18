/* speed.exe 005a12d0 FUN_005a12d0; analysis pseudocode, not buildable source.
 * calls 005d5a50 FUN_005d5a50
 * calls 00466440 FUN_00466440
 */

void __fastcall FUN_005a12d0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_0087354f;
  local_c = ExceptionList;
  puVar1 = param_1 + 0xc;
  puVar2 = param_1 + 0xe;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a261c;
  *puVar1 = &PTR_LAB_008a2630;
  *puVar2 = &PTR_LAB_008a2618;
  local_4 = 1;
  *puVar2 = &PTR_FUN_00890970;
  FUN_005d5a50(puVar2);
  *puVar1 = &PTR_FUN_00890970;
  local_4 = local_4 & 0xffffff00;
  FUN_005d5a50(puVar1);
  *param_1 = &PTR_FUN_008a1e80;
  piVar3 = (int *)param_1[2];
  local_4 = 0xffffffff;
  while (piVar3 != param_1 + 2) {
    iVar4 = *piVar3;
    piVar5 = (int *)piVar3[1];
    *piVar5 = iVar4;
    *(int **)(iVar4 + 4) = piVar5;
    FUN_00466440(piVar3);
    piVar3 = (int *)param_1[2];
  }
  ExceptionList = local_c;
  return;
}

