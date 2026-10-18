/* speed.exe 00644180 FUN_00644180; analysis pseudocode, not buildable source.
 * calls 0064c9b0 FUN_0064c9b0
 * calls 00660160 FUN_00660160
 * calls 00660100 FUN_00660100
 * calls 006440b0 FUN_006440b0
 */

void FUN_00644180(void)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  DAT_0092038a = 1;
  iVar1 = FUN_0064c9b0();
  if (iVar1 != 0) {
    iVar1 = FUN_00660160(8,2);
    while (iVar1 != -1) {
      for (piVar3 = DAT_00920e4c; piVar3 != DAT_00920e4c + DAT_00920e54; piVar3 = piVar3 + 1) {
        iVar4 = *piVar3;
        if (*(int *)(iVar4 + 0x27c) == iVar1) goto LAB_006441d6;
      }
      iVar4 = 0;
LAB_006441d6:
      uVar2 = FUN_00660100(8,2);
      local_4 = FUN_00660100(0x20,2);
      local_8 = *(undefined4 *)(iVar4 + 0x268);
      local_c = uVar2;
      FUN_006440b0(&local_c);
      iVar1 = FUN_00660160(8,2);
    }
  }
  return;
}

