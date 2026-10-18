/* speed.exe 007a94c0 FUN_007a94c0; analysis pseudocode, not buildable source.
 * calls 0046b920 FUN_0046b920
 * calls 0045a430 FUN_0045a430
 * calls 007a8f20 FUN_007a8f20
 * calls 0051e1a0 FUN_0051e1a0
 * calls 004770b0 FUN_004770b0
 */

void __thiscall FUN_007a94c0(int param_1,char param_2)

{
  undefined4 uVar1;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_40;
  int local_2c;
  void *local_1c;
  undefined1 *puStack_18;
  int local_14;
  
  local_14 = 0xffffffff;
  puStack_18 = &LAB_00882a50;
  local_1c = ExceptionList;
  if ((*(char *)(param_1 + 0x58) != '\0') || (param_2 != '\0')) {
    ExceptionList = &local_1c;
    uVar1 = FUN_007a8f20("angle_entry_");
    FUN_0051e1a0(uVar1,0,0);
    local_78 = *(undefined4 *)(local_2c + 0x50);
    local_80 = *(undefined4 *)(local_2c + 0x3c);
    local_7c = *(undefined4 *)(local_2c + 0x54);
    local_90 = *(undefined4 *)(local_2c + 0x2c);
    local_88 = *(undefined4 *)(local_2c + 0x34);
    local_8c = *(undefined4 *)(local_2c + 0x30);
    local_14 = 0;
    FUN_0046b920(&local_80,*(undefined4 *)(local_2c + 0x44),*(undefined4 *)(local_2c + 0x24),
                 &local_90);
    uVar1 = FUN_007a8f20("angle_final_");
    FUN_0051e1a0(uVar1,0,0);
    local_58 = *(undefined4 *)(local_40 + 0x50);
    local_60 = *(undefined4 *)(local_40 + 0x3c);
    local_5c = *(undefined4 *)(local_40 + 0x54);
    local_14._0_1_ = 1;
    local_70 = *(undefined4 *)(local_40 + 0x2c);
    local_68 = *(undefined4 *)(local_40 + 0x34);
    local_6c = *(undefined4 *)(local_40 + 0x30);
    FUN_004770b0(&local_60,*(undefined4 *)(local_40 + 0x44),*(undefined4 *)(local_40 + 0x24),
                 &local_70,*(undefined4 *)(local_40 + 0x20),*(undefined4 *)(local_40 + 0x1c),
                 *(undefined4 *)(local_40 + 0x48));
    *(undefined1 *)(param_1 + 0x58) = 0;
    local_14 = (uint)local_14._1_3_ << 8;
    FUN_0045a430();
    local_14 = 0xffffffff;
    FUN_0045a430();
  }
  ExceptionList = local_1c;
  return;
}

