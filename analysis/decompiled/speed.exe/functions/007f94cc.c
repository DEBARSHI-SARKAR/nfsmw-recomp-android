/* speed.exe 007f94cc FUN_007f94cc; analysis pseudocode, not buildable source.
 */

void FUN_007f94cc(void)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  int iVar4;
  int unaff_EDI;
  
  if (DAT_009bfe18 != unaff_EDI) {
    iVar4 = 0;
    do {
      uVar3 = *(undefined2 *)((int)&DAT_00908648 + iVar4);
      *(undefined2 *)((int)&DAT_00908648 + iVar4) = *(undefined2 *)((int)&DAT_0090864a + iVar4);
      *(undefined2 *)((int)&DAT_0090864a + iVar4) = uVar3;
      uVar3 = *(undefined2 *)((int)&DAT_00908e48 + iVar4);
      *(undefined2 *)((int)&DAT_00908e48 + iVar4) = *(undefined2 *)((int)&DAT_00908e4a + iVar4);
      *(undefined2 *)((int)&DAT_00908e4a + iVar4) = uVar3;
      puVar1 = (undefined2 *)((int)&DAT_00909648 + iVar4);
      uVar3 = *puVar1;
      puVar2 = (undefined2 *)((int)&DAT_0090964a + iVar4);
      iVar4 = iVar4 + 8;
      *puVar1 = *puVar2;
      *puVar2 = uVar3;
      DAT_009bfe18 = unaff_EDI;
    } while (iVar4 < 0x7f8);
  }
  return;
}

