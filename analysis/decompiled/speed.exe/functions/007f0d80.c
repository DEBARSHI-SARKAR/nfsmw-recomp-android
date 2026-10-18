/* speed.exe 007f0d80 FUN_007f0d80; analysis pseudocode, not buildable source.
 * calls 007c97c0 FUN_007c97c0
 * calls 007f0d5e FUN_007f0d5e
 */

void FUN_007f0d80(undefined4 param_1,undefined1 *param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  
  while( true ) {
    puVar1 = (undefined1 *)FUN_007c97c0(param_2,0x2c);
    if (puVar1 != (undefined1 *)0x0) {
      *puVar1 = 0;
    }
    uVar2 = FUN_007f0d5e(param_1,param_2);
    *param_3 = uVar2;
    param_3 = param_3 + 1;
    if (puVar1 == (undefined1 *)0x0) break;
    *puVar1 = 0x2c;
    param_2 = puVar1 + 1;
    if (param_2 == (undefined1 *)0x0) {
      return;
    }
  }
  return;
}

