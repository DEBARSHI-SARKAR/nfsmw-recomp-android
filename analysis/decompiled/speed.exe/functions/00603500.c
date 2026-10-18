/* speed.exe 00603500 FUN_00603500; analysis pseudocode, not buildable source.
 * calls 00602840 FUN_00602840
 * calls 005dd090 FUN_005dd090
 * calls 005dd750 FUN_005dd750
 * calls 005fd370 FUN_005fd370
 * calls 005f18a0 FUN_005f18a0
 * calls 005e9de0 FUN_005e9de0
 * calls 005fa520 FUN_005fa520
 * calls 00763840 FUN_00763840
 * calls 00654af0 FUN_00654af0
 * calls 005f9e70 FUN_005f9e70
 * calls 005ede20 FUN_005ede20
 */

void __fastcall FUN_00603500(int param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x20) != 0) {
    iVar2 = 0;
    do {
      if (*(int *)(*(int *)(param_1 + 0x24) + iVar2) != 0) {
        FUN_005fa520();
      }
      uVar1 = uVar1 + 1;
      iVar2 = iVar2 + 0x40;
    } while (uVar1 < *(uint *)(param_1 + 0x20));
  }
  iVar2 = *(int *)(DAT_0091e004 + 0x2c);
  if (iVar2 != 0) {
    FUN_005fd370();
  }
  FUN_005f18a0();
  FUN_005f9e70();
  FUN_00763840();
  *(undefined1 *)(param_1 + 0x2c8) = 0;
  *(undefined1 *)(param_1 + 0x2c9) = 0;
  *(undefined1 *)(param_1 + 0x2ca) = 0;
  *(undefined1 *)(param_1 + 0x2cb) = 0;
  *(undefined1 *)(param_1 + 0x2cc) = 0;
  *(undefined1 *)(param_1 + 0x2cd) = 0;
  FUN_00602840();
  FUN_005e9de0();
  FUN_005ede20();
  if ((iVar2 == 0) && (*(int *)(DAT_0091e000 + 0x196c) != 0)) {
    FUN_005dd090();
  }
  FUN_005dd750();
  FUN_00654af0();
  *(undefined1 *)(param_1 + 0x110) = 0;
  *(undefined1 *)(param_1 + 0x118) = 1;
  return;
}

