/* speed.exe 00460a70 FUN_00460a70; analysis pseudocode, not buildable source.
 */

undefined1 FUN_00460a70(int param_1,undefined1 param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)((&DAT_0090df10)[param_1] + 0x40);
  *(undefined1 *)((&DAT_0090df10)[param_1] + 0x40) = param_2;
  return uVar1;
}

