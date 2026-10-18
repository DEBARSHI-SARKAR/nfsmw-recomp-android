/* speed.exe 0065e930 FUN_0065e930; analysis pseudocode, not buildable source.
 * calls 0065ad80 FUN_0065ad80
 * calls 007ec1bd FUN_007ec1bd
 * calls 007ec1c8 FUN_007ec1c8
 * calls 00463ca0 FUN_00463ca0
 * calls 0065e610 FUN_0065e610
 */

void FUN_0065e930(void)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  
  FUN_007ec1bd();
  if ((int **)DAT_00925994 != &DAT_00925994) {
    do {
      piVar4 = DAT_00925994;
      iVar1 = *DAT_00925994;
      piVar2 = (int *)DAT_00925994[1];
      *piVar2 = iVar1;
      *(int **)(iVar1 + 4) = piVar2;
      iVar1 = piVar4[2];
      *(int *)(iVar1 + 0x20) = *(int *)(iVar1 + 0x20) + -1;
      DAT_00925928 = DAT_00925928 + -1;
      if (((*(int *)(iVar1 + 0x14) != 0) && (*(int *)(iVar1 + 0x18) == 0)) &&
         (*(int *)(iVar1 + 8) == 1)) {
        iVar5 = FUN_0065e610(*(undefined4 *)(iVar1 + 0x24),*(int *)(iVar1 + 0x14),
                             *(undefined4 *)(iVar1 + 0xc));
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + 1;
        *(int *)(iVar1 + 0x18) = iVar5;
      }
      bVar3 = false;
      if ((*(int *)(iVar1 + 0x1c) != 0) && (*(int *)(iVar1 + 0x20) == 0)) {
        bVar3 = true;
      }
      if (piVar4[6] != 0) {
        FUN_007ec1c8();
        (*(code *)piVar4[6])(piVar4[7]);
        FUN_007ec1bd();
      }
      FUN_00463ca0(DAT_00925914,piVar4);
      if (bVar3) {
        FUN_0065ad80();
        FUN_00463ca0(DAT_00925914,iVar1);
      }
    } while ((int **)DAT_00925994 != &DAT_00925994);
  }
  FUN_007ec1c8();
  return;
}

