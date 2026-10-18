/* speed.exe 007457d0 FUN_007457d0; analysis pseudocode, not buildable source.
 * calls 0045a430 FUN_0045a430
 * calls 00738d50 FUN_00738d50
 * calls 00745290 FUN_00745290
 * calls 00738c80 FUN_00738c80
 * calls 006e9660 FUN_006e9660
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_007457d0(int param_1,float param_2,float param_3,float param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00880c98;
  local_c = ExceptionList;
  if ((((param_2 <= _DAT_008b4bb4) && (_DAT_008b4bb0 <= param_2)) && (param_3 <= _DAT_008b4bb4)) &&
     (((_DAT_008b4bb0 <= param_3 && (param_4 <= _DAT_008b4bb4)) && (_DAT_008b4bb0 <= param_4)))) {
    ExceptionList = &local_c;
    FUN_00738c80();
    FUN_00738c80();
    FUN_00738c80();
    ExceptionList = local_c;
    return;
  }
  if ((*(byte *)(param_1 + 0x50) & 1) != 0) {
    ExceptionList = &local_c;
    uVar1 = FUN_006e9660(*(undefined4 *)(param_1 + 0x58));
    local_4 = 0;
    FUN_00738d50(uVar1);
    local_4 = 0xffffffff;
    FUN_0045a430();
    param_1 = param_1 + 0x70;
    FUN_00745290(param_2,param_5,param_6,param_7,param_1);
    FUN_00745290(param_3,param_5,param_6,param_7,param_1);
    FUN_00745290(param_4,param_5,param_6,param_7,param_1);
  }
  ExceptionList = local_c;
  return;
}

