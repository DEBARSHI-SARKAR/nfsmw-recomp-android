/* speed.exe 004aa580 FUN_004aa580; analysis pseudocode, not buildable source.
 * calls 0049c390 FUN_0049c390
 * calls 0049c290 FUN_0049c290
 * calls 0049c4c0 FUN_0049c4c0
 * calls 0049c670 FUN_0049c670
 * calls 007c5e60 _printf
 * calls 004a9af0 FUN_004a9af0
 * calls 0049c620 FUN_0049c620
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 __thiscall FUN_004aa580(int param_1,float param_2)

{
  float fVar1;
  char cVar2;
  
  *(float *)(param_1 + 0x3c) = param_2;
  if (*(int *)(param_1 + 0x10) == 0) {
    FUN_0049c290();
  }
  param_2 = param_2 + *(float *)(param_1 + 0x40);
  fVar1 = _DAT_0089096c / *(float *)(param_1 + 0x38);
  FUN_0049c4c0();
  _printf("currTime: %g  offset: %g   cycle: %g\n",(double)param_2,
          (double)*(float *)(param_1 + 0x40),(double)fVar1);
  _printf("offset0: %g  offset1: %g\n",(double)*(float *)(param_1 + 0x30),
          (double)*(float *)(param_1 + 0x34));
  _printf("cycle0: %g  cycle1: %g\n",(double)*(float *)(param_1 + 0x28),
          (double)*(float *)(param_1 + 0x2c));
  _printf("before offset t0: %g  t1: %g\n",
          (double)(*(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x38) * param_2),
          (double)(*(float *)(param_1 + 0x2c) * *(float *)(param_1 + 0x38) * param_2));
  FUN_0049c670();
  FUN_0049c670();
  cVar2 = FUN_0049c390();
  if (cVar2 == '\0') {
    return 0;
  }
  FUN_004a9af0();
  FUN_0049c620();
  return 1;
}

