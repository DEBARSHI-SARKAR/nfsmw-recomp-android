/* speed.exe 00833fc8 FUN_00833fc8; analysis pseudocode, not buildable source.
 * calls 00832d6d FUN_00832d6d
 */

void FUN_00833fc8(int param_1)

{
  undefined2 *puVar1;
  int iVar2;
  
  iVar2 = param_1 * 0xa0;
  if ((&DAT_009c2c34)[param_1 * 0x28] != 0) {
    FUN_00832d6d((&DAT_009c2c34)[param_1 * 0x28]);
    (&DAT_009c2c34)[param_1 * 0x28] = 0;
  }
  (&DAT_009c2c28)[param_1 * 0x28] = 0;
  (&DAT_009c2c2c)[param_1 * 0x28] = 0;
  (&DAT_009c2c30)[iVar2] = 0;
  (&DAT_009c2c31)[iVar2] = 0;
  (&DAT_009c2c32)[iVar2] = 0;
  (&DAT_009c2c33)[iVar2] = 0;
  (&DAT_009c2c34)[param_1 * 0x28] = 0;
  puVar1 = &DAT_009c2c3c + param_1 * 0x50;
  iVar2 = 0xc;
  do {
    *(undefined4 *)(puVar1 + -2) = 0xffffffff;
    *puVar1 = 0xffff;
    puVar1[1] = 0xffff;
    puVar1[2] = 0;
    puVar1 = puVar1 + 6;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}

