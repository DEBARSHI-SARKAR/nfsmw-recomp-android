/* speed.exe 008335f7 FUN_008335f7; analysis pseudocode, not buildable source.
 * calls 008335d2 FUN_008335d2
 * calls 008346ff FUN_008346ff
 */

void FUN_008335f7(int param_1)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  ushort *puVar7;
  int unaff_EDI;
  undefined8 uVar8;
  int aiStack_19c [100];
  ushort *local_c;
  uint local_8;
  
  local_8 = (uint)*(byte *)(unaff_EDI + 6);
  iVar6 = 0;
  if (local_8 != 0) {
    local_c = (ushort *)(unaff_EDI + 0xc);
    do {
      uVar1 = *(undefined1 *)(unaff_EDI + (uint)*local_c * 4);
      uVar8 = FUN_008335d2(uVar1);
      aiStack_19c[(int)((ulonglong)uVar8 >> 0x20)] = (int)uVar8;
      uVar8 = FUN_008335d2(uVar1);
      local_c = local_c + 1;
      iVar6 = iVar6 + (int)uVar8;
    } while ((int)((ulonglong)uVar8 >> 0x20) + 1 < (int)local_8);
  }
  iVar4 = 0;
  do {
    if (iVar6 < 1) {
      if (0 < (int)local_8) {
        puVar5 = (undefined1 *)(iVar4 + param_1);
        puVar7 = (ushort *)(unaff_EDI + 0xc);
        do {
          uVar8 = FUN_008335d2(*(undefined1 *)(unaff_EDI + (uint)*puVar7 * 4));
          if ((int)uVar8 == 0) {
            *puVar5 = (char)((ulonglong)uVar8 >> 0x20);
            puVar5 = puVar5 + 1;
          }
          puVar7 = puVar7 + 1;
        } while ((int)((ulonglong)uVar8 >> 0x20) + 1 < (int)local_8);
      }
      return;
    }
    uVar2 = FUN_008346ff(iVar6,0xffffffff);
    uVar2 = uVar2 & 0xffff;
    iVar3 = 0;
    if (0 < (int)local_8) {
      do {
        uVar2 = uVar2 - aiStack_19c[iVar3];
        if ((int)uVar2 < 0) break;
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)local_8);
    }
    *(char *)(iVar4 + param_1) = (char)iVar3;
    iVar6 = iVar6 - aiStack_19c[iVar3];
    iVar4 = iVar4 + 1;
    aiStack_19c[iVar3] = 0;
  } while( true );
}

