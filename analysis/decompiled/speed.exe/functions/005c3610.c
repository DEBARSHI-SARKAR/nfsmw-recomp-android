/* speed.exe 005c3610 FUN_005c3610; analysis pseudocode, not buildable source.
 * calls 007c8f50 `eh_vector_destructor_iterator'
 * calls 005bffe0 FUN_005bffe0
 * calls 00652b10 thunk_FUN_007c7250
 * calls 005b5350 FUN_005b5350
 * calls 005bf230 FUN_005bf230
 * calls 005b0680 FUN_005b0680
 * calls 007c90a0 `eh_vector_constructor_iterator'
 * calls 005b3d60 FUN_005b3d60
 * calls 005b2810 FUN_005b2810
 * calls 005b2910 FUN_005b2910
 * calls 00652ad0 _malloc
 * calls 005b2c30 FUN_005b2c30
 * calls 005c1dc0 FUN_005c1dc0
 * calls 005b1360 FUN_005b1360
 * calls 005c1c40 FUN_005c1c40
 */

undefined4 __thiscall FUN_005c3610(int param_1,ushort *param_2,uint param_3)

{
  ushort *puVar1;
  ushort uVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  void **ppvVar6;
  char cVar7;
  ushort *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  ushort *puVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined1 *puVar17;
  uint uVar18;
  undefined1 *puVar19;
  int local_2c;
  uint local_20;
  int *local_1c;
  uint local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087466b;
  puVar8 = (ushort *)(param_3 + (int)param_2);
  puVar16 = (undefined4 *)0x0;
  puVar17 = (undefined1 *)0x0;
  local_2c = -1;
  cVar7 = '\0';
  ppvVar6 = &local_c;
  local_c = ExceptionList;
  for (puVar1 = param_2; ExceptionList = ppvVar6, puVar1 < puVar8;
      puVar1 = (ushort *)((int)puVar1 + puVar1[1] + 4)) {
    uVar2 = *puVar1;
    if (uVar2 < 0x6654) {
      if (uVar2 == 0x6653) {
        if (puVar16 != (undefined4 *)0x0) {
          puVar16[5] = *(undefined4 *)(puVar1 + 2);
        }
      }
      else if (uVar2 < 0x6155) {
        if (uVar2 == 0x6154) {
          if (puVar16 != (undefined4 *)0x0) {
            puVar17[3] = (char)puVar1[2];
          }
        }
        else if (uVar2 == 0x4946) {
          local_2c = local_2c + 1;
          puVar17 = (undefined1 *)(local_2c * 0x38 + puVar16[8]);
          *puVar17 = (char)puVar1[2];
          puVar17[1] = *(undefined1 *)((int)puVar1 + 5);
          puVar17[2] = (char)puVar1[3];
          puVar17[3] = *(undefined1 *)((int)puVar1 + 7);
          *(uint *)(puVar17 + 4) =
               *(uint *)(puVar17 + 4) ^ (*(uint *)(puVar1 + 4) ^ *(uint *)(puVar17 + 4)) & 0xffffff;
          puVar17[7] = cVar7;
          cVar7 = cVar7 + ((byte)puVar17[1] >> 2);
        }
        else if (uVar2 == 0x4953) {
          puVar16 = (undefined4 *)FUN_005b1360(*(undefined4 *)(puVar1 + 2));
          puVar17 = (undefined1 *)0x0;
        }
        else if (uVar2 == 0x5645) {
          uVar18 = puVar1[1] / 0xc;
          FUN_005b5350(uVar18);
          puVar9 = (undefined4 *)puVar16[10];
          puVar11 = puVar1 + 2;
          do {
            *puVar9 = *(undefined4 *)puVar11;
            puVar9[1] = *(undefined4 *)(puVar11 + 2);
            puVar9[2] = *(undefined4 *)(puVar11 + 4);
            puVar9 = puVar9 + 3;
            puVar11 = puVar11 + 6;
            uVar18 = uVar18 - 1;
          } while (uVar18 != 0);
        }
      }
      else if (uVar2 == 0x6254) {
        uVar18 = (uint)((byte)puVar17[1] >> 2);
        *(undefined4 *)(puVar17 + 0x14) = *(undefined4 *)(puVar1 + 2);
        if (uVar18 != 0) {
          puVar9 = (undefined4 *)(puVar17 + 0x18);
          puVar11 = puVar1 + 4;
          do {
            *puVar9 = *(undefined4 *)puVar11;
            puVar11 = puVar11 + 2;
            puVar9 = puVar9 + 1;
            uVar18 = uVar18 - 1;
          } while (uVar18 != 0);
        }
      }
      else if (uVar2 == 0x6353) {
        puVar16[6] = *(undefined4 *)(puVar1 + 2);
      }
      else if (uVar2 == 0x644b) {
        uVar2 = puVar1[1];
        uVar18 = (byte)puVar17[1] + 4;
        param_3 = 0;
        param_2 = puVar1 + 2;
        if (puVar17[0x2c] != '\0') {
          *(undefined4 *)(puVar17 + 0x30) = 0;
          *(undefined4 *)(puVar17 + 0x34) = 0;
          puVar17[0x2c] = 0;
        }
        do {
          if (param_3 == 0) {
            puVar9 = (undefined4 *)(puVar17 + 8);
          }
          else {
            puVar9 = (undefined4 *)FUN_005bffe0();
            if (puVar9 == (undefined4 *)0x0) {
              puVar9 = (undefined4 *)0x0;
            }
            else {
              puVar9[1] = 0xabadcafe;
              puVar9[2] = 0xabadcafe;
              *puVar9 = &PTR_FUN_008a2c24;
            }
          }
          puVar9[3] = *(undefined4 *)param_2;
          uVar10 = 0;
          if (uVar18 >> 2 != 1) {
            puVar15 = puVar9 + 4;
            do {
              *puVar15 = *(undefined4 *)(param_2 + uVar10 * 2 + 2);
              uVar10 = uVar10 + 1;
              puVar15 = puVar15 + 1;
            } while (uVar10 < (uVar18 >> 2) - 1);
          }
          if (param_3 != 0) {
            iVar14 = *(int *)(puVar17 + 0x34);
            if (iVar14 == 0) {
              iVar13 = *(int *)(puVar17 + 0x30);
              puVar9[1] = iVar13;
              if (iVar13 != 0) {
                *(undefined4 **)(iVar13 + 8) = puVar9;
              }
              puVar9[2] = 0;
              *(undefined4 **)(puVar17 + 0x30) = puVar9;
            }
            else {
              iVar13 = *(int *)(iVar14 + 4);
              puVar9[1] = iVar13;
              if (iVar13 != 0) {
                *(undefined4 **)(iVar13 + 8) = puVar9;
              }
              puVar9[2] = iVar14;
              *(undefined4 **)(iVar14 + 4) = puVar9;
            }
            if (*(int *)(puVar17 + 0x34) == iVar14) {
              *(undefined4 **)(puVar17 + 0x34) = puVar9;
            }
          }
          param_2 = (ushort *)((int)param_2 + uVar18);
          param_3 = param_3 + 1;
        } while (param_3 < uVar2 / uVar18);
      }
    }
    else if (uVar2 < 0x6e54) {
      if (uVar2 == 0x6e53) {
        puVar16 = (undefined4 *)FUN_005c1c40();
        puVar16[1] = 0xabadcafe;
        puVar16[2] = 0xabadcafe;
        *puVar16 = &PTR_FUN_008a2cec;
        puVar16[9] = 0;
        puVar16[10] = 0;
        puVar16[0xb] = 0;
        puVar16[0xc] = 0;
        puVar16[3] = 0;
        puVar16[5] = 0;
        puVar16[6] = 0;
        puVar16[7] = 0;
        puVar16[8] = 0;
        puVar16[4] = 0;
        if (*(char *)(param_1 + 10) != '\0') {
          FUN_005b2810(puVar1 + 2);
        }
        local_2c = -1;
        cVar7 = '\0';
      }
      else if (uVar2 == 0x6853) {
        if (puVar16 == (undefined4 *)0x0) {
          iVar14 = FUN_005c1c40();
          *(undefined4 *)(iVar14 + 0x2c) = 0;
          *(undefined4 *)(iVar14 + 0x30) = 0;
          *(undefined4 *)(iVar14 + 0xc) = 0;
          *(undefined4 *)(iVar14 + 0x14) = 0;
          *(undefined4 *)(iVar14 + 0x18) = 0;
          *(undefined4 *)(iVar14 + 0x1c) = 0;
          *(undefined4 *)(iVar14 + 0x20) = 0;
          puVar16 = (undefined4 *)FUN_005b3d60();
          puVar16[4] = 0;
          local_2c = -1;
          cVar7 = '\0';
        }
        puVar16[0xc] = *(undefined4 *)(puVar1 + 2);
        puVar16[3] = *(undefined4 *)(puVar1 + 4);
        puVar16[5] = *(undefined4 *)(puVar1 + 6);
        FUN_005bf230(*(undefined4 *)(puVar1 + 8));
      }
      else if (uVar2 == 0x6954) {
        if (puVar16 != (undefined4 *)0x0) {
          uVar18 = (uint)puVar1[2];
          puVar17 = (undefined1 *)FUN_005b2910(uVar18);
          if (puVar17 == (undefined1 *)0x0) {
            iVar14 = puVar16[7] + 1;
            piVar12 = _malloc(iVar14 * 0x38 + 4);
            local_4 = 0;
            if (piVar12 == (int *)0x0) {
              local_1c = (int *)0x0;
            }
            else {
              local_1c = piVar12 + 1;
              *piVar12 = iVar14;
              _eh_vector_constructor_iterator_
                        (local_1c,0x38,iVar14,(_func_void_void_ptr *)&LAB_005b95f0,FUN_005bcac0);
            }
            local_4 = 0xffffffff;
            FUN_005b2c30(*(undefined4 *)(*(int *)(param_1 + 0xc) + 0x18));
            iVar13 = FUN_005b0680(uVar18);
            iVar14 = puVar16[8];
            local_20 = 0;
            local_18 = 0;
            puVar19 = (undefined1 *)((int)local_1c + 1);
            param_3 = iVar14;
            do {
              if (((iVar14 == 0) || ((uint)puVar16[7] <= local_20)) ||
                 ((iVar13 != 0 &&
                  ((int)(*(int *)(iVar13 + 0x1c) + (*(int *)(iVar13 + 0x1c) >> 0x1f & 3U)) >> 2 <=
                   (int)*(char *)(param_3 + 7))))) {
                puVar19[-1] = *(undefined1 *)(iVar13 + 0x14);
                puVar17 = puVar19 + -1;
                *puVar19 = *(undefined1 *)(iVar13 + 0x18);
                puVar19[1] = 1;
                puVar19[2] = 0;
                *(uint *)(puVar19 + 3) =
                     *(uint *)(puVar19 + 3) ^ (puVar16[3] ^ *(uint *)(puVar19 + 3)) & 0xffffff;
                puVar19[6] = (char)(*(uint *)(iVar13 + 0x1c) >> 2);
                iVar13 = 0;
              }
              else {
                FUN_005c1dc0(param_3);
                local_20 = local_20 + 1;
                param_3 = param_3 + 0x38;
              }
              local_18 = local_18 + 1;
              puVar19 = puVar19 + 0x38;
            } while (local_18 <= (uint)puVar16[7]);
            pvVar3 = (void *)puVar16[8];
            if (pvVar3 != (void *)0x0) {
              _eh_vector_destructor_iterator_(pvVar3,0x38,*(int *)((int)pvVar3 + -4),FUN_005bcac0);
              thunk_FUN_007c7250((int)pvVar3 + -4);
            }
            puVar16[8] = local_1c;
            puVar16[7] = puVar16[7] + 1;
          }
        }
      }
      else if (uVar2 == 0x6c53) {
        puVar16[3] = *(undefined4 *)(puVar1 + 2);
      }
    }
    else if (uVar2 == 0x6f54) {
      puVar17[7] = (char)puVar1[2];
    }
    else if ((uVar2 == 0x7454) && (puVar16 != (undefined4 *)0x0)) {
      puVar17[2] = (char)puVar1[2];
    }
    ppvVar6 = ExceptionList;
  }
  iVar14 = CONCAT31((int3)((uint)puVar8 >> 8),*(char *)(param_1 + 0x18));
  if (*(char *)(param_1 + 0x18) == '\0') {
    iVar13 = *(int *)(param_1 + 0xc);
    iVar4 = *(int *)(iVar13 + 0x50);
    iVar14 = iVar13 + 0x44;
    if (puVar16 != (undefined4 *)0x0) {
      if (iVar4 == 0) {
        iVar5 = *(int *)(iVar13 + 0x4c);
        puVar16[1] = iVar5;
        if (iVar5 != 0) {
          *(undefined4 **)(iVar5 + 8) = puVar16;
        }
        puVar16[2] = 0;
        *(undefined4 **)(iVar13 + 0x4c) = puVar16;
      }
      else {
        iVar5 = *(int *)(iVar4 + 4);
        puVar16[1] = iVar5;
        if (iVar5 != 0) {
          *(undefined4 **)(iVar5 + 8) = puVar16;
        }
        puVar16[2] = iVar4;
        *(undefined4 **)(iVar4 + 4) = puVar16;
      }
      if (*(int *)(iVar13 + 0x50) == iVar4) {
        *(undefined4 **)(iVar13 + 0x50) = puVar16;
      }
      *(int *)(iVar13 + 0x48) = *(int *)(iVar13 + 0x48) + 1;
    }
  }
  if (puVar16[0xc] == 0x1744b3) {
    iVar14 = *(int *)(param_1 + 0xc);
    *(undefined4 **)(iVar14 + 0x54) = puVar16;
  }
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)iVar14 >> 8),1);
}

