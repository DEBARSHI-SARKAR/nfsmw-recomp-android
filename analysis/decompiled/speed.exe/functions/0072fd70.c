/* speed.exe 0072fd70 FUN_0072fd70; analysis pseudocode, not buildable source.
 * calls 00721910 FUN_00721910
 * calls 0072e8f0 FUN_0072e8f0
 * calls 00728000 FUN_00728000
 * calls 007218e0 FUN_007218e0
 * calls 00727f80 FUN_00727f80
 * calls 0072fba0 FUN_0072fba0
 * calls 0064ab60 FUN_0064ab60
 * calls 007286d0 FUN_007286d0
 * calls 0072c300 FUN_0072c300
 */

void __fastcall FUN_0072fd70(int *param_1)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int local_8;
  int local_4;
  
  cVar2 = (char)param_1[0xaf];
  while( true ) {
    if (cVar2 != '\0') {
      *(undefined1 *)(param_1 + 0xaf) = 0;
      return;
    }
    iVar3 = param_1[0x62];
    if (iVar3 == 0) {
      return;
    }
    if ((((iVar3 == 2) || (iVar3 == 4)) || (iVar3 == 6)) && (FUN_0072e8f0(), param_1[8] == 0)) {
      iVar3 = param_1[0x62];
      if ((char)param_1[100] == '\0') {
        if (iVar3 == 6) {
          FUN_007286d0();
          return;
        }
        iVar3 = iVar3 + 1;
      }
      else {
        iVar3 = iVar3 + -1;
      }
      FUN_00727f80(iVar3);
    }
    iVar3 = param_1[0x62];
    if (((iVar3 != 1) && (iVar3 != 3)) && (iVar3 != 5)) break;
    if (0 < param_1[8]) {
      return;
    }
    local_8 = 0;
    local_4 = 0;
    if (0 < param_1[1]) {
      iVar3 = 0;
      do {
        iVar4 = *param_1 + iVar3;
        if (((*(int *)(*param_1 + 0xc + iVar3) == 4) && (*(char *)(iVar4 + 0xb) == '\0')) &&
           (((iVar1 = param_1[0x62], iVar1 == 3 &&
             (cVar2 = FUN_007218e0((int)*(short *)(iVar4 + 8)), cVar2 != '\0')) ||
            ((iVar1 == 5 && (cVar2 = FUN_00721910((int)*(short *)(iVar4 + 8)), cVar2 != '\0')))))) {
          FUN_0072c300(iVar4);
          local_8 = local_8 + 1;
        }
        local_4 = local_4 + 1;
        iVar3 = iVar3 + 0x5c;
      } while (local_4 < param_1[1]);
      if (0 < local_8) {
        *(undefined1 *)(param_1 + 0xaf) = 1;
        return;
      }
    }
    DAT_00925874 = 1;
    cVar2 = FUN_0072fba0();
    DAT_00925874 = 0;
    if (0 < param_1[0xb]) {
      FUN_0064ab60();
    }
    if (cVar2 == '\0') {
      return;
    }
    FUN_00727f80(param_1[0x62] + 1);
    if ((param_1[0x62] == 2) || (param_1[0x62] == 4)) {
      FUN_00728000();
    }
    cVar2 = (char)param_1[0xaf];
  }
  return;
}

