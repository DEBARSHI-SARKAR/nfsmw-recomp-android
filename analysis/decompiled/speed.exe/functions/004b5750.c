/* speed.exe 004b5750 FUN_004b5750; analysis pseudocode, not buildable source.
 * calls 004e4270 FUN_004e4270
 */

void __thiscall FUN_004b5750(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  
  if ((*(char *)(param_1 + 0x94) == '\0') && (*(char *)(param_1 + 0x95) == '\0')) {
    iVar2 = *(int *)(param_1 + 0x98) * 0x18;
    *(float *)(param_1 + 0x9c) = (float)param_2;
    iVar1 = *(int *)(&DAT_008f2140 + iVar2) + param_2;
    if (iVar1 < -9999) {
      iVar1 = -10000;
    }
    else if (0 < iVar1) {
      iVar1 = 0;
    }
    param_2 = *(int *)(&DAT_008f2148 + iVar2) + param_2;
    if (param_2 < -9999) {
      param_2 = -10000;
    }
    else if (0 < param_2) {
      param_2 = 0;
    }
    fVar3 = (float10)FUN_004e4270(iVar1);
    *(float *)(param_1 + 0xb4) = (float)fVar3;
    fVar3 = (float10)FUN_004e4270(param_2);
    *(float *)(param_1 + 0xb8) = (float)fVar3;
  }
  return;
}

