/* speed.exe 005e5a90 FUN_005e5a90; analysis pseudocode, not buildable source.
 * calls 006bdd20 FUN_006bdd20
 * calls 005e29f0 FUN_005e29f0
 * calls 00503bc0 FUN_00503bc0
 */

void __fastcall FUN_005e5a90(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
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
  
  if ((*(byte *)(param_1 + 2) >> 2 & 1) != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x10);
    uVar2 = *(undefined4 *)(param_1 + 0x14);
    uVar3 = *(undefined4 *)(param_1 + 0x18);
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
    FUN_006bdd20(&local_50,&local_50,*(undefined2 *)(param_1 + 0x1c));
    local_14 = 0x3f800000;
    local_20 = uVar1;
    local_1c = uVar2;
    local_18 = uVar3;
    if (*(int *)(param_1 + 8) != 0) {
      FUN_005e29f0(&local_50);
      if ((~(*(byte *)(param_1 + 2) >> 3) & 1) != 0) {
        *(undefined1 *)(*(int *)(param_1 + 8) + 0x28) = 0;
      }
    }
    if (*(int *)(param_1 + 0xc) != 0) {
      FUN_00503bc0(&local_50);
    }
  }
  return;
}

