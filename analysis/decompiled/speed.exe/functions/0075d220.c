/* speed.exe 0075d220 FUN_0075d220; analysis pseudocode, not buildable source.
 * calls 007869c0 FUN_007869c0
 * calls 00748230 FUN_00748230
 * calls 00747f10 FUN_00747f10
 * calls 0056f2b0 FUN_0056f2b0
 * calls 00739a70 FUN_00739a70
 * calls 007594a0 FUN_007594a0
 * calls 00652ad0 _malloc
 * calls 0075d1a0 FUN_0075d1a0
 */

undefined4 __thiscall
FUN_0075d220(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  char cVar1;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  
  if ((*(int *)(param_1 + 0x44) != 0) || (*(int *)(param_1 + 0x2c) == -1)) {
    return 0;
  }
  FUN_007869c0(param_2);
  pvVar2 = _malloc(0x310);
  if (pvVar2 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    FUN_00739a70(0xffffffff,0,0,0);
  }
  *(void **)(param_1 + 0x40) = pvVar2;
  FUN_00739a70(*(undefined4 *)(param_1 + 0x2c),param_3,0,0);
  cVar1 = FUN_00748230(*(undefined4 *)(param_1 + 0x2c));
  if (cVar1 == '\0') goto LAB_0075d2f3;
  if (DAT_009b09fc == 0) {
    iVar4 = 1;
    do {
      uVar3 = 1 << ((char)iVar4 - 1U & 0x1f);
      if ((uVar3 & DAT_00903690) != 0) goto LAB_0075d2d6;
      iVar4 = iVar4 + 1;
    } while (iVar4 < 5);
  }
  else {
    iVar4 = 5;
    do {
      uVar3 = 1 << ((char)iVar4 - 1U & 0x1f);
      if ((uVar3 & DAT_00903690) != 0) goto LAB_0075d2d6;
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0xd);
  }
LAB_0075d2e3:
  if (*(int *)(param_1 + 0x68) != 0) {
    FUN_00747f10(*(int *)(param_1 + 0x68));
  }
LAB_0075d2f3:
  FUN_007594a0();
  if (param_5 != 0) {
    FUN_0056f2b0(*(undefined4 *)(param_1 + 0x40));
  }
  FUN_0075d1a0(param_4);
  return 1;
LAB_0075d2d6:
  DAT_00903690 = DAT_00903690 & ~uVar3;
  *(int *)(param_1 + 0x68) = iVar4;
  goto LAB_0075d2e3;
}

