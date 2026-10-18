/* speed.exe 007b3c00 FUN_007b3c00; analysis pseudocode, not buildable source.
 * calls 0056ecf0 FUN_0056ecf0
 * calls 0045a430 FUN_0045a430
 * calls 00516c90 FUN_00516c90
 * calls 00576470 FUN_00576470
 * calls 0051e1a0 FUN_0051e1a0
 */

void __thiscall FUN_007b3c00(int param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int local_c;
  
  if (param_2 == 0) {
    bVar1 = false;
    iVar4 = 0;
    do {
      piVar3 = (int *)FUN_0056ecf0(iVar4);
      if ((piVar3 != (int *)0x0) && (*piVar3 != -1)) {
        FUN_0051e1a0(piVar3[1],0,0);
        bVar1 = (bool)(bVar1 | *(char *)(local_c + 0x59) ==
                               *(char *)(*(int *)(DAT_0091cf90 + 0x10) + 0xb0));
        FUN_0045a430();
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 200);
    if (bVar1) {
      FUN_00516c90(param_3,*(undefined4 *)(param_1 + 0x10),0);
      return;
    }
  }
  else {
    cVar2 = FUN_00576470(param_2);
    if (cVar2 != '\0') {
      FUN_00516c90(param_3,*(undefined4 *)(param_1 + 0x10),0);
    }
  }
  return;
}

