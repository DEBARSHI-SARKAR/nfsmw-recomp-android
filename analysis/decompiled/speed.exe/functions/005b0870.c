/* speed.exe 005b0870 FUN_005b0870; analysis pseudocode, not buildable source.
 */

int __thiscall FUN_005b0870(int param_1,int param_2)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  byte *pbVar4;
  int iVar5;
  
  iVar2 = *(int *)(param_1 + 0x100);
  while( true ) {
    if (iVar2 == 0) {
      return 0;
    }
    pbVar4 = (byte *)(*(int *)(iVar2 + 0x38) + 2);
    iVar5 = -1;
    if (pbVar4 != (byte *)0x0) {
      bVar3 = *pbVar4;
      while (bVar3 != 0) {
        if (('`' < (char)bVar3) && ((char)bVar3 < '{')) {
          bVar3 = bVar3 - 0x20;
        }
        iVar5 = iVar5 * 0x21 + (uint)bVar3;
        pbVar1 = pbVar4 + 1;
        pbVar4 = pbVar4 + 1;
        bVar3 = *pbVar1;
      }
    }
    if (iVar5 == param_2) break;
    iVar2 = *(int *)(iVar2 + 4);
  }
  return iVar2;
}

