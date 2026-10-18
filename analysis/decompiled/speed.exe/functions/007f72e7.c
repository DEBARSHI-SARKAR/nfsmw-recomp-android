/* speed.exe 007f72e7 FUN_007f72e7; analysis pseudocode, not buildable source.
 */

undefined4 __thiscall FUN_007f72e7(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((*(int *)(param_1 + 0x108) == 2) && (uVar1 = 0x4000, *(int *)(param_2 + 8) == 9)) {
    uVar1 = 0xc000;
  }
  *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(param_2 + 0xc);
  return uVar1;
}

