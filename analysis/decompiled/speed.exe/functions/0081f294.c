/* speed.exe 0081f294 FUN_0081f294; analysis pseudocode, not buildable source.
 * calls 00823795 FUN_00823795
 * calls 00821801 FUN_00821801
 */

undefined4 FUN_0081f294(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = 0;
  if (*(int *)(param_1 + 0x20) == 0) {
    if (param_2 == -1) {
      puVar3 = (undefined4 *)(param_1 + 8);
      do {
        FUN_00821801(iVar2,*puVar3,*(undefined4 *)(param_1 + 0x28));
        iVar2 = iVar2 + 1;
        puVar3 = puVar3 + 1;
      } while (iVar2 < 6);
    }
    else {
      uVar1 = FUN_00823795(param_2);
      FUN_00821801(uVar1,*(undefined4 *)(param_1 + 8 + param_2 * 4),*(undefined4 *)(param_1 + 0x28))
      ;
    }
    uVar1 = 0;
  }
  else {
    uVar1 = 0xfffffff1;
  }
  return uVar1;
}

