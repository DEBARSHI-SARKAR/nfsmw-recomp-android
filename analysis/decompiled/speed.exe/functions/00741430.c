/* speed.exe 00741430 FUN_00741430; analysis pseudocode, not buildable source.
 * calls 0044a860 FUN_0044a860
 * calls 007c4b80 FUN_007c4b80
 * calls 00627860 FUN_00627860
 * calls 0078b2c0 FUN_0078b2c0
 */

void __fastcall FUN_00741430(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  float10 fVar5;
  
  param_1[0xf] = 0x40200000;
  if ((DAT_009885c8 != (int *)0x0) &&
     (piVar3 = (int *)(**(code **)(*DAT_009885c8 + 0x48))(), piVar3 != (int *)0x0)) {
    fVar5 = (float10)(**(code **)(*piVar3 + 0x24))();
    param_1[0xf] = (int)(float)(fVar5 + (float10)(float)param_1[0xf]);
  }
  FUN_0044a860();
  param_1[0x31] = 0;
  iVar1 = param_1[2];
  if ((((iVar1 != 0) && (iVar2 = *(int *)(iVar1 + 0x1144), iVar2 != 4)) && (iVar2 != 6)) &&
     (((iVar2 != 0 && (iVar2 != 5)) && (iVar2 != 2)))) {
    *(undefined4 *)(iVar1 + 0x1144) = 2;
    *(undefined4 *)(iVar1 + 0x1258) = 80000;
    *(undefined4 *)(iVar1 + 0x1254) = 24000;
    *(undefined4 *)(iVar1 + 0x1260) = 0;
  }
  iVar1 = param_1[3];
  if (((iVar1 != 0) && (iVar2 = *(int *)(iVar1 + 0x1144), iVar2 != 4)) &&
     ((iVar2 != 6 && (((iVar2 != 0 && (iVar2 != 5)) && (iVar2 != 2)))))) {
    *(undefined4 *)(iVar1 + 0x1144) = 2;
    *(undefined4 *)(iVar1 + 0x1258) = 80000;
    *(undefined4 *)(iVar1 + 0x1254) = 24000;
    *(undefined4 *)(iVar1 + 0x1260) = 0;
  }
  iVar1 = param_1[4];
  if (((iVar1 != 0) && (iVar2 = *(int *)(iVar1 + 0x1144), iVar2 != 4)) &&
     (((iVar2 != 6 && ((iVar2 != 0 && (iVar2 != 5)))) && (iVar2 != 2)))) {
    *(undefined4 *)(iVar1 + 0x1144) = 2;
    *(undefined4 *)(iVar1 + 0x1258) = 80000;
    *(undefined4 *)(iVar1 + 0x1254) = 24000;
    *(undefined4 *)(iVar1 + 0x1260) = 0;
  }
  iVar1 = param_1[5];
  if (((((iVar1 != 0) && (iVar2 = *(int *)(iVar1 + 0x1144), iVar2 != 4)) && (iVar2 != 6)) &&
      ((iVar2 != 0 && (iVar2 != 5)))) && (iVar2 != 2)) {
    *(undefined4 *)(iVar1 + 0x1144) = 2;
    *(undefined4 *)(iVar1 + 0x1258) = 80000;
    *(undefined4 *)(iVar1 + 0x1254) = 24000;
    *(undefined4 *)(iVar1 + 0x1260) = 0;
  }
  param_1[9] = param_1[8];
  param_1[0xe] = 0;
  if (*param_1 != 5) {
    *param_1 = 5;
    FUN_0078b2c0();
    uVar4 = FUN_007c4b80();
    FUN_00627860(uVar4);
  }
  return;
}

