/* speed.exe 005070e0 FUN_005070e0; analysis pseudocode, not buildable source.
 * calls 00460bf0 FUN_00460bf0
 * calls 006be430 FUN_006be430
 * calls 005018f0 FUN_005018f0
 * calls 006e3ee0 FUN_006e3ee0
 * calls 004fb210 FUN_004fb210
 * calls 005051d0 FUN_005051d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005070e0(int *param_1,int param_2)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  
  if (*param_1 == -0x7fecbff0) {
    piVar8 = param_1 + 2;
    piVar1 = (int *)((int)param_1 + param_1[1] + 8);
    uVar7 = 0;
    bVar2 = true;
    if (piVar8 < piVar1) {
      do {
        iVar6 = *piVar8;
        if (iVar6 == 0x134011) {
          uVar7 = (int)piVar8 + 0x17U & 0xfffffff0;
          iVar6 = uVar7 + 0x88;
          *(int *)iVar6 = iVar6;
          *(int *)(uVar7 + 0x8c) = iVar6;
        }
        else if (iVar6 == 0x134012) {
          *(int **)(uVar7 + 0x2c) = piVar8 + 2;
          if ((*(char *)(uVar7 + 0xd) == '\0') && (iVar6 = 0, '\0' < *(char *)(uVar7 + 0x19))) {
            do {
              FUN_00460bf0("DEFAULT");
              iVar6 = iVar6 + 1;
            } while (iVar6 < *(char *)(uVar7 + 0x19));
          }
        }
        else if (iVar6 == 0x134013) {
          *(int **)(uVar7 + 0x3c) = piVar8 + 2;
        }
        else if (iVar6 == 0x134017) {
          *(int **)(uVar7 + 0x84) = piVar8 + 2;
          DAT_0091518c = DAT_0091518c + piVar8[1];
        }
        else if (iVar6 == 0x134018) {
          **(int **)(uVar7 + 0x84) = (int)(piVar8 + 2);
          *(short *)(*(int *)(uVar7 + 0x84) + 8) = (short)((uint)piVar8[1] >> 3);
          DAT_0091518c = DAT_0091518c + piVar8[1];
        }
        else if (iVar6 == 0x134019) {
          *(int **)(*(int *)(uVar7 + 0x84) + 4) = piVar8 + 2;
          *(short *)(*(int *)(uVar7 + 0x84) + 10) = (short)((uint)piVar8[1] / 0xc);
          DAT_0091518c = DAT_0091518c + piVar8[1];
        }
        else if (iVar6 == 0x13401b) {
          *(int **)(uVar7 + 0x90) = piVar8 + 2;
          _DAT_00915190 = _DAT_00915190 + piVar8[1];
        }
        else if (iVar6 == 0x13401a) {
          *(uint *)(uVar7 + 0x80) = (int)piVar8 + 0x17U & 0xfffffff0;
          *(char *)(uVar7 + 0x1b) =
               (char)(((piVar8[1] - ((int)piVar8 + 0x17U & 0xfffffff0)) + 8 + (int)piVar8) / 0x50);
        }
        else if ((iVar6 == -0x7fecbf00) && (iVar6 = FUN_006e3ee0(piVar8), iVar6 == 0)) {
          bVar2 = false;
        }
        piVar8 = (int *)((int)piVar8 + piVar8[1] + 8);
      } while (piVar8 < piVar1);
      if (uVar7 != 0) {
        *(undefined1 *)(uVar7 + 0xd) = 1;
      }
    }
    *(undefined2 *)(param_2 + 0x7c) = 0xffff;
    FUN_005051d0();
    iVar3 = (int)*(char *)(uVar7 + 0x1a);
    piVar8 = *(int **)(uVar7 + 0x3c);
    iVar6 = DAT_0091c170;
    if (0 < iVar3) {
      do {
        while( true ) {
          if (iVar6 == 0) {
            puVar4 = (undefined4 *)0x0;
          }
          else {
            puVar4 = (undefined4 *)(iVar6 + -4);
          }
          puVar5 = (undefined4 *)PTR_DAT_008f23e8;
          if (((undefined4 **)puVar4 == &DAT_0091c16c) || (puVar5 = puVar4, puVar4[3] == *piVar8))
          break;
          iVar6 = puVar4[1];
        }
        piVar8[1] = (int)puVar5;
        piVar8 = piVar8 + 2;
        iVar3 = iVar3 + -1;
        iVar6 = DAT_0091c170;
      } while (iVar3 != 0);
    }
    if (((DAT_00925860 == 0) && ((*(byte *)(uVar7 + 0xe) & 0x10) == 0)) &&
       (iVar6 = FUN_005018f0(*(undefined4 *)(uVar7 + 0x10),0), iVar6 != 0)) {
      *(ushort *)(uVar7 + 0xe) = *(ushort *)(uVar7 + 0xe) | 0x100;
      *(ushort *)(iVar6 + 0xe) = *(ushort *)(iVar6 + 0xe) | 0x100;
      if (DAT_00915fd8 == 0) {
        *(ushort *)(uVar7 + 0xe) = *(ushort *)(uVar7 + 0xe) | 0x200;
        *(ushort *)(iVar6 + 0xe) = *(ushort *)(iVar6 + 0xe) | 0x200;
      }
    }
    iVar6 = FUN_006be430();
    if (iVar6 == 0) {
      bVar2 = false;
    }
    iVar6 = FUN_004fb210(*(undefined4 *)(uVar7 + 0x10),*(undefined4 *)(param_2 + 0x74),
                         *(undefined4 *)(param_2 + 0xc),0,8);
    if (bVar2) {
      if (iVar6 != 0) {
        *(uint *)(iVar6 + 4) = uVar7;
      }
      puVar4 = (undefined4 *)(uVar7 + 4);
      *DAT_00916a74 = puVar4;
      puVar5 = puVar4;
      *(undefined4 **)(uVar7 + 8) = DAT_00916a74;
      DAT_00916a74 = puVar5;
      *puVar4 = &DAT_00916a70;
      DAT_009175d8 = DAT_009175d8 + 1;
      (&DAT_009175dc)[*(uint *)(uVar7 + 0x10) & 0x1fff] =
           (&DAT_009175dc)[*(uint *)(uVar7 + 0x10) & 0x1fff] + '\x01';
    }
    else {
      if (iVar6 != 0) {
        *(undefined4 *)(iVar6 + 4) = 0;
      }
      puVar4 = (undefined4 *)(uVar7 + 4);
      *DAT_0091c16c = puVar4;
      puVar5 = puVar4;
      *(undefined4 **)(uVar7 + 8) = DAT_0091c16c;
      DAT_0091c16c = puVar5;
      *puVar4 = &DAT_0091c168;
    }
    DAT_00915184 = DAT_00915184 + 1;
    DAT_00915fe0 = 1;
    DAT_00915188 = DAT_00915188 + param_1[1];
    return uVar7;
  }
  return 0;
}

