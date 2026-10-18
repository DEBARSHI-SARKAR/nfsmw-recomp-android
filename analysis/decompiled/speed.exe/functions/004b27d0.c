/* speed.exe 004b27d0 FUN_004b27d0; analysis pseudocode, not buildable source.
 * calls 007ec1bd FUN_007ec1bd
 * calls 007ec1c8 FUN_007ec1c8
 */

undefined4 FUN_004b27d0(void)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  int in_EAX;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  
  iVar1 = *(int *)(in_EAX + 0x6c);
  if (*(int *)(in_EAX + 100) - *(int *)(in_EAX + 0x60) < 8) {
    return 0;
  }
  do {
    puVar2 = *(uint **)(in_EAX + 0x60);
    uVar8 = puVar2[1];
    if ((uVar8 & 0xff000000) != 0) {
      uVar8 = 8;
      *puVar2 = *(uint *)(iVar1 + 0x120);
      puVar2[1] = 8;
    }
    if (*(uint *)(in_EAX + 100) < *(uint *)(in_EAX + 0x60) + uVar8) {
      return 0;
    }
    if (*puVar2 == *(uint *)(iVar1 + 0x120)) {
      uVar4 = *(uint *)(in_EAX + 0x60) & 0x3f;
      uVar8 = (uVar4 + 0x3f + uVar8 & 0xffffffc0) - uVar4;
    }
    iVar6 = 0;
    if (0 < *(int *)(in_EAX + 0x2c)) {
      puVar5 = *(uint **)(in_EAX + 0x28);
      do {
        if ((*puVar5 & *puVar2) == puVar5[1]) {
          uVar4 = puVar5[2];
          if ((int)uVar4 < 0) goto LAB_004b2873;
          puVar2[1] = uVar4 << 0x18 | uVar8;
          FUN_007ec1bd();
          bVar9 = *(int *)(iVar1 + 4) == 4;
          if (!bVar9) {
            iVar6 = uVar4 * 0x10 + -0x10 + *(int *)(in_EAX + 0x30);
            uVar7 = *(int *)(iVar6 + 8) + uVar8;
            *(uint *)(iVar6 + 8) = uVar7;
            if (uVar7 == uVar8) {
              *(uint **)(iVar6 + 0xc) = puVar2;
            }
            *(uint *)(in_EAX + 0x60) = *(int *)(in_EAX + 0x60) + uVar8;
            iVar3 = *(int *)(in_EAX + 0x58);
            iVar6 = iVar3 + uVar8;
            *(int *)(in_EAX + 0x58) = iVar6;
            if ((iVar3 < *(int *)(in_EAX + 0x50)) && (*(int *)(in_EAX + 0x50) <= iVar6)) {
              *(undefined4 *)(in_EAX + 0x54) = 0;
            }
          }
          goto LAB_004b2906;
        }
        iVar6 = iVar6 + 1;
        puVar5 = puVar5 + 3;
      } while (iVar6 < *(int *)(in_EAX + 0x2c));
    }
    uVar4 = 0xfffffffe;
LAB_004b2873:
    FUN_007ec1bd();
    bVar9 = *(int *)(iVar1 + 4) == 4;
    if (!bVar9) {
      *puVar2 = 0xfffffffe;
      *(int *)(in_EAX + 0x60) = *(int *)(in_EAX + 0x60) + uVar8;
    }
LAB_004b2906:
    FUN_007ec1c8();
    if (bVar9) {
      if (*puVar2 == *(uint *)(iVar1 + 0x120)) {
        return 0;
      }
      uVar7 = *(uint *)(in_EAX + 0x60) & 0x3f;
      puVar2[1] = (uVar7 + 0x3f + uVar8 & 0xffffffc0) - uVar7 | uVar4 << 0x18;
      return 0;
    }
    if (*puVar2 == *(uint *)(iVar1 + 0x120)) {
      return 1;
    }
    if (*(int *)(in_EAX + 100) - *(int *)(in_EAX + 0x60) < 8) {
      return 0;
    }
  } while( true );
}

