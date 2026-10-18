/* speed.exe 007edb59 FUN_007edb59; analysis pseudocode, not buildable source.
 * calls 007ee8aa FUN_007ee8aa
 * calls 007ed475 FUN_007ed475
 */

undefined4 FUN_007edb59(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_007ed475(0x40);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_007ee8aa(param_1,param_2,param_3,*(undefined4 *)(param_1 + 0xc));
  }
  return *(undefined4 *)(iVar1 + 0xc);
}

