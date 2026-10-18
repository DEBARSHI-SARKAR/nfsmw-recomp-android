/* speed.exe 005f0980 FUN_005f0980; analysis pseudocode, not buildable source.
 * calls 005e6d60 FUN_005e6d60
 * calls 005d0370 FUN_005d0370
 * calls 00432d50 FUN_00432d50
 * calls 005e66b0 FUN_005e66b0
 * calls 007c56b0 __CxxThrowException@8
 * calls 005e6d00 FUN_005e6d00
 * calls 005e00e0 FUN_005e00e0
 * calls 005dfd40 FUN_005dfd40
 * calls 004303b0 FUN_004303b0
 */

/* WARNING: Removing unreachable block (ram,0x005f0a94) */
/* WARNING: Removing unreachable block (ram,0x005f0aa5) */
/* WARNING: Removing unreachable block (ram,0x005f0aaf) */
/* WARNING: Removing unreachable block (ram,0x005f0ab2) */
/* WARNING: Removing unreachable block (ram,0x005f0aa1) */
/* WARNING: Removing unreachable block (ram,0x005f0ac0) */
/* WARNING: Removing unreachable block (ram,0x005f0acd) */
/* WARNING: Removing unreachable block (ram,0x005f0ad8) */
/* WARNING: Removing unreachable block (ram,0x005f0ad4) */
/* WARNING: Removing unreachable block (ram,0x005f0ac8) */
/* WARNING: Removing unreachable block (ram,0x005f0adb) */

void __thiscall FUN_005f0980(int param_1,undefined4 *param_2,int *param_3)

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
  puStack_8 = &LAB_00875848;
  local_c = ExceptionList;
  if (*(char *)((int)param_3 + 0x21) != '\0') {
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
  FUN_005e66b0();
  piVar6 = (int *)*param_3;
  if (*(char *)((int)piVar6 + 0x21) == '\0') {
    if (*(char *)(param_3[2] + 0x21) == '\0') {
      piVar6 = (int *)param_3[2];
    }
  }
  else {
    piVar6 = (int *)param_3[2];
  }
  piVar5 = (int *)param_3[1];
  if (*(char *)((int)piVar6 + 0x21) == '\0') {
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
    if (*(char *)((int)piVar6 + 0x21) == '\0') {
      piVar3 = (int *)FUN_005dfd40(piVar6);
    }
    *puVar1 = piVar3;
  }
  iVar2 = *(int *)(param_1 + 4);
  if (*(int **)(iVar2 + 8) == param_3) {
    if (*(char *)((int)piVar6 + 0x21) == '\0') {
      uVar4 = FUN_005e00e0(piVar6);
      *(undefined4 *)(iVar2 + 8) = uVar4;
    }
    else {
      *(int **)(iVar2 + 8) = piVar5;
    }
  }
  if ((char)param_3[8] == '\x01') {
    if (piVar6 != *(int **)(*(int *)(param_1 + 4) + 4)) {
      do {
        piVar3 = piVar5;
        if ((char)piVar6[8] != '\x01') break;
        piVar5 = (int *)*piVar3;
        if (piVar6 == piVar5) {
          piVar5 = (int *)piVar3[2];
          if ((char)piVar5[8] == '\0') {
            *(undefined1 *)(piVar5 + 8) = 1;
            *(undefined1 *)(piVar3 + 8) = 0;
            FUN_005e6d00(piVar3);
            piVar5 = (int *)piVar3[2];
          }
          if (*(char *)((int)piVar5 + 0x21) == '\0') {
            if ((*(char *)(*piVar5 + 0x20) != '\x01') || (*(char *)(piVar5[2] + 0x20) != '\x01')) {
              if (*(char *)(piVar5[2] + 0x20) == '\x01') {
                *(undefined1 *)(*piVar5 + 0x20) = 1;
                *(undefined1 *)(piVar5 + 8) = 0;
                FUN_005e6d60(piVar5);
                piVar5 = (int *)piVar3[2];
              }
              *(char *)(piVar5 + 8) = (char)piVar3[8];
              *(undefined1 *)(piVar3 + 8) = 1;
              *(undefined1 *)(piVar5[2] + 0x20) = 1;
              FUN_005e6d00(piVar3);
              break;
            }
LAB_005f0bb8:
            *(undefined1 *)(piVar5 + 8) = 0;
          }
        }
        else {
          if ((char)piVar5[8] == '\0') {
            *(undefined1 *)(piVar5 + 8) = 1;
            *(undefined1 *)(piVar3 + 8) = 0;
            FUN_005e6d60(piVar3);
            piVar5 = (int *)*piVar3;
          }
          if (*(char *)((int)piVar5 + 0x21) == '\0') {
            if ((*(char *)(piVar5[2] + 0x20) == '\x01') && (*(char *)(*piVar5 + 0x20) == '\x01'))
            goto LAB_005f0bb8;
            if (*(char *)(*piVar5 + 0x20) == '\x01') {
              *(undefined1 *)(piVar5[2] + 0x20) = 1;
              *(undefined1 *)(piVar5 + 8) = 0;
              FUN_005e6d00(piVar5);
              piVar5 = (int *)*piVar3;
            }
            *(char *)(piVar5 + 8) = (char)piVar3[8];
            *(undefined1 *)(piVar3 + 8) = 1;
            *(undefined1 *)(*piVar5 + 0x20) = 1;
            FUN_005e6d60(piVar3);
            break;
          }
        }
        piVar5 = (int *)piVar3[1];
        piVar6 = piVar3;
      } while (piVar3 != *(int **)(*(int *)(param_1 + 4) + 4));
    }
    *(undefined1 *)(piVar6 + 8) = 1;
  }
  iVar2 = param_3[5];
  if (iVar2 != 0) {
    FUN_005d0370(iVar2,(param_3[7] - iVar2 >> 2) << 2,0);
  }
  param_3[5] = 0;
  param_3[6] = 0;
  param_3[7] = 0;
  FUN_005d0370(param_3,0x24,0);
  if (*(int *)(param_1 + 8) != 0) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
  }
  *param_2 = param_3;
  ExceptionList = local_c;
  return;
}

