/* speed.exe 006082c0 FUN_006082c0; analysis pseudocode, not buildable source.
 * calls 006081c0 FUN_006081c0
 * calls 00608100 FUN_00608100
 * calls 00606930 FUN_00606930
 */

uint FUN_006082c0(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  int *unaff_EBX;
  int *unaff_ESI;
  
  iVar2 = *unaff_EBX;
  if (iVar2 != *unaff_ESI) {
    uVar1 = FUN_00606930(param_1);
    return uVar1;
  }
  if (iVar2 == 3) {
    if ((float)unaff_EBX[1] < (float)unaff_ESI[1] != ((float)unaff_EBX[1] == (float)unaff_ESI[1])) {
      return 1;
    }
    return 0;
  }
  if (iVar2 == 4) {
    iVar2 = FUN_006081c0();
    return (uint)(iVar2 < 1);
  }
  uVar1 = FUN_00608100(param_1);
  if (uVar1 == 0xffffffff) {
    iVar2 = FUN_00608100(param_1);
    if (iVar2 != -1) {
      return (uint)(iVar2 == 0);
    }
    uVar1 = FUN_00606930(param_1);
  }
  return uVar1;
}

