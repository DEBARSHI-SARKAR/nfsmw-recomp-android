/* speed.exe 007310b0 FUN_007310b0; analysis pseudocode, not buildable source.
 * calls 00730460 FUN_00730460
 * calls 0072df20 FUN_0072df20
 * calls 0065c770 FUN_0065c770
 */

void __fastcall FUN_007310b0(int param_1)

{
  short sVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  int local_4;
  
  local_4 = param_1;
  FUN_0065c770();
  if (((*(char *)(param_1 + 0x2b1) == '\0') && (*(int *)(param_1 + 0x838) != 0)) &&
     (cVar3 = FUN_0072df20(&local_4), cVar3 != '\0')) {
    FUN_00730460(&local_4);
  }
  FUN_0065c770();
  iVar5 = 0;
  *(undefined4 *)(param_1 + 0x1a4) = 0;
  if (0 < *(int *)(param_1 + 0x2c0)) {
    piVar4 = (int *)(param_1 + 0x2c4);
    do {
      iVar2 = *piVar4;
      if (((*(char *)(iVar2 + 10) == '\0') &&
          (sVar1 = *(short *)(iVar2 + 8),
          cVar3 = (((char)((int)sVar1 / 100) + (char)(sVar1 >> 7)) -
                  (char)((longlong)(int)sVar1 * 0x51eb851f >> 0x3f)) + '@', '@' < cVar3)) &&
         (cVar3 < 'U')) {
        *(int *)(param_1 + 0x1a4) = *(int *)(param_1 + 0x1a4) + *(int *)(iVar2 + 0x18);
      }
      *(undefined1 *)(iVar2 + 10) = 0;
      iVar5 = iVar5 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar5 < *(int *)(param_1 + 0x2c0));
  }
  return;
}

