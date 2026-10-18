/* speed.exe 006d5c10 FUN_006d5c10; analysis pseudocode, not buildable source.
 * calls 006c6080 FUN_006c6080
 */

void __thiscall FUN_006d5c10(int param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  int *piVar4;
  int unaff_EBX;
  int iVar5;
  int iVar6;
  uint uVar7;
  int unaff_ESI;
  int unaff_EDI;
  int iVar8;
  bool bVar9;
  bool bVar10;
  uint *puStack_d8;
  int *piStack_d4;
  undefined2 *puStack_d0;
  int *piStack_cc;
  undefined **ppuStack_b8;
  uint local_a8;
  int iStack_a4;
  undefined1 *apuStack_a0 [8];
  undefined2 local_80;
  undefined2 uStack_7e;
  undefined1 auStack_7c [108];
  int iStack_10;
  
  piStack_cc = *(int **)(param_1 + 0x48);
  if (piStack_cc != (int *)0x0) {
    puStack_d0 = (undefined2 *)0x6d5c2b;
    (**(code **)(*piStack_cc + 8))();
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  local_a8 = DAT_0093d89c;
  *(int *)(param_1 + 4) = param_2;
  ppuStack_b8 = &PTR_s_WorldShader_008f9b60 + param_2 * 0x24;
  iVar8 = 0;
  iVar6 = 0;
  if (*(int *)(&DAT_008f9b64 + param_2 * 0x90) != 8) {
    iVar5 = (int)&local_80 - (int)ppuStack_b8;
    iStack_a4 = (int)&local_80 + (1 - (int)ppuStack_b8);
    iVar3 = -2 - (int)ppuStack_b8;
    apuStack_a0[0] = auStack_7c + (-1 - (int)ppuStack_b8);
    piVar4 = (int *)(&DAT_008f9b64 + param_2 * 0x90);
    do {
      iVar1 = *piVar4;
      *(undefined *)(iVar5 + (int)piVar4) = (&DAT_008fad28)[iVar1 * 4];
      *(undefined1 *)(iStack_a4 + (int)piVar4) = 0;
      puVar2 = ppuStack_b8[2];
      (auStack_7c + iVar3)[(int)piVar4] = (&DAT_008fad48)[(int)puVar2 * 4];
      apuStack_a0[0][(int)piVar4] = (&DAT_008fad70)[(int)puVar2];
      iVar1 = *(int *)(&DAT_008fad7c + iVar1 * 4);
      ppuStack_b8 = (undefined **)(piVar4 + 1);
      *(short *)(auStack_7c + iVar8 * 8 + -2) = (short)iVar6;
      iVar6 = iVar6 + iVar1;
      iVar1 = piVar4[2];
      (&local_80)[iVar8 * 4] = 0;
      iVar8 = iVar8 + 1;
      piVar4 = piVar4 + 2;
    } while (iVar1 != 8);
  }
  piStack_cc = (int *)(param_1 + 0x4c);
  puStack_d0 = &local_80;
  (&local_80)[iVar8 * 4] = 0xff;
  *(undefined2 *)(auStack_7c + iVar8 * 8 + -2) = 0;
  auStack_7c[iVar8 * 8] = 0x11;
  auStack_7c[iVar8 * 8 + 1] = 0;
  auStack_7c[iVar8 * 8 + 2] = 0;
  auStack_7c[iVar8 * 8 + 3] = 0;
  piStack_d4 = DAT_00982bdc;
  puStack_d8 = (uint *)0x6d5d39;
  (**(code **)(*DAT_00982bdc + 0x158))();
  *(int *)(param_1 + 8) = iVar6;
  puStack_d8 = (uint *)0x6d5d43;
  FUN_006c6080();
  puStack_d8 = &local_a8;
  *(undefined4 *)(param_1 + 0x10) = 0;
  (**(code **)(**(int **)(param_1 + 0x48) + 0xc))(*(int **)(param_1 + 0x48));
  uVar7 = 0;
  if (local_a8 == 0) {
    return;
  }
  do {
    iVar6 = (**(code **)(**(int **)(param_1 + 0x48) + 0x30))(*(int **)(param_1 + 0x48),uVar7);
    if (iVar6 != 0) {
      iVar8 = (**(code **)(**(int **)(param_1 + 0x48) + 0x4c))
                        (*(int **)(param_1 + 0x48),iVar6,"shader");
      puStack_d8 = (uint *)0x0;
      piStack_d4 = (int *)0x0;
      if (iVar8 != 0) {
        (**(code **)(**(int **)(param_1 + 0x48) + 0x6c))
                  (*(int **)(param_1 + 0x48),iVar8,&puStack_d8);
      }
      iVar8 = (**(code **)(**(int **)(param_1 + 0x48) + 0x4c))
                        (*(int **)(param_1 + 0x48),iVar6,"shadowLevel");
      if (iVar8 != 0) {
        (**(code **)(**(int **)(param_1 + 0x48) + 0x6c))
                  (*(int **)(param_1 + 0x48),iVar8,&stack0xffffff38);
      }
      if ((DAT_008fad24 == -1) || ((int)piStack_cc <= DAT_008fad24)) {
        if (DAT_0093d898 == 0x10de) {
          if (((((DAT_0093d9e4 < 0xffff0300) && (DAT_0093d89c != 0x330)) && (DAT_0093d89c != 0x331))
              && ((DAT_0093d89c != 0x332 && (DAT_0093d89c != 0x333)))) &&
             ((DAT_0093d89c != 0x334 && (DAT_008fad9c != '\0')))) {
            bVar10 = SBORROW4((int)piStack_cc,1);
            iVar8 = -1;
            bVar9 = piStack_cc == (int *)0x1;
LAB_006d5e45:
            if (!bVar9 && bVar10 == (int)piStack_cc + iVar8 < 0) goto LAB_006d5f8b;
          }
        }
        else if ((DAT_0093d898 == 0x8086) && ((DAT_0093d89c == 0x2772 || (DAT_0093d89c == 0x2582))))
        {
          bVar10 = false;
          iVar8 = 0;
          bVar9 = piStack_cc == (int *)0x0;
          goto LAB_006d5e45;
        }
        if (iStack_10 == 1) {
          if (((unaff_ESI != 0x1039) && ((unaff_ESI != 0x8086 || (unaff_EBX != 0x2572)))) ||
             (2 < (int)uVar7)) {
LAB_006d5eaf:
            iVar8 = (**(code **)(**(int **)(param_1 + 0x48) + 0xf0))
                              (*(int **)(param_1 + 0x48),iVar6);
            if (iVar8 == 0) {
              switch(*(undefined4 *)(param_1 + 4)) {
              case 0:
              case 1:
              case 3:
              case 4:
              case 5:
              case 0x12:
                if (unaff_EDI == 0) {
                  if ((int)piStack_cc <= *(int *)(param_1 + 0x28)) break;
                  *(int **)(param_1 + 0x28) = piStack_cc;
                  *(uint *)(param_1 + 0x18) = uVar7;
                }
                else if (DAT_00982c08 == 1) {
                  if (3 < unaff_EDI) break;
                  if (*(int *)(param_1 + 0x28 + unaff_EDI * 4) < (int)piStack_cc) {
                    *(int **)(param_1 + 0x28 + unaff_EDI * 4) = piStack_cc;
                    *(uint *)(param_1 + 0x18 + unaff_EDI * 4) = uVar7;
                  }
                }
                else if (DAT_00982c08 == 2) {
                  if (unaff_EDI < 4) {
                    if (0 < unaff_EDI) break;
                  }
                  else {
                    unaff_EDI = unaff_EDI + -3;
                  }
                  if (*(int *)(param_1 + 0x28 + unaff_EDI * 4) < (int)piStack_cc) {
                    *(int **)(param_1 + 0x28 + unaff_EDI * 4) = piStack_cc;
                    *(uint *)(param_1 + 0x18 + unaff_EDI * 4) = uVar7;
                  }
                }
                else if (0 < unaff_EDI) break;
                if (*(int *)(param_1 + 0x38) < unaff_EDI) {
                  *(int *)(param_1 + 0x38) = unaff_EDI;
                }
                *(int *)(param_1 + 0x10) = iVar6;
                *(uint *)(param_1 + 0xc) = uVar7;
                *(undefined1 *)(param_1 + 0x40) = 1;
                break;
              default:
                if ((*(int *)(param_1 + 0x28) == -1) || (*(int *)(param_1 + 0x28) < (int)piStack_cc)
                   ) {
                  *(bool *)(param_1 + 0x40) = 0 < (int)piStack_cc;
                  *(int **)(param_1 + 0x28) = piStack_cc;
                  *(uint *)(param_1 + 0xc) = uVar7;
                  *(int *)(param_1 + 0x10) = iVar6;
                  (**(code **)(**(int **)(param_1 + 0x48) + 0x14))
                            (*(int **)(param_1 + 0x48),iVar6,apuStack_a0);
                  *(uint *)(param_1 + 0x14) = local_a8;
                  return;
                }
              }
            }
          }
        }
        else {
          if (iStack_10 == 4) {
            bVar9 = unaff_ESI == 0x102b;
          }
          else {
            if (iStack_10 != 0xb) goto LAB_006d5eaf;
            bVar9 = unaff_ESI == 0x1039;
          }
          if ((!bVar9) || (uVar7 != 0)) goto LAB_006d5eaf;
        }
      }
    }
LAB_006d5f8b:
    uVar7 = uVar7 + 1;
    if (local_a8 <= uVar7) {
      return;
    }
  } while( true );
}

