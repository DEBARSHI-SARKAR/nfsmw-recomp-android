/* speed.exe 00833ae7 FUN_00833ae7; analysis pseudocode, not buildable source.
 * calls 00833562 FUN_00833562
 * calls 00833784 FUN_00833784
 * calls 00833a7d FUN_00833a7d
 */

int FUN_00833ae7(int param_1)

{
  int in_EAX;
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  int unaff_ESI;
  int local_c;
  int local_8;
  
  uVar1 = (uint)(*(byte *)(in_EAX + 2) >> 2);
  local_c = 0;
  local_8 = 0;
  if (uVar1 != 0) {
    puVar3 = (undefined1 *)(unaff_ESI + 10);
    do {
      *puVar3 = puVar3[-2];
      puVar3 = puVar3 + 0xc;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  do {
    if (local_8 != 0) {
      return local_8;
    }
    local_8 = 1;
    if (((param_1 != 0) && (iVar2 = FUN_00833562(), param_1 < iVar2)) ||
       ((*(char *)(in_EAX + 3) != '\0' && (iVar2 = FUN_00833784(), iVar2 == 0)))) {
      local_8 = 0;
      local_c = FUN_00833a7d();
    }
  } while (local_c == 0);
  return local_8;
}

