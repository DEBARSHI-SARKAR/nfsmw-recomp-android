/* speed.exe 007236e0 FUN_007236e0; analysis pseudocode, not buildable source.
 */

int __thiscall FUN_007236e0(int *param_1,int param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  short *psVar4;
  
  cVar2 = (char)(param_2 / 100) + '@';
  if (((('@' < cVar2) && (cVar2 < 'U')) && (0 < param_2 % 100)) && (param_2 % 100 < DAT_00903164)) {
    iVar1 = param_1[1];
    iVar3 = 0;
    if (0 < iVar1) {
      psVar4 = (short *)(*param_1 + 8);
      do {
        if (*psVar4 == (short)param_2) {
          return param_2;
        }
        iVar3 = iVar3 + 1;
        psVar4 = psVar4 + 0x2e;
      } while (iVar3 < iVar1);
    }
    iVar3 = 0;
    if (0 < iVar1) {
      psVar4 = (short *)(*param_1 + 8);
      do {
        if (*psVar4 == (short)(DAT_00903164 + param_2)) {
          return DAT_00903164 + param_2;
        }
        iVar3 = iVar3 + 1;
        psVar4 = psVar4 + 0x2e;
      } while (iVar3 < iVar1);
    }
  }
  return param_2;
}

