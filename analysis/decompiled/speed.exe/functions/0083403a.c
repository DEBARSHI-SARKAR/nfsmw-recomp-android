/* speed.exe 0083403a FUN_0083403a; analysis pseudocode, not buildable source.
 */

void FUN_0083403a(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar1 = &DAT_009c2c2c;
  do {
    puVar1[-1] = 0;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
    *(undefined1 *)((int)puVar1 + 5) = 0;
    *(undefined1 *)((int)puVar1 + 6) = 0;
    *(undefined1 *)((int)puVar1 + 7) = 0;
    puVar1[2] = 0;
    puVar2 = puVar1 + 4;
    iVar3 = 0xc;
    do {
      puVar2[-1] = 0xffffffff;
      *(undefined2 *)puVar2 = 0xffff;
      *(undefined2 *)((int)puVar2 + 2) = 0xffff;
      *(undefined2 *)(puVar2 + 1) = 0;
      puVar2 = puVar2 + 3;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    puVar1 = puVar1 + 0x28;
  } while ((int)puVar1 < 0x9c312c);
  return;
}

