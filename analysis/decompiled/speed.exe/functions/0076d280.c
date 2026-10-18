/* speed.exe 0076d280 FUN_0076d280; analysis pseudocode, not buildable source.
 */

undefined4 * __thiscall FUN_0076d280(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 0x44);
  while( true ) {
    if (puVar1 == (undefined4 *)(param_1 + 0x44)) {
      return (undefined4 *)0x0;
    }
    if ((param_2 == *(short *)(puVar1 + 3) * 0x20 + DAT_009b38bc) &&
       (param_3 == *(short *)((int)puVar1 + 10))) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  return puVar1;
}

