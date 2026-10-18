/* speed.exe 006a6440 FUN_006a6440; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_006a6440(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  *param_1 = 0;
  uVar2 = 0;
  do {
    if ((&DAT_009383b0)[uVar2] == 0) {
      piVar3 = &DAT_009383b0 + uVar2;
      if (DAT_009383a8 == 0) {
        *piVar3 = (int)(&DAT_009386c8 + uVar2 * 0xb0);
      }
      else {
        *piVar3 = uVar2 * 0xb0 + DAT_009383a8;
      }
      goto LAB_006a6461;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x40);
  piVar3 = (int *)0x0;
LAB_006a6461:
  *param_1 = piVar3;
  iVar1 = *piVar3;
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x40) = 0;
    *(undefined4 *)(iVar1 + 0x44) = 0;
    *(undefined4 *)(iVar1 + 0x48) = 0;
  }
  return;
}

