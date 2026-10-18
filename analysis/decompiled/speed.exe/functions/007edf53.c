/* speed.exe 007edf53 FUN_007edf53; analysis pseudocode, not buildable source.
 * calls 007ed475 FUN_007ed475
 * calls 007ee70b FUN_007ee70b
 * calls 007edca5 FUN_007edca5
 */

undefined4 FUN_007edf53(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_007ed475(0x40);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    uVar2 = FUN_007edca5(param_1);
    iVar1 = FUN_007ee70b(param_1,param_2,param_3,uVar2);
  }
  return *(undefined4 *)(iVar1 + 0xc);
}

