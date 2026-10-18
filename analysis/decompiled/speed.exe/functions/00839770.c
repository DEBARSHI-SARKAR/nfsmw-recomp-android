/* speed.exe 00839770 FUN_00839770; analysis pseudocode, not buildable source.
 * calls 00838e70 FUN_00838e70
 */

undefined4 FUN_00839770(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xc) == 5) {
    return 0xffffff92;
  }
  uVar1 = FUN_00838e70(param_1,param_2,0x100000,param_3,0,0);
  return uVar1;
}

