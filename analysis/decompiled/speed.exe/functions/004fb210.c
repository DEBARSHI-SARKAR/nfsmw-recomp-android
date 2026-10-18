/* speed.exe 004fb210 FUN_004fb210; analysis pseudocode, not buildable source.
 */

int FUN_004fb210(uint param_1,int param_2,int param_3,int param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  
  if (((param_2 != 0) && (0 < param_3)) && (param_4 + 4U <= param_5)) {
    iVar4 = 0;
    param_3 = param_3 + -1;
    if (-1 < param_3) {
      do {
        iVar2 = (param_3 + iVar4) / 2;
        iVar1 = iVar2 * param_5 + param_2;
        if (param_1 < *(uint *)(iVar1 + param_4)) {
          param_3 = iVar2 + -1;
        }
        else {
          if (param_1 <= *(uint *)(iVar1 + param_4)) {
            if (iVar2 < 1) {
              return iVar1;
            }
            puVar3 = (uint *)((iVar1 - param_5) + param_4);
            do {
              if (*puVar3 != param_1) {
                return iVar1;
              }
              iVar1 = iVar1 - param_5;
              puVar3 = (uint *)((int)puVar3 - param_5);
              iVar2 = iVar2 + -1;
            } while (0 < iVar2);
            return iVar1;
          }
          iVar4 = iVar2 + 1;
        }
      } while (iVar4 <= param_3);
    }
    return 0;
  }
  return 0;
}

