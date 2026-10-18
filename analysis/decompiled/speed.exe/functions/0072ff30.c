/* speed.exe 0072ff30 FUN_0072ff30; analysis pseudocode, not buildable source.
 * calls 00432d50 FUN_00432d50
 * calls 0072b4a0 FUN_0072b4a0
 * calls 007c56b0 __CxxThrowException@8
 * calls 00726370 FUN_00726370
 * calls 00726100 FUN_00726100
 * calls 005d0370 FUN_005d0370
 * calls 00726120 FUN_00726120
 * calls 004303b0 FUN_004303b0
 * calls 00726160 FUN_00726160
 */

/* WARNING: Removing unreachable block (ram,0x00730049) */
/* WARNING: Removing unreachable block (ram,0x00730059) */
/* WARNING: Removing unreachable block (ram,0x00730063) */
/* WARNING: Removing unreachable block (ram,0x00730066) */
/* WARNING: Removing unreachable block (ram,0x00730055) */
/* WARNING: Removing unreachable block (ram,0x00730074) */
/* WARNING: Removing unreachable block (ram,0x00730081) */
/* WARNING: Removing unreachable block (ram,0x0073008c) */
/* WARNING: Removing unreachable block (ram,0x00730088) */
/* WARNING: Removing unreachable block (ram,0x0073007c) */
/* WARNING: Removing unreachable block (ram,0x0073008f) */

void __thiscall FUN_0072ff30(int param_1,undefined4 *param_2,int *param_3)

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
  puStack_8 = &LAB_008806b8;
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
  FUN_00726370();
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
      piVar3 = (int *)FUN_00726120(piVar6);
    }
    *puVar1 = piVar3;
  }
  iVar2 = *(int *)(param_1 + 4);
  if (*(int **)(iVar2 + 8) == param_3) {
    if (*(char *)((int)piVar6 + 0x15) == '\0') {
      uVar4 = FUN_00726100(piVar6);
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
            FUN_0072b4a0(piVar3);
            piVar5 = (int *)piVar3[2];
          }
          if (*(char *)((int)piVar5 + 0x15) == '\0') {
            if ((*(char *)(*piVar5 + 0x14) != '\x01') || (*(char *)(piVar5[2] + 0x14) != '\x01')) {
              if (*(char *)(piVar5[2] + 0x14) == '\x01') {
                *(undefined1 *)(*piVar5 + 0x14) = 1;
                *(undefined1 *)(piVar5 + 5) = 0;
                FUN_00726160(piVar5);
                piVar5 = (int *)piVar3[2];
              }
              *(char *)(piVar5 + 5) = (char)piVar3[5];
              *(undefined1 *)(piVar3 + 5) = 1;
              *(undefined1 *)(piVar5[2] + 0x14) = 1;
              FUN_0072b4a0(piVar3);
              break;
            }
LAB_00730164:
            *(undefined1 *)(piVar5 + 5) = 0;
          }
        }
        else {
          if ((char)piVar5[5] == '\0') {
            *(undefined1 *)(piVar5 + 5) = 1;
            *(undefined1 *)(piVar3 + 5) = 0;
            FUN_00726160(piVar3);
            piVar5 = (int *)*piVar3;
          }
          if (*(char *)((int)piVar5 + 0x15) == '\0') {
            if ((*(char *)(piVar5[2] + 0x14) == '\x01') && (*(char *)(*piVar5 + 0x14) == '\x01'))
            goto LAB_00730164;
            if (*(char *)(*piVar5 + 0x14) == '\x01') {
              *(undefined1 *)(piVar5[2] + 0x14) = 1;
              *(undefined1 *)(piVar5 + 5) = 0;
              FUN_0072b4a0(piVar5);
              piVar5 = (int *)*piVar3;
            }
            *(char *)(piVar5 + 5) = (char)piVar3[5];
            *(undefined1 *)(piVar3 + 5) = 1;
            *(undefined1 *)(*piVar5 + 0x14) = 1;
            FUN_00726160(piVar3);
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

