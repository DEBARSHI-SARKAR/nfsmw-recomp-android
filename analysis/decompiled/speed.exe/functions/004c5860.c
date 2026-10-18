/* speed.exe 004c5860 FUN_004c5860; analysis pseudocode, not buildable source.
 * calls 004bcdc0 FUN_004bcdc0
 * calls 004bcf70 FUN_004bcf70
 * calls 004b4830 FUN_004b4830
 * calls 004b4900 FUN_004b4900
 * calls 004b47a0 FUN_004b47a0
 * calls 004b4990 FUN_004b4990
 */

void __thiscall FUN_004c5860(int param_1,undefined4 param_2)

{
  char cVar1;
  char cVar2;
  
  if (*(int *)(*(int *)(param_1 + 0x14) + 0x14) == 3) {
    return;
  }
  cVar2 = *(char *)(param_1 + 0x8c);
  *(undefined1 *)(param_1 + 0x94) = 0;
  *(char *)(param_1 + 0x8d) = cVar2;
  cVar1 = *(char *)(*(int *)(param_1 + 0x18) + 0x68);
  *(char *)(param_1 + 0x8c) = cVar1;
  *(undefined1 *)(param_1 + 0x94) = 0;
  if (cVar1 != '\0') {
    if (cVar2 == '\0') {
      cVar2 = FUN_004bcf70();
      if (cVar2 == '\0') {
        cVar2 = FUN_004b4900();
        if (cVar2 != '\0') {
          FUN_004b47a0();
        }
      }
      else {
        FUN_004b4830();
      }
    }
    if (*(char *)(param_1 + 0x8c) != '\0') goto LAB_004c58ea;
  }
  if ((*(char *)(param_1 + 0x8d) != '\0') && (cVar2 = FUN_004b4990(), cVar2 != '\0')) {
    *(undefined1 *)(*(int *)(param_1 + 0x2c) + 0x30) = 1;
  }
LAB_004c58ea:
  FUN_004bcdc0(param_2);
  return;
}

