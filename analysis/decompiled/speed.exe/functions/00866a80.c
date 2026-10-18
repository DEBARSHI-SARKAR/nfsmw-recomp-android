/* speed.exe 00866a80 FUN_00866a80; analysis pseudocode, not buildable source.
 * calls 0078af30 FUN_0078af30
 * calls EXTERNAL:00000123 Ordinal_23
 * calls EXTERNAL:00000125 Ordinal_10
 * calls EXTERNAL:00000110 Ordinal_2
 * calls 0078af60 thunk_FUN_004655f0
 * calls 00866d10 FUN_00866d10
 */

int * FUN_00866a80(void)

{
  int *piVar1;
  undefined2 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 unaff_ESI;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uStack_c = 0x14;
  uStack_10 = 0x866a91;
  piVar3 = (int *)FUN_0078af30();
  if (piVar3 == (int *)0x0) {
    return (int *)0x0;
  }
  *piVar3 = 0;
  piVar3[1] = 0;
  uStack_c = 0x11;
  piVar3[2] = 0;
  uStack_10 = 2;
  piVar3[3] = 0;
  piVar3[4] = 0;
  iVar4 = Ordinal_23(2);
  *piVar3 = iVar4;
  if (iVar4 != -1) {
    piVar1 = piVar3 + 1;
    *piVar1 = 0;
    piVar3[2] = 0;
    piVar3[3] = 0;
    piVar3[4] = 0;
    *(undefined2 *)piVar1 = 2;
    piVar3[2] = 0;
    uVar2 = FUN_00866d10(unaff_ESI);
    *(undefined2 *)((int)piVar3 + 6) = uVar2;
    iVar4 = Ordinal_2(*piVar3,piVar1,0x10);
    if (iVar4 != -1) {
      Ordinal_10(*piVar3,0x8004667e,&uStack_10);
      return piVar3;
    }
  }
  thunk_FUN_004655f0(piVar3);
  return (int *)0x0;
}

