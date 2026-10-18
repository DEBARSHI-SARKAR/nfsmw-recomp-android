/* speed.exe 0041eed0 FUN_0041eed0; analysis pseudocode, not buildable source.
 * calls 0077b9e0 FUN_0077b9e0
 * calls 00419fc0 FUN_00419fc0
 * calls 007862d0 FUN_007862d0
 * calls 007658a0 FUN_007658a0
 * calls 005d59f0 FUN_005d59f0
 * calls 0077bba0 FUN_0077bba0
 * calls 0076e220 FUN_0076e220
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0041eed0(int *param_1,undefined4 *param_2,float *param_3,float param_4)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  char cStack_2a4;
  char cStack_2a1;
  undefined4 uStack_25c;
  undefined4 uStack_258;
  undefined4 uStack_254;
  float fStack_238;
  float fStack_234;
  float fStack_230;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00867cab;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  iVar4 = (**(code **)(*param_1 + 8))();
  if (iVar4 != 0) {
    bVar1 = param_4 < _DAT_00890968;
    *param_3 = *(float *)(iVar4 + 0x20);
    param_3[1] = *(float *)(iVar4 + 0x24);
    param_3[2] = *(float *)(iVar4 + 0x28);
    if (bVar1) {
      *param_3 = *param_3 * _DAT_00890da8;
      param_3[1] = param_3[1] * _DAT_00890da8;
      param_3[2] = param_3[2] * _DAT_00890da8;
      param_4 = param_4 * _DAT_00890da8;
    }
    FUN_0077b9e0();
    uStack_4 = 0;
    if (((*(int *)(iVar4 + 0x1c) != 0) &&
        (piVar5 = (int *)FUN_005d59f0(&LAB_004037e0), piVar5 != (int *)0x0)) &&
       (cVar2 = (**(code **)(*piVar5 + 0x24))(), cVar2 == '\0')) {
      cStack_2a1 = '\x01';
    }
    FUN_007658a0(0);
    FUN_007862d0(iVar4 + 0x10,param_3,0,0);
    if (cStack_2a4 == '\0') {
      if (cStack_2a1 != '\0') {
        FUN_007862d0(iVar4 + 0x10,param_3,0,0);
      }
    }
    else {
      FUN_0077bba0(param_4,param_3,0);
      *param_2 = uStack_25c;
      param_2[1] = uStack_258;
      param_2[2] = uStack_254;
      *param_3 = fStack_238;
      param_3[1] = fStack_234;
      param_3[2] = fStack_230;
      if ((*(char *)(DAT_0091e00c + 0x2b4) == '\0') && (*(char *)(DAT_0091e00c + 0x111) == '\0')) {
        cVar2 = '\x01';
      }
      else {
        cVar2 = '\0';
      }
      cVar3 = FUN_00419fc0(param_2,0,0,0,cVar2);
      if (cVar3 != '\0') {
        if (cVar2 == '\0') {
          *param_3 = *param_3 * _DAT_00890da8;
          param_3[1] = param_3[1] * _DAT_00890da8;
          param_3[2] = param_3[2] * _DAT_00890da8;
        }
        uStack_4 = 0xffffffff;
        FUN_0076e220();
        ExceptionList = pvStack_c;
        return 1;
      }
    }
    uStack_4 = 0xffffffff;
    FUN_0076e220();
  }
  ExceptionList = pvStack_c;
  return 0;
}

