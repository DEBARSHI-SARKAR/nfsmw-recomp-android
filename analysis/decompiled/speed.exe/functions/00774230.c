/* speed.exe 00774230 FUN_00774230; analysis pseudocode, not buildable source.
 * calls 0076ec70 FUN_0076ec70
 */

void __fastcall FUN_00774230(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0xffffffff;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  FUN_0076ec70(0x40400000);
  return;
}

