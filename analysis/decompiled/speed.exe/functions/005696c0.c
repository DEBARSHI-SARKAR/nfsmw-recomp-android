/* speed.exe 005696c0 FUN_005696c0; analysis pseudocode, not buildable source.
 * calls 00516c90 FUN_00516c90
 * calls 005678a0 FUN_005678a0
 */

void __fastcall FUN_005696c0(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(int *)(DAT_0091cf90 + 0x10) + 0x34);
  if (*(char *)(param_1 + 0x330) != cVar1) {
    *(char *)(param_1 + 0x330) = cVar1;
    if (cVar1 == '\0') {
      FUN_00516c90(0x53ec068c,*(undefined4 *)(param_1 + 0x24),0);
      if (*(int *)(param_1 + 800) != 0) {
        FUN_005678a0(0);
      }
    }
    else {
      FUN_00516c90(0x62ed04ec,*(undefined4 *)(param_1 + 0x24),0);
      if (*(int *)(param_1 + 800) != 0) {
        FUN_005678a0(1);
        return;
      }
    }
  }
  return;
}

