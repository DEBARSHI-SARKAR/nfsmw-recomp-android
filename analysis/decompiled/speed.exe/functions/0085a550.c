/* speed.exe 0085a550 FUN_0085a550; analysis pseudocode, not buildable source.
 * calls 0084b110 FUN_0084b110
 * calls 008588b0 FUN_008588b0
 */

int FUN_0085a550(undefined4 *param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  if (param_3 < 0) {
    pcVar3 = param_2;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    param_3 = (int)pcVar3 - (int)(param_2 + 1);
  }
  if (16000 < param_3) {
    param_3 = 16000;
  }
  iVar2 = -1;
  if ((param_1[0x46] == 0x10) && (iVar2 = 0, *(int *)(param_1[0x48] + 4) == 0)) {
    iVar2 = FUN_008588b0(param_1,param_2,param_3);
    if (-1 < iVar2) {
      iVar2 = param_3;
    }
  }
  if (param_1[0x46] == 0x14) {
    iVar2 = FUN_0084b110(*param_1,param_2,param_3,0,0,0);
  }
  return iVar2;
}

