/* speed.exe 0041c630 FUN_0041c630; analysis pseudocode, not buildable source.
 * calls 005d29d0 FUN_005d29d0
 */

void FUN_0041c630(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined2 *param_4,
                 undefined1 param_5)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_005d29d0(0x10,0);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    *(undefined2 *)(puVar1 + 3) = *param_4;
    *(undefined1 *)((int)puVar1 + 0xe) = param_5;
    *(undefined1 *)((int)puVar1 + 0xf) = 0;
  }
  return;
}

