/* speed.exe 006501f0 FUN_006501f0; analysis pseudocode, not buildable source.
 */

uint FUN_006501f0(int *param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  int iVar8;
  
  if ((param_1 == (int *)0x0) || (param_2 == (byte *)0x0)) {
    return 0;
  }
  if (*param_1 != 0x504d4f43) {
    return 0;
  }
  uVar6 = 1;
  pbVar1 = (byte *)((int)param_1 + param_1[3]);
  pbVar7 = (byte *)(param_1 + 4);
  pbVar3 = param_2;
  if (*(short *)((int)param_1 + 6) != 1) {
    while (pbVar7 != pbVar1) {
      if (uVar6 == 1) {
        uVar6 = *pbVar7 | 0x10000 | (uint)pbVar7[1] << 8;
        pbVar7 = pbVar7 + 2;
      }
      iVar8 = (-(uint)(pbVar1 + -0x20 < pbVar7) & 0xfffffff1) + 0x10;
      do {
        if ((uVar6 & 1) == 0) {
          *pbVar3 = *pbVar7;
          pbVar3 = pbVar3 + 1;
          pbVar7 = pbVar7 + 1;
        }
        else {
          bVar2 = *pbVar7;
          pbVar5 = pbVar3 + -((bVar2 & 0xf0) << 4 | (uint)pbVar7[1]);
          pbVar7 = pbVar7 + 2;
          *pbVar3 = *pbVar5;
          pbVar3[1] = pbVar5[1];
          pbVar3[2] = pbVar5[2];
          pbVar3 = pbVar3 + 3;
          pbVar5 = pbVar5 + 3;
          uVar4 = bVar2 & 0xf;
          if ((bVar2 & 0xf) != 0) {
            do {
              *pbVar3 = *pbVar5;
              pbVar3 = pbVar3 + 1;
              pbVar5 = pbVar5 + 1;
              uVar4 = uVar4 - 1;
            } while (uVar4 != 0);
          }
        }
        uVar6 = uVar6 >> 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    return (int)pbVar3 - (int)param_2;
  }
  uVar6 = param_1[3] - 0x10;
  for (uVar4 = uVar6 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)param_2 = *(undefined4 *)pbVar7;
    pbVar7 = pbVar7 + 4;
    param_2 = param_2 + 4;
  }
  for (uVar4 = uVar6 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *param_2 = *pbVar7;
    pbVar7 = pbVar7 + 1;
    param_2 = param_2 + 1;
  }
  return uVar6;
}

