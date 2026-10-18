/* speed.exe 004c6cb0 FUN_004c6cb0; analysis pseudocode, not buildable source.
 * calls 005d29d0 FUN_005d29d0
 */

void FUN_004c6cb0(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_005d29d0(0x30,0);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = *param_3;
    puVar1[4] = param_3[2];
    puVar1[5] = param_3[3];
    puVar1[6] = param_3[4];
    puVar1[7] = param_3[5];
    puVar1[8] = param_3[6];
    *(undefined1 *)(puVar1 + 9) = *(undefined1 *)(param_3 + 7);
    puVar1[10] = param_3[8];
    puVar1[0xb] = param_3[9];
  }
  return;
}

