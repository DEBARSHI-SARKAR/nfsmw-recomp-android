/* speed.exe 0060cd70 FUN_0060cd70; analysis pseudocode, not buildable source.
 * calls 005d29d0 FUN_005d29d0
 */

void FUN_0060cd70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 undefined1 param_5)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_005d29d0(0x1c,0);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    puVar1[3] = *param_4;
    puVar1[4] = param_4[1];
    puVar1[5] = param_4[2];
    *(undefined1 *)(puVar1 + 6) = param_5;
    *(undefined1 *)((int)puVar1 + 0x19) = 0;
  }
  return;
}

