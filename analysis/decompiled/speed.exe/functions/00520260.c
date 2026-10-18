/* speed.exe 00520260 FUN_00520260; analysis pseudocode, not buildable source.
 * calls 00460dd0 FUN_00460dd0
 */

undefined4 * __thiscall FUN_00520260(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0x150);
  while( true ) {
    if (puVar1 == (undefined4 *)(param_1 + 0x150)) {
      return (undefined4 *)0x0;
    }
    iVar2 = FUN_00460dd0(puVar1[2],param_2);
    if (iVar2 == 0) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  return puVar1;
}

