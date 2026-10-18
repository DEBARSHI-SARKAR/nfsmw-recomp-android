/* speed.exe 0045d650 FUN_0045d650; analysis pseudocode, not buildable source.
 */

undefined4 * FUN_0045d650(uint param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(&DAT_0090dd48)[(param_1 >> 6) + (param_1 >> 0xc) + param_1 & 0x3f];
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
    if (puVar1[1] == param_1) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  return puVar1;
}

