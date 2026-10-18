/* speed.exe 005fe660 FUN_005fe660; analysis pseudocode, not buildable source.
 * calls 005fca80 FUN_005fca80
 * calls 00753650 FUN_00753650
 * calls 00466340 FUN_00466340
 * calls 005094c0 FUN_005094c0
 * calls 004ff180 FUN_004ff180
 * calls 005e29f0 FUN_005e29f0
 * calls 0075a130 FUN_0075a130
 * calls 00503bc0 FUN_00503bc0
 * calls 00463ca0 FUN_00463ca0
 */

void __thiscall FUN_005fe660(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
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
  float local_2c;
  undefined4 local_28;
  undefined4 local_24;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
  local_14 = 0xffffffff;
  puStack_18 = &LAB_008760db;
  local_1c = ExceptionList;
  cVar1 = '\0';
  ExceptionList = &local_1c;
  *(int *)(param_1 + 0x19b8) = param_2;
  if (*(int *)(param_1 + 0x1968) != 0) {
    cVar1 = FUN_005fca80();
  }
  if ((param_2 == 0) || (cVar1 == '\0')) {
    iVar2 = *(int *)(param_1 + 0x1990);
    if (iVar2 != 0) {
      FUN_00753650();
      FUN_00463ca0(DAT_009b0a2c,iVar2);
    }
    *(undefined4 *)(param_1 + 0x1990) = 0;
    if (*(int *)(param_1 + 0x1994) != 0) {
      FUN_004ff180();
      iVar2 = *(int *)(param_1 + 0x1994);
      if (iVar2 != 0) {
        FUN_005094c0();
        FUN_00463ca0(DAT_00916068,iVar2);
      }
      *(undefined4 *)(param_1 + 0x1994) = 0;
    }
  }
  else {
    if (*(int *)(param_1 + 0x1990) == 0) {
      iVar2 = FUN_00466340(DAT_009b0a2c);
      local_14 = 0;
      if (iVar2 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = FUN_0075a130(0x738b1f9b,0,0);
      }
      local_14 = 0xffffffff;
      *(undefined4 *)(param_1 + 0x1990) = uVar3;
    }
    local_28 = *(undefined4 *)(param_2 + 0x5c);
    local_30 = *(undefined4 *)(param_2 + 0x60);
    local_2c = -*(float *)(param_2 + 0x58);
    local_5c = 0;
    local_58 = 0;
    local_54 = 0;
    local_50 = 0;
    local_48 = 0;
    local_44 = 0;
    local_40 = 0;
    local_3c = 0;
    local_38 = 0x3f800000;
    local_34 = 0;
    local_24 = 0x3f800000;
    local_60 = 0x3f800000;
    local_4c = 0x3f800000;
    FUN_005e29f0(&local_60);
    if (*(int *)(param_1 + 0x1994) != 0) {
      FUN_00503bc0(&local_60);
      ExceptionList = local_1c;
      return;
    }
  }
  ExceptionList = local_1c;
  return;
}

