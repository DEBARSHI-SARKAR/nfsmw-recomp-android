/* speed.exe 00682ab0 FUN_00682ab0; analysis pseudocode, not buildable source.
 * calls 0066d570 FUN_0066d570
 * calls 004303b0 FUN_004303b0
 * calls 00674b70 FUN_00674b70
 * calls 0066d5b0 FUN_0066d5b0
 * calls 007c56b0 __CxxThrowException@8
 * calls 005d0370 FUN_005d0370
 * calls 00432d50 FUN_00432d50
 * calls 0066e540 FUN_0066e540
 * calls 0066d550 FUN_0066d550
 */

/* WARNING: Removing unreachable block (ram,0x00682bc9) */
/* WARNING: Removing unreachable block (ram,0x00682bd9) */
/* WARNING: Removing unreachable block (ram,0x00682be3) */
/* WARNING: Removing unreachable block (ram,0x00682be6) */
/* WARNING: Removing unreachable block (ram,0x00682bd5) */
/* WARNING: Removing unreachable block (ram,0x00682bf4) */
/* WARNING: Removing unreachable block (ram,0x00682c01) */
/* WARNING: Removing unreachable block (ram,0x00682c0c) */
/* WARNING: Removing unreachable block (ram,0x00682c08) */
/* WARNING: Removing unreachable block (ram,0x00682bfc) */
/* WARNING: Removing unreachable block (ram,0x00682c0f) */

void __thiscall FUN_00682ab0(int param_1,undefined4 *param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  undefined1 local_50 [4];
  undefined1 local_4c;
  undefined4 local_3c;
  undefined4 local_38;
  undefined **local_34 [10];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087b6c8;
  local_c = ExceptionList;
  if (*(char *)((int)param_3 + 0x15) != '\0') {
    local_38 = 0xf;
    local_3c = 0;
    local_4c = 0;
    ExceptionList = &local_c;
    FUN_004303b0("invalid map/set<T> iterator",0x1b);
    local_4 = 0;
    FUN_00432d50(local_50);
    local_34[0] = &PTR_FUN_008bf2c0;
                    /* WARNING: Subroutine does not return */
    __CxxThrowException_8(local_34,&DAT_008c9f78);
  }
  ExceptionList = &local_c;
  FUN_0066e540();
  piVar6 = (int *)*param_3;
  if (*(char *)((int)piVar6 + 0x15) == '\0') {
    if (*(char *)(param_3[2] + 0x15) == '\0') {
      piVar6 = (int *)param_3[2];
    }
  }
  else {
    piVar6 = (int *)param_3[2];
  }
  piVar5 = (int *)param_3[1];
  if (*(char *)((int)piVar6 + 0x15) == '\0') {
    piVar6[1] = (int)piVar5;
  }
  if (*(int **)(*(int *)(param_1 + 4) + 4) == param_3) {
    *(int **)(*(int *)(param_1 + 4) + 4) = piVar6;
  }
  else if ((int *)*piVar5 == param_3) {
    *piVar5 = (int)piVar6;
  }
  else {
    piVar5[2] = (int)piVar6;
  }
  puVar1 = *(undefined4 **)(param_1 + 4);
  if ((int *)*puVar1 == param_3) {
    piVar3 = piVar5;
    if (*(char *)((int)piVar6 + 0x15) == '\0') {
      piVar3 = (int *)FUN_0066d570(piVar6);
    }
    *puVar1 = piVar3;
  }
  iVar2 = *(int *)(param_1 + 4);
  if (*(int **)(iVar2 + 8) == param_3) {
    if (*(char *)((int)piVar6 + 0x15) == '\0') {
      uVar4 = FUN_0066d550(piVar6);
      *(undefined4 *)(iVar2 + 8) = uVar4;
    }
    else {
      *(int **)(iVar2 + 8) = piVar5;
    }
  }
  if ((char)param_3[5] == '\x01') {
    if (piVar6 != *(int **)(*(int *)(param_1 + 4) + 4)) {
      do {
        piVar3 = piVar5;
        if ((char)piVar6[5] != '\x01') break;
        piVar5 = (int *)*piVar3;
        if (piVar6 == piVar5) {
          piVar5 = (int *)piVar3[2];
          if ((char)piVar5[5] == '\0') {
            *(undefined1 *)(piVar5 + 5) = 1;
            *(undefined1 *)(piVar3 + 5) = 0;
            FUN_00674b70(piVar3);
            piVar5 = (int *)piVar3[2];
          }
          if (*(char *)((int)piVar5 + 0x15) == '\0') {
            if ((*(char *)(*piVar5 + 0x14) != '\x01') || (*(char *)(piVar5[2] + 0x14) != '\x01')) {
              if (*(char *)(piVar5[2] + 0x14) == '\x01') {
                *(undefined1 *)(*piVar5 + 0x14) = 1;
                *(undefined1 *)(piVar5 + 5) = 0;
                FUN_0066d5b0(piVar5);
                piVar5 = (int *)piVar3[2];
              }
              *(char *)(piVar5 + 5) = (char)piVar3[5];
              *(undefined1 *)(piVar3 + 5) = 1;
              *(undefined1 *)(piVar5[2] + 0x14) = 1;
              FUN_00674b70(piVar3);
              break;
            }
LAB_00682ce4:
            *(undefined1 *)(piVar5 + 5) = 0;
          }
        }
        else {
          if ((char)piVar5[5] == '\0') {
            *(undefined1 *)(piVar5 + 5) = 1;
            *(undefined1 *)(piVar3 + 5) = 0;
            FUN_0066d5b0(piVar3);
            piVar5 = (int *)*piVar3;
          }
          if (*(char *)((int)piVar5 + 0x15) == '\0') {
            if ((*(char *)(piVar5[2] + 0x14) == '\x01') && (*(char *)(*piVar5 + 0x14) == '\x01'))
            goto LAB_00682ce4;
            if (*(char *)(*piVar5 + 0x14) == '\x01') {
              *(undefined1 *)(piVar5[2] + 0x14) = 1;
              *(undefined1 *)(piVar5 + 5) = 0;
              FUN_00674b70(piVar5);
              piVar5 = (int *)*piVar3;
            }
            *(char *)(piVar5 + 5) = (char)piVar3[5];
            *(undefined1 *)(piVar3 + 5) = 1;
            *(undefined1 *)(*piVar5 + 0x14) = 1;
            FUN_0066d5b0(piVar3);
            break;
          }
        }
        piVar5 = (int *)piVar3[1];
        piVar6 = piVar3;
      } while (piVar3 != *(int **)(*(int *)(param_1 + 4) + 4));
    }
    *(undefined1 *)(piVar6 + 5) = 1;
  }
  FUN_005d0370(param_3,0x18,0);
  if (*(int *)(param_1 + 8) != 0) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
  }
  *param_2 = param_3;
  ExceptionList = local_c;
  return;
}

