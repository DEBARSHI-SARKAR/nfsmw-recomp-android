/* speed.exe 007eba60 FUN_007eba60; analysis pseudocode, not buildable source.
 * calls 007eb7b0 FUN_007eb7b0
 * calls 007ebb40 FUN_007ebb40
 * calls 007e9430 FUN_007e9430
 */

uint * FUN_007eba60(undefined4 param_1)

{
  undefined4 uVar1;
  uint *puVar2;
  
  uVar1 = FUN_007ebb40();
  puVar2 = (uint *)FUN_007e9430("cloned shape",uVar1,0x80,0x20,param_1,
                                "D:\\env\\egami\\realgraph\\6\\source\\shape\\cmn\\shpclone.cpp",
                                0x1aa);
  FUN_007eb7b0(puVar2);
  *puVar2 = *puVar2 & 0xfffffbff | 0x400;
  return puVar2;
}

