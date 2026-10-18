/* speed.exe 006f0f80 FUN_006f0f80; analysis pseudocode, not buildable source.
 * calls 006ecc10 FUN_006ecc10
 * calls 005d59f0 FUN_005d59f0
 * calls 00626dd0 FUN_00626dd0
 * calls 0045a430 FUN_0045a430
 * calls 006f0040 FUN_006f0040
 * calls 00644060 FUN_00644060
 */

void __thiscall FUN_006f0f80(int param_1,char param_2)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int local_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087ea78;
  local_c = ExceptionList;
  if (*(char *)(param_1 + 0x3c) != param_2) {
    ExceptionList = &local_c;
    *(char *)(param_1 + 0x3c) = param_2;
    if (param_2 != '\0') {
      FUN_006f0040(1,&LAB_006e8b20);
    }
    piVar4 = DAT_00920e4c;
    if (DAT_00920e4c != DAT_00920e4c + DAT_00920e54) {
      do {
        iVar1 = *piVar4;
        cVar2 = FUN_00626dd0();
        if (param_2 == cVar2) {
          FUN_006ecc10(*(undefined4 *)(iVar1 + 0x274),0,0);
          local_4 = 0;
          if (*(char *)(local_18 + 4) != '\0') {
            FUN_00644060(param_2 == '\0');
          }
          local_4 = 0xffffffff;
          FUN_0045a430();
        }
        piVar4 = piVar4 + 1;
      } while (piVar4 != DAT_00920e4c + DAT_00920e54);
    }
    piVar4 = DAT_0092d87c + DAT_0092d884;
    for (piVar5 = DAT_0092d87c; piVar5 != piVar4; piVar5 = piVar5 + 1) {
      piVar3 = (int *)*piVar5;
      if ((piVar3 != (int *)0x0) && (cVar2 = (**(code **)(*piVar3 + 8))(), cVar2 != '\0')) {
        (**(code **)(*piVar3 + 4))();
        piVar3 = (int *)FUN_005d59f0(&LAB_00403f90);
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 4))();
        }
      }
    }
  }
  ExceptionList = local_c;
  return;
}

