/* speed.exe 00645dd0 FUN_00645dd0; analysis pseudocode, not buildable source.
 * calls 005d0370 FUN_005d0370
 * calls 005d29d0 FUN_005d29d0
 * calls 00635150 FUN_00635150
 */

void __fastcall FUN_00645dd0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_00879d3f;
  local_c = ExceptionList;
  piVar5 = (int *)(param_1 + 8);
  local_14 = 8;
  ExceptionList = &local_c;
  do {
    local_4 = 0xffffffff;
    iVar3 = *piVar5;
    if (iVar3 != 0) {
      piVar1 = *(int **)(iVar3 + 4);
      piVar2 = (int *)*piVar1;
      *piVar1 = (int)piVar1;
      *(int *)(*(int *)(iVar3 + 4) + 4) = *(int *)(iVar3 + 4);
      *(undefined4 *)(iVar3 + 8) = 0;
      if (piVar2 != *(int **)(iVar3 + 4)) {
        do {
          piVar1 = (int *)*piVar2;
          FUN_005d0370(piVar2,0x1c,0);
          piVar2 = piVar1;
        } while (piVar1 != (int *)*(int *)(iVar3 + 4));
      }
      if (*(int *)(iVar3 + 4) != 0) {
        FUN_005d0370(*(int *)(iVar3 + 4),0x1c,0);
      }
      *(undefined4 *)(iVar3 + 4) = 0;
      FUN_005d0370(iVar3,0xc,0);
    }
    iVar3 = FUN_005d29d0(0xc,0);
    local_4 = 0;
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      uVar4 = FUN_00635150();
      *(undefined4 *)(iVar3 + 4) = uVar4;
      *(undefined4 *)(iVar3 + 8) = 0;
    }
    *piVar5 = iVar3;
    piVar5 = piVar5 + 1;
    local_14 = local_14 + -1;
  } while (local_14 != 0);
  ExceptionList = local_c;
  return;
}

