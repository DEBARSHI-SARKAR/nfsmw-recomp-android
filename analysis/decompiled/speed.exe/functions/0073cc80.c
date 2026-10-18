/* speed.exe 0073cc80 FUN_0073cc80; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0073cc80(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (DAT_009b0a30 == 0) {
    *(undefined4 *)(param_1 + 0x28c) = param_2;
  }
  else {
    *(undefined4 *)(param_1 + 0x28c) = DAT_00904a14;
  }
  iVar1 = FUN_007c4b80();
  *(int *)(param_1 + 0x33e8) = iVar1;
  *(int *)(param_1 + 0x294) = 0x15e - iVar1;
  *(float *)(param_1 + 0x33f0) = _DAT_0089096c - *(float *)(param_1 + 0x33ec);
  return;
}

