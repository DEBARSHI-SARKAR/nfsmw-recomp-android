/* speed.exe 00602770 FUN_00602770; analysis pseudocode, not buildable source.
 * calls 006015b0 FUN_006015b0
 * calls 00627400 FUN_00627400
 * calls 00620920 FUN_00620920
 */

void __thiscall FUN_00602770(int param_1,undefined4 param_2)

{
  char *pcVar1;
  void **ppvVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0087621f;
  local_c = ExceptionList;
  uVar4 = *(int *)(param_1 + 0xa8) - 0x14;
  while (uVar3 = uVar4 + 0x14,
        uVar3 < (uint)(*(int *)(param_1 + 0xa8) + *(int *)(param_1 + 0xa4) * 0x14)) {
    pcVar1 = (char *)(uVar4 + 0x1c);
    if ((*pcVar1 == '\x02') || (uVar4 = uVar3, *pcVar1 == '\x03')) goto LAB_006027b8;
  }
  uVar3 = 0;
LAB_006027b8:
  ExceptionList = &local_c;
  ppvVar2 = &local_c;
  if (uVar3 == 0) {
LAB_006027f8:
    ExceptionList = ppvVar2;
    if (((char)param_2 != '\0') && (*(int *)(DAT_0091e000 + 0x1960) == 0)) {
      iVar5 = FUN_00627400(8);
      local_4 = 0;
      if (iVar5 != 0) {
        FUN_00620920();
      }
    }
    ExceptionList = local_c;
    return;
  }
  do {
    FUN_006015b0(param_2);
    uVar4 = uVar3;
    do {
      uVar3 = uVar4 + 0x14;
      ppvVar2 = ExceptionList;
      if ((uint)(*(int *)(param_1 + 0xa8) + *(int *)(param_1 + 0xa4) * 0x14) <= uVar3)
      goto LAB_006027f8;
      pcVar1 = (char *)(uVar4 + 0x1c);
    } while ((*pcVar1 != '\x02') && (uVar4 = uVar3, *pcVar1 != '\x03'));
  } while( true );
}

