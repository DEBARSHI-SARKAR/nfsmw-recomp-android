/* speed.exe 007511e0 FUN_007511e0; analysis pseudocode, not buildable source.
 * calls 006bf530 FUN_006bf530
 * calls 00444fe0 FUN_00444fe0
 * calls 0074e160 FUN_0074e160
 * calls 004aab60 FUN_004aab60
 */

void __thiscall FUN_007511e0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  float10 fVar7;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined1 auStack_50 [32];
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  if (*(int *)(param_1 + 0x1b0) != DAT_00982b78) {
    *(undefined4 *)(param_1 + 0x1b8) = 0x497423f0;
  }
  *(int *)(param_1 + 0x1b0) = DAT_00982b78;
  if ((*(char *)(param_1 + 0x60) == '\0') && (*(int *)(param_1 + 0x28) == 3)) {
    iVar4 = *(int *)(param_2 + 0x44);
    if ((iVar4 != param_2 + 0x44) &&
       ((iVar4 != 0 && (piVar1 = (int *)(iVar4 + -4), piVar1 != (int *)0x0)))) {
      cVar3 = (**(code **)(*piVar1 + 0x24))();
      if ((cVar3 == '\0') &&
         ((iVar4 = (**(code **)(*piVar1 + 0x10))(), iVar4 != 0 &&
          (*(int *)(iVar4 + 0x94) == *(int *)(param_1 + 0x30))))) {
        return;
      }
      iVar4 = *(int *)(param_2 + 4);
      if (((iVar4 == 1) || (iVar4 == 2)) || (iVar4 == 3)) {
        fVar7 = (float10)FUN_004aab60(param_1 + 0x1a0);
        if ((float10)*(float *)(param_1 + 0x1b8) < fVar7) {
          fVar7 = (float10)*(float *)(param_1 + 0x1b8);
        }
        *(float *)(param_1 + 0x1b8) = (float)fVar7;
      }
    }
    iVar4 = *(int *)(param_1 + 0x44);
    if ((iVar4 != 0) &&
       ((iVar5 = FUN_006bf530(), param_3 == 0 || ((*(int *)(param_2 + 4) == 4 && (iVar5 < 3)))))) {
      FUN_00444fe0(auStack_50,param_1 + 0x170);
      uVar6 = 0;
      if (param_3 != 0) {
        uVar6 = 0x401;
        fStack_30 = -fStack_30;
        fStack_2c = -fStack_2c;
        fStack_28 = -fStack_28;
      }
      uStack_60 = uStack_20;
      uStack_58 = uStack_18;
      uVar2 = *(undefined4 *)(iVar4 + 0x1628);
      uStack_5c = uStack_1c;
      iVar4 = param_1 + 0x70;
      uStack_20 = 0;
      uStack_1c = 0;
      uStack_18 = 0;
      cVar3 = FUN_0074e160(param_2,&uStack_60,auStack_50,iVar4,iVar4,iVar4,uVar6,0,param_3,
                           *(undefined4 *)(param_1 + 0x1bc),uVar2,uVar2);
      if ((cVar3 != '\0') && (*(int *)(param_2 + 4) < 4)) {
        *(int *)(param_1 + 0x1b4) = DAT_00982b78;
      }
    }
  }
  return;
}

