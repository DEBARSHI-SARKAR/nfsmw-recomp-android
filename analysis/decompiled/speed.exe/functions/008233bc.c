/* speed.exe 008233bc FUN_008233bc; analysis pseudocode, not buildable source.
 * calls 00823104 FUN_00823104
 * calls 00825c0b FUN_00825c0b
 */

void FUN_008233bc(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int local_3c [6];
  int local_24 [6];
  undefined1 local_c;
  uint local_b;
  undefined2 local_7;
  undefined1 uStack_5;
  
  local_c = 1;
  local_b = 0;
  local_7 = 0;
  uStack_5 = 0;
  if (DAT_009c2318._2_1_ == '\0') {
    uVar4 = (uint)DAT_009c2318._1_1_;
    if (uVar4 != 0) {
      piVar5 = local_24;
      for (; uVar4 != 0; uVar4 = uVar4 - 1) {
        *piVar5 = *param_1;
        param_1 = param_1 + 1;
        piVar5 = piVar5 + 1;
      }
    }
    for (; 0 < param_2; param_2 = param_2 + -0x100) {
      iVar2 = 0x100;
      if (param_2 < 0x101) {
        iVar2 = param_2;
      }
      FUN_00823104(local_24,iVar2);
      iVar2 = 0;
      if (DAT_009c2318._1_1_ != 0) {
        do {
          local_24[iVar2] = local_24[iVar2] + (uint)DAT_009c231c;
          iVar2 = iVar2 + 1;
        } while (iVar2 < (int)(uint)DAT_009c2318._1_1_);
      }
    }
  }
  else {
    local_24[0] = *param_1;
    for (; 0 < param_2; param_2 = param_2 + -0x100) {
      iVar2 = 0x100;
      if (param_2 < 0x101) {
        iVar2 = param_2;
      }
      iVar3 = 0;
      if (DAT_009c2318._1_1_ != 0) {
        iVar1 = DAT_009c2428;
        do {
          local_3c[iVar3] = iVar1;
          iVar3 = iVar3 + 1;
          iVar1 = iVar1 + iVar2 * 2;
        } while (iVar3 < (int)(uint)DAT_009c2318._1_1_);
      }
      FUN_00823104(local_3c,iVar2);
      if (DAT_009c2318._1_1_ == 2) {
        local_c = 1;
        local_b = local_b & 0xffffff00;
      }
      else if (DAT_009c2318._1_1_ == 4) {
        local_c = 3;
        local_b = CONCAT13(local_b._3_1_,0x10200);
      }
      else if (DAT_009c2318._1_1_ == 6) {
        local_c = 4;
        local_b = 0x3050001;
        local_7 = CONCAT11(local_7._1_1_,2);
      }
      FUN_00825c0b(iVar2,DAT_009c2318._1_1_,&local_c,local_3c[0],local_24[0]);
      local_24[0] = local_24[0] + (uint)DAT_009c2318._1_1_ * iVar2 * 2;
    }
  }
  return;
}

