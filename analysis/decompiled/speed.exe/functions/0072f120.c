/* speed.exe 0072f120 FUN_0072f120; analysis pseudocode, not buildable source.
 * calls 0045f340 FUN_0045f340
 * calls 0072b780 FUN_0072b780
 * calls 0072f030 FUN_0072f030
 * calls 00722030 FUN_00722030
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_0072f120(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
            undefined4 param_6)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  undefined1 local_30 [16];
  undefined1 local_20 [28];
  
  if ((param_2 != 0) && (fVar3 = (float10)FUN_0045f340(0,param_3), (float10)_DAT_008b277c < fVar3))
  {
    return;
  }
  if (*param_1 == 0) {
    iVar2 = FUN_0072f030(param_1,param_3,param_4,param_5,param_6);
    *param_1 = iVar2;
    return;
  }
  if ((*(int *)(*param_1 + 0x30) == param_5) &&
     (iVar2 = FUN_0072b780(param_3,param_4,0,param_6), iVar2 == 0)) {
    return;
  }
  iVar2 = *param_1;
  FUN_00722030(local_20,local_30);
  fVar1 = (float)*(byte *)(*(int *)(iVar2 + 0xf0) * 0x10 + 0x6f + iVar2) * _DAT_00899dd0;
  if (*(undefined4 **)(iVar2 + 0x2c) != (undefined4 *)0x0) {
    **(undefined4 **)(iVar2 + 0x2c) = 0;
    *(undefined4 *)(iVar2 + 0x2c) = 0;
  }
  iVar2 = FUN_0072f030(param_1,local_20,local_30,param_5,fVar1);
  FUN_0072b780(param_3,param_4,0,param_6);
  *param_1 = iVar2;
  return;
}

