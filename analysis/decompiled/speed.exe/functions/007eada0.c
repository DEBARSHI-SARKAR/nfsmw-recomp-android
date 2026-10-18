/* speed.exe 007eada0 FUN_007eada0; analysis pseudocode, not buildable source.
 * calls 007eabb0 FUN_007eabb0
 * calls 007e9430 FUN_007e9430
 * calls 007e9e40 FUN_007e9e40
 */

uint * FUN_007eada0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint *puVar2;
  
  uVar1 = FUN_007e9e40(param_1,0x80,0x20,param_2,
                       "D:\\env\\egami\\realgraph\\6\\source\\shape\\cmn\\shpcreate.cpp",0x2d2);
  puVar2 = (uint *)FUN_007e9430("Created Shape",uVar1);
  FUN_007eabb0(puVar2,param_1);
  *puVar2 = *puVar2 & 0xfffffbff | 0x400;
  return puVar2;
}

