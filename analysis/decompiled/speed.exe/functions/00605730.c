/* speed.exe 00605730 FUN_00605730; analysis pseudocode, not buildable source.
 * calls 00573020 FUN_00573020
 * calls 005257f0 FUN_005257f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00605730(float param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  _DAT_0091cf38 = param_1 * _DAT_008a0294;
  _DAT_0091cf3c = param_2;
  DAT_0091cf41 = 1;
  uVar1 = FUN_00573020((int)*(char *)(DAT_0091cf90 + 0xc));
  FUN_005257f0("InGamePhotoMaster.fng",2,uVar1,1);
  return;
}

