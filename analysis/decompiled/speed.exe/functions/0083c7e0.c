/* speed.exe 0083c7e0 FUN_0083c7e0; analysis pseudocode, not buildable source.
 * calls 0083a330 FUN_0083a330
 * calls 0083c4e0 FUN_0083c4e0
 * calls 0083a500 FUN_0083a500
 */

int FUN_0083c7e0(int param_1,int param_2,int param_3,byte *param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  byte bVar4;
  
  if (param_4 == (byte *)0x0) {
    FUN_0083c4e0(param_1,param_3);
    return 0;
  }
  pbVar2 = (byte *)FUN_0083a330(param_1,param_2,param_3,0);
  if (pbVar2 == (byte *)0x0) {
    return -1;
  }
  bVar4 = 0x21;
  if (0x20 < *param_4) {
    do {
      if ((byte *)(param_2 + -2 + param_1) <= pbVar2) {
        iVar3 = FUN_0083a500();
        return iVar3;
      }
      bVar4 = bVar4 ^ *param_4 == 0x22;
      *pbVar2 = *param_4;
      pbVar1 = param_4 + 1;
      pbVar2 = pbVar2 + 1;
      param_4 = param_4 + 1;
    } while (bVar4 <= *pbVar1);
  }
  if ((DAT_0090d314 != 0) && (param_3 != 0)) {
    *pbVar2 = s_enonrebdtliftsmissimngolkcolvrsr_0090d2d0[0x40];
    pbVar2 = pbVar2 + 1;
  }
  *pbVar2 = 0;
  return (int)pbVar2 - param_1;
}

