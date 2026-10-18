/* speed.exe 0072a760 FUN_0072a760; analysis pseudocode, not buildable source.
 * calls 00462830 FUN_00462830
 * calls 0045f490 FUN_0045f490
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_0072a760(int param_1,undefined4 *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float local_50;
  float local_4c;
  float local_48;
  float fStack_3c;
  float fStack_38;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_18;
  
  iVar3 = *(int *)(param_1 + 0x40);
  _DAT_009a3b44 = *(float *)(iVar3 + 0x44);
  _DAT_009a3b48 = *(float *)(iVar3 + 0x48);
  _DAT_009a3b40 = *(float *)(iVar3 + 0x40);
  iVar3 = *(int *)(param_1 + 0x40);
  local_50 = *(float *)(iVar3 + 0x50);
  local_4c = *(float *)(iVar3 + 0x54);
  local_48 = *(float *)(iVar3 + 0x58);
  FUN_00462830(FUN_00729f30);
  iVar3 = *(int *)(param_1 + 0x44);
  if ((((iVar3 != param_1 + 0x44) && (iVar3 != 0)) && ((int *)(iVar3 + -4) != (int *)0x0)) &&
     (iVar3 = (**(code **)(*(int *)(iVar3 + -4) + 0x10))(), iVar3 != 0)) {
    puVar5 = (undefined4 *)0x0;
    fStack_64 = 99999.0;
    puVar4 = DAT_009aa3c0;
    if ((undefined4 **)DAT_009aa3c0 != &DAT_009aa3c0) {
      do {
        fStack_3c = (float)puVar4[0x17];
        fStack_60 = (float)puVar4[0x16] - _DAT_009a3b40;
        fStack_38 = (float)puVar4[0x18];
        fStack_5c = fStack_3c - _DAT_009a3b44;
        fStack_58 = fStack_38 - _DAT_009a3b48;
        fStack_18 = fStack_58;
        FUN_0045f490(&fStack_30,&fStack_60);
        fVar2 = fStack_2c * local_4c + fStack_30 * local_50 + fStack_28 * local_48;
        if ((_DAT_00890968 < fVar2) &&
           (fVar1 = SQRT(fStack_60 * fStack_60 + fStack_5c * fStack_5c + fStack_58 * fStack_58),
           fVar1 < fStack_64)) {
          *param_3 = fVar2;
          puVar5 = puVar4;
          fStack_64 = fVar1;
        }
        puVar4 = (undefined4 *)*puVar4;
      } while ((undefined4 **)puVar4 != &DAT_009aa3c0);
      if (puVar5 != (undefined4 *)0x0) {
        *param_2 = puVar5[0x16];
        param_2[1] = puVar5[0x17];
        param_2[2] = puVar5[0x18];
        return puVar5;
      }
    }
  }
  return (undefined4 *)0x0;
}

