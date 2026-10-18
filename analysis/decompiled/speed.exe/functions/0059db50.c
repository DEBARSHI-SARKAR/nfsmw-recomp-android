/* speed.exe 0059db50 FUN_0059db50; analysis pseudocode, not buildable source.
 * calls 0057a300 FUN_0057a300
 * calls 005d59f0 FUN_005d59f0
 * calls 00579840 FUN_00579840
 * calls 0057a280 FUN_0057a280
 * calls 00579900 FUN_00579900
 * calls 00567550 FUN_00567550
 * calls 006e8df0 FUN_006e8df0
 * calls 00579e00 FUN_00579e00
 * calls 0057a110 FUN_0057a110
 * calls 0045ded0 FUN_0045ded0
 * calls 00594ea0 FUN_00594ea0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0059db50(int param_1,int *param_2)

{
  char cVar1;
  float fVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  float10 fVar7;
  uint uStack_10;
  undefined4 uStack_c;
  float fStack_8;
  float fStack_4;
  
  piVar3 = param_2;
  if ((*(uint *)(param_1 + 0x20) & *(uint *)(param_1 + 0x18)) == 0 &&
      (*(uint *)(param_1 + 0x24) & *(uint *)(param_1 + 0x1c)) == 0) {
    return;
  }
  if (param_2 == (int *)0x0) {
    return;
  }
  iVar4 = (**(code **)(*param_2 + 4))();
  if (iVar4 == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0xc4) = 1;
  iVar4 = FUN_006e8df0();
  if (iVar4 != 1) {
    if (*(int *)(DAT_0091e000 + 0x1968) == 0) {
      cVar1 = *(char *)(*(int *)(DAT_0091cf90 + 0x10) + 0x3d);
    }
    else {
      cVar1 = *(char *)(*(int *)(DAT_0091cf90 + 0x10) + 0x3c);
    }
    if (cVar1 != '\0') goto LAB_0059dbd3;
  }
  *(undefined4 *)(param_1 + 0xc4) = 0;
LAB_0059dbd3:
  FUN_00579900(param_2);
  iVar4 = *param_2;
  param_2 = (int *)0x0;
  uVar5 = (**(code **)(iVar4 + 4))();
  FUN_00579840(&fStack_8,&uStack_10,uVar5);
  piVar6 = (int *)FUN_005d59f0(&LAB_004040e0);
  if (piVar6 != (int *)0x0) {
    fVar7 = (float10)(**(code **)(*piVar6 + 0x90))();
    param_2 = (int *)(float)ABS(fVar7);
  }
  uStack_10 = FUN_0045ded0(uStack_c,uStack_10);
  uStack_10 = uStack_10 & 0xffff;
  iVar4 = *(int *)(param_1 + 0x98);
  *(float *)(param_1 + 0xac) = (float)uStack_10 * _DAT_00894958;
  *(float *)(param_1 + 0xb0) = (fStack_8 - *(float *)(iVar4 + 0xac)) / *(float *)(iVar4 + 0xb4);
  *(float *)(param_1 + 0xb4) =
       (*(float *)(iVar4 + 0xb0) - fStack_4) / *(float *)(iVar4 + 0xb4) + _DAT_0089096c;
  fVar2 = _DAT_008f3ab0;
  if (((float)param_2 <= _DAT_008f3ab0) && (fVar2 = (float)param_2, (float)param_2 < _DAT_00890968))
  {
    fVar2 = _DAT_00890968;
  }
  fVar2 = _DAT_0089096c - (_DAT_0089096c / _DAT_008f3ab0) * fVar2;
  *(float *)(param_1 + 0xa8) = fVar2;
  if (fVar2 < _DAT_0089096c) {
    *(undefined4 *)(param_1 + 0xa8) = 0x3f800000;
  }
  FUN_00567550();
  if (*(int *)(param_1 + 0xc4) == 0) {
    *(undefined4 *)(param_1 + 0xac) = 0;
  }
  FUN_00579e00(piVar6);
  FUN_0057a110();
  FUN_00594ea0();
  FUN_0057a280();
  FUN_0057a300(piVar3);
  return;
}

