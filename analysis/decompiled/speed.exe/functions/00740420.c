/* speed.exe 00740420 FUN_00740420; analysis pseudocode, not buildable source.
 */

undefined4 * __thiscall FUN_00740420(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)*param_1;
  while( true ) {
    if (puVar1 == param_1) {
      return (undefined4 *)0x0;
    }
    if (param_2 == 0) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  return puVar1;
}

