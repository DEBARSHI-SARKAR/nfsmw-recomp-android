/* speed.exe 0064b410 FUN_0064b410; analysis pseudocode, not buildable source.
 * calls 00724ff0 FUN_00724ff0
 * calls 0072ba80 FUN_0072ba80
 * calls 00725060 FUN_00725060
 * calls 0072c5c0 FUN_0072c5c0
 * calls 00460bf0 FUN_00460bf0
 */

void FUN_0064b410(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00724ff0(param_1);
  if (iVar1 != 0) {
    uVar2 = FUN_00460bf0(param_1);
    FUN_00725060(uVar2);
    FUN_0072c5c0(uVar2,param_2);
    FUN_0072ba80(param_1);
  }
  return;
}

