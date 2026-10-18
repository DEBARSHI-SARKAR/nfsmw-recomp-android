/* speed.exe 00650090 FUN_00650090; analysis pseudocode, not buildable source.
 * calls 0064ff50 FUN_0064ff50
 * calls 00465a70 FUN_00465a70
 * calls 004655f0 FUN_004655f0
 */

undefined4 FUN_00650090(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = FUN_00465a70(0x31ec,0);
  if (iVar1 != 0) {
    uVar2 = FUN_0064ff50(param_3);
    FUN_004655f0(iVar1);
  }
  return uVar2;
}

