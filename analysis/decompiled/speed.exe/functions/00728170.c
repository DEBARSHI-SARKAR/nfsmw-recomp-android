/* speed.exe 00728170 FUN_00728170; analysis pseudocode, not buildable source.
 * calls 00721910 FUN_00721910
 * calls 00727990 FUN_00727990
 * calls 007218e0 FUN_007218e0
 * calls 00465a70 FUN_00465a70
 * calls 0045cd20 __break
 * calls 00727ab0 FUN_00727ab0
 * calls 00464080 FUN_00464080
 * calls 00727700 FUN_00727700
 */

int __thiscall FUN_00728170(int param_1,int *param_2)

{
  short sVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  short *psVar9;
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  int local_4;
  
  local_c = 0;
  local_14 = 0;
  local_10 = 0;
  if ((*(int *)(param_1 + 0x188) == 5) &&
     (uVar8 = *(uint *)(param_1 + 8), uVar8 < *(uint *)(param_1 + 0xc))) {
    do {
      iVar7 = (int)*(char *)(uVar8 + 0x13);
      iVar3 = 0;
      if (0 < iVar7) {
        piVar6 = (int *)(uVar8 + 0x18);
        do {
          if ((*(char *)(*piVar6 + 0xb) == '\0') || (*(int *)(*piVar6 + 0xc) != 0)) break;
          iVar3 = iVar3 + 1;
          piVar6 = piVar6 + 2;
        } while (iVar3 < iVar7);
      }
      if (iVar3 == iVar7) {
        iVar3 = *(int *)(uVar8 + 4);
        iVar7 = FUN_00727ab0();
        if (iVar3 <= iVar7) {
          iVar3 = FUN_00727700(iVar3,uVar8 + 8,1,0,0);
          FUN_00727990(iVar3);
          iVar7 = 0;
          if ('\0' < *(char *)(uVar8 + 0x13)) {
            psVar9 = (short *)(uVar8 + 0x16);
            do {
              iVar4 = *(int *)(psVar9 + 1);
              *(uint *)(iVar4 + 0x50) = uVar8;
              iVar5 = *psVar9 * 0x80 + iVar3;
              *(int *)(iVar4 + 0x4c) = iVar5;
              *(undefined4 *)(iVar4 + 0xc) = 1;
              FUN_00727700(*(undefined4 *)(iVar4 + 0x18),uVar8 + 8,0,0,iVar5);
              local_10 = local_10 + 1;
              iVar7 = iVar7 + 1;
              psVar9 = psVar9 + 4;
            } while (iVar7 < *(char *)(uVar8 + 0x13));
          }
          local_14 = local_14 + *(int *)(uVar8 + 4);
        }
      }
      uVar8 = uVar8 + 0x14 + *(char *)(uVar8 + 0x13) * 8;
    } while (uVar8 < *(uint *)(param_1 + 0xc));
  }
  local_4 = 0;
  if (0 < *(int *)(param_1 + 0x2c0)) {
    local_8 = (int *)(param_1 + 0x2c4);
    do {
      iVar3 = *local_8;
      if (*(int *)(iVar3 + 0xc) == 0) {
        sVar1 = *(short *)(iVar3 + 8);
        if ((((sVar1 != 0x9c4) && (sVar1 != 0x960)) && (sVar1 != 0x8fc)) &&
           ((sVar1 != 0x834 && (sVar1 != 0xa28)))) {
          iVar7 = *(int *)(param_1 + 0x188);
          if (iVar7 == 1) {
            cVar2 = FUN_007218e0((int)sVar1);
            if (cVar2 == '\0') goto LAB_0072838a;
          }
          if (iVar7 == 3) {
            cVar2 = FUN_00721910((int)sVar1);
            if (cVar2 == '\0') goto LAB_0072838a;
          }
        }
        iVar7 = *(int *)(iVar3 + 0x18);
        local_14 = local_14 + iVar7;
        iVar4 = FUN_00464080(7);
        if (iVar4 < iVar7) {
          local_c = local_c + iVar7;
          *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
        }
        else {
          iVar7 = FUN_00465a70(iVar7,0x2087);
          if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
            __break();
          }
          local_10 = local_10 + 1;
          *(int *)(iVar3 + 0x4c) = iVar7;
          *(undefined4 *)(iVar3 + 0xc) = 1;
          if (1 < local_10) {
            *(undefined1 *)(param_1 + 400) = 1;
            return local_c;
          }
        }
      }
LAB_0072838a:
      local_4 = local_4 + 1;
      local_8 = local_8 + 1;
    } while (local_4 < *(int *)(param_1 + 0x2c0));
  }
  *(undefined1 *)(param_1 + 400) = 0;
  *param_2 = local_14;
  return local_c;
}

