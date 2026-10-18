/* speed.exe 004498b0 FUN_004498b0; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 */

undefined4 * FUN_004498b0(int param_1)

{
  undefined4 *puVar1;
  
  if (param_1 == 1) {
    puVar1 = _malloc(0x30);
    if (puVar1 != (undefined4 *)0x0) {
      *(undefined1 *)(puVar1 + 6) = 1;
      *(undefined1 *)((int)puVar1 + 0x1a) = 1;
      *puVar1 = &PTR_FUN_00893518;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      *(undefined1 *)((int)puVar1 + 0x19) = 0;
      puVar1[8] = 0xffffffff;
      puVar1[9] = 0;
      puVar1[10] = 0;
      puVar1[0xb] = 0xffffffff;
      return puVar1;
    }
  }
  else if (param_1 == 2) {
    puVar1 = _malloc(0x18);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = &PTR_FUN_00893544;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      *(undefined1 *)(puVar1 + 5) = 1;
      return puVar1;
    }
  }
  return (undefined4 *)0x0;
}

