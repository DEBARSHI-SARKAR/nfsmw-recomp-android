/* speed.exe 007f36f5 FUN_007f36f5; analysis pseudocode, not buildable source.
 * calls 007f364c FUN_007f364c
 */

int FUN_007f36f5(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int local_8;
  
  local_8 = -1;
  iVar4 = 0;
  iVar2 = 0;
  uVar3 = 0;
  do {
    if (*(int *)((int)&PTR_s_print_dev_console_009081e0 + uVar3) != 0) {
      iVar1 = FUN_007f364c();
      if (iVar4 < iVar1) {
        iVar4 = iVar1;
        local_8 = iVar2;
      }
    }
    uVar3 = uVar3 + 0xc;
    iVar2 = iVar2 + 1;
  } while (uVar3 < 0x60);
  return local_8;
}

