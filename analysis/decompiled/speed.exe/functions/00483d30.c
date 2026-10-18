/* speed.exe 00483d30 FUN_00483d30; analysis pseudocode, not buildable source.
 * calls 00446260 FUN_00446260
 * calls 004647c0 FUN_004647c0
 * calls 004785f0 FUN_004785f0
 * calls 004804a0 FUN_004804a0
 * calls 00477fa0 FUN_00477fa0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __fastcall FUN_00483d30(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined1 auStack_20 [16];
  undefined1 auStack_10 [16];
  
  param_1[9] = 0;
  DAT_008edee0 = 0;
  if ((DAT_009885c8 == (int *)0x0) ||
     (piVar1 = (int *)(**(code **)(*DAT_009885c8 + 0x48))(), piVar1 == (int *)0x0)) {
    iVar2 = FUN_004785f0();
    param_1[9] = iVar2;
    if (iVar2 == 0) {
      if (((((undefined4 **)DAT_00919694 == &DAT_00919694) || (DAT_00919694 == (undefined4 *)0x0))
          || (DAT_00919694 == (undefined4 *)0x4)) || (DAT_00919694[2] != 0xe)) {
        uVar4 = 0;
      }
      else {
        uVar4 = DAT_00919694[0x1f];
      }
      iVar2 = FUN_004804a0(uVar4,param_1[2],param_1[7]);
      param_1[9] = iVar2;
      if (iVar2 != 0) {
        iVar3 = DAT_00925ae8;
        if (*(char *)(param_1 + 0x1e) != '\0') {
          iVar3 = DAT_00925b14;
        }
        *(float *)(iVar2 + 0xc) = (float)iVar3 * _DAT_00890984;
      }
    }
  }
  else {
    iVar2 = (**(code **)*piVar1)();
    iVar3 = 0;
    if (0 < (int)param_1[5]) {
      piVar5 = (int *)*param_1;
      while (iVar2 != *piVar5) {
        iVar3 = iVar3 + 1;
        piVar5 = piVar5 + 5;
        if ((int)param_1[5] <= iVar3) {
          return param_1[9] != 0;
        }
      }
      if ((int *)*param_1 + iVar3 * 5 != (int *)0x0) {
        uVar4 = (**(code **)(*piVar1 + 4))();
        FUN_004647c0(auStack_20,"Track %d",uVar4);
        iVar3 = FUN_00477fa0(auStack_20);
        param_1[9] = iVar3;
        if ((iVar3 == 0) && (auStack_10[0] = 0, DAT_0090d9e4 != 0)) {
          FUN_00446260(iVar2,auStack_10);
        }
        DAT_008edee0 = 1;
        return param_1[9] != 0;
      }
    }
  }
  return param_1[9] != 0;
}

