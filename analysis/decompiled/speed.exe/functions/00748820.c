/* speed.exe 00748820 FUN_00748820; analysis pseudocode, not buildable source.
 * calls 00460d20 FUN_00460d20
 */

undefined4 * __thiscall FUN_00748820(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0x30);
  while( true ) {
    if (puVar1 == (undefined4 *)(param_1 + 0x30)) {
      return (undefined4 *)0x0;
    }
    iVar2 = FUN_00460d20(puVar1[2],param_2);
    if (iVar2 == 0) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  return puVar1;
}

