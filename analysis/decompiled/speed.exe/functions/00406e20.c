/* speed.exe 00406e20 FUN_00406e20; analysis pseudocode, not buildable source.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00406e20(int param_1)

{
  undefined4 *puVar1;
  
  *(undefined4 *)(param_1 + 0x70) = 0;
  puVar1 = (undefined4 *)(**(code **)(**(int **)(param_1 + 0x50) + 0x20))();
  *(undefined4 *)(param_1 + 100) = *puVar1;
  *(undefined4 *)(param_1 + 0x68) = puVar1[1];
  *(undefined4 *)(param_1 + 0x6c) = puVar1[2];
  (**(code **)(**(int **)(param_1 + 0x54) + 0x2c))((undefined4 *)(param_1 + 100));
  *(float *)(param_1 + 0x68) = _DAT_008eb1f8 + *(float *)(param_1 + 0x68);
  return;
}

