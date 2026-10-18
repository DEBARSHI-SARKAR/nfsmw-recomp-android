/* speed.exe 005b2f10 FUN_005b2f10; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 */

undefined4 * FUN_005b2f10(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = FUN_007c4b80();
  uVar2 = FUN_007c4b80();
  uVar3 = FUN_007c4b80();
  uVar4 = FUN_007c4b80();
  *param_1 = uVar3;
  param_1[1] = uVar2;
  param_1[2] = uVar1;
  param_1[3] = uVar4;
  return param_1;
}

