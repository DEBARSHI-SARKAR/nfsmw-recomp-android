/* speed.exe 0083edb0 FUN_0083edb0; analysis pseudocode, not buildable source.
 * calls 0083fa50 FUN_0083fa50
 * calls 0083fa70 FUN_0083fa70
 */

int FUN_0083edb0(void)

{
  undefined4 *puVar1;
  bool bVar2;
  undefined2 uVar3;
  int in_EAX;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int *unaff_ESI;
  undefined4 uStack_4;
  
  bVar2 = false;
  iVar4 = (**(code **)(*unaff_ESI + 0x28))(*unaff_ESI);
  if (unaff_ESI[0x76] == 0) {
    return 1;
  }
  if (0x200 < *(ushort *)(in_EAX + 4)) {
    return -1;
  }
  if (((*(byte *)(in_EAX + 6) & 0x40) != 0) || (0xfa < (uint)(iVar4 - unaff_ESI[5]))) {
    uVar5 = FUN_0083fa70(iVar4);
    uVar6 = FUN_0083fa70((unaff_ESI[4] - unaff_ESI[3]) + iVar4);
    uVar3 = FUN_0083fa50((unaff_ESI[8] + 1 + unaff_ESI[7]) / 2);
    uStack_4 = CONCAT22(uStack_4._2_2_,uVar3);
    puVar1 = (undefined4 *)(*(ushort *)(in_EAX + 4) + 8 + in_EAX);
    *puVar1 = uVar6;
    puVar1[1] = uVar5;
    puVar1[2] = uStack_4;
    *(short *)(in_EAX + 4) = *(short *)(in_EAX + 4) + 0xc;
    *(byte *)(in_EAX + 6) = *(byte *)(in_EAX + 6) | 0x40;
    bVar2 = true;
  }
  *(undefined1 *)(*(ushort *)(in_EAX + 4) + 8 + in_EAX) = *(undefined1 *)(in_EAX + 6);
  iVar7 = (**(code **)(*unaff_ESI + 0x2c))
                    (*unaff_ESI,in_EAX + 8,*(ushort *)(in_EAX + 4) + 1,
                     (*(byte *)(in_EAX + 6) & 0xbf) == 6);
  if (bVar2) {
    *(short *)(in_EAX + 4) = *(short *)(in_EAX + 4) + -0xc;
    *(byte *)(in_EAX + 6) = *(byte *)(in_EAX + 6) ^ 0x40;
  }
  if (0 < iVar7) {
    unaff_ESI[2] = iVar4;
    if (bVar2) {
      unaff_ESI[5] = iVar4;
    }
    unaff_ESI[0x61] = unaff_ESI[0x61] + *(ushort *)(in_EAX + 4) + 1;
    unaff_ESI[0x62] = unaff_ESI[0x62] + 1;
    unaff_ESI[0xe] = unaff_ESI[0xe] + *(ushort *)(in_EAX + 4) + 1;
    unaff_ESI[0x10] = iVar4;
    if ((unaff_ESI[0x12] != 0) && (100 < (uint)(iVar4 - unaff_ESI[0x12]))) {
      unaff_ESI[0x12] = 0;
      unaff_ESI[0x14] = iVar4;
    }
    if ((unaff_ESI[0x14] != 0) && (100 < (uint)(iVar4 - unaff_ESI[0x14]))) {
      unaff_ESI[0x14] = 0;
      unaff_ESI[0x12] = iVar4;
    }
  }
  return iVar7;
}

