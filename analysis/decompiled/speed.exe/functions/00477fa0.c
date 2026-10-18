/* speed.exe 00477fa0 FUN_00477fa0; analysis pseudocode, not buildable source.
 * calls 00460d20 FUN_00460d20
 */

undefined4 * __thiscall FUN_00477fa0(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0xc);
  while( true ) {
    if (puVar1 == (undefined4 *)(param_1 + 0xc)) {
      return (undefined4 *)0x0;
    }
    iVar2 = FUN_00460d20(param_2,(int)puVar1 + 0x17);
    if (iVar2 == 0) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  return puVar1;
}

