/* speed.exe 006ffc50 FUN_006ffc50; analysis pseudocode, not buildable source.
 * calls 004e0800 FUN_004e0800
 * calls 004ac0e0 FUN_004ac0e0
 * calls 004b2580 FUN_004b2580
 * calls 004b2210 FUN_004b2210
 * calls 004b21b0 FUN_004b21b0
 * calls 008325c8 FUN_008325c8
 */

bool __thiscall FUN_006ffc50(int param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x7c) != 0) {
    if (2 < param_2) {
      return true;
    }
    FUN_004b2580();
    FUN_004ac0e0(*(undefined4 *)(param_1 + 0x7c));
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  cVar1 = FUN_004b21b0();
  if ((cVar1 != '\0') && ((param_2 == 0 || (param_2 == 5)))) {
    if (param_2 != 2) {
      FUN_004b2210();
    }
    if ((param_2 == 5) && (*(int *)(param_1 + 0x4c) != 0)) {
      FUN_004e0800();
    }
  }
  *(undefined4 *)(param_1 + 0x80) = param_3;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(int *)(param_1 + 0x84) = param_2;
  *(undefined4 *)(param_1 + 0x88) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x50) = 0;
  iVar2 = FUN_008325c8(2);
  return iVar2 != 0;
}

