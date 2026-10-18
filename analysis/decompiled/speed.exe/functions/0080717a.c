/* speed.exe 0080717a FUN_0080717a; analysis pseudocode, not buildable source.
 * calls 008070c1 FUN_008070c1
 */

uint FUN_0080717a(int param_1)

{
  ushort *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  ushort uVar6;
  undefined1 *puVar7;
  uint uVar8;
  int iVar9;
  byte bVar10;
  uint *unaff_ESI;
  int unaff_EDI;
  
  bVar10 = (byte)*unaff_ESI;
  uVar8 = (1 << (bVar10 & 0x1f)) - 1U & unaff_ESI[1];
  if (*unaff_ESI < 6) {
    uVar8 = ((uint)*(byte *)unaff_ESI[2] | uVar8 << 8) >> (bVar10 + 2 & 0x1f);
  }
  else {
    uVar8 = uVar8 >> (bVar10 - 6 & 0x1f);
  }
  puVar1 = (ushort *)(param_1 + uVar8 * 2);
  *unaff_ESI = *unaff_ESI - (uint)(*puVar1 >> 0xc);
  if ((int)*unaff_ESI < 0) {
    puVar7 = (undefined1 *)unaff_ESI[2];
    uVar2 = *puVar7;
    uVar3 = puVar7[1];
    uVar4 = puVar7[2];
    uVar5 = puVar7[3];
    *unaff_ESI = *unaff_ESI + 0x20;
    unaff_ESI[1] = CONCAT31(CONCAT21(CONCAT11(uVar2,uVar3),uVar4),uVar5);
    unaff_ESI[2] = (uint)(puVar7 + 4);
  }
  uVar6 = *puVar1;
  if ((uVar6 & 1) == 0) {
    uVar8 = uVar6 & 0x3e;
    do {
      iVar9 = FUN_008070c1();
      if (iVar9 == 0) {
        uVar8 = *(uint *)(unaff_EDI + (uVar8 >> 1 & 0x7f) * 0xc);
      }
      else {
        uVar8 = *(uint *)(unaff_EDI + 4 + (uVar8 >> 1 & 0x7f) * 0xc);
      }
    } while ((uVar8 & 1) == 0);
    uVar8 = uVar8 >> 1 & 0x7f;
  }
  else {
    uVar8 = uVar6 >> 1 & 0x1f;
  }
  return uVar8;
}

