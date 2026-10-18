/* speed.exe 008650d0 FUN_008650d0; analysis pseudocode, not buildable source.
 * calls 00866b50 FUN_00866b50
 * calls 00865020 FUN_00865020
 */

void FUN_008650d0(byte param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *unaff_EBX;
  undefined4 *unaff_ESI;
  undefined4 *puVar3;
  
  if (unaff_EBX[10] != 0) {
    FUN_00866b50(*unaff_ESI);
    uVar1 = unaff_ESI[6] & ~(1 << (param_1 & 0x1f));
    if (unaff_ESI[6] != uVar1) {
      unaff_ESI[6] = uVar1;
    }
    FUN_00865020();
    puVar3 = unaff_EBX;
    for (iVar2 = 0x117; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    }
    unaff_EBX[10] = 0;
    unaff_EBX[9] = 0x80;
    unaff_ESI[9] = unaff_ESI[9] & 0xfffffeff;
  }
  return;
}

