/* speed.exe 007528d0 FUN_007528d0; analysis pseudocode, not buildable source.
 * calls 00751860 FUN_00751860
 */

void __thiscall FUN_007528d0(int param_1,undefined4 *param_2,int param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 local_380 [87];
  undefined4 local_224 [87];
  int local_c8;
  int local_c4;
  
  puVar1 = param_2;
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
  }
  FUN_00751860(local_380,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x14));
  puVar1 = local_224;
  if (param_4 != 0) {
    puVar1 = local_380;
    local_c4 = local_c8;
  }
  for (; local_c4 != 0; local_c4 = local_c4 + -1) {
    *param_2 = *puVar1;
    puVar1 = puVar1 + 1;
    param_2 = param_2 + 1;
  }
  return;
}

