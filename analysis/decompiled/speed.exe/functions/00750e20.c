/* speed.exe 00750e20 FUN_00750e20; analysis pseudocode, not buildable source.
 * calls 00744bb0 FUN_00744bb0
 * calls 006bf530 FUN_006bf530
 * calls 00466980 FUN_00466980
 * calls 00444fe0 FUN_00444fe0
 * calls 0074e160 FUN_0074e160
 * calls 004aab60 FUN_004aab60
 * calls 006bd920 FUN_006bd920
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00750e20(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  float fVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  float10 fVar10;
  int iStack_78;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [32];
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  
  if ((*(char *)(param_1 + 0x60) == '\0') && (*(int *)(param_1 + 0x28) == 3)) {
    if (*(int *)(param_1 + 0x3c8) != DAT_00982b78) {
      *(undefined4 *)(param_1 + 0x3d0) = 0x497423f0;
    }
    piVar1 = (int *)(param_2 + 0x44);
    *(int *)(param_1 + 0x3c8) = DAT_00982b78;
    piVar8 = (int *)*piVar1;
    if ((piVar8 == piVar1) || (piVar8 == (int *)0x0)) {
      piVar8 = (int *)0x0;
    }
    else {
      piVar8 = piVar8 + -1;
      if ((((piVar8 != (int *)0x0) && (cVar5 = (**(code **)(*piVar8 + 0x28))(), cVar5 == '\0')) &&
          (iVar6 = (**(code **)(*piVar8 + 0x10))(), iVar6 != 0)) &&
         (*(int *)(iVar6 + 0x94) == *(int *)(param_1 + 0x30))) {
        return;
      }
    }
    iVar6 = *(int *)(param_2 + 4);
    if ((((((iVar6 != 4) && (iVar6 != 5)) ||
          ((puVar3 = (&DAT_00919694)[(iVar6 + -4) * 0x1c],
           (undefined4 **)puVar3 == &DAT_00919694 + (iVar6 + -4) * 0x1c ||
           ((puVar3 == (undefined4 *)0x0 || (piVar2 = puVar3 + -1, piVar2 == (int *)0x0)))))) ||
         (cVar5 = (**(code **)(*piVar2 + 0x24))(), cVar5 != '\0')) ||
        ((iVar6 = (**(code **)(*piVar2 + 0x10))(), iVar6 == 0 ||
         (*(int *)(iVar6 + 0x94) != *(int *)(param_1 + 0x30))))) &&
       ((((*(int *)(param_2 + 4) < 0x12 ||
          (((0x17 < *(int *)(param_2 + 4) || ((undefined4 **)DAT_00919694 == &DAT_00919694)) ||
           (DAT_00919694 == (undefined4 *)0x0)))) ||
         (((DAT_00919694 + -1 == (int *)0x0 ||
           (iVar6 = (**(code **)(DAT_00919694[-1] + 0x10))(), iVar6 == 0)) ||
          (*(int *)(iVar6 + 0x94) != *(int *)(param_1 + 0x30))))) &&
        (((*(int *)(param_2 + 4) != 3 ||
          (_DAT_009b078c = (**(code **)(*piVar8 + 0x10))(), _DAT_009b078c == 0)) ||
         (*(int *)(_DAT_009b078c + 0x94) != *(int *)(param_1 + 0x30))))))) {
      if ((piVar8 != (int *)0x0) &&
         (((iVar6 = *(int *)(param_2 + 4), iVar6 == 1 || (iVar6 == 2)) || (iVar6 == 3)))) {
        fVar10 = (float10)FUN_004aab60(param_1 + 0x360);
        if ((float10)*(float *)(param_1 + 0x3d0) < fVar10) {
          fVar10 = (float10)*(float *)(param_1 + 0x3d0);
        }
        *(float *)(param_1 + 0x3d0) = (float)fVar10;
      }
      iVar6 = *(int *)(param_1 + 0x44);
      if ((iVar6 != 0) &&
         ((iVar7 = FUN_006bf530(), param_3 == 0 || ((*(int *)(param_2 + 4) == 4 && (iVar7 < 3))))))
      {
        FUN_00444fe0(auStack_50,param_1 + 0x330);
        cVar5 = FUN_00744bb0(param_2);
        fVar4 = fStack_18;
        if (cVar5 != '\0') {
          piVar8 = (int *)*piVar1;
          if ((piVar8 == piVar1) || (piVar8 == (int *)0x0)) {
            piVar8 = (int *)0x0;
          }
          else {
            piVar8 = piVar8 + -1;
          }
          iVar7 = (**(code **)(*piVar8 + 0x10))();
          fVar4 = fStack_18;
          if (*(short *)(iVar7 + 200) == 1) {
            FUN_00444fe0(auStack_50,*(undefined4 *)(param_1 + 0x34));
            FUN_00466980(param_1 + 0x50);
            FUN_006bd920(&fStack_70,auStack_50,auStack_60);
            fStack_20 = fStack_20 - fStack_70;
            fStack_1c = fStack_1c - fStack_6c;
            fVar4 = fStack_18 - fStack_68;
          }
        }
        uVar9 = 0;
        if (param_3 != 0) {
          uVar9 = 0x401;
          fStack_30 = -fStack_30;
          fStack_2c = -fStack_2c;
          fStack_28 = -fStack_28;
        }
        fStack_6c = fStack_1c;
        fStack_70 = fStack_20;
        fStack_20 = 0.0;
        fStack_1c = 0.0;
        fStack_18 = 0.0;
        fStack_68 = fVar4;
        if (((*(byte *)(param_1 + 0x3f8) & 4) == 0) || (DAT_009b09b4 == 0)) {
          cVar5 = FUN_0074e160(param_2,&fStack_70,auStack_50,param_1 + 0x130,param_1 + 0x230,
                               param_1 + 0x130,uVar9,0,param_3,0x3f800000,
                               *(undefined4 *)(iVar6 + 0x1628),*(undefined4 *)(iVar6 + 0x1628));
          if ((cVar5 != '\0') && (*(int *)(param_2 + 4) < 4)) {
            *(int *)(param_1 + 0x3cc) = DAT_00982b78;
          }
        }
        else {
          iStack_78 = 0;
          if (0 < DAT_009b09b4) {
            do {
              cVar5 = FUN_0074e160(param_2,&fStack_70,auStack_50,param_1 + 0x130,param_1 + 0x230,
                                   param_1 + 0x130,uVar9,0,param_3,(float)*(int *)(iVar6 + 0x1628),
                                   *(int *)(iVar6 + 0x1628),0);
              if ((cVar5 != '\0') && (*(int *)(param_2 + 4) < 4)) {
                *(int *)(param_1 + 0x3cc) = DAT_00982b78;
              }
              iStack_78 = iStack_78 + 1;
            } while (iStack_78 < DAT_009b09b4);
            return;
          }
        }
      }
    }
  }
  return;
}

