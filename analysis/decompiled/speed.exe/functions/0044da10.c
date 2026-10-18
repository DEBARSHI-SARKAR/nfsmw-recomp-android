/* speed.exe 0044da10 FUN_0044da10; analysis pseudocode, not buildable source.
 * calls 0076e2d0 FUN_0076e2d0
 * calls 005c5e80 FUN_005c5e80
 * calls 005cb5d0 FUN_005cb5d0
 * calls 007862d0 FUN_007862d0
 * calls 0076e220 FUN_0076e220
 * calls 0077b9e0 FUN_0077b9e0
 * calls 007658a0 FUN_007658a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0044da10(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  float10 fVar5;
  float *unaff_retaddr;
  undefined4 uStack_350;
  undefined4 uStack_34c;
  undefined4 uStack_348;
  float fStack_33c;
  undefined4 uStack_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  float fStack_308;
  float fStack_304;
  float fStack_300;
  char cStack_2a8;
  undefined4 uStack_280;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  float fStack_248;
  float fStack_244;
  float fStack_240;
  void *pvStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00869a8b;
  pvStack_c = ExceptionList;
  if (DAT_0092cd84 == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)*DAT_0092cd7c;
  }
  ExceptionList = &pvStack_c;
  piVar4 = (int *)(**(code **)(*piVar4 + 4))();
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 100))(&uStack_334);
    uStack_350 = uStack_338;
    uStack_34c = uStack_334;
    uStack_348 = uStack_330;
    fVar5 = (float10)FUN_005cb5d0(uStack_338,uStack_330);
    *param_1 = (float)(((float10)_DAT_0089096c - fVar5) + (float10)_DAT_008910f0);
    *unaff_retaddr = fStack_308;
    unaff_retaddr[1] = fStack_304;
    unaff_retaddr[2] = fStack_300;
    FUN_0077b9e0();
    puStack_8 = (undefined1 *)0x0;
    FUN_0076e2d0(1);
    FUN_007658a0(0);
    uStack_280 = 2;
    FUN_007862d0(unaff_retaddr,&uStack_350,1,0);
    if (cStack_2a8 == '\0') {
      puStack_8 = (undefined1 *)0xffffffff;
      FUN_0076e220();
      ExceptionList = pvStack_10;
      return 0;
    }
    fVar1 = (fStack_248 + fStack_254) * _DAT_008933d4;
    fVar2 = (fStack_244 + fStack_250) * _DAT_008933d4;
    fVar3 = (fStack_240 + fStack_24c) * _DAT_008933d4;
    fStack_33c = fVar3;
    FUN_005c5e80((fStack_254 - fStack_248) * (fStack_254 - fStack_248) +
                 (fStack_250 - fStack_244) * (fStack_250 - fStack_244) +
                 (fStack_24c - fStack_240) * (fStack_24c - fStack_240));
    *unaff_retaddr = fVar1;
    unaff_retaddr[1] = fVar2;
    unaff_retaddr[2] = fVar3;
    puStack_8 = (undefined1 *)0xffffffff;
    FUN_0076e220();
    ExceptionList = pvStack_10;
    return 1;
  }
  ExceptionList = pvStack_c;
  return 0;
}

