/* speed.exe 005157e0 FUN_005157e0; analysis pseudocode, not buildable source.
 * calls 005b2d50 FUN_005b2d50
 * calls 005b8390 FUN_005b8390
 */

void FUN_005157e0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_1 != 0) {
    uVar2 = 0;
    uVar1 = FUN_005b2d50(param_2);
    FUN_005b8390(uVar1,uVar2);
  }
  return;
}

