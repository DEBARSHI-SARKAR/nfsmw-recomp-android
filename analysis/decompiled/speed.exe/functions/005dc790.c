/* speed.exe 005dc790 FUN_005dc790; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_005dc790(int param_1,int param_2,undefined4 param_3)

{
  if (*(float *)(param_1 + 0x78 + *(int *)(param_1 + 0x74) * 4) == _DAT_00890968) {
    *(int *)(param_1 + 0x74) = *(int *)(param_1 + 0x74) + 1;
  }
  *(undefined4 *)(param_1 + 0x78 + param_2 * 4) = param_3;
  *(undefined4 *)(param_1 + 0xb8 + param_2 * 4) = *(undefined4 *)(param_1 + 0x10);
  return;
}

