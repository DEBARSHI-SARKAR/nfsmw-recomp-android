/* speed.exe 0082fd90 FUN_0082fd90; analysis pseudocode, not buildable source.
 */

uint FUN_0082fd90(int param_1,int param_2,char *param_3)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  
  pcVar3 = param_3;
  if (0 < param_1) {
    iVar5 = 0x7f;
    pcVar4 = param_3;
    if (0 < param_1) {
      param_3 = (char *)param_1;
      pcVar4 = pcVar3;
      do {
        iVar1 = *pcVar3 - param_2;
        iVar2 = pcVar3[1] - param_2;
        if (iVar1 < 0) {
          iVar1 = -iVar1;
        }
        if (iVar2 < 0) {
          iVar2 = -iVar2;
        }
        if (iVar2 <= iVar1) {
          iVar1 = iVar2;
        }
        if (iVar1 < iVar5) {
          pcVar4 = pcVar3;
          iVar5 = iVar1;
        }
        pcVar3 = pcVar3 + 4;
        param_3 = (char *)((int)param_3 + -1);
      } while (param_3 != (char *)0x0);
    }
    return (uint)*(ushort *)(pcVar4 + 2);
  }
  return 0xffffffff;
}

