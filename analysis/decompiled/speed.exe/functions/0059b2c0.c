/* speed.exe 0059b2c0 FUN_0059b2c0; analysis pseudocode, not buildable source.
 * calls 0058fb00 FUN_0058fb00
 * calls 00599260 FUN_00599260
 * calls 0057f2e0 FUN_0057f2e0
 * calls 005991b0 FUN_005991b0
 * calls 00599100 FUN_00599100
 * calls 00586580 FUN_00586580
 */

undefined1 __thiscall FUN_0059b2c0(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  if ((param_2 == -0x367ca946) && (*(int *)(param_1 + 0x24) != 0)) {
    if (*(char *)(param_1 + 0x28) == '\x01') {
      *(undefined1 *)(param_1 + 0x28) = 2;
      return 1;
    }
    if (*(char *)(param_1 + 0x28) == '\x02') {
      *(undefined1 *)(param_1 + 0x28) = 3;
      DAT_0091d8c0 = '\x01';
    }
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    if (param_2 != -0x2ea3fb14) {
      if ((DAT_0091d8c0 != '\0') && (DAT_0091d8c4 != 0)) {
        if (param_2 == -0x6ee54c9c) {
          FUN_005991b0();
          return 1;
        }
        if (param_2 == 0x406415e3) {
          FUN_00599100();
          return 1;
        }
        FUN_00599260(param_2);
      }
      return 1;
    }
    FUN_0057f2e0();
    DAT_0091d8c0 = '\0';
    DAT_0091d8c4 = 0;
    puVar2 = &DAT_0091d5b0;
    for (iVar1 = 0x80; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    puVar2 = &DAT_0091d7b4;
    for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    puVar2 = &DAT_0091d4b0;
    for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    FUN_0058fb00(1);
    FUN_00586580();
  }
  return 0;
}

