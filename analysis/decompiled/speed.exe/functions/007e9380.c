/* speed.exe 007e9380 FUN_007e9380; analysis pseudocode, not buildable source.
 * calls 007e8ea0 FUN_007e8ea0
 * calls 007e9430 FUN_007e9430
 * calls 007e9090 FUN_007e9090
 */

uint * FUN_007e9380(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint *puVar2;
  
  uVar1 = FUN_007e9090(param_1,3);
  puVar2 = (uint *)FUN_007e9430("merged shape",uVar1,0x80,0x20,param_2,
                                "D:\\env\\egami\\realgraph\\6\\source\\shape\\cmn\\shpelement.cpp",
                                0x15d);
  FUN_007e8ea0(puVar2,param_1);
  *puVar2 = *puVar2 & 0xfffffbff | 0x400;
  return puVar2;
}

