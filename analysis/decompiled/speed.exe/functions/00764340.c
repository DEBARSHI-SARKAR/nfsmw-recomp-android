/* speed.exe 00764340 FUN_00764340; analysis pseudocode, not buildable source.
 * calls 00465a70 FUN_00465a70
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall
FUN_00764340(undefined4 *param_1,undefined4 *param_2,int param_3,int param_4,float param_5)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  
  fVar1 = _DAT_0089096c / param_5;
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[6] = param_3;
  param_1[4] = param_5;
  param_1[7] = param_4;
  param_3 = param_3 * param_4;
  param_1[5] = fVar1;
  uVar2 = FUN_00465a70(param_3 * 4,0);
  param_1[8] = uVar2;
  iVar3 = 0;
  if (0 < param_3) {
    do {
      *(undefined4 *)(param_1[8] + iVar3 * 4) = 0;
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_3);
  }
  return param_1;
}

