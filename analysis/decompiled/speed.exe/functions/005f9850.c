/* speed.exe 005f9850 FUN_005f9850; analysis pseudocode, not buildable source.
 * calls 005df980 FUN_005df980
 * calls 005f2cd0 FUN_005f2cd0
 * calls 005d0370 FUN_005d0370
 * calls 00432d50 FUN_00432d50
 * calls 007c56b0 __CxxThrowException@8
 * calls 005e6390 FUN_005e6390
 * calls 005e6830 FUN_005e6830
 * calls 005e0250 FUN_005e0250
 * calls 005e6890 FUN_005e6890
 * calls 004303b0 FUN_004303b0
 */

/* WARNING: Removing unreachable block (ram,0x005f9966) */
/* WARNING: Removing unreachable block (ram,0x005f9977) */
/* WARNING: Removing unreachable block (ram,0x005f9981) */
/* WARNING: Removing unreachable block (ram,0x005f9984) */
/* WARNING: Removing unreachable block (ram,0x005f9973) */
/* WARNING: Removing unreachable block (ram,0x005f9992) */
/* WARNING: Removing unreachable block (ram,0x005f999f) */
/* WARNING: Removing unreachable block (ram,0x005f99aa) */
/* WARNING: Removing unreachable block (ram,0x005f99a6) */
/* WARNING: Removing unreachable block (ram,0x005f999a) */
/* WARNING: Removing unreachable block (ram,0x005f99ad) */

void __thiscall FUN_005f9850(int param_1,undefined4 *param_2,int *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  undefined1 local_54 [4];
  undefined1 local_50 [4];
  undefined1 local_4c;
  undefined4 local_3c;
  undefined4 local_38;
  undefined **local_34 [10];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00875e78;
  local_c = ExceptionList;
  if (*(char *)((int)param_3 + 0x1d) != '\0') {
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
  FUN_005e6390();
  piVar6 = (int *)*param_3;
  if (*(char *)((int)piVar6 + 0x1d) == '\0') {
    if (*(char *)(param_3[2] + 0x1d) == '\0') {
      piVar6 = (int *)param_3[2];
    }
  }
  else {
    piVar6 = (int *)param_3[2];
  }
  piVar5 = (int *)param_3[1];
  if (*(char *)((int)piVar6 + 0x1d) == '\0') {
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
    if (*(char *)((int)piVar6 + 0x1d) == '\0') {
      piVar3 = (int *)FUN_005df980(piVar6);
    }
    *puVar1 = piVar3;
  }
  iVar2 = *(int *)(param_1 + 4);
  if (*(int **)(iVar2 + 8) == param_3) {
    if (*(char *)((int)piVar6 + 0x1d) == '\0') {
      uVar4 = FUN_005e0250(piVar6);
      *(undefined4 *)(iVar2 + 8) = uVar4;
    }
    else {
      *(int **)(iVar2 + 8) = piVar5;
    }
  }
  if ((char)param_3[7] == '\x01') {
    if (piVar6 != *(int **)(*(int *)(param_1 + 4) + 4)) {
      do {
        piVar3 = piVar5;
        if ((char)piVar6[7] != '\x01') break;
        piVar5 = (int *)*piVar3;
        if (piVar6 == piVar5) {
          piVar5 = (int *)piVar3[2];
          if ((char)piVar5[7] == '\0') {
            *(undefined1 *)(piVar5 + 7) = 1;
            *(undefined1 *)(piVar3 + 7) = 0;
            FUN_005e6830(piVar3);
            piVar5 = (int *)piVar3[2];
          }
          if (*(char *)((int)piVar5 + 0x1d) == '\0') {
            if ((*(char *)(*piVar5 + 0x1c) != '\x01') || (*(char *)(piVar5[2] + 0x1c) != '\x01')) {
              if (*(char *)(piVar5[2] + 0x1c) == '\x01') {
                *(undefined1 *)(*piVar5 + 0x1c) = 1;
                *(undefined1 *)(piVar5 + 7) = 0;
                FUN_005e6890(piVar5);
                piVar5 = (int *)piVar3[2];
              }
              *(char *)(piVar5 + 7) = (char)piVar3[7];
              *(undefined1 *)(piVar3 + 7) = 1;
              *(undefined1 *)(piVar5[2] + 0x1c) = 1;
              FUN_005e6830(piVar3);
              break;
            }
LAB_005f9a88:
            *(undefined1 *)(piVar5 + 7) = 0;
          }
        }
        else {
          if ((char)piVar5[7] == '\0') {
            *(undefined1 *)(piVar5 + 7) = 1;
            *(undefined1 *)(piVar3 + 7) = 0;
            FUN_005e6890(piVar3);
            piVar5 = (int *)*piVar3;
          }
          if (*(char *)((int)piVar5 + 0x1d) == '\0') {
            if ((*(char *)(piVar5[2] + 0x1c) == '\x01') && (*(char *)(*piVar5 + 0x1c) == '\x01'))
            goto LAB_005f9a88;
            if (*(char *)(*piVar5 + 0x1c) == '\x01') {
              *(undefined1 *)(piVar5[2] + 0x1c) = 1;
              *(undefined1 *)(piVar5 + 7) = 0;
              FUN_005e6830(piVar5);
              piVar5 = (int *)*piVar3;
            }
            *(char *)(piVar5 + 7) = (char)piVar3[7];
            *(undefined1 *)(piVar3 + 7) = 1;
            *(undefined1 *)(*piVar5 + 0x1c) = 1;
            FUN_005e6890(piVar3);
            break;
          }
        }
        piVar5 = (int *)piVar3[1];
        piVar6 = piVar3;
      } while (piVar3 != *(int **)(*(int *)(param_1 + 4) + 4));
    }
    *(undefined1 *)(piVar6 + 7) = 1;
  }
  FUN_005f2cd0(local_54,*(undefined4 *)param_3[5],(undefined4 *)param_3[5]);
  if (param_3[5] != 0) {
    FUN_005d0370(param_3[5],0x10,0);
  }
  param_3[5] = 0;
  param_3[6] = 0;
  FUN_005d0370(param_3,0x20,0);
  if (*(int *)(param_1 + 8) != 0) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
  }
  *param_2 = param_3;
  ExceptionList = local_c;
  return;
}

