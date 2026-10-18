/* speed.exe 0058c760 FUN_0058c760; analysis pseudocode, not buildable source.
 * calls 00747c00 FUN_00747c00
 * calls 005816b0 FUN_005816b0
 * calls 0056ecc0 FUN_0056ecc0
 * calls 005fbe70 FUN_005fbe70
 */

undefined4 FUN_0058c760(undefined4 param_1,int param_2)

{
  int *piVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  
  piVar1 = (int *)(*(int *)(DAT_0091cf90 + 0x10) + 0x414);
  if (*(int *)(DAT_0091e000 + 0x1964) == 2) {
    iVar4 = 0;
    piVar5 = piVar1;
    do {
      if (*piVar5 == *(int *)(*(int *)(DAT_0091cf90 + 0x10) + 0xa8)) {
        piVar5 = piVar1 + iVar4 * 5;
        goto LAB_0058c7ce;
      }
      iVar4 = iVar4 + 1;
      piVar5 = piVar5 + 5;
    } while (iVar4 < 200);
  }
  else if (*(int *)(DAT_0091e000 + 0x1968) != 0) {
    cVar3 = FUN_005fbe70();
    if (cVar3 == '\0') {
      piVar5 = (int *)FUN_0056ecc0(*(undefined4 *)
                                    (DAT_0091cf90 + 0x2c + *(int *)(DAT_0091cf90 + 0x18) * 0x18));
LAB_0058c7ce:
      if (((piVar5 != (int *)0x0) && (bVar2 = *(byte *)(piVar5 + 4), bVar2 < 0x4c)) &&
         (piVar1 + (uint)bVar2 * 0x66 + 1000 != (int *)0x0)) {
        FUN_005816b0();
        uVar6 = FUN_00747c00((int)*(short *)((int)(piVar1 + (uint)bVar2 * 0x66 + 1000) + param_2 * 2
                                            ));
        return uVar6;
      }
    }
  }
  return 0;
}

