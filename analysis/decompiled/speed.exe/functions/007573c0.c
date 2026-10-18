/* speed.exe 007573c0 FUN_007573c0; analysis pseudocode, not buildable source.
 * calls 00460af0 FUN_00460af0
 * calls 00753250 FUN_00753250
 * calls 00748700 FUN_00748700
 * calls 007485b0 FUN_007485b0
 * calls 00739f80 FUN_00739f80
 * calls 0065c770 FUN_0065c770
 * calls 007c94b0 __chkstk
 * calls 004646f0 FUN_004646f0
 */

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_007573c0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  float10 fVar10;
  int local_3808 [256];
  char local_3408 [1024];
  int local_3008 [3071];
  undefined4 uStack_c;
  
  uStack_c = 0x7573d0;
  fVar10 = (float10)FUN_0065c770();
  if ((float10)_DAT_00890d34 <= fVar10 - (float10)_DAT_009b37a4) {
    fVar10 = (float10)FUN_0065c770();
    _DAT_009b37a4 = (float)fVar10;
    iVar1 = FUN_004646f0(DAT_00904a00,local_3008,0xc00);
    iVar7 = *(int *)(param_1 + 0x5c);
    pcVar9 = local_3408;
    for (iVar5 = 0x100; iVar5 != 0; iVar5 = iVar5 + -1) {
      pcVar9[0] = '\0';
      pcVar9[1] = '\0';
      pcVar9[2] = '\0';
      pcVar9[3] = '\0';
      pcVar9 = pcVar9 + 4;
    }
    if (iVar7 != param_1 + 0x58) {
      do {
        uVar2 = FUN_00753250(*(undefined4 *)(iVar7 + 0x348),local_3808,0);
        uVar2 = FUN_00748700(*(undefined4 *)(iVar7 + 0x350),local_3808,uVar2);
        iVar5 = FUN_007485b0(*(undefined4 *)(iVar7 + 0x34c),local_3808,uVar2);
        iVar8 = 0;
        if (0 < iVar5) {
          do {
            iVar6 = local_3808[iVar8];
            FUN_00460af0(iVar6);
            iVar3 = 0;
            if (0 < iVar1) {
              do {
                if (iVar6 == local_3008[iVar3]) {
                  local_3408[iVar3] = local_3408[iVar3] + '\x01';
                  break;
                }
                iVar3 = iVar3 + 1;
              } while (iVar3 < iVar1);
            }
            iVar8 = iVar8 + 1;
          } while (iVar8 < iVar5);
        }
        FUN_00739f80(*(undefined4 *)(iVar7 + 0x1c),
                     CONCAT31((int3)((uint)*(int *)(iVar7 + 0x18) >> 8),*(int *)(iVar7 + 0x18) != 0)
                     ,CONCAT31((int3)((uint)*(int *)(param_1 + 0x10) >> 8),
                               *(int *)(param_1 + 0x10) != 0));
        iVar7 = *(int *)(iVar7 + 4);
      } while (iVar7 != param_1 + 0x58);
    }
    iVar7 = 0;
    if (0 < iVar1) {
      iVar5 = *(int *)(param_1 + 0x68);
      do {
        iVar8 = local_3008[iVar7];
        if (0 < iVar5) {
          piVar4 = (int *)(param_1 + 0x6c);
          iVar6 = iVar5;
          do {
            if (*piVar4 == iVar8) {
              local_3408[iVar7] = '\x01';
            }
            piVar4 = piVar4 + 1;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar1);
    }
  }
  return;
}

