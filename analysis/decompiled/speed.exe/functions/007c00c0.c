/* speed.exe 007c00c0 FUN_007c00c0; analysis pseudocode, not buildable source.
 * calls 00514c70 FUN_00514c70
 * calls 007bce90 FUN_007bce90
 * calls 0066c560 FUN_0066c560
 * calls 00524850 FUN_00524850
 * calls 007c4b80 FUN_007c4b80
 * calls 007bd060 FUN_007bd060
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __thiscall FUN_007c00c0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00883988;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_007bce90(param_2);
  local_4 = 0;
  *param_1 = &PTR_FUN_008b7ea4;
  *(undefined1 *)(param_1 + 0x72) = 0;
  if (param_1[0x52] == 0x307) {
    if (DAT_009b9eb0 == '\0') {
      puVar3 = &DAT_009b9d60;
      for (iVar2 = 0x37; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar3 = 0;
        puVar3 = puVar3 + 1;
      }
      _DAT_009b9d50 = 0;
      _DAT_009b9d54 = 0;
      _DAT_009b9d58 = 0;
      DAT_009b9d5a = 0;
    }
    FUN_0066c560(&DAT_009b9ec8);
    iVar2 = FUN_007c4b80();
    param_1[0x71] = iVar2;
    if (iVar2 < 0x251d) {
      if (iVar2 < 0x2135) {
        param_1[0x71] = ((iVar2 < 0x1d4d) - 1 & 1000) + 7000;
      }
      else {
        param_1[0x71] = 9000;
      }
    }
    else {
      param_1[0x71] = 10000;
    }
    uVar1 = FUN_00524850(param_1[4],0xdee8632b);
    FUN_00514c70(uVar1);
  }
  FUN_007bd060();
  ExceptionList = local_c;
  return param_1;
}

