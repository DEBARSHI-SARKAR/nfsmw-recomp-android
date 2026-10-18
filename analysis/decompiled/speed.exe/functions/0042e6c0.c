/* speed.exe 0042e6c0 FUN_0042e6c0; analysis pseudocode, not buildable source.
 * calls 0041ecd0 FUN_0041ecd0
 * calls 005d59f0 FUN_005d59f0
 * calls 00426740 FUN_00426740
 * calls 0076e220 FUN_0076e220
 * calls 00425200 FUN_00425200
 * calls 0077b9e0 FUN_0077b9e0
 * calls 00426d50 FUN_00426d50
 * calls 007862d0 FUN_007862d0
 * calls 00410f90 FUN_00410f90
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0042e6c0(int param_1,undefined4 *param_2)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int *unaff_EBP;
  float10 fVar6;
  undefined1 auStack_314 [4];
  float local_310;
  undefined4 local_30c;
  float local_308;
  undefined4 local_304;
  undefined4 local_300;
  undefined4 local_2fc;
  undefined4 local_2f8;
  float fStack_260;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0086834b;
  local_c = ExceptionList;
  local_30c = *param_2;
  local_308 = (float)param_2[1];
  local_304 = param_2[2];
  local_300 = param_2[3];
  local_2fc = param_2[4];
  local_2f8 = param_2[5];
  ExceptionList = &local_c;
  FUN_00426d50(*(int *)(param_1 + 0x94) + 1);
  piVar2 = (int *)FUN_0041ecd0(param_2 + 6);
  if ((((piVar2 != (int *)0x0) && (local_310 = (float)FUN_005d59f0(&LAB_004038e0), local_310 != 0.0)
       ) && (piVar3 = (int *)(**(code **)(*piVar2 + 4))(), piVar3 != (int *)0x0)) &&
     (iVar4 = (**(code **)(*piVar3 + 0x54))(), iVar4 != 0)) {
    piVar3 = (int *)(**(code **)(*piVar3 + 0x54))();
    fVar6 = (float10)(**(code **)(*piVar3 + 0x14))();
    cVar1 = FUN_00410f90((float)fVar6);
    if (cVar1 == '\0') {
      local_308 = local_308 + _DAT_0089096c;
      cVar1 = (**(code **)(*piVar2 + 0x68))(&local_30c,&local_300);
      (**(code **)(*piVar2 + 0x80))();
      piVar3 = (int *)(**(code **)(*piVar2 + 0xac))();
      (**(code **)(*piVar3 + 0x88))();
      if (cVar1 == '\0') {
        FUN_0077b9e0();
        local_c = (void *)0x0;
        FUN_007862d0(auStack_314,&local_308,0,0);
        local_310 = fStack_260 + _DAT_0089096c;
        (**(code **)(*piVar3 + 0x98))();
        local_c = (void *)0xffffffff;
        FUN_0076e220();
      }
      if (*(char *)(param_2 + 0xe) == '\0') {
        if (*(char *)((int)param_2 + 0x39) == '\0') {
          (**(code **)(*unaff_EBP + 4))();
          *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + 1;
          ExceptionList = local_c;
          return 1;
        }
        (**(code **)(*unaff_EBP + 8))();
        *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + 1;
        ExceptionList = local_c;
        return 1;
      }
      piVar3 = (int *)FUN_00425200(1);
      uVar5 = (**(code **)(*piVar3 + 4))();
      piVar3 = (int *)FUN_00426740(uVar5);
      (**(code **)(*unaff_EBP + 0x18))(0,uVar5);
      (**(code **)(*piVar3 + 0x78))(piVar2);
      *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + 1;
      ExceptionList = local_c;
      return 1;
    }
  }
  ExceptionList = local_c;
  return 0;
}

