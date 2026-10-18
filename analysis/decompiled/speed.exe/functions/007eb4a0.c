/* speed.exe 007eb4a0 FUN_007eb4a0; analysis pseudocode, not buildable source.
 * calls 007ebab0 FUN_007ebab0
 * calls 007eb430 FUN_007eb430
 * calls 007e9430 FUN_007e9430
 */

uint * FUN_007eb4a0(undefined4 param_1)

{
  undefined4 uVar1;
  uint *puVar2;
  
  uVar1 = FUN_007ebab0();
  puVar2 = (uint *)FUN_007e9430("cloned clip element",uVar1,0x10,0x20,param_1,
                                "D:\\env\\egami\\realgraph\\6\\source\\shape\\cmn\\shpclone.cpp",
                                0x94);
  FUN_007eb430(puVar2);
  *puVar2 = *puVar2 & 0xfffffbff | 0x400;
  puVar2[1] = 0;
  return puVar2;
}

