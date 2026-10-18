/* speed.exe 008628cb FUN_008628cb; analysis pseudocode, not buildable source.
 * calls 007ec1bd FUN_007ec1bd
 * calls 007ec1c8 FUN_007ec1c8
 * calls 008622cc FUN_008622cc
 */

uint FUN_008628cb(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  
  FUN_007ec1bd();
  iVar1 = FUN_008622cc(param_1);
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)(*(int *)(iVar1 + 0x1c) == 0);
  }
  FUN_007ec1c8();
  return uVar2;
}

