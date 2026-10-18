/* speed.exe 0063be40 FUN_0063be40; analysis pseudocode, not buildable source.
 * calls 006e8de0 FUN_006e8de0
 * calls 005d59f0 FUN_005d59f0
 * calls 005d51f0 FUN_005d51f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0063be40(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  float10 fVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_008795c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_008a7688;
  local_4 = 0;
  if (param_1[3] != 0) {
    iVar2 = FUN_005d51f0(DAT_00930514,DAT_00930514 + DAT_0093051c * 8,param_1[3]);
    if ((iVar2 != 0) && (*(int **)(iVar2 + 4) != (int *)0x0)) {
      iVar2 = (**(code **)(**(int **)(iVar2 + 4) + 0x14))();
      if (iVar2 != 0) {
        iVar2 = FUN_005d51f0(DAT_00934ce4,DAT_00934ce4 + DAT_00934cec * 8,iVar2);
        if ((iVar2 != 0) && (*(int *)(iVar2 + 4) != 0)) {
          piVar3 = (int *)FUN_005d59f0(&LAB_00402830);
          if (piVar3 != (int *)0x0) {
            cVar1 = (**(code **)(*piVar3 + 0x24))();
            if (cVar1 != '\0') {
              fVar4 = (float10)FUN_006e8de0();
              _DAT_0090d9d4 = (float)fVar4;
            }
          }
        }
      }
    }
  }
  *param_1 = &PTR_LAB_008a66f8;
  ExceptionList = local_c;
  return;
}

