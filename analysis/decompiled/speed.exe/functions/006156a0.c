/* speed.exe 006156a0 FUN_006156a0; analysis pseudocode, not buildable source.
 * calls 006069c0 FUN_006069c0
 * calls 006155f0 FUN_006155f0
 */

undefined4 * FUN_006156a0(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)(*DAT_0091e0e0)(0,0,0,0x58,3);
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined1 *)(puVar1 + 1) = 8;
    *(undefined1 *)((int)puVar1 + 5) = 0;
    puVar1[0x13] = 0;
    *puVar1 = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[0x14] = 0;
    puVar1[0xf] = 0;
    *(undefined1 *)((int)puVar1 + 0x32) = 0;
    *(undefined1 *)(puVar1 + 0xc) = 0;
    puVar1[0xd] = 0;
    *(undefined1 *)((int)puVar1 + 0x31) = 1;
    puVar1[0xe] = 0;
    puVar1[0x12] = 0;
    *(undefined2 *)(puVar1 + 0xb) = 0;
    *(undefined2 *)((int)puVar1 + 0x2e) = 0;
    puVar1[5] = 0;
    puVar1[10] = 0;
    puVar1[0x15] = 0;
    puVar1[0x10] = 0;
    puVar1[4] = 0;
    iVar2 = FUN_006069c0(puVar1,&LAB_006154e0,0);
    if (iVar2 == 0) {
      return puVar1;
    }
    FUN_006155f0();
  }
  return (undefined4 *)0x0;
}

