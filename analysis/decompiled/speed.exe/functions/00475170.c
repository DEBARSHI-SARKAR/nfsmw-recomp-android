/* speed.exe 00475170 FUN_00475170; analysis pseudocode, not buildable source.
 * calls 00468a90 FUN_00468a90
 * calls 0045f340 FUN_0045f340
 * calls 005d59f0 FUN_005d59f0
 * calls 0040e100 FUN_0040e100
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_00475170(int param_1,float *param_2)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  float *pfVar6;
  float10 fVar7;
  float local_38;
  int *piStack_34;
  int *local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  
  local_38 = 300.0;
  local_30 = DAT_0092ce9c;
  if (DAT_0092ce9c != DAT_0092ce9c + DAT_0092cea4) {
    do {
      piVar1 = (int *)*local_30;
      if ((((piVar1 != (int *)0x0) && (cVar3 = (**(code **)(*piVar1 + 0x88))(), cVar3 != '\0')) &&
          (piVar4 = (int *)(**(code **)(*piVar1 + 0x44))(), *piVar4 == DAT_0092c52c)) &&
         (((piVar4 = (int *)FUN_005d59f0(&LAB_00403700), piVar4 != (int *)0x0 &&
           (iVar5 = (**(code **)(*piVar4 + 100))(), iVar5 != 0)) &&
          ((*(char *)(iVar5 + 0x2c) != '\0' &&
           ((*(int **)(iVar5 + 0x1c) != (int *)0x0 &&
            (iVar2 = *(int *)(*(int *)(param_1 + 0x254) + 0x94),
            iVar5 = (**(code **)(**(int **)(iVar5 + 0x1c) + 0x70))(), iVar5 == iVar2)))))))) {
        piStack_34 = (int *)0x0;
        cVar3 = FUN_0040e100(&piStack_34);
        piVar4 = piStack_34;
        if ((cVar3 != '\0') &&
           (((piStack_34 != (int *)0x0 &&
             (cVar3 = (**(code **)(*piStack_34 + 0x14))(), cVar3 != '\0')) &&
            (fVar7 = (float10)(**(code **)(*piVar4 + 0x74))(),
            fVar7 < (float10)_DAT_00890968 != (fVar7 == (float10)_DAT_00890968))))) {
          pfVar6 = (float *)(**(code **)(*piVar1 + 0xc))();
          fStack_2c = *pfVar6;
          fStack_28 = pfVar6[1];
          fStack_24 = pfVar6[2];
          fStack_1c = -fStack_2c;
          fStack_20 = fStack_24;
          fStack_18 = fStack_28;
          cVar3 = FUN_00468a90(*(int *)(param_1 + 0x1c) + 0x40,&fStack_20);
          if ((cVar3 == '\0') &&
             (fVar7 = (float10)FUN_0045f340(*(int *)(param_1 + 0x254) + 0x20,&fStack_20),
             fVar7 < (float10)local_38)) {
            local_38 = (float)fVar7;
            *param_2 = fStack_20;
            param_2[1] = fStack_1c;
            param_2[2] = fStack_18;
          }
        }
      }
      local_30 = local_30 + 1;
    } while (local_30 != DAT_0092ce9c + DAT_0092cea4);
    if (local_38 < _DAT_00894ae4) {
      return 1;
    }
  }
  return 0;
}

