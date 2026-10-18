/* speed.exe 00647dd0 FUN_00647dd0; analysis pseudocode, not buildable source.
 * calls 006353b0 FUN_006353b0
 * calls 00646430 FUN_00646430
 */

void __thiscall
FUN_00647dd0(int param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,undefined4 param_5
            ,undefined2 param_6,undefined2 param_7)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c;
  undefined2 local_a;
  undefined2 local_8;
  undefined4 local_4;
  
  iVar3 = -1;
  iVar1 = 0;
  uVar2 = 999999;
  if (0 < *(int *)(param_1 + 4)) {
    piVar4 = (int *)(param_1 + 8);
    do {
      if (*(uint *)(*piVar4 + 8) < uVar2) {
        uVar2 = *(uint *)(*piVar4 + 8);
        iVar3 = iVar1;
      }
      iVar1 = iVar1 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar1 < *(int *)(param_1 + 4));
  }
  iVar3 = *(int *)(*(int *)(param_1 + 8 + iVar3 * 4) + 4);
  local_14 = param_2;
  local_10 = param_3;
  local_a = param_6;
  local_c = param_4;
  local_4 = *(undefined4 *)(param_1 + 0x28);
  local_8 = param_7;
  iVar1 = FUN_006353b0(iVar3,*(undefined4 *)(iVar3 + 4),&local_14);
  FUN_00646430(1);
  *(int *)(iVar3 + 4) = iVar1;
  **(int **)(iVar1 + 4) = iVar1;
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  return;
}

