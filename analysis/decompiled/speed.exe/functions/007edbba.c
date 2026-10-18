/* speed.exe 007edbba FUN_007edbba; analysis pseudocode, not buildable source.
 * calls 007ed475 FUN_007ed475
 * calls 007eea3f FUN_007eea3f
 */

undefined4
FUN_007edbba(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  
  iVar1 = FUN_007ed475(0x40);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_007eea3f(param_1,param_5,param_6,param_2,param_3,param_4,param_7,param_8,
                         *(undefined4 *)(param_1 + 0xc));
  }
  return *(undefined4 *)(iVar1 + 0xc);
}

