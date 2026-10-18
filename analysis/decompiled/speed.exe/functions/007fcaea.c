/* speed.exe 007fcaea FUN_007fcaea; analysis pseudocode, not buildable source.
 * calls 007fcabb FUN_007fcabb
 * calls 007c4b80 FUN_007c4b80
 * calls 007cbf90 _rand
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_007fcaea(byte *param_1,int param_2,int param_3,int param_4,int param_5)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  byte abStack_940 [2048];
  byte local_140 [300];
  undefined8 local_14;
  undefined8 local_c;
  
  iVar6 = 0;
  local_14 = (double)(0x3f - param_5) * _DAT_008c38b0 + _DAT_008942e8;
  local_c = _DAT_0089eb88;
  do {
    FUN_007fcabb(local_14,0,local_c);
    uVar2 = FUN_007c4b80();
    if (uVar2 != 0) {
      uVar3 = 0;
      if (0 < (int)uVar2) {
        bVar1 = FUN_007c4b80();
        pbVar5 = local_140 + iVar6;
        for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
          *(uint *)pbVar5 = CONCAT22(CONCAT11(bVar1,bVar1),CONCAT11(bVar1,bVar1));
          pbVar5 = pbVar5 + 4;
        }
        for (uVar4 = uVar2 & 3; uVar3 = uVar2, uVar4 != 0; uVar4 = uVar4 - 1) {
          *pbVar5 = bVar1;
          pbVar5 = pbVar5 + 1;
        }
      }
      iVar6 = iVar6 + uVar3;
    }
    local_c = local_c + _DAT_008942e8;
  } while (local_c < _DAT_008c38a0);
  if (iVar6 < 0x100) {
    pbVar5 = local_140 + iVar6;
    for (uVar2 = 0x100U - iVar6 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      pbVar5[0] = 0;
      pbVar5[1] = 0;
      pbVar5[2] = 0;
      pbVar5[3] = 0;
      pbVar5 = pbVar5 + 4;
    }
    for (uVar2 = 0x100U - iVar6 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pbVar5 = 0;
      pbVar5 = pbVar5 + 1;
    }
  }
  uVar2 = 0;
  do {
    uVar3 = _rand();
    abStack_940[uVar2] = local_140[uVar3 & 0xff];
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x800);
  if (param_3 != 0) {
    local_c._4_4_ = param_3;
    do {
      local_14._4_4_ = param_1;
      uVar2 = _rand();
      pbVar5 = param_1;
      if (param_2 != 0) {
        iVar6 = (uVar2 & 0xff) - (int)param_1;
        param_3 = param_2;
        do {
          if ((int)(uint)*param_1 < -(int)(char)local_140[0]) {
            *param_1 = -local_140[0];
          }
          if (-(int)(char)local_140[0] + 0xff < (int)(uint)*param_1) {
            *param_1 = -local_140[0] - 1;
            pbVar5 = local_14._4_4_;
          }
          *param_1 = *param_1 + param_1[(int)(abStack_940 + iVar6)];
          param_1 = param_1 + 1;
          param_3 = param_3 + -1;
        } while (param_3 != 0);
      }
      param_1 = pbVar5 + param_4;
      local_c._4_4_ = local_c._4_4_ + -1;
    } while (local_c._4_4_ != 0);
  }
  return;
}

