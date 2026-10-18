/* speed.exe 007fba80 FUN_007fba80; analysis pseudocode, not buildable source.
 * calls 007fc5f5 FUN_007fc5f5
 * calls 007fc603 FUN_007fc603
 * calls 007fb998 FUN_007fb998
 */

undefined4 * FUN_007fba80(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_3c [14];
  
  local_3c[0] = 0;
  local_3c[1] = 0;
  local_3c[2] = 0;
  local_3c[3] = 0;
  local_3c[4] = 8;
  local_3c[5] = 8;
  local_3c[6] = 0;
  local_3c[7] = 0;
  local_3c[8] = 0;
  local_3c[9] = 0;
  local_3c[10] = 0;
  local_3c[0xb] = 0;
  local_3c[0xc] = 0;
  local_3c[0xd] = 0;
  puVar1 = (undefined4 *)FUN_007fc5f5(0x4958,0);
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = puVar1;
    for (iVar3 = 0x1256; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    puVar2 = local_3c;
    puVar4 = puVar1 + 0x6c;
    for (iVar3 = 0xe; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar4 = puVar4 + 1;
    }
    iVar3 = FUN_007fb998(puVar1);
    if (iVar3 == 0) {
      FUN_007fc603(puVar1);
      puVar2 = (undefined4 *)0x0;
    }
    else {
      puVar1[0x6a] = 0x46;
      puVar1[0xa6] = &DAT_009c6840;
      puVar1[0xe9] = 0;
      puVar1[0xea] = 0;
      puVar1[0xeb] = 0;
      puVar1[0xec] = 0;
      puVar1[0xed] = 0;
      *(undefined2 *)(puVar1 + 0xee) = 0;
      puVar4 = (undefined4 *)((int)puVar1 + 0x3ba);
      for (iVar3 = 99; puVar2 = puVar1, iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
    }
  }
  return puVar2;
}

