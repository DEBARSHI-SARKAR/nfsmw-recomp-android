/* speed.exe 00662e60 FUN_00662e60; analysis pseudocode, not buildable source.
 * calls 006550f0 FUN_006550f0
 * calls 00655a50 FUN_00655a50
 * calls 007c56b0 __CxxThrowException@8
 * calls 005d0370 FUN_005d0370
 * calls 00655090 FUN_00655090
 * calls 0065cb20 FUN_0065cb20
 * calls 004303b0 FUN_004303b0
 * calls 00432d50 FUN_00432d50
 * calls 006550b0 FUN_006550b0
 */

/* WARNING: Removing unreachable block (ram,0x00662f79) */
/* WARNING: Removing unreachable block (ram,0x00662f89) */
/* WARNING: Removing unreachable block (ram,0x00662f93) */
/* WARNING: Removing unreachable block (ram,0x00662f96) */
/* WARNING: Removing unreachable block (ram,0x00662f85) */
/* WARNING: Removing unreachable block (ram,0x00662fa4) */
/* WARNING: Removing unreachable block (ram,0x00662fb1) */
/* WARNING: Removing unreachable block (ram,0x00662fbc) */
/* WARNING: Removing unreachable block (ram,0x00662fb8) */
/* WARNING: Removing unreachable block (ram,0x00662fac) */
/* WARNING: Removing unreachable block (ram,0x00662fbf) */

void __thiscall FUN_00662e60(int param_1,undefined4 *param_2,int *param_3)

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
  puStack_8 = &LAB_0087a2d8;
  local_c = ExceptionList;
  if (*(char *)((int)param_3 + 0x29) != '\0') {
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
  FUN_00655a50();
  piVar6 = (int *)*param_3;
  if (*(char *)((int)piVar6 + 0x29) == '\0') {
    if (*(char *)(param_3[2] + 0x29) == '\0') {
      piVar6 = (int *)param_3[2];
    }
  }
  else {
    piVar6 = (int *)param_3[2];
  }
  piVar5 = (int *)param_3[1];
  if (*(char *)((int)piVar6 + 0x29) == '\0') {
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
    if (*(char *)((int)piVar6 + 0x29) == '\0') {
      piVar3 = (int *)FUN_006550b0(piVar6);
    }
    *puVar1 = piVar3;
  }
  iVar2 = *(int *)(param_1 + 4);
  if (*(int **)(iVar2 + 8) == param_3) {
    if (*(char *)((int)piVar6 + 0x29) == '\0') {
      uVar4 = FUN_00655090(piVar6);
      *(undefined4 *)(iVar2 + 8) = uVar4;
    }
    else {
      *(int **)(iVar2 + 8) = piVar5;
    }
  }
  if ((char)param_3[10] == '\x01') {
    if (piVar6 != *(int **)(*(int *)(param_1 + 4) + 4)) {
      do {
        piVar3 = piVar5;
        if ((char)piVar6[10] != '\x01') break;
        piVar5 = (int *)*piVar3;
        if (piVar6 == piVar5) {
          piVar5 = (int *)piVar3[2];
          if ((char)piVar5[10] == '\0') {
            *(undefined1 *)(piVar5 + 10) = 1;
            *(undefined1 *)(piVar3 + 10) = 0;
            FUN_0065cb20(piVar3);
            piVar5 = (int *)piVar3[2];
          }
          if (*(char *)((int)piVar5 + 0x29) == '\0') {
            if ((*(char *)(*piVar5 + 0x28) != '\x01') || (*(char *)(piVar5[2] + 0x28) != '\x01')) {
              if (*(char *)(piVar5[2] + 0x28) == '\x01') {
                *(undefined1 *)(*piVar5 + 0x28) = 1;
                *(undefined1 *)(piVar5 + 10) = 0;
                FUN_006550f0(piVar5);
                piVar5 = (int *)piVar3[2];
              }
              *(char *)(piVar5 + 10) = (char)piVar3[10];
              *(undefined1 *)(piVar3 + 10) = 1;
              *(undefined1 *)(piVar5[2] + 0x28) = 1;
              FUN_0065cb20(piVar3);
              break;
            }
LAB_00663094:
            *(undefined1 *)(piVar5 + 10) = 0;
          }
        }
        else {
          if ((char)piVar5[10] == '\0') {
            *(undefined1 *)(piVar5 + 10) = 1;
            *(undefined1 *)(piVar3 + 10) = 0;
            FUN_006550f0(piVar3);
            piVar5 = (int *)*piVar3;
          }
          if (*(char *)((int)piVar5 + 0x29) == '\0') {
            if ((*(char *)(piVar5[2] + 0x28) == '\x01') && (*(char *)(*piVar5 + 0x28) == '\x01'))
            goto LAB_00663094;
            if (*(char *)(*piVar5 + 0x28) == '\x01') {
              *(undefined1 *)(piVar5[2] + 0x28) = 1;
              *(undefined1 *)(piVar5 + 10) = 0;
              FUN_0065cb20(piVar5);
              piVar5 = (int *)*piVar3;
            }
            *(char *)(piVar5 + 10) = (char)piVar3[10];
            *(undefined1 *)(piVar3 + 10) = 1;
            *(undefined1 *)(*piVar5 + 0x28) = 1;
            FUN_006550f0(piVar3);
            break;
          }
        }
        piVar5 = (int *)piVar3[1];
        piVar6 = piVar3;
      } while (piVar3 != *(int **)(*(int *)(param_1 + 4) + 4));
    }
    *(undefined1 *)(piVar6 + 10) = 1;
  }
  FUN_005d0370(param_3,0x30,0);
  if (*(int *)(param_1 + 8) != 0) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
  }
  *param_2 = param_3;
  ExceptionList = local_c;
  return;
}

