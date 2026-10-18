/* speed.exe 00696be0 FUN_00696be0; analysis pseudocode, not buildable source.
 * calls 005c5e80 FUN_005c5e80
 */

void __fastcall FUN_00696be0(undefined4 *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 *puVar4;
  float10 fVar5;
  float10 fVar6;
  
  puVar4 = (undefined4 *)*param_1;
  param_1[2] = 0;
  for (; puVar4 != param_1; puVar4 = (undefined4 *)*puVar4) {
    fVar1 = (float)puVar4[8];
    fVar2 = (float)puVar4[7];
    fVar3 = (float)puVar4[6];
    fVar5 = (float10)FUN_005c5e80((float)puVar4[0xc] * (float)puVar4[0xc] +
                                  (float)puVar4[0xb] * (float)puVar4[0xb] +
                                  (float)puVar4[10] * (float)puVar4[10]);
    fVar6 = (float10)FUN_005c5e80(fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3);
    fVar6 = fVar6 + (float10)(float)fVar5;
    if (fVar6 < (float10)(float)param_1[2]) {
      fVar6 = (float10)(float)param_1[2];
    }
    param_1[2] = (float)fVar6;
  }
  return;
}

