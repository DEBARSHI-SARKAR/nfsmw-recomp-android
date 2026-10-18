/* speed.exe 0041cb50 FUN_0041cb50; analysis pseudocode, not buildable source.
 */

undefined4 FUN_0041cb50(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = DAT_0092c668;
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    if (*piVar1 == param_1) break;
    piVar1 = (int *)piVar1[2];
  }
  uVar2 = (*(code *)piVar1[1])(param_2,param_3,param_4);
  return uVar2;
}

