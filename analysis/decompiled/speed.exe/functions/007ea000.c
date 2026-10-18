/* speed.exe 007ea000 FUN_007ea000; analysis pseudocode, not buildable source.
 * calls 007e9f70 FUN_007e9f70
 * calls 007e9d50 FUN_007e9d50
 * calls 007e9430 FUN_007e9430
 */

uint * FUN_007ea000(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint *puVar2;
  
  uVar1 = FUN_007e9d50(param_1,0x10,0x20,param_2,
                       "D:\\env\\egami\\realgraph\\6\\source\\shape\\cmn\\shpcreate.cpp",0x216);
  puVar2 = (uint *)FUN_007e9430("Created Clut Element",uVar1);
  FUN_007e9f70(param_1);
  *puVar2 = *puVar2 & 0xfffffbff | 0x400;
  return puVar2;
}

