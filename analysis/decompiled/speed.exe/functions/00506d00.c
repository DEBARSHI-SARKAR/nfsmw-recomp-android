/* speed.exe 00506d00 FUN_00506d00; analysis pseudocode, not buildable source.
 * calls 00506c90 FUN_00506c90
 * calls 00504380 FUN_00504380
 * calls 005043c0 FUN_005043c0
 */

void FUN_00506d00(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int local_4;
  
  iVar3 = param_1;
  FUN_00506c90(param_1);
  local_4 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    do {
      iVar1 = *(int *)(*(int *)(iVar3 + 0x74) + 4 + local_4 * 8);
      if ((iVar1 != 0) && (param_1 = 0, '\0' < *(char *)(iVar1 + 0x19))) {
        do {
          iVar2 = *(int *)(*(int *)(iVar1 + 0x2c) + 4 + param_1 * 8);
          if (iVar2 == DAT_00916040) {
            piVar4 = *(int **)(iVar3 + 0x88);
            if (piVar4 != (int *)(iVar3 + 0x88)) {
              do {
                if (*(int *)piVar4[2] == *(int *)(iVar2 + 0x24)) goto LAB_00506dad;
                piVar4 = (int *)*piVar4;
              } while (piVar4 != (int *)(iVar3 + 0x88));
            }
            FUN_005043c0(*(int *)(iVar1 + 0x2c) + param_1 * 8);
            *(short *)(iVar3 + 0x7e) = *(short *)(iVar3 + 0x7e) + 1;
          }
          else {
            piVar4 = *(int **)(iVar3 + 0x80);
            if (piVar4 != (int *)(iVar3 + 0x80)) {
              do {
                if (*(int *)(iVar2 + 0x68) == piVar4[2]) goto LAB_00506dad;
                piVar4 = (int *)*piVar4;
              } while (piVar4 != (int *)(iVar3 + 0x80));
            }
            FUN_00504380(*(undefined4 *)(iVar2 + 0x68));
            *(short *)(iVar3 + 0x7c) = *(short *)(iVar3 + 0x7c) + 1;
          }
LAB_00506dad:
          param_1 = param_1 + 1;
        } while (param_1 < *(char *)(iVar1 + 0x19));
      }
      local_4 = local_4 + 1;
    } while (local_4 < *(int *)(iVar3 + 0xc));
  }
  return;
}

