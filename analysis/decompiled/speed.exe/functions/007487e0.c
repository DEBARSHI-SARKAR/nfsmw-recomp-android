/* speed.exe 007487e0 FUN_007487e0; analysis pseudocode, not buildable source.
 * calls 00460d20 FUN_00460d20
 */

undefined4 * __thiscall FUN_007487e0(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0x28);
  while( true ) {
    if (puVar1 == (undefined4 *)(param_1 + 0x28)) {
      return (undefined4 *)0x0;
    }
    iVar2 = FUN_00460d20(puVar1[2],param_2);
    if (iVar2 == 0) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  return puVar1;
}

