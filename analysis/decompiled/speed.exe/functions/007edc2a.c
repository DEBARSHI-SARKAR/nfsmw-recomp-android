/* speed.exe 007edc2a FUN_007edc2a; analysis pseudocode, not buildable source.
 * calls 007eec70 FUN_007eec70
 * calls 007ed475 FUN_007ed475
 */

undefined4 FUN_007edc2a(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_007ed475(0x40);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_007eec70(param_1,param_2,param_3,*(undefined4 *)(param_1 + 0xc));
  }
  return *(undefined4 *)(iVar1 + 0xc);
}

