/* speed.exe 008670b0 FUN_008670b0; analysis pseudocode, not buildable source.
 * calls 00866f20 FUN_00866f20
 */

void FUN_008670b0(undefined4 *param_1,byte *param_2,undefined4 *param_3)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  bool bVar7;
  
  iVar4 = 0;
  if ((int)param_1[1] < 1) {
    return;
  }
  pbVar2 = (byte *)(param_1 + 2);
  pbVar5 = param_2;
  pbVar6 = pbVar2;
LAB_008670d0:
  do {
    bVar1 = *pbVar2;
    bVar7 = bVar1 < *pbVar5;
    if (bVar1 == *pbVar5) {
      if (bVar1 != 0) {
        bVar1 = pbVar2[1];
        bVar7 = bVar1 < pbVar5[1];
        if (bVar1 != pbVar5[1]) goto LAB_008670f4;
        pbVar2 = pbVar2 + 2;
        pbVar5 = pbVar5 + 2;
        if (bVar1 != 0) goto LAB_008670d0;
      }
      iVar3 = 0;
    }
    else {
LAB_008670f4:
      iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
    }
    if (iVar3 == 0) {
      *(uint *)(pbVar6 + 0x14) = (uint)*(byte *)(param_3 + 2);
      iVar4 = FUN_00866f20(*param_1,(int)param_3 + 9,*param_3,*(undefined4 *)(pbVar6 + 0x18),
                           1 << ((byte)iVar4 & 0x1f));
      if (iVar4 < 0) {
        return;
      }
      *(int *)(pbVar6 + 0x18) = iVar4;
      return;
    }
    iVar4 = iVar4 + 1;
    pbVar2 = pbVar6 + 0x1c;
    pbVar5 = param_2;
    pbVar6 = pbVar2;
    if ((int)param_1[1] <= iVar4) {
      return;
    }
  } while( true );
}

