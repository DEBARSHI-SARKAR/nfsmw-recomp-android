/* speed.exe 008461e0 FUN_008461e0; analysis pseudocode, not buildable source.
 * calls 0083a630 FUN_0083a630
 */

undefined2 FUN_008461e0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int unaff_EBX;
  int iVar3;
  int unaff_EDI;
  
  iVar3 = 0;
  if (DAT_009c36ec != 0) {
    puVar2 = &DAT_009c36ec;
    iVar1 = DAT_009c36ec;
    do {
      if ((iVar1 == param_1) && (iVar1 = 0, 0 < unaff_EDI)) {
        do {
          if (*(short *)(unaff_EBX + iVar1 * 2) == *(short *)(puVar2 + 1)) {
            FUN_0083a630(param_2,param_3,*(undefined4 *)(iVar3 * 0xc + 0x9c36f4));
            return (&DAT_009c36f0)[iVar3 * 6];
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 < unaff_EDI);
      }
      iVar1 = puVar2[3];
      puVar2 = puVar2 + 3;
      iVar3 = iVar3 + 1;
    } while (iVar1 != 0);
  }
  return 0;
}

