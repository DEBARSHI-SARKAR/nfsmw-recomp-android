/* speed.exe 004b2a30 FUN_004b2a30; analysis pseudocode, not buildable source.
 * calls 007ee03a FUN_007ee03a
 * calls 004baec0 FUN_004baec0
 * calls 007ec1bd FUN_007ec1bd
 * calls 007edb59 FUN_007edb59
 * calls 007ec1c8 FUN_007ec1c8
 * calls 007edabb FUN_007edabb
 */

void FUN_004b2a30(int param_1,undefined4 param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  bool bVar8;
  
  iVar6 = 0;
  FUN_007ec1bd();
  iVar5 = *(int *)(param_1 + 0x6c);
  bVar8 = true;
  if (iVar5 == 0) {
LAB_004b2aa4:
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  else {
    if (*(int *)(iVar5 + 4) != 1) {
      if (*(int *)(iVar5 + 0xc) == 0) goto LAB_004b2aa4;
      *(int *)(param_1 + 0x6c) = *(int *)(iVar5 + 0xc);
    }
    iVar6 = *(int *)(param_1 + 0x6c);
    bVar8 = false;
    *(undefined4 *)(iVar6 + 0x124) = *(undefined4 *)(param_1 + 0x60);
    *(undefined4 *)(iVar6 + 4) = 2;
  }
  FUN_007ec1c8();
  if (!bVar8) {
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(param_1 + 0x60);
    if (*(int *)(iVar6 + 0x10) == 1) {
      *(undefined4 *)(param_1 + 0x180) = 0;
    }
    else {
      pbVar3 = (byte *)(iVar6 + 0x14);
      pbVar1 = (byte *)(param_1 + 0x78);
      *(undefined4 *)(param_1 + 0x180) = *(undefined4 *)(iVar6 + 0x11c);
      pbVar4 = pbVar3;
      pbVar7 = pbVar1;
      do {
        bVar2 = *pbVar4;
        bVar8 = bVar2 < *pbVar7;
        if (bVar2 != *pbVar7) {
LAB_004b2ae7:
          iVar5 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
          goto LAB_004b2aec;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar4[1];
        bVar8 = bVar2 < pbVar7[1];
        if (bVar2 != pbVar7[1]) goto LAB_004b2ae7;
        pbVar4 = pbVar4 + 2;
        pbVar7 = pbVar7 + 2;
      } while (bVar2 != 0);
      iVar5 = 0;
LAB_004b2aec:
      if (iVar5 != 0) {
        iVar5 = (int)pbVar1 - (int)pbVar3;
        do {
          bVar2 = *pbVar3;
          pbVar3[iVar5] = bVar2;
          pbVar3 = pbVar3 + 1;
        } while (bVar2 != 0);
        if (*(int *)(param_1 + 0x17c) == 0) {
          iVar5 = FUN_007ee03a(pbVar1,1,param_2);
          *(int *)(param_1 + 0x184) = iVar5;
          if (iVar5 == 0) {
            return;
          }
          FUN_007edabb();
          return;
        }
        iVar5 = FUN_007edb59(*(int *)(param_1 + 0x17c),param_2,param_1);
        *(int *)(param_1 + 0x184) = iVar5;
        if (iVar5 == 0) {
          return;
        }
        FUN_007edabb();
        return;
      }
    }
    FUN_004baec0(param_1,param_2);
  }
  return;
}

