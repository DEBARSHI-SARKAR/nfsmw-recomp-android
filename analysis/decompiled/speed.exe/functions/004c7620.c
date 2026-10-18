/* speed.exe 004c7620 FUN_004c7620; analysis pseudocode, not buildable source.
 */

undefined4 * __thiscall FUN_004c7620(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)**(undefined4 **)(param_1 + 4);
  while( true ) {
    if (puVar1 == *(undefined4 **)(param_1 + 4)) {
      return (undefined4 *)0x0;
    }
    if ((puVar1[2] == param_2) && (puVar1[10] == 0)) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  return puVar1 + 2;
}

