/* speed.exe 0069abf0 FUN_0069abf0; analysis pseudocode, not buildable source.
 * calls 00487330 FUN_00487330
 * calls 0040e4e0 FUN_0040e4e0
 * calls 00444e80 FUN_00444e80
 * calls 005d59f0 FUN_005d59f0
 * calls 004872e0 FUN_004872e0
 * calls 00696180 FUN_00696180
 * calls 00401d70 FUN_00401d70
 * calls 00487310 FUN_00487310
 * calls 0068bef0 FUN_0068bef0
 * calls 006982a0 FUN_006982a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0069abf0(int param_1,int param_2,uint param_3,int *param_4)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  float *pfVar6;
  undefined4 uVar7;
  float10 fVar8;
  undefined4 *puVar9;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  undefined1 auStack_c [8];
  float fStack_4;
  
  iVar1 = (int)param_4;
  FUN_006982a0(param_2,param_3,param_4);
  piVar5 = (int *)(param_2 + 0x48);
  param_4 = (int *)(**(code **)(*(int *)(param_2 + 0x48) + 0x10))();
  cVar2 = (**(code **)(**(int **)(param_1 + 0x138) + 0xbc))();
  if (cVar2 == '\0') {
    if (param_4 == (int *)0x1) {
      piVar3 = (int *)(**(code **)(*(int *)(param_1 + 0x48) + 4))();
      cVar2 = (**(code **)(*piVar3 + 0x24))();
      if (cVar2 == '\0') {
        if (*(int *)(param_1 + 0x184) != 0) {
          (**(code **)(*piVar5 + 4))();
          piVar5 = (int *)FUN_005d59f0(&LAB_004040e0);
          if ((piVar5 != (int *)0x0) &&
             ((iVar4 = (**(code **)(*piVar5 + 0x58))(), iVar4 == 3 || (iVar4 == 0)))) {
            pfVar6 = (float *)FUN_0068bef0(param_3);
            fVar8 = (float10)FUN_00401d70(*pfVar6 + *(float *)(iVar1 + 0x10c),0,0x3f800000);
            *(float *)(iVar1 + 0x10c) = (float)fVar8;
            if (_DAT_00890968 < pfVar6[3]) {
              uVar7 = FUN_00444e80(auStack_c,iVar1 + 0x80,pfVar6[3]);
              FUN_004872e0(uVar7);
              FUN_00487310(*(float *)(iVar1 + 0xd0) * pfVar6[3]);
            }
            fStack_24 = *(float *)(iVar1 + 0x8c);
            fStack_20 = *(float *)(iVar1 + 0x90) + pfVar6[1];
            fStack_1c = *(float *)(iVar1 + 0x94) + pfVar6[2];
            FUN_00487330(&fStack_24);
          }
        }
      }
      else if ((*(int **)(param_1 + 0x13c) != (int *)0x0) &&
              (iVar4 = (**(code **)(**(int **)(param_1 + 0x13c) + 0x4c))(), 2 < iVar4)) {
        puVar9 = &param_4;
        (**(code **)(*piVar5 + 4))(puVar9);
        cVar2 = FUN_0040e4e0(puVar9);
        if ((cVar2 != '\0') && (iVar4 = (**(code **)(*param_4 + 0x4c))(), 2 < iVar4)) {
          fStack_24 = *(float *)(iVar1 + 0x8c);
          fStack_20 = *(float *)(iVar1 + 0x90);
          fStack_1c = *(float *)(iVar1 + 0x94);
          iVar4 = (**(code **)(*(int *)(param_1 + 0x48) + 0x20))();
          fStack_20 = (*(float *)(param_3 + 4) - *(float *)(iVar4 + 4)) - _DAT_00890f14;
          FUN_00487330(&fStack_24);
        }
      }
      goto LAB_0069ae30;
    }
    if ((param_4 != (int *)0x2) ||
       (cVar2 = (**(code **)(*(int *)(param_2 + 0x60) + 0x34))(), cVar2 != '\0')) goto LAB_0069ae30;
    param_3 = param_3 & 0xffffff00;
    piVar5 = (int *)(**(code **)(*piVar5 + 4))();
    (**(code **)(*piVar5 + 0x44))();
    cVar2 = FUN_00696180(&param_3,0);
    if ((cVar2 == '\0') || ((char)param_3 == '\0')) goto LAB_0069ae30;
  }
  *(undefined1 *)(iVar1 + 200) = 1;
  *(undefined4 *)(iVar1 + 0xcc) = 0;
LAB_0069ae30:
  if ((_DAT_008aabe0 < *(float *)(param_1 + 0x16c)) && (*(char *)(iVar1 + 200) == '\0')) {
    fStack_1c = _DAT_00890968;
    if (_DAT_00890968 < *(float *)(iVar1 + 0xd0)) {
      fStack_1c = _DAT_0089096c / *(float *)(iVar1 + 0xd0);
    }
    fStack_1c = fStack_1c * *(float *)(param_1 + 0x16c);
    fStack_24 = fStack_1c * *(float *)(iVar1 + 0x80);
    fStack_20 = fStack_1c * *(float *)(iVar1 + 0x84);
    fStack_1c = fStack_1c * *(float *)(iVar1 + 0x88);
    fStack_4 = fStack_1c;
    FUN_004872e0(&fStack_24);
    FUN_00487310(*(undefined4 *)(param_1 + 0x16c));
  }
  fStack_18 = *(float *)(param_1 + 0x160) + *(float *)(iVar1 + 0x8c);
  fStack_14 = *(float *)(iVar1 + 0x90) + *(float *)(param_1 + 0x164);
  fStack_10 = *(float *)(iVar1 + 0x94) + *(float *)(param_1 + 0x168);
  FUN_00487330(&fStack_18);
  return;
}

