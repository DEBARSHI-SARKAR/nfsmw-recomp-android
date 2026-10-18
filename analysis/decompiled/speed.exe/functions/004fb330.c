/* speed.exe 004fb330 FUN_004fb330; analysis pseudocode, not buildable source.
 */

int FUN_004fb330(byte param_1,int param_2,int param_3,int param_4,uint param_5)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  
  if (((param_2 != 0) && (0 < param_3)) && (param_4 + 1U <= param_5)) {
    iVar3 = 0;
    param_3 = param_3 + -1;
    if (-1 < param_3) {
      do {
        iVar4 = (iVar3 + param_3) / 2;
        iVar1 = iVar4 * param_5 + param_2;
        if (param_1 < *(byte *)(iVar1 + param_4)) {
          param_3 = iVar4 + -1;
        }
        else {
          if (param_1 <= *(byte *)(iVar1 + param_4)) {
            if (iVar4 < 1) {
              return iVar1;
            }
            pbVar2 = (byte *)((iVar1 - param_5) + param_4);
            do {
              if (*pbVar2 != param_1) {
                return iVar1;
              }
              iVar1 = iVar1 - param_5;
              pbVar2 = pbVar2 + -param_5;
              iVar4 = iVar4 + -1;
            } while (0 < iVar4);
            return iVar1;
          }
          iVar3 = iVar4 + 1;
        }
      } while (iVar3 <= param_3);
    }
    return 0;
  }
  return 0;
}

