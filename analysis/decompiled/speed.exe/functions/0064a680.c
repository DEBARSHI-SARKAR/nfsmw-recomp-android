/* speed.exe 0064a680 FUN_0064a680; analysis pseudocode, not buildable source.
 * calls 006e8d80 FUN_006e8d80
 * calls 006e8d20 FUN_006e8d20
 * calls 004ba940 FUN_004ba940
 * calls 006e8ea0 FUN_006e8ea0
 * calls 00779a30 FUN_00779a30
 * calls 00480c10 FUN_00480c10
 * calls 006e8d10 FUN_006e8d10
 * calls 00480e40 FUN_00480e40
 * calls 006e7a00 FUN_006e7a00
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_0064a680(undefined4 param_1,float param_2)

{
  char cVar1;
  int iVar2;
  float10 fVar3;
  float fVar4;
  float fVar5;
  
  if (param_2 < _DAT_00890968 != (param_2 == _DAT_00890968)) {
    if (DAT_00925e90 == 3) {
      FUN_00480e40(0x3c23d70a,param_1);
      FUN_00480c10(0x3c23d70a);
    }
LAB_0064a6b2:
    return (float10)_DAT_00890968;
  }
  fVar4 = 0.0;
  if (DAT_0092584c == 0) {
    DAT_00925e9c = DAT_00925e9c + param_2;
  }
  cVar1 = FUN_006e8d10();
  if (cVar1 != '\0') {
    iVar2 = FUN_006e8d20();
    if (iVar2 == 3) {
      iVar2 = FUN_006e8ea0();
      if ((DAT_00925e98 != iVar2) && (DAT_00925e94 != DAT_00982b78)) {
        fVar3 = (float10)FUN_006e8d80();
        fVar5 = (float)fVar3;
        if (fVar3 < (float10)_DAT_00890968 != (fVar3 == (float10)_DAT_00890968)) goto LAB_0064a6b2;
        DAT_00925e98 = FUN_006e8ea0();
        DAT_00925e94 = DAT_00982b78;
        fVar4 = fVar5;
        FUN_00779a30(fVar5);
        FUN_004ba940(fVar5);
        FUN_006e7a00(fVar5);
      }
    }
  }
  FUN_00480e40(DAT_00925e9c);
  FUN_00480c10(DAT_00925e9c);
  DAT_00925e9c = 0.0;
  return (float10)fVar4;
}

