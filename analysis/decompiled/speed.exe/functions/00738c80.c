/* speed.exe 00738c80 FUN_00738c80; analysis pseudocode, not buildable source.
 * calls 004ff180 FUN_004ff180
 */

void __fastcall FUN_00738c80(undefined1 *param_1)

{
  uint *puVar1;
  
  if (*(int *)(param_1 + 8) != 0) {
    puVar1 = (uint *)(*(int *)(param_1 + 8) + 0x18);
    *puVar1 = *puVar1 | 0x80000;
    FUN_004ff180();
  }
  *param_1 = 1;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}

