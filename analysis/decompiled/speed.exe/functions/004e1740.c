/* speed.exe 004e1740 FUN_004e1740; analysis pseudocode, not buildable source.
 * calls 004e1070 FUN_004e1070
 */

uint __thiscall FUN_004e1740(int param_1,uint param_2,int param_3,int param_4)

{
  float fVar1;
  uint in_EAX;
  short sVar2;
  int iVar3;
  
  if ((-1 < (int)param_2) &&
     (in_EAX = (param_2 - 1) + param_3, (int)in_EAX < *(int *)(param_1 + 0x14))) {
    if ((int)param_2 >> 5 != *(int *)(param_1 + 0xac)) {
      FUN_004e1070((int)param_2 >> 5);
    }
    param_2 = param_2 & 0x1f;
    iVar3 = 0;
    if (0 < param_3) {
      do {
        fVar1 = *(float *)(param_1 + 0x2c + param_2 * 4);
        sVar2 = (short)ROUND(fVar1);
        if (sVar2 == -0x8000) {
          sVar2 = 0x7fff - (short)((int)fVar1 >> 0x1f);
        }
        param_2 = param_2 + 1;
        *(short *)(param_4 + iVar3 * 2) = sVar2;
        if (param_2 == 0x20) {
          FUN_004e1070(*(int *)(param_1 + 0xac) + 1);
          param_2 = 0;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < param_3);
    }
    return CONCAT31((int3)(param_2 >> 8),1);
  }
  return in_EAX & 0xffffff00;
}

