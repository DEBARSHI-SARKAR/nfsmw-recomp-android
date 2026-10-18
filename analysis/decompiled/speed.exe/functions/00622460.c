/* speed.exe 00622460 FUN_00622460; analysis pseudocode, not buildable source.
 * calls 00605ed0 FUN_00605ed0
 * calls 0060e2e0 FUN_0060e2e0
 * calls 0060e370 FUN_0060e370
 * calls 00614e00 FUN_00614e00
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00622460(undefined4 param_1,int param_2)

{
  float fVar1;
  
  FUN_0060e2e0(param_1);
  FUN_00614e00(param_1,"SpeedDefault");
  FUN_00605ed0(param_1,*(undefined4 *)(param_2 + 0x10));
  FUN_0060e370(param_1,0xfffffffd);
  FUN_00614e00(param_1,"SpeedHighway");
  FUN_00605ed0(param_1,*(undefined4 *)(param_2 + 0x14));
  FUN_0060e370(param_1,0xfffffffd);
  FUN_00614e00(param_1,"FixSpeed");
  fVar1 = (float)*(int *)(param_2 + 0x18);
  if (*(int *)(param_2 + 0x18) < 0) {
    fVar1 = fVar1 + _DAT_00891214;
  }
  FUN_00605ed0(param_1,fVar1);
  FUN_0060e370(param_1,0xfffffffd);
  return;
}

