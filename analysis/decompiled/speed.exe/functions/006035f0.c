/* speed.exe 006035f0 FUN_006035f0; analysis pseudocode, not buildable source.
 * calls 00603440 FUN_00603440
 * calls 005dc970 FUN_005dc970
 * calls 005fccc0 FUN_005fccc0
 * calls 007696b0 FUN_007696b0
 * calls 005fb710 FUN_005fb710
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_006035f0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  float10 fVar6;
  
  if (*(int *)(param_1 + 0x2d4) != 0) {
    uVar4 = FUN_005fb710(*(int *)(param_1 + 0x2d4));
    iVar5 = FUN_00603440(uVar4);
    iVar3 = DAT_0091e004;
    piVar1 = (int *)(DAT_0091e004 + 0x2c);
    iVar2 = *piVar1;
    if (iVar2 != 0) {
      if (*(char *)(iVar2 + 0x1d) != '\0') {
        FUN_005dc970(iVar2);
      }
      *piVar1 = 0;
      *(undefined4 *)(iVar3 + 0x30) = 0;
    }
    *piVar1 = iVar5;
    *(undefined4 *)(iVar3 + 0x30) = 2;
    if (iVar5 != 0) {
      fVar6 = (float10)FUN_005fccc0();
      if ((float10)_DAT_00890968 <= fVar6) {
        fVar6 = (float10)FUN_005fccc0();
        FUN_007696b0((float)fVar6);
      }
      if (iVar5 == *(int *)(DAT_0091e004 + 0x2c)) {
        *(undefined1 *)(iVar5 + 0x1d) = 1;
        *(undefined4 *)(param_1 + 0x2d4) = 0;
        return;
      }
      FUN_005dc970(iVar5);
    }
    *(undefined4 *)(param_1 + 0x2d4) = 0;
  }
  return;
}

