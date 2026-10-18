/* speed.exe 004efdb0 FUN_004efdb0; analysis pseudocode, not buildable source.
 * calls 004de0e0 FUN_004de0e0
 * calls 004e6ed0 FUN_004e6ed0
 * calls 004b0320 FUN_004b0320
 * calls 004de150 FUN_004de150
 * calls 004e7000 FUN_004e7000
 * calls 004dde10 FUN_004dde10
 * calls 004aed10 FUN_004aed10
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004efdb0(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  float10 fVar4;
  
  if (*(char *)(*(int *)(param_1 + 0x14) + 0x38) != '\0') {
    FUN_004b0320(param_2);
    iVar3 = *(int *)(param_1 + 0x14);
    if (*(int *)(param_1 + 0x2c) == 0) {
      if (((*(char *)(*(int *)(iVar3 + 0x34) + 0x22c) != '\0') &&
          (*(float *)(param_1 + 0x38) + _DAT_008959e4 < *(float *)(iVar3 + 0x3c))) &&
         ((*(float *)(param_1 + 0x40) + _DAT_008959e4 < *(float *)(iVar3 + 0x3c) &&
          ((*(char *)(param_1 + 0x3e) != '\0' && (iVar3 = 0, 0 < DAT_008ef998)))))) {
        do {
          cVar2 = FUN_004dde10(0x41200000,iVar3);
          if ((cVar2 != '\0') && (cVar2 = FUN_004e7000(iVar3), cVar2 != '\0')) {
            fVar4 = (float10)FUN_004aed10(0x3f800000);
            if ((fVar4 < (float10)_DAT_00897e14) ||
               (_DAT_00914324 + _DAT_00897e08 < *(float *)(*(int *)(param_1 + 0x14) + 0x3c))) {
              uVar1 = *(undefined1 *)
                       (*(int *)(*(int *)(*(int *)(param_1 + 0x14) + 0x34) + 0x208) + 0x4c);
              *(undefined1 *)(param_1 + 0x3d) = 1;
              fVar4 = (float10)FUN_004aed10(0x40333333);
              *(float *)(param_1 + 0x30) = (float)(fVar4 + (float10)_DAT_00897e10);
              FUN_004e6ed0(uVar1);
            }
            else {
              *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x3c);
            }
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < DAT_008ef998);
      }
    }
    else if ((((*(float *)(param_1 + 0x34) + *(float *)(param_1 + 0x30) <= *(float *)(iVar3 + 0x3c))
              || (*(char *)(param_1 + 0x3d) == '\0')) && (*(char *)(param_1 + 0x3c) == '\0')) &&
            (*(char *)(param_1 + 100) == '\0')) {
      FUN_004de0e0();
    }
    if ((*(char *)(param_1 + 100) != '\0') && (*(char *)(param_1 + 0x60) != '\0')) {
      FUN_004de150();
    }
  }
  return;
}

