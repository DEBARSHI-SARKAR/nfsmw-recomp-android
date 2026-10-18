/* speed.exe 007488b0 FUN_007488b0; analysis pseudocode, not buildable source.
 * calls 0073a760 FUN_0073a760
 */

undefined4 __thiscall FUN_007488b0(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0x58);
  while( true ) {
    if (puVar1 == (undefined4 *)(param_1 + 0x58)) {
      return 0;
    }
    if (puVar1[0x1b4] == param_2) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  if (puVar1[2] == 0) {
    return 0;
  }
  uVar2 = FUN_0073a760();
  return uVar2;
}

