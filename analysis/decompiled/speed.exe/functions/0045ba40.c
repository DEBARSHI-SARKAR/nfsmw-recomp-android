/* speed.exe 0045ba40 FUN_0045ba40; analysis pseudocode, not buildable source.
 * calls 004552b0 FUN_004552b0
 * calls 00432d50 FUN_00432d50
 * calls 007c56b0 __CxxThrowException@8
 * calls 004303b0 FUN_004303b0
 * calls 00453260 FUN_00453260
 * calls 0045b960 FUN_0045b960
 * calls 00455310 FUN_00455310
 * calls 005d0370 FUN_005d0370
 */

/* WARNING: Removing unreachable block (ram,0x0045bb65) */
/* WARNING: Removing unreachable block (ram,0x0045bb75) */
/* WARNING: Removing unreachable block (ram,0x0045bb7f) */
/* WARNING: Removing unreachable block (ram,0x0045bb82) */
/* WARNING: Removing unreachable block (ram,0x0045bb71) */
/* WARNING: Removing unreachable block (ram,0x0045bb90) */
/* WARNING: Removing unreachable block (ram,0x0045bb9d) */
/* WARNING: Removing unreachable block (ram,0x0045bba8) */
/* WARNING: Removing unreachable block (ram,0x0045bba4) */
/* WARNING: Removing unreachable block (ram,0x0045bb98) */
/* WARNING: Removing unreachable block (ram,0x0045bbab) */

void __thiscall FUN_0045ba40(int param_1,undefined4 *param_2,int *param_3)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  undefined1 local_50 [4];
  undefined1 local_4c;
  undefined4 local_3c;
  undefined4 local_38;
  undefined **local_34 [10];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00869f68;
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
  FUN_0045b960();
  piVar8 = (int *)*param_3;
  if (*(char *)((int)piVar8 + 0x21) == '\0') {
    if (*(char *)(param_3[2] + 0x21) == '\0') {
      piVar8 = (int *)param_3[2];
    }
  }
  else {
    piVar8 = (int *)param_3[2];
  }
  piVar6 = (int *)param_3[1];
  if (*(char *)((int)piVar8 + 0x21) == '\0') {
    piVar8[1] = (int)piVar6;
  }
  if (*(int **)(*(int *)(param_1 + 4) + 4) == param_3) {
    *(int **)(*(int *)(param_1 + 4) + 4) = piVar8;
  }
  else if ((int *)*piVar6 == param_3) {
    *piVar6 = (int)piVar8;
  }
  else {
    piVar6[2] = (int)piVar8;
  }
  if ((int *)**(undefined4 **)(param_1 + 4) == param_3) {
    piVar7 = piVar6;
    if (*(char *)((int)piVar8 + 0x21) == '\0') {
      cVar1 = *(char *)(*piVar8 + 0x21);
      piVar2 = (int *)*piVar8;
      piVar7 = piVar8;
      while (piVar4 = piVar2, cVar1 == '\0') {
        piVar2 = (int *)*piVar4;
        cVar1 = *(char *)((int)piVar2 + 0x21);
        piVar7 = piVar4;
      }
    }
    **(undefined4 **)(param_1 + 4) = piVar7;
  }
  iVar3 = *(int *)(param_1 + 4);
  if (*(int **)(iVar3 + 8) == param_3) {
    if (*(char *)((int)piVar8 + 0x21) == '\0') {
      uVar5 = FUN_00453260(piVar8);
      *(undefined4 *)(iVar3 + 8) = uVar5;
    }
    else {
      *(int **)(iVar3 + 8) = piVar6;
    }
  }
  if ((char)param_3[8] == '\x01') {
    if (piVar8 != *(int **)(*(int *)(param_1 + 4) + 4)) {
      do {
        piVar7 = piVar6;
        if ((char)piVar8[8] != '\x01') break;
        piVar6 = (int *)*piVar7;
        if (piVar8 == piVar6) {
          piVar6 = (int *)piVar7[2];
          if ((char)piVar6[8] == '\0') {
            *(undefined1 *)(piVar6 + 8) = 1;
            *(undefined1 *)(piVar7 + 8) = 0;
            FUN_004552b0(piVar7);
            piVar6 = (int *)piVar7[2];
          }
          if (*(char *)((int)piVar6 + 0x21) == '\0') {
            if ((*(char *)(*piVar6 + 0x20) != '\x01') || (*(char *)(piVar6[2] + 0x20) != '\x01')) {
              if (*(char *)(piVar6[2] + 0x20) == '\x01') {
                *(undefined1 *)(*piVar6 + 0x20) = 1;
                *(undefined1 *)(piVar6 + 8) = 0;
                FUN_00455310(piVar6);
                piVar6 = (int *)piVar7[2];
              }
              *(char *)(piVar6 + 8) = (char)piVar7[8];
              *(undefined1 *)(piVar7 + 8) = 1;
              *(undefined1 *)(piVar6[2] + 0x20) = 1;
              FUN_004552b0(piVar7);
              break;
            }
LAB_0045bc84:
            *(undefined1 *)(piVar6 + 8) = 0;
          }
        }
        else {
          if ((char)piVar6[8] == '\0') {
            *(undefined1 *)(piVar6 + 8) = 1;
            *(undefined1 *)(piVar7 + 8) = 0;
            FUN_00455310(piVar7);
            piVar6 = (int *)*piVar7;
          }
          if (*(char *)((int)piVar6 + 0x21) == '\0') {
            if ((*(char *)(piVar6[2] + 0x20) == '\x01') && (*(char *)(*piVar6 + 0x20) == '\x01'))
            goto LAB_0045bc84;
            if (*(char *)(*piVar6 + 0x20) == '\x01') {
              *(undefined1 *)(piVar6[2] + 0x20) = 1;
              *(undefined1 *)(piVar6 + 8) = 0;
              FUN_004552b0(piVar6);
              piVar6 = (int *)*piVar7;
            }
            *(char *)(piVar6 + 8) = (char)piVar7[8];
            *(undefined1 *)(piVar7 + 8) = 1;
            *(undefined1 *)(*piVar6 + 0x20) = 1;
            FUN_00455310(piVar7);
            break;
          }
        }
        piVar6 = (int *)piVar7[1];
        piVar8 = piVar7;
      } while (piVar7 != *(int **)(*(int *)(param_1 + 4) + 4));
    }
    *(undefined1 *)(piVar8 + 8) = 1;
  }
  FUN_005d0370(param_3,0x24,&PTR_LAB_004c5452_1_00890f10);
  if (*(int *)(param_1 + 8) != 0) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -1;
  }
  *param_2 = param_3;
  ExceptionList = local_c;
  return;
}

