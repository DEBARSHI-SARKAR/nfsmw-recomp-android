/* speed.exe 0074a070 FUN_0074a070; analysis pseudocode, not buildable source.
 * calls 00723330 FUN_00723330
 * calls 00722e90 FUN_00722e90
 * calls 0045f3c0 FUN_0045f3c0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0074a070(int param_1)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_2c;
  float fStack_1c;
  
  iVar3 = *(int *)(*(int *)(param_1 + 0x288) + 0x44);
  if (((iVar3 != *(int *)(param_1 + 0x288) + 0x44) && (iVar3 != 0)) &&
     ((int *)(iVar3 + -4) != (int *)0x0)) {
    iVar3 = (**(code **)(*(int *)(iVar3 + -4) + 0x10))();
    if (iVar3 != 0) {
      iVar3 = *(int *)(*(int *)(param_1 + 0x288) + 0x40);
      fStack_2c = *(float *)(iVar3 + 0x44);
      pfVar1 = (float *)(param_1 + 0x3810);
      fStack_1c = *(float *)(iVar3 + 0x54) * _DAT_00890e98;
      pfVar2 = (float *)(param_1 + 0x3808);
      fStack_38 = *(float *)(iVar3 + 0x40) - *(float *)(iVar3 + 0x50) * _DAT_00890e98;
      fStack_34 = fStack_2c - fStack_1c;
      FUN_00723330(&fStack_38,pfVar2,pfVar1);
      fStack_40 = *(float *)(param_1 + 0x380c) - *(float *)(param_1 + 0x3814);
      fStack_3c = -(*pfVar2 - *pfVar1);
      FUN_0045f3c0(&fStack_40,&fStack_40);
      FUN_00722e90(pfVar2,pfVar1,param_1 + 0x3818,param_1 + 0x3820);
    }
  }
  return;
}

