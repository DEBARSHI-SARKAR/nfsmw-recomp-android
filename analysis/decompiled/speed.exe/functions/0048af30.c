/* speed.exe 0048af30 FUN_0048af30; analysis pseudocode, not buildable source.
 * calls 0048ad40 FUN_0048ad40
 * calls 004866c0 FUN_004866c0
 * calls 00488680 FUN_00488680
 * calls 00401670 FUN_00401670
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0048af30(int param_1,float *param_2,char param_3)

{
  undefined4 uVar1;
  float *pfVar2;
  float10 fVar3;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  undefined1 auStack_20 [8];
  float fStack_18;
  undefined1 auStack_10 [16];
  
  if (param_3 != '\0') {
    uVar1 = (**(code **)(**(int **)(param_1 + 0x10) + 0x18))();
    FUN_00401670(param_1 + 4,uVar1,&fStack_38);
    fStack_28 = fStack_34;
    fStack_2c = fStack_38;
    fStack_24 = fStack_30;
    fVar3 = (float10)FUN_00488680();
    if ((float10)_DAT_00890968 < fVar3) {
      pfVar2 = (float *)(**(code **)**(undefined4 **)(param_1 + 0x10))();
      fStack_38 = *param_2 - *pfVar2;
      fStack_34 = param_2[1] - pfVar2[1];
      fStack_30 = param_2[2] - pfVar2[2];
      fStack_18 = fStack_30;
      fVar3 = (float10)FUN_00488680();
      if ((float10)_DAT_00890968 != fVar3) {
        FUN_0048ad40(&fStack_2c,&fStack_38);
        uVar1 = (**(code **)(**(int **)(param_1 + 0x10) + 0x20))();
        FUN_004866c0(uVar1,auStack_20,auStack_10);
        (**(code **)(**(int **)(param_1 + 0x10) + 0x24))(auStack_10);
      }
    }
  }
  uVar1 = (**(code **)(**(int **)(param_1 + 0x10) + 0x18))();
  FUN_00401670(param_1 + 4,uVar1,&fStack_2c);
  fStack_38 = *param_2 - fStack_2c;
  fStack_34 = param_2[1] - fStack_28;
  fStack_30 = param_2[2] - fStack_24;
  fStack_18 = fStack_30;
  (**(code **)(**(int **)(param_1 + 0x10) + 4))(&fStack_38);
  return;
}

