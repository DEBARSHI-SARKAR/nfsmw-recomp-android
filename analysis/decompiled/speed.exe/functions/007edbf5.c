/* speed.exe 007edbf5 FUN_007edbf5; analysis pseudocode, not buildable source.
 * calls 007eeb7d FUN_007eeb7d
 * calls 007ed475 FUN_007ed475
 */

undefined4
FUN_007edbf5(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  int iVar1;
  
  iVar1 = FUN_007ed475(0x40);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_007eeb7d(param_1,param_4,param_2,param_3,param_5,param_6,
                         *(undefined4 *)(param_1 + 0xc));
  }
  return *(undefined4 *)(iVar1 + 0xc);
}

