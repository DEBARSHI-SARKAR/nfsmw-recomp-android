/* speed.exe 0085bfa0 FUN_0085bfa0; analysis pseudocode, not buildable source.
 * calls 00846010 FUN_00846010
 */

undefined4 FUN_0085bfa0(int param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  int in_EAX;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined4 uVar6;
  byte *pbVar7;
  bool bVar8;
  
  pbVar7 = (byte *)(*(int *)(in_EAX + 0xd4) * 0xb0 + 0x200 + in_EAX);
  pbVar4 = (byte *)(param_1 + 0x68);
  pbVar2 = pbVar4;
  pbVar5 = pbVar7;
  if (*(int *)(in_EAX + 0x178) == 0) {
    bVar8 = *(int *)(in_EAX + 0x18c) == 1;
  }
  else {
    do {
      bVar1 = *pbVar2;
      bVar8 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_0085c008:
        iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
        goto LAB_0085c00d;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar8 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_0085c008;
      pbVar2 = pbVar2 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_0085c00d:
    bVar8 = iVar3 < 0;
  }
  if (bVar8) {
    uVar6 = 0x101;
    pbVar2 = pbVar7;
    pbVar7 = pbVar4;
  }
  else {
    uVar6 = 0x102;
    pbVar2 = pbVar4;
  }
  FUN_00846010(param_2,param_3,"%s-%s",pbVar2,pbVar7);
  return uVar6;
}

