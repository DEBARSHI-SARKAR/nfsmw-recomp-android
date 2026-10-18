/* speed.exe 00663c90 FUN_00663c90; analysis pseudocode, not buildable source.
 * calls 007ec298 FUN_007ec298
 * calls 006e7220 FUN_006e7220
 * calls 00634370 FUN_00634370
 * calls 0045ce40 FUN_0045ce40
 * calls 00516e10 FUN_00516e10
 * calls 00462430 FUN_00462430
 * calls 006626b0 FUN_006626b0
 * calls 00730370 FUN_00730370
 * calls 00645ec0 FUN_00645ec0
 * calls 005642c0 FUN_005642c0
 * calls 0065c6d0 FUN_0065c6d0
 * calls 004d0610 FUN_004d0610
 * calls 006f1150 FUN_006f1150
 * calls 00661280 FUN_00661280
 * calls 007310b0 FUN_007310b0
 * calls 0064cfe0 FUN_0064cfe0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00663c90(undefined4 param_1)

{
  float10 fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  
  uVar3 = 8;
  FUN_007ec298(8,param_1);
  FUN_006f1150();
  uVar2 = DAT_0092601c;
  fVar1 = (float10)FUN_00462430(DAT_0092601c);
  fVar4 = (float)fVar1;
  DAT_0092601c = FUN_0045ce40(uVar2,uVar3,fVar4);
  FUN_00661280(fVar4 * _DAT_00890d60);
  FUN_006626b0();
  FUN_0064cfe0();
  FUN_00634370();
  FUN_00645ec0();
  FUN_00516e10();
  FUN_005642c0();
  FUN_007310b0();
  FUN_00730370();
  if (DAT_00911fa8 != 0) {
    FUN_004d0610(DAT_009259bc);
  }
  FUN_006e7220();
  FUN_0065c6d0();
  _DAT_00926018 = _DAT_00926018 + -1;
  return;
}

