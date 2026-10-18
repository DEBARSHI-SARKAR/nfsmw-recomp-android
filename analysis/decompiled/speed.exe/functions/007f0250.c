/* speed.exe 007f0250 FUN_007f0250; analysis pseudocode, not buildable source.
 * calls 007ece6a FUN_007ece6a
 * calls 007ece42 FUN_007ece42
 * calls 007ececc FUN_007ececc
 * calls 007ecef7 FUN_007ecef7
 */

int FUN_007f0250(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 *local_3c;
  undefined4 local_38;
  char *local_34;
  undefined4 *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  uint *local_24;
  uint local_20;
  undefined4 local_1c;
  uint *local_18;
  uint local_14 [4];
  
  local_14[3] = FUN_007ece42(*param_2,1,param_1);
  if (local_14[3] != 0) {
    param_1 = param_1 + -1;
    uVar1 = FUN_007ecef7(local_14[3],param_1);
    local_28 = *param_2;
    local_14[2] = 0;
    local_14[0] = (uint)param_2[4] >> 6 & 4;
    local_18 = local_14;
    local_20 = (uint)param_2[4] >> 9 & 2;
    local_24 = &local_20;
    local_30 = &local_2c;
    local_1c = DAT_00907704;
    local_3c = &local_38;
    local_44 = 6;
    local_40 = 0xab;
    local_38 = 5;
    local_34 = "d:\\packages\\realcore\\6.24.00\\source\\file\\cmn\\hlsfile.cpp";
    local_2c = 1;
    local_14[1] = 1;
    iVar2 = (**(code **)*DAT_009076dc)(uVar1,&local_44);
    if (iVar2 != 0) {
      FUN_007ece6a(local_14[3],0,iVar2,uVar1);
      FUN_007ececc(local_14[3],param_1);
      param_2[2] = uVar1;
      return iVar2;
    }
    FUN_007ececc(local_14[3],param_1);
  }
  return 0;
}

