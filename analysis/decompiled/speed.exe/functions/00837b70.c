/* speed.exe 00837b70 FUN_00837b70; analysis pseudocode, not buildable source.
 */

void FUN_00837b70(int *param_1)

{
  uint *puVar1;
  
  if ((*(uint *)(*param_1 + 0xf8) & 0x4000000) != 0) {
    puVar1 = (uint *)(*param_1 + 0xf8);
    *puVar1 = *puVar1 & 0xfbbd73f7;
  }
  return;
}

