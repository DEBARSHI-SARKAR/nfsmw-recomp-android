/* speed.exe 0085bda0 FUN_0085bda0; analysis pseudocode, not buildable source.
 */

int __thiscall FUN_0085bda0(int *param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iVar6;
  bool bVar7;
  
  iVar6 = 0;
  if (0 < *param_1) {
    pbVar2 = (byte *)(param_1 + 0x14);
    pbVar5 = param_2;
    pbVar4 = pbVar2;
LAB_0085bdb6:
    do {
      bVar1 = *pbVar2;
      bVar7 = bVar1 < *pbVar5;
      if (bVar1 == *pbVar5) {
        if (bVar1 != 0) {
          bVar1 = pbVar2[1];
          bVar7 = bVar1 < pbVar5[1];
          if (bVar1 != pbVar5[1]) goto LAB_0085bdda;
          pbVar2 = pbVar2 + 2;
          pbVar5 = pbVar5 + 2;
          if (bVar1 != 0) goto LAB_0085bdb6;
        }
        iVar3 = 0;
      }
      else {
LAB_0085bdda:
        iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      }
      if (iVar3 == 0) {
        return iVar6;
      }
      iVar6 = iVar6 + 1;
      pbVar2 = pbVar4 + 0xb0;
      pbVar5 = param_2;
      pbVar4 = pbVar2;
    } while (iVar6 < *param_1);
  }
  return -1;
}

