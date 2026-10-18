/* speed.exe 0058de40 FUN_0058de40; analysis pseudocode, not buildable source.
 * calls 00586130 FUN_00586130
 * calls 0057d4b0 FUN_0057d4b0
 * calls 00461160 FUN_00461160
 * calls 0056bfc0 FUN_0056bfc0
 * calls 00585b50 FUN_00585b50
 * calls 00515d70 FUN_00515d70
 * calls 004611c0 FUN_004611c0
 * calls 00573060 FUN_00573060
 * calls 00515cc0 FUN_00515cc0
 */

/* WARNING: Type propagation algorithm not settling */

void __fastcall FUN_0058de40(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  short *psVar5;
  float10 fVar6;
  undefined1 local_178 [62];
  short asStack_13a [5];
  short local_130 [152];
  
  *(uint *)(*(int *)(param_1 + 0x3c) + 0x1c) = *(uint *)(*(int *)(param_1 + 0x3c) + 0x1c) | 2;
  if (*(int *)(param_1 + 0x328) != 2) {
    *(undefined4 *)(param_1 + 0x32c) = 0;
    if (DAT_0091cf84 == 0) {
      FUN_004611c0(asStack_13a + 1);
    }
    else {
      FUN_0056bfc0(asStack_13a + 1,0x9c,*(undefined4 *)(param_1 + 0x318));
    }
    iVar4 = *(int *)(param_1 + 0x3c);
    FUN_00585b50(*(undefined4 *)(iVar4 + 0x24));
    iVar2 = *(int *)(iVar4 + 0x74);
    uVar3 = *(undefined4 *)(iVar4 + 0x1c);
    psVar5 = asStack_13a + 1;
    while ((asStack_13a[1] != 0 &&
           (fVar6 = (float10)FUN_00586130(psVar5,uVar3,0,0), (float10)iVar2 < fVar6))) {
      psVar5 = psVar5 + 4;
      asStack_13a[1] = *psVar5;
      *(int *)(param_1 + 0x32c) = *(int *)(param_1 + 0x32c) + 4;
    }
    if (*(int *)(param_1 + 0x30) < *(int *)(param_1 + 0x32c)) {
      do {
        iVar4 = *(int *)(param_1 + 0x32c) + -4;
        if (iVar4 < 0) {
          psVar5 = asStack_13a + 1;
          *(undefined4 *)(param_1 + 0x32c) = 0;
        }
        else {
          psVar5 = psVar5 + -4;
          *(int *)(param_1 + 0x32c) = iVar4;
        }
      } while (*(int *)(param_1 + 0x30) < *(int *)(param_1 + 0x32c));
    }
    sVar1 = *psVar5;
    while ((sVar1 != 0 && (fVar6 = (float10)FUN_00586130(psVar5,uVar3,0,0), (float10)iVar2 < fVar6))
          ) {
      iVar4 = FUN_00461160(asStack_13a + 1);
      asStack_13a[iVar4] = 0;
      sVar1 = *psVar5;
    }
    FUN_00515cc0(*(undefined4 *)(param_1 + 0x3c),psVar5);
    FUN_0057d4b0();
    return;
  }
  FUN_00573060(local_178,0x40);
  FUN_00515d70(*(undefined4 *)(param_1 + 0x3c),local_178);
  FUN_0057d4b0();
  return;
}

