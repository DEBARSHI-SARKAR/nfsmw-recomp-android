/* speed.exe 004e5da0 FUN_004e5da0; analysis pseudocode, not buildable source.
 * calls 00452410 FUN_00452410
 * calls 004ab890 FUN_004ab890
 * calls 0045f640 FUN_0045f640
 * calls 0045a430 FUN_0045a430
 * calls 00407cc0 FUN_00407cc0
 * calls 00401960 FUN_00401960
 * calls 004d9be0 FUN_004d9be0
 * calls 00402240 FUN_00402240
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e5da0(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  float10 fVar6;
  float fStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  float fStack_d0;
  float fStack_cc;
  undefined4 uStack_c8;
  int iStack_ac;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  float fStack_98;
  undefined4 uStack_90;
  float fStack_8c;
  undefined4 uStack_88;
  int iStack_80;
  float fStack_70;
  undefined4 uStack_6c;
  float fStack_68;
  undefined1 auStack_60 [20];
  float fStack_4c;
  float fStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  
  uStack_14 = 0xffffffff;
  puStack_18 = &LAB_0086ce9b;
  local_1c = ExceptionList;
  if (DAT_008f86f8 == 0) {
    return;
  }
  ExceptionList = &local_1c;
  cVar1 = (**(code **)(*param_1 + 0x24))();
  if (cVar1 != '\0') {
    ExceptionList = local_1c;
    return;
  }
  (**(code **)(*param_1 + 0x44))();
  iVar2 = FUN_00452410();
  if (iVar2 != -0x318f2825) {
    ExceptionList = local_1c;
    return;
  }
  uVar3 = (**(code **)(*param_1 + 0x44))();
  FUN_00407cc0(uVar3);
  uStack_14 = 0;
  if (*(char *)(iStack_ac + 0x1d) == '\0') goto LAB_004e602b;
  (**(code **)(*param_1 + 0x3c))(auStack_60);
  if (fStack_4c <= _DAT_0089119c) {
    uStack_dc = uStack_2c;
    fStack_e0 = fStack_30;
    uStack_d8 = uStack_28;
    uStack_d4 = uStack_24;
    FUN_0045f640(&fStack_d0,&DAT_00914430 + param_2 * 4,&DAT_00914450 + param_2 * 4,DAT_008efa24);
    fStack_70 = -fStack_cc;
    fStack_68 = fStack_d0;
    uStack_6c = uStack_c8;
    fVar6 = (float10)FUN_00401960(&fStack_e0,&fStack_70);
    if ((float10)_DAT_008910f8 < fVar6) goto LAB_004e602b;
    uStack_a0 = 0xc;
  }
  else {
    fVar6 = (float10)FUN_00402240(&DAT_00914520 + param_2 * 4);
    if (fVar6 < (float10)_DAT_008959e4) goto LAB_004e602b;
    uStack_c8 = (&DAT_009144b0)[param_2 * 2];
    fStack_d0 = -(float)(&DAT_009144b4)[param_2 * 2];
    uStack_d8 = uStack_28;
    fStack_e0 = fStack_30;
    uStack_d4 = uStack_24;
    uStack_dc = 0;
    fStack_cc = 0.0;
    fVar6 = (float10)FUN_00401960(&fStack_e0,&fStack_d0);
    if ((float10)_DAT_00891060 < fVar6) goto LAB_004e602b;
    puVar4 = (undefined4 *)FUN_004d9be0();
    uStack_a0 = *puVar4;
  }
  uStack_9c = (&DAT_009142d0)[param_2];
  fStack_98 = 0.0;
  uStack_90 = 0;
  fStack_8c = 0.0;
  uStack_88 = 0;
  iStack_80 = 0;
  fVar6 = (float10)FUN_004ab890();
  fStack_98 = (float)fVar6;
  fStack_8c = -fStack_30;
  iStack_80 = param_1[2];
  uStack_90 = uStack_28;
  uStack_88 = uStack_2c;
  piVar5 = (int *)(**(code **)(*DAT_00911f80 + 0xc))(&uStack_a0);
  if (piVar5 != (int *)0x0) {
    (**(code **)(*piVar5 + 0xc))(&uStack_a0);
  }
LAB_004e602b:
  uStack_14 = 0xffffffff;
  FUN_0045a430();
  ExceptionList = local_1c;
  return;
}

