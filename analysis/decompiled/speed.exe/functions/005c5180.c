/* speed.exe 005c5180 FUN_005c5180; analysis pseudocode, not buildable source.
 * calls 005b59c0 FUN_005b59c0
 * calls 00652ac0 _malloc
 * calls 00652b10 thunk_FUN_007c7250
 * calls 005b0870 FUN_005b0870
 * calls 005c4cb0 FUN_005c4cb0
 */

undefined4 __fastcall FUN_005c5180(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 unaff_EBP;
  int unaff_ESI;
  undefined1 local_61;
  uint local_60;
  int *local_5c;
  uint *local_58;
  uint local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  iVar1 = param_1[1];
  iVar7 = *(int *)(iVar1 + 8);
  piVar5 = (int *)(iVar1 + 8);
  do {
    if (iVar7 == 0x4c62694c) {
LAB_005c51b5:
      local_58 = (uint *)(piVar5 + 2);
      local_54 = *local_58;
      iVar1 = *param_1;
      local_60 = 0;
      local_5c = param_1;
      if (local_54 != 0) {
        do {
          puVar6 = _malloc(0x14);
          if (puVar6 == (undefined4 *)0x0) {
            puVar6 = (undefined4 *)0x0;
          }
          else {
            puVar6[1] = 0xabadcafe;
            puVar6[2] = 0xabadcafe;
            *puVar6 = &PTR_FUN_008a2c2c;
            puVar6[3] = 0;
            puVar6[4] = 0;
          }
          FUN_005b59c0(piVar5[local_60 + 3] + (int)local_58);
          iVar7 = *(int *)(iVar1 + 0x80);
          if (puVar6 != (undefined4 *)0x0) {
            if (iVar7 == 0) {
              iVar2 = *(int *)(iVar1 + 0x7c);
              puVar6[1] = iVar2;
              if (iVar2 != 0) {
                *(undefined4 **)(iVar2 + 8) = puVar6;
              }
              puVar6[2] = 0;
              *(undefined4 **)(iVar1 + 0x7c) = puVar6;
            }
            else {
              iVar2 = *(int *)(iVar7 + 4);
              puVar6[1] = iVar2;
              if (iVar2 != 0) {
                *(undefined4 **)(iVar2 + 8) = puVar6;
              }
              puVar6[2] = iVar7;
              *(undefined4 **)(iVar7 + 4) = puVar6;
            }
            if (*(int *)(iVar1 + 0x80) == iVar7) {
              *(undefined4 **)(iVar1 + 0x80) = puVar6;
            }
            *(int *)(iVar1 + 0x78) = *(int *)(iVar1 + 0x78) + 1;
          }
          local_60 = local_60 + 1;
        } while (local_60 < local_54);
      }
      iVar1 = *(int *)(iVar1 + 0x7c);
      piVar5 = local_5c;
      do {
        if (iVar1 == 0) {
          return 1;
        }
        iVar7 = FUN_005b0870(*(undefined4 *)(iVar1 + 0x10));
        if (iVar7 == 0) {
          iVar7 = (*(code *)**(undefined4 **)piVar5[0xe])
                            (*(undefined4 *)(iVar1 + 0xc),&local_54,&local_61);
          if (iVar7 == 0) {
            return 0;
          }
          iVar2 = *(int *)(unaff_ESI + 0x3c);
          local_58 = (uint *)0x0;
          local_5c = (int *)0x0;
          uStack_50 = 0;
          uStack_48 = 0;
          uStack_4c = 0;
          uStack_2c = 0;
          uStack_28 = 0;
          uStack_18 = 0;
          uStack_1c = 0;
          uStack_10 = 0;
          uStack_14 = 0;
          iVar7 = FUN_005c4cb0(iVar7,*(undefined4 *)(iVar2 + 0x108),iVar2,*(undefined1 *)(iVar2 + 2)
                               ,*(undefined1 *)(iVar2 + 3),1);
          if ((char)((uint)unaff_EBP >> 0x18) != '\0') {
            thunk_FUN_007c7250(local_60);
          }
          if (iVar7 == 0) {
            return 0;
          }
          (**(code **)(**(int **)(unaff_ESI + 0x38) + 0xc))(iVar7);
          *(undefined4 *)(iVar7 + 0x1c) = 1;
          iVar2 = *(int *)(unaff_ESI + 0x3c);
          iVar3 = *(int *)(iVar2 + 0x104);
          if (iVar3 == 0) {
            iVar4 = *(int *)(iVar2 + 0x100);
            *(int *)(iVar7 + 4) = iVar4;
            if (iVar4 != 0) {
              *(int *)(iVar4 + 8) = iVar7;
            }
            *(undefined4 *)(iVar7 + 8) = 0;
            *(int *)(iVar2 + 0x100) = iVar7;
          }
          else {
            iVar4 = *(int *)(iVar3 + 4);
            *(int *)(iVar7 + 4) = iVar4;
            if (iVar4 != 0) {
              *(int *)(iVar4 + 8) = iVar7;
            }
            *(int *)(iVar7 + 8) = iVar3;
            *(int *)(iVar3 + 4) = iVar7;
          }
          if (*(int *)(iVar2 + 0x104) == iVar3) {
            *(int *)(iVar2 + 0x104) = iVar7;
          }
          *(int *)(iVar2 + 0xfc) = *(int *)(iVar2 + 0xfc) + 1;
          piVar5 = local_5c;
        }
        else {
          *(int *)(iVar7 + 0x1c) = *(int *)(iVar7 + 0x1c) + 1;
        }
        iVar1 = *(int *)(iVar1 + 4);
      } while( true );
    }
    if (piVar5 == (int *)(*(int *)(iVar1 + 4) + 8 + iVar1)) {
      if (*piVar5 != 0x4c62694c) {
        return 1;
      }
      goto LAB_005c51b5;
    }
    piVar5 = (int *)((int)piVar5 + piVar5[1] + 8);
    iVar7 = *piVar5;
  } while( true );
}

