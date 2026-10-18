/* speed.exe 0064c420 FUN_0064c420; analysis pseudocode, not buildable source.
 * calls 006bd900 FUN_006bd900
 * calls 006bd920 FUN_006bd920
 * calls 006bdbb0 FUN_006bdbb0
 * calls 006bdd20 FUN_006bdd20
 * calls 006bdc60 FUN_006bdc60
 * calls 007c4b80 FUN_007c4b80
 * calls 006e8dc0 FUN_006e8dc0
 * calls 0064c270 FUN_0064c270
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0064c420(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  float10 fVar2;
  undefined1 local_60 [12];
  undefined4 local_54;
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
  
  fVar2 = (float10)FUN_006e8dc0();
  if (((float10)_DAT_0089096c <= fVar2) && (((param_1 == 1 || (param_1 == 2)) || (param_1 == 3)))) {
    FUN_0064c270(local_60);
    local_54 = 0;
    local_50 = 0x3f800000;
    local_4c = 0;
    local_48 = 0;
    local_44 = 0;
    local_40 = 0;
    local_3c = 0x3f800000;
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    local_28 = 0x3f800000;
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    local_14 = 0x3f800000;
    FUN_006bd920(&local_20,param_2,local_60);
    local_14 = 0x3f800000;
    uVar1 = FUN_007c4b80();
    FUN_006bdbb0(&local_50,&local_50,uVar1);
    uVar1 = FUN_007c4b80();
    FUN_006bdc60(&local_50,&local_50,uVar1);
    uVar1 = FUN_007c4b80();
    FUN_006bdd20(&local_50,&local_50,uVar1);
    FUN_006bd900(param_2,param_2,&local_50);
  }
  return;
}

