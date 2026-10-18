/* speed.exe 00714aa0 FUN_00714aa0; analysis pseudocode, not buildable source.
 * calls 00702300 FUN_00702300
 * calls 00708390 FUN_00708390
 * calls 0070e9a0 FUN_0070e9a0
 * calls 004bac70 FUN_004bac70
 * calls 00712180 FUN_00712180
 * calls 00713750 FUN_00713750
 * calls 0045da70 FUN_0045da70
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00714aa0(int *param_1)

{
  void **ppvVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  uint uVar8;
  float10 fVar9;
  int *local_24;
  undefined **local_20;
  int local_18;
  int local_14;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar5 = DAT_00993cc8;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008800f8;
  local_c = ExceptionList;
  piVar7 = *(int **)(DAT_00993cc8 + 0x130);
  if (*(int *)(DAT_00993cc8 + 0x1d4) == 2) {
    ExceptionList = &local_c;
    (**(code **)(*param_1 + 0xc))(999);
    ExceptionList = local_10;
    return;
  }
  if (*(int *)(DAT_00993cc8 + 0xdc) == 0) {
    return;
  }
  ppvVar1 = &local_c;
  if (DAT_00992230 != 0) {
    if ((*(uint *)(DAT_00992230 + 0x28) >> 3 & 1) != 0) {
      return;
    }
    ExceptionList = &local_c;
    cVar2 = FUN_004bac70();
    ppvVar1 = ExceptionList;
    if (cVar2 == '\0') {
      ExceptionList = local_c;
      return;
    }
  }
  ExceptionList = ppvVar1;
  if (*(int *)(iVar5 + 0x1d4) == 1) {
    (**(code **)(*param_1 + 0xc))(2);
    ExceptionList = local_10;
    return;
  }
  local_18 = 0;
  local_14 = 0;
  local_10 = (void *)0x0;
  local_20 = &PTR_FUN_008b2658;
  local_4 = 0;
  if (*(int *)(iVar5 + 0x5c) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(iVar5 + 0x60) - *(int *)(iVar5 + 0x5c) >> 3;
  }
  FUN_00712180(iVar3);
  iVar3 = *(int *)(iVar5 + 0x5c);
  if (iVar3 != *(int *)(iVar5 + 0x60)) {
    do {
      local_24 = *(int **)(iVar3 + 4);
      cVar2 = (**(code **)(*local_24 + 0x60))();
      if (cVar2 != '\0') {
        FUN_00713750(&local_24);
      }
      iVar3 = iVar3 + 8;
    } while (iVar3 != *(int *)(iVar5 + 0x60));
  }
  if (local_18 == 0) {
LAB_00714c2d:
    (**(code **)(*param_1 + 0xc))(999);
  }
  else {
    uVar8 = local_14 - local_18 >> 2;
    if (uVar8 == 1) {
      param_1[4] = param_1[4] | 1;
    }
    else if (uVar8 == 0) goto LAB_00714c2d;
    iVar3 = (**(code **)(**(int **)(iVar5 + 0x130) + 0x68))();
    if ((((param_1[0xb] == iVar3) ||
         (iVar3 = (**(code **)(**(int **)(iVar5 + 0x130) + 0x68))(), iVar3 == 4)) ||
        (iVar3 = (**(code **)(**(int **)(iVar5 + 0x130) + 0x68))(), iVar3 == 7)) || (uVar8 < 2)) {
      cVar2 = (**(code **)(*piVar7 + 0x30))();
      if ((cVar2 == '\0') && (cVar2 = (**(code **)(*piVar7 + 0x58))(), cVar2 == '\0')) {
        if (*(int *)(iVar5 + 0x1d4) == 0) {
          iVar3 = (**(code **)(*piVar7 + 0x68))();
          if ((((iVar3 == 1) || (iVar3 = (**(code **)(*piVar7 + 0x68))(), iVar3 == 2)) ||
              ((iVar3 = (**(code **)(*piVar7 + 0x68))(), iVar3 == 3 ||
               (iVar3 = (**(code **)(*piVar7 + 0x68))(), iVar3 == 6)))) &&
             ((iVar3 = FUN_00702300(), iVar3 == 0 && (1 < uVar8)))) {
            (**(code **)(*param_1 + 0xc))(5);
            goto LAB_00714e9d;
          }
          iVar3 = *(int *)(iVar5 + 0x5c);
          if (iVar3 != *(int *)(iVar5 + 0x60)) {
            do {
              cVar2 = (**(code **)(**(int **)(iVar3 + 4) + 0x1ac))();
              if (cVar2 != '\0') {
                (**(code **)(**(int **)(iVar3 + 4) + 300))();
              }
              iVar3 = iVar3 + 8;
            } while (iVar3 != *(int *)(iVar5 + 0x60));
          }
          if (*(float *)(*(int *)(iVar5 + 0x184) + 0xa8) < *(float *)(iVar5 + 0x13c)) {
            (**(code **)(*param_1 + 0xc))(2);
            goto LAB_00714e9d;
          }
        }
        if (*(int *)(iVar5 + 0xec) == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = *(int *)(iVar5 + 0xf0) - *(int *)(iVar5 + 0xec) >> 2;
        }
        if (((uVar4 < (uint)param_1[10]) ||
            (fVar9 = (float10)(**(code **)(*piVar7 + 0x1c))(), (float10)_DAT_008910f0 < fVar9)) ||
           (uVar8 == 1)) {
          if (*(int *)(iVar5 + 0xec) == 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = *(int *)(iVar5 + 0xf0) - *(int *)(iVar5 + 0xec) >> 2;
          }
          param_1[10] = iVar5;
          param_1[0xc] = 0x20;
          (**(code **)(*param_1 + 0xc))(4);
        }
        else {
          iVar5 = FUN_00702300();
          param_1[10] = iVar5;
        }
      }
      else {
        uVar6 = (**(code **)(*piVar7 + 0x68))();
        switch(uVar6) {
        case 1:
          if (1 < uVar8) {
            fVar9 = (float10)FUN_0045da70(0x3f800000);
            if (fVar9 <= (float10)_DAT_008b0e70) {
              (**(code **)(**(int **)(iVar5 + 0xdc) + 0xac))();
            }
            else {
              piVar7 = (int *)FUN_00708390(0,0);
              if (piVar7 != (int *)0x0) {
                (**(code **)(*piVar7 + 0xf8))();
                (**(code **)(*param_1 + 0xc))(1000);
                break;
              }
            }
            (**(code **)(*param_1 + 0xc))(1000);
          }
          break;
        case 2:
        case 3:
          if (1 < uVar8) {
            fVar9 = (float10)FUN_0045da70(0x3f800000);
            if (fVar9 <= (float10)_DAT_008b0e70) {
              (**(code **)(*param_1 + 0x44))();
              (**(code **)(*param_1 + 0xc))(1000);
            }
            else {
              (**(code **)(**(int **)(iVar5 + 0xdc) + 0xac))();
              (**(code **)(*param_1 + 0xc))(1000);
            }
          }
          break;
        default:
          piVar7 = (int *)FUN_00708390(0,0);
          if (piVar7 != (int *)0x0) {
            (**(code **)(*piVar7 + 300))();
          }
          break;
        case 5:
          if (*(int **)(iVar5 + 0xe0) != (int *)0x0) {
            (**(code **)(**(int **)(iVar5 + 0xe0) + 0x90))(1);
          }
        }
      }
    }
    else {
      (**(code **)(**(int **)(iVar5 + 0xdc) + 0xc0))(1);
      (**(code **)(*param_1 + 0xc))(1);
    }
  }
LAB_00714e9d:
  local_4 = 0xffffffff;
  FUN_0070e9a0();
  ExceptionList = local_c;
  return;
}

