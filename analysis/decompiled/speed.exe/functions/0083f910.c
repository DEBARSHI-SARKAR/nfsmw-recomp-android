/* speed.exe 0083f910 FUN_0083f910; analysis pseudocode, not buildable source.
 */

char * FUN_0083f910(int param_1,char *param_2,int param_3)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  
  if (0 < param_3) {
    if (0xf < param_3) {
      uVar2 = (uint)*(byte *)(param_1 + 4);
      pcVar4 = param_2;
      if (99 < uVar2) {
        uVar1 = (ulonglong)uVar2 % 100;
        *param_2 = (char)((ulonglong)uVar2 / 100) + '0';
        uVar2 = (uint)(uVar1 % 10);
        param_2[1] = (char)(uVar1 / 10) + '0';
        pcVar4 = param_2 + 2;
      }
      if (9 < uVar2) {
        uVar3 = uVar2 / 10;
        uVar2 = uVar2 % 10;
        *pcVar4 = (char)uVar3 + '0';
        pcVar4 = pcVar4 + 1;
      }
      *pcVar4 = (char)uVar2 + '0';
      pcVar4[1] = '.';
      uVar2 = (uint)*(byte *)(param_1 + 5);
      pcVar5 = pcVar4 + 2;
      if (99 < uVar2) {
        uVar1 = (ulonglong)uVar2 % 100;
        *pcVar5 = (char)((ulonglong)uVar2 / 100) + '0';
        uVar2 = (uint)(uVar1 % 10);
        pcVar4[3] = (char)(uVar1 / 10) + '0';
        pcVar5 = pcVar4 + 4;
      }
      if (9 < uVar2) {
        uVar3 = uVar2 / 10;
        uVar2 = uVar2 % 10;
        *pcVar5 = (char)uVar3 + '0';
        pcVar5 = pcVar5 + 1;
      }
      *pcVar5 = (char)uVar2 + '0';
      pcVar5[1] = '.';
      uVar2 = (uint)*(byte *)(param_1 + 6);
      pcVar4 = pcVar5 + 2;
      if (99 < uVar2) {
        uVar1 = (ulonglong)uVar2 % 100;
        *pcVar4 = (char)((ulonglong)uVar2 / 100) + '0';
        uVar2 = (uint)(uVar1 % 10);
        pcVar5[3] = (char)(uVar1 / 10) + '0';
        pcVar4 = pcVar5 + 4;
      }
      if (9 < uVar2) {
        uVar3 = uVar2 / 10;
        uVar2 = uVar2 % 10;
        *pcVar4 = (char)uVar3 + '0';
        pcVar4 = pcVar4 + 1;
      }
      *pcVar4 = (char)uVar2 + '0';
      pcVar4[1] = '.';
      uVar2 = (uint)*(byte *)(param_1 + 7);
      pcVar5 = pcVar4 + 2;
      if (99 < uVar2) {
        uVar1 = (ulonglong)uVar2 % 100;
        *pcVar5 = (char)((ulonglong)uVar2 / 100) + '0';
        uVar2 = (uint)(uVar1 % 10);
        pcVar4[3] = (char)(uVar1 / 10) + '0';
        pcVar5 = pcVar4 + 4;
      }
      if (9 < uVar2) {
        uVar3 = uVar2 / 10;
        uVar2 = uVar2 % 10;
        *pcVar5 = (char)uVar3 + '0';
        pcVar5 = pcVar5 + 1;
      }
      *pcVar5 = (char)uVar2 + '0';
      pcVar5[1] = '\0';
      return param_2;
    }
    *param_2 = '\0';
  }
  return (char *)0x0;
}

