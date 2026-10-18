/* speed.exe 007379c0 FUN_007379c0; analysis pseudocode, not buildable source.
 * calls 006da9b0 FUN_006da9b0
 * calls 006bd900 FUN_006bd900
 */

void FUN_007379c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  uVar2 = DAT_00915f84;
  if (DAT_009b2acc != 0) {
    uVar1 = DAT_00915f84 + 0x40;
    if (DAT_00915f88 <= uVar1) {
      DAT_00915f94 = 1;
      DAT_00915f98 = DAT_00915f98 + 0x40;
      return;
    }
    bVar3 = DAT_00915f84 != 0;
    DAT_00915f84 = uVar1;
    if (bVar3) {
      local_50 = param_3;
      local_3c = param_4;
      local_4c = 0;
      local_48 = 0;
      local_44 = 0;
      local_40 = 0;
      local_38 = 0;
      local_34 = 0;
      local_30 = 0;
      local_2c = 0;
      local_24 = 0;
      local_20 = 0;
      local_1c = 0;
      local_18 = 0;
      local_14 = 0x3f800000;
      local_28 = param_5;
      FUN_006bd900(uVar2,&local_50,param_2);
      FUN_006da9b0(&DAT_009b2ac0,uVar2,0,0,0);
    }
  }
  return;
}

