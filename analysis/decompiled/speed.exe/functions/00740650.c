/* speed.exe 00740650 FUN_00740650; analysis pseudocode, not buildable source.
 * calls 0045f340 FUN_0045f340
 * calls 0078eba0 FUN_0078eba0
 */

float10 __thiscall FUN_00740650(int param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  float10 fVar6;
  float10 fVar7;
  
  fVar6 = (float10)FUN_0045f340(param_2,param_1 + 0x70);
  fVar1 = (float)fVar6;
  fVar6 = (float10)FUN_0045f340(param_2,param_1 + 0x80);
  fVar2 = (float)fVar6;
  if (((DAT_009b0fb9 == '\0') && (cVar5 = FUN_0078eba0(), cVar5 == '\0')) ||
     (*(int *)(param_1 + 0xc) < 3)) {
    if (fVar2 <= fVar1) {
      return (float10)fVar2;
    }
    goto LAB_0074075b;
  }
  fVar6 = (float10)FUN_0045f340(param_2,param_1 + 0x90);
  fVar3 = (float)fVar6;
  fVar6 = (float10)FUN_0045f340(param_2,param_1 + 0xa0);
  fVar4 = (float)fVar6;
  if (*(int *)(param_1 + 0xc) < 5) {
    if (fVar3 < fVar4) {
LAB_00740735:
      fVar7 = (float10)fVar3;
    }
    else {
      fVar7 = (float10)fVar4;
    }
  }
  else {
    fVar6 = (float10)FUN_0045f340(param_2,param_1 + 0xb0);
    fVar7 = (float10)FUN_0045f340(param_2,param_1 + 0xc0);
    if ((float10)(float)fVar6 < fVar7) {
      fVar7 = (float10)(float)fVar6;
    }
    if ((float10)fVar4 < fVar7) {
      fVar7 = (float10)fVar4;
    }
    if ((float10)fVar3 < fVar7) goto LAB_00740735;
  }
  if ((float10)fVar2 < fVar7) {
    fVar7 = (float10)fVar2;
  }
  if (fVar7 <= (float10)fVar1) {
    return fVar7;
  }
LAB_0074075b:
  return (float10)fVar1;
}

