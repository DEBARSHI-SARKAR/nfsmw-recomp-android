/* speed.exe 00423580 FUN_00423580; analysis pseudocode, not buildable source.
 * calls 007c4b80 FUN_007c4b80
 * calls 00417ee0 FUN_00417ee0
 * calls 00653d10 FUN_00653d10
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00423580(int *param_1,float param_2,undefined4 param_3)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  float unaff_retaddr;
  float fVar6;
  
  iVar3 = FUN_007c4b80();
  iVar3 = iVar3 % 3;
  fVar5 = (float10)(**(code **)(*param_1 + 4))(iVar3);
  fVar6 = 0.0;
  if ((float10)(float)param_1[iVar3 + 0xf] <= ABS(fVar5)) {
    fVar5 = (float10)FUN_00417ee0(iVar3,unaff_retaddr,param_3);
    fVar6 = (float)fVar5;
    fVar2 = fVar6 * param_2 + (float)param_1[iVar3 + 0x16];
    fVar1 = (float)param_1[iVar3 * 2 + 9];
    if ((float)param_1[iVar3 * 2 + 9] < fVar2) {
      fVar1 = fVar2;
    }
    if ((float)param_1[iVar3 * 2 + 10] < fVar1) {
      fVar1 = (float)param_1[iVar3 * 2 + 10];
    }
    param_1[iVar3 + 0x16] = (int)fVar1;
  }
  fVar1 = (float)DAT_00925ae8 * _DAT_00890984;
  FUN_00653d10(fVar6,fVar1);
  iVar4 = 0;
  do {
    if (iVar4 != iVar3) {
      FUN_00653d10(0,fVar1);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 3);
  fVar6 = _DAT_00890d60;
  if (_DAT_00890d60 < param_2) {
    fVar6 = param_2;
  }
  FUN_00653d10((unaff_retaddr - (float)param_1[0x1c]) / fVar6,fVar1);
  param_1[0x1c] = (int)unaff_retaddr;
  return;
}

