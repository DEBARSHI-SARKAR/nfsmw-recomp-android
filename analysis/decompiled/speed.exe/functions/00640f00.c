/* speed.exe 00640f00 FUN_00640f00; analysis pseudocode, not buildable source.
 * calls 0040e020 FUN_0040e020
 * calls 00460dd0 FUN_00460dd0
 * calls 005cc240 FUN_005cc240
 * calls 006e8de0 FUN_006e8de0
 * calls 004790e0 FUN_004790e0
 * calls 005fbe70 FUN_005fbe70
 * calls 00469120 FUN_00469120
 * calls 005cb5d0 FUN_005cb5d0
 * calls 00460c50 FUN_00460c50
 * calls 00410120 FUN_00410120
 * calls 00629a90 FUN_00629a90
 * calls 0046e2d0 FUN_0046e2d0
 * calls 00425370 FUN_00425370
 * calls 004647c0 FUN_004647c0
 * calls 0041cb50 FUN_0041cb50
 * calls 005d59f0 FUN_005d59f0
 * calls 00410070 FUN_00410070
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall
FUN_00640f00(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int *piVar1;
  float fVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  undefined4 unaff_ESI;
  float10 fVar11;
  int local_94;
  int local_90;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float local_64;
  float fStack_60;
  float fStack_5c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_008797d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = 0x30;
  local_4 = 0;
  *param_1 = &PTR_LAB_008a7d98;
  param_1[2] = param_2;
  uVar4 = FUN_00629a90();
  param_1[3] = uVar4;
  uVar4 = FUN_00629a90();
  param_1[4] = uVar4;
  param_1[5] = param_5;
  param_1[6] = param_6;
  uVar4 = FUN_00629a90(param_1);
  param_1[7] = uVar4;
  uVar4 = FUN_00629a90(param_1,param_8);
  param_1[8] = uVar4;
  if (param_1[3] == 0) {
    ExceptionList = local_c;
    return param_1;
  }
  iVar5 = FUN_00460c50();
  if (iVar5 == 0) {
    ExceptionList = local_c;
    return param_1;
  }
  if (DAT_009885c8 != 0) {
    ExceptionList = local_c;
    return param_1;
  }
  local_94 = 0;
  iVar5 = FUN_00460dd0();
  if (iVar5 == 0) {
    local_94 = 2;
  }
  else {
    iVar5 = FUN_00460dd0();
    if (iVar5 == 0) {
      local_94 = 1;
    }
    else {
      iVar5 = FUN_00460dd0();
      if (iVar5 == 0) {
        if (DAT_0090d9d8 == '\0') {
          if (*(char *)(*(int *)(DAT_0091cf90 + 0x10) + 0x47) == '\0') {
            ExceptionList = local_c;
            return param_1;
          }
          cVar3 = FUN_00469120();
          if (cVar3 != '\0') {
            ExceptionList = local_c;
            return param_1;
          }
          if (DAT_00911055 != '\0') {
            ExceptionList = local_c;
            return param_1;
          }
          if ((*(int *)(DAT_0091e000 + 0x1968) != 0) && (cVar3 = FUN_005fbe70(), cVar3 == '\0')) {
            ExceptionList = local_c;
            return param_1;
          }
          fVar11 = (float10)FUN_006e8de0();
          if ((float10)_DAT_00890d3c < fVar11 - (float10)_DAT_0090d9d4) {
            ExceptionList = local_c;
            return param_1;
          }
          piVar8 = (int *)FUN_00425370();
          if (piVar8 == (int *)0x0) {
            ExceptionList = local_c;
            return param_1;
          }
          piVar9 = (int *)(**(code **)(*piVar8 + 0xac))();
          if (((piVar9 != (int *)0x0) &&
              (piVar9 = (int *)(**(code **)(*piVar9 + 0xa0))(), piVar9 != (int *)0x0)) &&
             (cVar3 = (**(code **)(*piVar9 + 0x74))(), cVar3 != '\0')) {
            ExceptionList = local_c;
            return param_1;
          }
          piVar8 = (int *)(**(code **)(*piVar8 + 4))();
          if (piVar8 == (int *)0x0) {
            ExceptionList = local_c;
            return param_1;
          }
          piVar9 = DAT_0092ce9c;
          piVar10 = DAT_0092ce9c;
          if (DAT_0092ce9c == DAT_0092ce9c + DAT_0092cea4) {
            ExceptionList = local_c;
            return param_1;
          }
          do {
            piVar1 = (int *)*piVar10;
            if (((((piVar1 != (int *)0x0) &&
                  (cVar3 = (**(code **)(*piVar1 + 0x88))(), piVar9 = DAT_0092ce9c, cVar3 != '\0'))
                 && ((piVar6 = (int *)(**(code **)(*piVar1 + 0x44))(), piVar9 = DAT_0092ce9c,
                     *piVar6 == DAT_0092c52c &&
                     ((cVar3 = FUN_0040e020(), piVar9 = DAT_0092ce9c, cVar3 != '\0' &&
                      (iVar5 = (**(code **)(_DAT_00000000 + 100))(), piVar9 = DAT_0092ce9c,
                      iVar5 != 0)))))) && (*(char *)(iVar5 + 0x2c) != '\0')) &&
               (piVar6 = *(int **)(iVar5 + 0x1c), piVar6 != (int *)0x0)) {
              iVar5 = (**(code **)(*piVar8 + 0x70))();
              iVar7 = (**(code **)(*piVar6 + 0x70))();
              piVar9 = DAT_0092ce9c;
              if (iVar7 == iVar5) {
                (**(code **)(*piVar8 + 0x60))();
                (**(code **)(*piVar1 + 0xc))();
                fVar11 = (float10)FUN_00410120();
                piVar9 = (int *)(**(code **)(*piVar8 + 0x54))();
                fVar2 = _DAT_00891040;
                if (piVar9 != (int *)0x0) {
                  (**(code **)(*piVar9 + 0x34))();
                  FUN_00410070();
                  fVar2 = (fStack_70 * local_64 + fStack_6c * fStack_60 + fStack_68 * fStack_5c +
                          _DAT_0089096c) * _DAT_00894d58 + _DAT_00894b64;
                }
                piVar9 = DAT_0092ce9c;
                if ((float)fVar11 < fVar2) break;
              }
            }
            piVar10 = piVar10 + 1;
            if (piVar10 == piVar9 + DAT_0092cea4) {
              ExceptionList = local_c;
              return param_1;
            }
          } while( true );
        }
        local_94 = 4;
      }
      else {
        iVar5 = FUN_00460dd0();
        if (iVar5 == 0) {
          local_94 = 0;
        }
        else if (param_1[4] != 0) {
          ExceptionList = local_c;
          return param_1;
        }
      }
    }
  }
  FUN_0046e2d0();
  FUN_005cc240("NISActivity");
  iVar5 = FUN_0041cb50();
  if ((iVar5 != 0) && (piVar8 = (int *)FUN_005d59f0(), piVar8 != (int *)0x0)) {
    if (local_94 != 4) {
      local_90 = DAT_0092cf64;
      if (7 < DAT_0092cf64) {
        local_90 = 8;
      }
      FUN_00425370();
      iVar5 = 0;
      if (0 < local_90) {
        do {
          iVar5 = iVar5 + 1;
          FUN_004647c0();
          FUN_005cc240();
          (**(code **)(*piVar8 + 4))();
          FUN_004790e0();
        } while (iVar5 < local_90);
      }
    }
    if (((param_1[2] == 0) && (piVar9 = (int *)FUN_00425370(), piVar9 != (int *)0x0)) &&
       (piVar9 = (int *)(**(code **)(*piVar9 + 4))(), piVar9 != (int *)0x0)) {
      (**(code **)(*piVar9 + 100))();
    }
    FUN_005cb5d0();
    (**(code **)(*piVar8 + 0x1c))();
    (**(code **)(*piVar8 + 0x20))();
    (**(code **)(*piVar8 + 0xc))();
    (**(code **)(*piVar8 + 0x28))(unaff_ESI,param_1[3],param_1[6]);
    if (((DAT_0092d884 != 0) && (piVar8 = (int *)*DAT_0092d87c, piVar8 != (int *)0x0)) &&
       (cVar3 = (**(code **)(*piVar8 + 0x40))(), cVar3 != '\0')) {
      (**(code **)(*piVar8 + 0x50))();
    }
  }
  ExceptionList = local_c;
  return param_1;
}

