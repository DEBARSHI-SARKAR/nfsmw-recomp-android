/* speed.exe 007eab50 FUN_007eab50; analysis pseudocode, not buildable source.
 * calls 007ea9a0 FUN_007ea9a0
 * calls 007e9bf0 FUN_007e9bf0
 * calls 007e9430 FUN_007e9430
 */

uint * FUN_007eab50(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint *puVar2;
  
  uVar1 = FUN_007e9bf0(param_1,0x80,0x20,param_2,
                       "D:\\env\\egami\\realgraph\\6\\source\\shape\\cmn\\shpcreate.cpp",0x1ec);
  puVar2 = (uint *)FUN_007e9430("Created Texture Element",uVar1);
  FUN_007ea9a0(param_1);
  *puVar2 = *puVar2 & 0xfffffbff | 0x400;
  return puVar2;
}

