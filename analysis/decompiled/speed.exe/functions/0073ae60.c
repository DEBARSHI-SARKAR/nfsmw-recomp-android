/* speed.exe 0073ae60 FUN_0073ae60; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0073ae60(undefined4 param_1,int param_2,int param_3,char param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar4 = 0;
  uVar3 = 0;
  local_4 = 0;
  local_8 = 0;
  local_c = 0;
  iVar1 = 0;
  if (0 < param_3) {
    do {
      if (_DAT_00899dd0 < *(float *)(param_2 + iVar4 * 4)) {
        iVar1 = FUN_007c4b80();
        local_c = local_c + iVar1;
        iVar1 = FUN_007c4b80();
        local_8 = local_8 + iVar1;
        iVar1 = FUN_007c4b80();
        local_4 = local_4 + iVar1;
        if (param_4 == '\0') {
          iVar1 = FUN_007c4b80();
          uVar3 = uVar3 + iVar1;
        }
        else {
          uVar2 = FUN_007c4b80();
          if ((int)uVar3 < (int)(uVar2 & 0xff)) {
            uVar3 = uVar2 & 0xff;
          }
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < param_3);
    local_10._2_2_ = 0xff;
    iVar1 = local_c;
    if (0xff < local_c) goto LAB_0073af5d;
  }
  local_10._2_2_ = (ushort)iVar1 & 0xff;
LAB_0073af5d:
  local_10 = CONCAT22(local_10._2_2_,0xff00);
  if (local_8 < 0x100) {
    local_10 = (uint)CONCAT21(local_10._2_2_,(char)local_8) << 8;
  }
  local_10 = CONCAT31(local_10._1_3_,0xff);
  if (local_4 < 0x100) {
    local_10 = CONCAT31(local_10._1_3_,(char)local_4);
  }
  local_10 = CONCAT13(0xff,(undefined3)local_10);
  if ((int)uVar3 < 0x100) {
    local_10 = CONCAT13((char)uVar3,(undefined3)local_10);
  }
  return local_10;
}

