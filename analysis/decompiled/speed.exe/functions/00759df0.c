/* speed.exe 00759df0 FUN_00759df0; analysis pseudocode, not buildable source.
 * calls 00759c60 FUN_00759c60
 */

void __fastcall FUN_00759df0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x58);
  while (puVar2 != (undefined4 *)(param_1 + 0x58)) {
    puVar1 = (undefined4 *)*puVar2;
    FUN_00759c60(puVar2,1);
    puVar2 = puVar1;
  }
  return;
}

