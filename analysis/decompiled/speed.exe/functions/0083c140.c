/* speed.exe 0083c140 FUN_0083c140; analysis pseudocode, not buildable source.
 */

int FUN_0083c140(byte *param_1,byte *param_2,int param_3,byte *param_4,int param_5,int param_6)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  
  if (param_1 != (byte *)0x0) {
    pbVar2 = param_1;
    for (; 0 < param_5; param_5 = param_5 + -1) {
      if (*pbVar2 == 0x22) {
        bVar5 = 0x20;
        pbVar2 = pbVar2 + 1;
        bVar4 = 0x22;
      }
      else {
        bVar5 = 0x21;
        bVar4 = (byte)param_6;
      }
      for (; (*pbVar2 != bVar4 && (bVar5 <= *pbVar2)); pbVar2 = pbVar2 + 1) {
      }
      if ((*pbVar2 == 0x22) && (bVar4 == 0x22)) {
        pbVar2 = pbVar2 + 1;
      }
      if ((char)*pbVar2 != param_6) goto LAB_0083c191;
      pbVar2 = pbVar2 + 1;
    }
    if (pbVar2 != (byte *)0x0) {
      if (*pbVar2 == 0x22) {
        bVar4 = 0x20;
        param_1._0_1_ = 0x22;
        pbVar2 = pbVar2 + 1;
      }
      else {
        bVar4 = 0x21;
        param_1._0_1_ = (byte)param_6;
      }
      if (param_2 == (byte *)0x0) {
        bVar5 = *pbVar2;
        iVar3 = 0;
        for (; (bVar5 != (byte)param_1 && (bVar4 <= *pbVar2)); pbVar2 = pbVar2 + 1) {
          if ((*pbVar2 == 0x25) && ((0x1f < pbVar2[1] && (0x1f < pbVar2[2])))) {
            pbVar2 = pbVar2 + 2;
          }
          bVar5 = pbVar2[1];
          iVar3 = iVar3 + 1;
        }
        return iVar3;
      }
      if (param_3 < 1) {
        return -1;
      }
      iVar3 = 1;
      if (1 < param_3) {
        do {
          bVar5 = *pbVar2;
          if ((bVar5 == (byte)param_1) || (bVar5 < bVar4)) break;
          if (bVar5 == 0x25) {
            bVar1 = pbVar2[1];
            if (bVar1 == 0x25) {
              *param_2 = 0x25;
              pbVar2 = pbVar2 + 2;
            }
            else {
              if ((bVar1 < 0x20) || (pbVar2[2] < 0x20)) goto LAB_0083c2b3;
              *param_2 = (&DAT_008c6408)[bVar1] << 4 | (&DAT_008c6408)[pbVar2[2]];
              pbVar2 = pbVar2 + 3;
            }
          }
          else {
LAB_0083c2b3:
            *param_2 = bVar5;
            pbVar2 = pbVar2 + 1;
          }
          param_2 = param_2 + 1;
          iVar3 = iVar3 + 1;
        } while (iVar3 < param_3);
      }
      *param_2 = 0;
      return iVar3 + -1;
    }
  }
LAB_0083c191:
  if (param_4 == (byte *)0x0) {
    return -1;
  }
  if (param_2 == (byte *)0x0) {
    pbVar2 = param_4 + 1;
    do {
      bVar4 = *param_4;
      param_4 = param_4 + 1;
    } while (bVar4 != 0);
    return (int)param_4 - (int)pbVar2;
  }
  iVar3 = 1;
  pbVar2 = param_2;
  if (1 < param_3) {
    do {
      pbVar2 = param_2;
      if (*param_4 == 0) break;
      pbVar2 = param_2 + 1;
      *param_2 = *param_4;
      param_4 = param_4 + 1;
      iVar3 = iVar3 + 1;
      param_2 = pbVar2;
    } while (iVar3 < param_3);
  }
  *pbVar2 = 0;
  return iVar3 + -1;
}

