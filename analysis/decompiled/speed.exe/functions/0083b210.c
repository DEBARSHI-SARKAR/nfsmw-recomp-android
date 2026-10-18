/* speed.exe 0083b210 FUN_0083b210; analysis pseudocode, not buildable source.
 */

int FUN_0083b210(byte *param_1,byte *param_2,int param_3,byte *param_4)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  byte bVar4;
  byte *pbVar5;
  
  pbVar5 = param_1;
  if (param_1 != (byte *)0x0) {
    if (*param_1 == 0x22) {
      param_1._0_1_ = 0x22;
      pbVar5 = pbVar5 + 1;
      bVar4 = 0x22;
    }
    else {
      param_1._0_1_ = 0x20;
      bVar2 = (byte)param_1;
      param_1._0_1_ = 0x20;
      bVar4 = (byte)param_1;
      param_1._0_1_ = bVar2;
    }
    if (param_2 == (byte *)0x0) {
      iVar3 = 0;
      if (*pbVar5 != bVar4) {
        while (0x1f < *pbVar5) {
          if (((*pbVar5 == 0x25) && (0x1f < pbVar5[1])) && (0x1f < pbVar5[2])) {
            pbVar5 = pbVar5 + 2;
          }
          pbVar1 = pbVar5 + 1;
          iVar3 = iVar3 + 1;
          pbVar5 = pbVar5 + 1;
          if (*pbVar1 == bVar4) {
            return iVar3;
          }
        }
      }
    }
    else {
      if (param_3 < 1) {
        return -1;
      }
      iVar3 = 1;
      if (1 < param_3) {
        iVar3 = 1;
        do {
          bVar2 = *pbVar5;
          if ((bVar2 == (byte)param_1) || (bVar2 < 0x20)) break;
          if (bVar2 == 0x25) {
            bVar4 = pbVar5[1];
            if (bVar4 == 0x25) {
              *param_2 = 0x25;
              pbVar5 = pbVar5 + 2;
            }
            else {
              if ((bVar4 < 0x20) || (pbVar5[2] < 0x20)) goto LAB_0083b32d;
              *param_2 = (&DAT_008c6408)[bVar4] << 4 | (&DAT_008c6408)[pbVar5[2]];
              pbVar5 = pbVar5 + 3;
            }
          }
          else {
LAB_0083b32d:
            *param_2 = bVar2;
            pbVar5 = pbVar5 + 1;
          }
          param_2 = param_2 + 1;
          iVar3 = iVar3 + 1;
        } while (iVar3 < param_3);
      }
      *param_2 = 0;
      iVar3 = iVar3 + -1;
    }
    return iVar3;
  }
  if (param_4 == (byte *)0x0) {
    return -1;
  }
  if (param_2 == (byte *)0x0) {
    pbVar5 = param_4 + 1;
    do {
      bVar2 = *param_4;
      param_4 = param_4 + 1;
    } while (bVar2 != 0);
    return (int)param_4 - (int)pbVar5;
  }
  iVar3 = 1;
  pbVar5 = param_2;
  if (1 < param_3) {
    do {
      pbVar5 = param_2;
      if (*param_4 == 0) break;
      pbVar5 = param_2 + 1;
      *param_2 = *param_4;
      param_4 = param_4 + 1;
      iVar3 = iVar3 + 1;
      param_2 = pbVar5;
    } while (iVar3 < param_3);
  }
  *pbVar5 = 0;
  return iVar3 + -1;
}

