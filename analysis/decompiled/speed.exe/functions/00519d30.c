/* speed.exe 00519d30 FUN_00519d30; analysis pseudocode, not buildable source.
 */

undefined4 * __thiscall FUN_00519d30(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)*param_2;
  if (puVar1 == param_1) {
    puVar1 = (undefined4 *)*param_1;
  }
  if (puVar1 != (undefined4 *)0x0) {
    return puVar1 + -1;
  }
  return (undefined4 *)0x0;
}

