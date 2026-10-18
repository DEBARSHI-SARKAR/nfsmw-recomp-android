/* speed.exe 0082e3e0 FUN_0082e3e0; analysis pseudocode, not buildable source.
 */

undefined4 FUN_0082e3e0(uint param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = 0;
  while( true ) {
    if ((param_1 & 0xf000000) == 0) {
      uVar2 = 0x1000000 << ((byte)iVar3 & 0x1f);
    }
    else {
      uVar2 = 0;
    }
    if (((((-1 < iVar3) && (iVar3 < 4)) && (iVar1 = (&DAT_009c2954)[iVar3], iVar1 != 0)) &&
        ((*(int *)(iVar1 + 0x18) != 0 &&
         ((uVar4 = (uVar2 | param_1) & 0xf0000000, uVar4 == 0 ||
          ((*(uint *)(iVar1 + 0x14) & uVar4) != 0)))))) &&
       (((*(uint *)(iVar1 + 0x14) & (uVar2 | param_1) & 0xf000000) != 0 &&
        (DAT_009c2964 = iVar1, *(int *)(iVar1 + 0x14) != 0)))) break;
    iVar3 = iVar3 + 1;
    if (3 < iVar3) {
      return 0;
    }
  }
  return 1;
}

