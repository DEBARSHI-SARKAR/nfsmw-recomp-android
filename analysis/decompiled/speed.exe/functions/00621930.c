/* speed.exe 00621930 FUN_00621930; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_00621930(undefined4 *param_1)

{
  uint *puVar1;
  
  *param_1 = &PTR_LAB_008a6af8;
  if (param_1[2] != 0) {
    puVar1 = (uint *)(param_1[2] + 0x10);
    *puVar1 = *puVar1 | 0x100;
  }
  *param_1 = &PTR_LAB_008a66f8;
  return;
}

