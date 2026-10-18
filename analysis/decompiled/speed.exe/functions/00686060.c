/* speed.exe 00686060 FUN_00686060; analysis pseudocode, not buildable source.
 * calls 00684a10 FUN_00684a10
 * calls 00623b90 FUN_00623b90
 * calls 00669230 FUN_00669230
 * calls 005d59f0 FUN_005d59f0
 * calls 006702d0 FUN_006702d0
 * calls 00668fe0 FUN_00668fe0
 * calls 0067d270 FUN_0067d270
 * calls 00680840 FUN_00680840
 * calls 00627400 FUN_00627400
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00686060(int param_1,float param_2)

{
  int *piVar1;
  char cVar2;
  undefined1 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  float10 fVar7;
  undefined4 local_14;
  int local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0087b77f;
  pvStack_c = ExceptionList;
  local_14 = DAT_0092c590;
  ExceptionList = &pvStack_c;
  FUN_0067d270(&local_10,&local_14);
  if ((((local_10 == *(int *)(param_1 + 0x94)) || (*(int *)(local_10 + 0x10) == 0)) ||
      (*(char *)(*(int *)(local_10 + 0x10) + 0x2d) != '\0')) ||
     (*(int **)(param_1 + 0x108) == (int *)0x0)) {
LAB_006860ff:
    *(undefined4 *)(param_1 + 0x180) = 0;
LAB_00686105:
    *(undefined4 *)(param_1 + 0x184) = 0;
  }
  else {
    cVar2 = (**(code **)(**(int **)(param_1 + 0x108) + 8))();
    if (cVar2 == '\0') goto LAB_006860ff;
    cVar2 = (**(code **)(**(int **)(param_1 + 0x108) + 4))();
    if (cVar2 == '\0') {
      *(float *)(param_1 + 0x180) = param_2 + *(float *)(param_1 + 0x180);
      goto LAB_00686105;
    }
    *(undefined4 *)(param_1 + 0x180) = 0;
    *(float *)(param_1 + 0x184) = param_2 + *(float *)(param_1 + 0x184);
  }
  piVar1 = (int *)(param_1 + 0xac);
  (**(code **)(*(int *)(param_1 + 0xac) + 0x18))();
  if (*(int **)(param_1 + 0xec) != (int *)0x0) {
    cVar2 = (**(code **)(**(int **)(param_1 + 0xec) + 0x1c))();
    if (cVar2 == *(char *)(param_1 + 0x17c)) {
      uVar3 = (**(code **)(**(int **)(param_1 + 0xec) + 0x1c))();
      *(undefined1 *)(param_1 + 0x17c) = uVar3;
    }
    else {
      cVar2 = (**(code **)(**(int **)(param_1 + 0xec) + 0x1c))();
      *(char *)(param_1 + 0x17c) = cVar2;
      if (cVar2 == '\0') {
        piVar4 = (int *)FUN_005d59f0(&LAB_00668a90);
        if (piVar4 != (int *)0x0) {
          (**(code **)(*piVar4 + 0x1c))();
        }
      }
    }
  }
  if (*(int *)(param_1 + 0x158) != 0) {
    FUN_00669230();
    FUN_00680840();
  }
  if (*(int *)(param_1 + 0x158) != 1) {
    *(undefined4 *)(param_1 + 0x128) = 0;
    if (*(int *)(param_1 + 0x158) != 2) {
      *(undefined4 *)(param_1 + 0x130) = 0;
      *(undefined4 *)(param_1 + 0x124) = 0;
      ExceptionList = pvStack_c;
      return;
    }
    if (*(int **)(param_1 + 0xf0) != (int *)0x0) {
      uVar6 = (**(code **)(**(int **)(param_1 + 0xf0) + 8))();
      *(undefined4 *)(param_1 + 0x130) = uVar6;
      *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(param_1 + 0x120);
      ExceptionList = pvStack_c;
      return;
    }
    *(undefined4 *)(param_1 + 0x130) = 0;
    *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(param_1 + 0x120);
    ExceptionList = pvStack_c;
    return;
  }
  cVar2 = (**(code **)(**(int **)(param_1 + 0xec) + 0x34))();
  if (cVar2 != '\0') {
    cVar2 = (**(code **)(*piVar1 + 0x7c))();
    if (cVar2 != '\0') {
      uVar6 = 1;
      goto LAB_006861b1;
    }
  }
  uVar6 = 0;
LAB_006861b1:
  local_10 = DAT_0092c658;
  FUN_00684a10(&local_10,uVar6);
  if (*(int **)(param_1 + 0xfc) == (int *)0x0) {
    *(undefined4 *)(param_1 + 0x124) = *(undefined4 *)(param_1 + 0x120);
  }
  else {
    cVar2 = (**(code **)(**(int **)(param_1 + 0xfc) + 0x10))();
    if (cVar2 == '\0') {
      fVar7 = (float10)(**(code **)(**(int **)(param_1 + 0xfc) + 0x18))();
      *(float *)(param_1 + 0x124) = (float)fVar7;
    }
  }
  if (*(int **)(param_1 + 0xf0) != (int *)0x0) {
    iVar5 = (**(code **)(**(int **)(param_1 + 0xf0) + 0x4c))();
    if (((iVar5 == 0) && (*(int *)(param_1 + 0x130) != 0)) && (*(int *)(param_1 + 0x140) == 0)) {
      local_10 = FUN_00627400(0xc);
      uStack_4 = 0;
      if (local_10 != 0) {
        FUN_00623b90(*(undefined4 *)(param_1 + 0x34));
      }
      uStack_4 = 0xffffffff;
    }
    *(int *)(param_1 + 0x130) = iVar5;
  }
  if ((*(int *)(param_1 + 0xf0) == 0) || (*(int *)(param_1 + 0x130) == 0)) {
    *(float *)(param_1 + 0x128) = param_2 + *(float *)(param_1 + 0x128);
  }
  else {
    *(undefined4 *)(param_1 + 0x128) = 0;
  }
  cVar2 = (**(code **)(*piVar1 + 0x20))();
  if (cVar2 == '\0') {
    if ((_DAT_00890968 < *(float *)(param_1 + 0x160)) && (*(int **)(param_1 + 0xfc) != (int *)0x0))
    {
      cVar2 = (**(code **)(**(int **)(param_1 + 0xfc) + 0x10))();
      if (cVar2 == '\0') {
        FUN_00668fe0(param_2);
      }
      else if (*(int *)(param_1 + 0x144) == 1) {
        *(undefined4 *)(param_1 + 0x160) = 0;
        *(undefined4 *)(param_1 + 0x164) = 0;
      }
      fVar7 = (float10)(**(code **)(*piVar1 + 0x90))();
      if ((float10)_DAT_008913e0 < fVar7) {
        *(undefined4 *)(param_1 + 0x160) = 0;
        *(undefined4 *)(param_1 + 0x164) = 0;
        ExceptionList = pvStack_c;
        return;
      }
    }
  }
  else {
    FUN_006702d0(param_2);
  }
  ExceptionList = pvStack_c;
  return;
}

