/* speed.exe 008087f8 FUN_008087f8; analysis pseudocode, not buildable source.
 * calls 00806f24 FUN_00806f24
 */

uint FUN_008087f8(undefined4 param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  do {
    puVar1 = (uint *)(param_2 + (uVar2 >> 1 & 0x7f) * 0xc);
    iVar3 = FUN_00806f24(param_1,(char)puVar1[2]);
    if (iVar3 == 0) {
      uVar2 = *puVar1;
    }
    else {
      uVar2 = puVar1[1];
    }
  } while ((uVar2 & 1) == 0);
  return uVar2 >> 1 & 0x7f;
}

