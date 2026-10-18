/* speed.exe 0076e320 FUN_0076e320; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_0076e320(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0xffffffff;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

