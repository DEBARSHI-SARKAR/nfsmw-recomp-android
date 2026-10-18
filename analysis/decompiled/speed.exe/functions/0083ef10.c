/* speed.exe 0083ef10 FUN_0083ef10; analysis pseudocode, not buildable source.
 * calls 0083edb0 FUN_0083edb0
 * calls 0083faa0 FUN_0083faa0
 * calls 0083fac0 FUN_0083fac0
 */

undefined4 FUN_0083ef10(void)

{
  undefined4 *puVar1;
  int *piVar2;
  byte bVar3;
  char cVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ushort uVar7;
  short sVar8;
  int *in_EAX;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  int local_14;
  int iStack_10;
  undefined4 uStack_4;
  
  if (in_EAX[0x67] - in_EAX[0x66] < 0x21b) {
    return 0;
  }
  puVar13 = (uint *)(in_EAX[0x65] + in_EAX[0x66]);
  iVar9 = (**(code **)(*in_EAX + 0x34))(*in_EAX,puVar13 + 2,0x210,&local_14);
  if ((0 < iVar9) && (iVar9 < 0x210)) {
    *(short *)(puVar13 + 1) = (short)iVar9;
    iVar9 = (**(code **)(*in_EAX + 0x28))(*in_EAX);
    in_EAX[9] = iVar9;
    in_EAX[10] = in_EAX[10] + 1;
    in_EAX[0x11] = iVar9;
    in_EAX[0xf] = in_EAX[0xf] + (uint)(ushort)puVar13[1];
    if ((in_EAX[0x13] != 0) && (100 < (uint)(iVar9 - in_EAX[0x13]))) {
      in_EAX[0x13] = 0;
      in_EAX[0x15] = iVar9;
    }
    if ((in_EAX[0x15] != 0) && (100 < (uint)(iVar9 - in_EAX[0x15]))) {
      in_EAX[0x15] = 0;
      in_EAX[0x13] = iVar9;
    }
    *(short *)(puVar13 + 1) = (short)puVar13[1] + -1;
    bVar3 = *(byte *)((ushort)puVar13[1] + 8 + (int)puVar13);
    *(byte *)((int)puVar13 + 6) = bVar3;
    if ((bVar3 & 0x40) != 0) {
      uVar7 = (ushort)puVar13[1] - 0xc;
      *(ushort *)(puVar13 + 1) = uVar7;
      puVar1 = (undefined4 *)(uVar7 + 8 + (int)puVar13);
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      uStack_4 = puVar1[2];
      *(byte *)((int)puVar13 + 6) = *(byte *)((int)puVar13 + 6) ^ 0x40;
      iVar9 = local_14 - in_EAX[3];
      if (iVar9 < 10) {
        iVar9 = 10;
      }
      in_EAX[3] = local_14;
      iVar10 = FUN_0083fac0(uVar6);
      in_EAX[4] = iVar10;
      uVar11 = FUN_0083faa0(uStack_4);
      in_EAX[0xc] = uVar11 & 0xffff;
      sVar8 = FUN_0083fac0(uVar5);
      sVar8 = (short)in_EAX[3] - sVar8;
      if ((-1 < sVar8) && (sVar8 < 0x9c5)) {
        iVar10 = (int)sVar8;
        if (iVar9 < 0x400) {
          iStack_10 = 0x400 - iVar9;
          iVar12 = iVar10 - in_EAX[7];
          if (iVar12 < 0) {
            iVar12 = -iVar12;
          }
          iVar12 = in_EAX[8] * iStack_10 + iVar12 * iVar9;
          in_EAX[8] = (int)(iVar12 + (iVar12 >> 0x1f & 0x3ffU)) >> 10;
          iVar9 = in_EAX[7] * iStack_10 + iVar10 * iVar9;
          in_EAX[7] = (int)(iVar9 + (iVar9 >> 0x1f & 0x3ffU)) >> 10;
        }
        else {
          in_EAX[7] = iVar10;
          in_EAX[8] = 0;
        }
        in_EAX[0xb] = in_EAX[8] + in_EAX[7];
        if ((uint)(local_14 - in_EAX[6]) < 0xfa) {
          piVar2 = in_EAX + in_EAX[0x20] * 2 + 0x21;
          if (iVar10 < (int)(uint)*(ushort *)(in_EAX + in_EAX[0x20] * 2 + 0x21)) {
            *(short *)piVar2 = sVar8;
          }
          if ((int)(uint)*(ushort *)((int)piVar2 + 2) < iVar10) {
            *(short *)((int)piVar2 + 2) = sVar8;
          }
          uVar7 = *(ushort *)((int)piVar2 + 6);
          *(ushort *)((int)piVar2 + 6) = uVar7 + 1;
          *(short *)(piVar2 + 1) =
               (short)((int)((uint)*(ushort *)(piVar2 + 1) * (uint)uVar7 + iVar10) /
                      (int)(uVar7 + 1));
        }
        else {
          in_EAX[6] = local_14;
          uVar11 = in_EAX[0x20] + 1U & 0x1f;
          in_EAX[0x20] = uVar11;
          *(short *)(in_EAX + uVar11 * 2 + 0x21) = sVar8;
          *(short *)((int)in_EAX + uVar11 * 8 + 0x86) = sVar8;
          *(short *)(in_EAX + uVar11 * 2 + 0x22) = sVar8;
          *(undefined2 *)((int)in_EAX + uVar11 * 8 + 0x8a) = 1;
        }
        in_EAX[0x1f] = local_14;
      }
    }
    cVar4 = *(char *)((int)puVar13 + 6);
    if (cVar4 == '\x01') {
      if (0 < (short)puVar13[2]) {
        *(short *)(puVar13 + 2) = (short)puVar13[2] + -1;
        FUN_0083edb0();
      }
      return 1;
    }
    if (cVar4 == '\x03') {
      (**(code **)(*in_EAX + 0x1c))(*in_EAX);
      return 1;
    }
    if (cVar4 != '\0') {
      uVar11 = (ushort)puVar13[1] + 0xb & 0x7ffc;
      *puVar13 = uVar11;
      in_EAX[0x66] = in_EAX[0x66] + uVar11;
    }
    return 1;
  }
  return 0;
}

