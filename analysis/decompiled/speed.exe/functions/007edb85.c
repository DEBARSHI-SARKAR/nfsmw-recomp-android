/* speed.exe 007edb85 FUN_007edb85; analysis pseudocode, not buildable source.
 * calls 007ee912 FUN_007ee912
 * calls 007ed475 FUN_007ed475
 */

undefined4
FUN_007edb85(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  int iVar1;
  
  iVar1 = FUN_007ed475(0x40);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_007ee912(param_1,param_4,param_2,param_3,param_5,param_6,
                         *(undefined4 *)(param_1 + 0xc));
  }
  return *(undefined4 *)(iVar1 + 0xc);
}

