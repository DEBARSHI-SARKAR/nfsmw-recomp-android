/* speed.exe 0045d3a0 FUN_0045d3a0; analysis pseudocode, not buildable source.
 */

int __thiscall FUN_0045d3a0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)*param_1;
  iVar2 = 0;
  while( true ) {
    if (puVar1 == param_1) {
      if (param_2 != (undefined4 *)0x0) {
        iVar2 = 0;
      }
      return iVar2;
    }
    iVar2 = iVar2 + 1;
    if (puVar1 == param_2) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  return iVar2;
}

